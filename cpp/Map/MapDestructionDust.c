// Type: Map.MapDestructionDust
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapDestructionDust.cs
// Prior real C# source: none
// --------------------------------

// Map.MapDestructionDust$$LoadAssets
// il2cpp: void Map_MapDestructionDust__LoadAssets (const MethodInfo* method);
// 0x59888e0

void Map_MapDestructionDust__LoadAssets(MethodInfo *method)

{
  Map_MapDestructionDust_StaticFields *pMVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_AudioClip_o *pUVar4;
  
  if (Il2CppMethodInitialized_07545a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDust);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Materials/Smoke1Mat");
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Sounds/Boom1Sound");
    Il2CppMethodInitialized_07545a12 = '\x01';
  }
  pUVar3 = TypeInfo_Map_MapDestructionDust->static_fields->_material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = UnityEngine_Resources__Load_object_
                       ("Effects/Materials/Smoke1Mat",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Material);
    TypeInfo_Map_MapDestructionDust->static_fields->_material = pUVar3;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDust->static_fields->_material);
  }
  pUVar4 = TypeInfo_Map_MapDestructionDust->static_fields->_sound;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = UnityEngine_Resources__Load_object_
                       ("Effects/Sounds/Boom1Sound",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    pMVar1 = TypeInfo_Map_MapDestructionDust->static_fields;
    pMVar1->_sound = pUVar4;
    Il2CppCodeGenWriteBarrier(&pMVar1->_sound);
    return;
  }
  return;
}


// Map.MapDestructionDust$$Spawn
// il2cpp: void Map_MapDestructionDust__Spawn (UnityEngine_Bounds_o objectBounds, UnityEngine_Vector3_o impact, float hitRadius, const MethodInfo* method);
// 0x59811e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5981d83: jmp 0x5981d99

void Map_MapDestructionDust__Spawn
               (UnityEngine_Bounds_o objectBounds,UnityEngine_Vector3_o impact,float hitRadius,
               MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_AudioClip_o *pUVar3;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_02;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_03;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_04;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_05;
  UnityEngine_ParticleSystem_MinMaxCurve_o value_06;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_07;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_08;
  undefined1 auVar4 [16];
  bool bVar5;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *__this;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_ParticleSystem_Burst_array *bursts;
  UnityEngine_Gradient_o *__this_01;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphaKeys;
  UnityEngine_AnimationCurve_o *curve;
  UnityEngine_ParticleSystemRenderer_o *__this_02;
  UnityEngine_AudioSource_o *__this_03;
  System_String_o **ppSVar6;
  undefined8 in_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  UnityEngine_Color_o color;
  UnityEngine_Color_o col;
  UnityEngine_Color_o col_00;
  UnityEngine_Vector3_o value_09;
  UnityEngine_Vector3_o value_10;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  UnityEngine_ParticleSystem_ColorOverLifetimeModule_o local_298;
  UnityEngine_ParticleSystem_EmissionModule_o local_290;
  float local_288;
  float local_284;
  UnityEngine_GradientAlphaKey_Fields local_280;
  UnityEngine_GradientAlphaKey_Fields local_278;
  UnityEngine_GradientAlphaKey_Fields local_270;
  UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule_o local_268;
  UnityEngine_ParticleSystem_SizeOverLifetimeModule_o local_260;
  UnityEngine_ParticleSystem_ShapeModule_o local_258;
  UnityEngine_ParticleSystem_MainModule_o local_250;
  UnityEngine_GradientColorKey_o local_248;
  UnityEngine_GradientColorKey_o local_228;
  UnityEngine_ParticleSystem_Burst_Fields local_208;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_1c8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_1a8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_188;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_168;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_148;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_f8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_d8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_b8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_98;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_60;
  
  if (Il2CppMethodInitialized_07545a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_ParticleSystem_Burst_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientAlphaKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientColorKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Gradient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDust);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    ppSVar6 = &"Map destruction dust";
    il2cpp_codegen_initialize_runtime_metadata(&"Map destruction dust");
    Il2CppMethodInitialized_07545a13 = '\x01';
    method = (MethodInfo *)ppSVar6;
  }
  local_250.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_290.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_258.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ShapeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_298.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_260.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_268.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  Map_MapDestructionDust__LoadAssets(method);
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_128._0_4_ = (pUVar2->oneVector).fields.x;
  local_128._4_4_ = (pUVar2->oneVector).fields.y;
  uStack_120 = 0;
  if (hitRadius <= 0.75) {
    hitRadius = 0.75;
  }
  fVar10 = (pUVar2->oneVector).fields.z * hitRadius;
  local_284 = objectBounds.fields.m_Center.fields.z;
  local_288 = objectBounds.fields.m_Extents.fields.z;
  local_108._0_4_ = objectBounds.fields.m_Center.fields.x;
  local_108._4_4_ = objectBounds.fields.m_Center.fields.y;
  uStack_100 = 0;
  local_118._0_4_ = objectBounds.fields.m_Extents.fields.x;
  local_118._4_4_ = objectBounds.fields.m_Extents.fields.y;
  uStack_110 = 0;
  obj = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"Map destruction dust",(MethodInfo *)0x0);
  if ((obj != (UnityEngine_Object_o *)0x0) &&
     (__this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)obj,(MethodInfo *)0x0),
     __this != (UnityEngine_Transform_o *)0x0)) {
    fVar17 = (fVar10 + fVar10) * 0.5;
    fVar10 = impact.fields.z - fVar17;
    if (fVar10 <= local_284 - local_288) {
      fVar10 = local_284 - local_288;
    }
    fVar17 = fVar17 + impact.fields.z;
    if (local_284 + local_288 <= fVar17) {
      fVar17 = local_284 + local_288;
    }
    fVar11 = (hitRadius * (float)local_128 + hitRadius * (float)local_128) * 0.5;
    fVar14 = (hitRadius * local_128._4_4_ + hitRadius * local_128._4_4_) * 0.5;
    fVar15 = (hitRadius * (float)uStack_120 + hitRadius * (float)uStack_120) * 0.0;
    fVar16 = (hitRadius * uStack_120._4_4_ + hitRadius * uStack_120._4_4_) * 0.0;
    local_2a8 = impact.fields.x;
    fStack_2a4 = impact.fields.y;
    fStack_2a0 = (float)in_XMM0_Qb;
    fStack_29c = (float)((ulong)in_XMM0_Qb >> 0x20);
    auVar7._0_4_ = local_2a8 - fVar11;
    auVar7._4_4_ = fStack_2a4 - fVar14;
    auVar7._8_4_ = fStack_2a0 - fVar15;
    auVar7._12_4_ = fStack_29c - fVar16;
    auVar8._4_4_ = (float)local_108._4_4_ - (float)local_118._4_4_;
    auVar8._0_4_ = (float)local_108._0_4_ - (float)local_118._0_4_;
    auVar8._8_4_ = (float)uStack_100 - (float)uStack_110;
    auVar8._12_4_ = uStack_100._4_4_ - uStack_110._4_4_;
    auVar8 = maxps(auVar7,auVar8);
    auVar12._0_4_ = fVar11 + local_2a8;
    auVar12._4_4_ = fVar14 + fStack_2a4;
    auVar12._8_4_ = fVar15 + fStack_2a0;
    auVar12._12_4_ = fVar16 + fStack_29c;
    auVar13._4_4_ = (float)local_108._4_4_ + (float)local_118._4_4_;
    auVar13._0_4_ = (float)local_108._0_4_ + (float)local_118._0_4_;
    auVar13._8_4_ = (float)uStack_100 + (float)uStack_110;
    auVar13._12_4_ = uStack_100._4_4_ + uStack_110._4_4_;
    auVar13 = minps(auVar12,auVar13);
    fVar11 = (auVar13._0_4_ - auVar8._0_4_) * 0.5;
    fVar14 = (auVar13._4_4_ - auVar8._4_4_) * 0.5;
    fVar17 = (fVar17 - fVar10) * 0.5;
    value_09.fields.x = auVar8._0_4_ + fVar11;
    value_09.fields.y = auVar8._4_4_ + fVar14;
    value_09.fields.z = fVar10 + fVar17;
    UnityEngine_Transform__set_position(__this,value_09,(MethodInfo *)0x0);
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)obj,
                           (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem
                          );
    if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
      fVar10 = fVar11;
      if (fVar11 <= fVar17) {
        fVar10 = fVar17;
      }
      if (fVar10 <= 0.75) {
        fVar10 = 0.75;
      }
      UnityEngine_ParticleSystem__Stop(__this_00,true,0,(MethodInfo *)0x0);
      local_250 = UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MainModule__set_loop(&local_250,false,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MainModule__set_playOnAwake(&local_250,false,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MainModule__set_duration(&local_250,0.15,(MethodInfo *)0x0);
      local_148.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
      local_148.m_ConstantMin = 0.0;
      local_148.m_ConstantMax = 0.0;
      local_148.m_Mode = 0;
      local_148.m_CurveMultiplier = 0.0;
      local_148.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
      UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_148,0.8,2.2,(MethodInfo *)0x0);
      value.fields.m_CurveMin = local_148.m_CurveMin;
      value.fields.m_Mode = local_148.m_Mode;
      value.fields.m_CurveMultiplier = local_148.m_CurveMultiplier;
      value.fields.m_CurveMax = local_148.m_CurveMax;
      value.fields.m_ConstantMin = local_148.m_ConstantMin;
      value.fields.m_ConstantMax = local_148.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startLifetime(&local_250,value,(MethodInfo *)0x0);
      local_168.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
      local_168.m_ConstantMin = 0.0;
      local_168.m_ConstantMax = 0.0;
      local_168.m_Mode = 0;
      local_168.m_CurveMultiplier = 0.0;
      local_168.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
      UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_168,fVar10 * 0.65,fVar10 * 1.2,
                 (MethodInfo *)0x0);
      value_00.fields.m_CurveMin = local_168.m_CurveMin;
      value_00.fields.m_Mode = local_168.m_Mode;
      value_00.fields.m_CurveMultiplier = local_168.m_CurveMultiplier;
      value_00.fields.m_CurveMax = local_168.m_CurveMax;
      value_00.fields.m_ConstantMin = local_168.m_ConstantMin;
      value_00.fields.m_ConstantMax = local_168.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSize(&local_250,value_00,(MethodInfo *)0x0);
      local_188.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
      local_188.m_ConstantMin = 0.0;
      local_188.m_ConstantMax = 0.0;
      local_188.m_Mode = 0;
      local_188.m_CurveMultiplier = 0.0;
      local_188.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
      UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_188,fVar10 * 1.2,fVar10 * 2.4,
                 (MethodInfo *)0x0);
      value_01.fields.m_CurveMin = local_188.m_CurveMin;
      value_01.fields.m_Mode = local_188.m_Mode;
      value_01.fields.m_CurveMultiplier = local_188.m_CurveMultiplier;
      value_01.fields.m_CurveMax = local_188.m_CurveMax;
      value_01.fields.m_ConstantMin = local_188.m_ConstantMin;
      value_01.fields.m_ConstantMax = local_188.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startSpeed(&local_250,value_01,(MethodInfo *)0x0);
      local_1a8.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
      local_1a8.m_ConstantMin = 0.0;
      local_1a8.m_ConstantMax = 0.0;
      local_1a8.m_Mode = 0;
      local_1a8.m_CurveMultiplier = 0.0;
      local_1a8.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
      UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c47b0
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1a8,-3.1415927,3.1415927,(MethodInfo *)0x0
                );
      value_02.fields.m_CurveMin = local_1a8.m_CurveMin;
      value_02.fields.m_Mode = local_1a8.m_Mode;
      value_02.fields.m_CurveMultiplier = local_1a8.m_CurveMultiplier;
      value_02.fields.m_CurveMax = local_1a8.m_CurveMax;
      value_02.fields.m_ConstantMin = local_1a8.m_ConstantMin;
      value_02.fields.m_ConstantMax = local_1a8.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_startRotation(&local_250,value_02,(MethodInfo *)0x0);
      color.fields.b = 1.0;
      color.fields.a = 0.75;
      color.fields.r = 1.0;
      color.fields.g = 1.0;
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_60,color,(MethodInfo *)0x0);
      value_07.fields.m_GradientMin = local_60.m_GradientMin;
      value_07.fields.m_Mode = local_60.m_Mode;
      value_07.fields._4_4_ = local_60._4_4_;
      value_07.fields.m_GradientMax = local_60.m_GradientMax;
      value_07.fields.m_ColorMin.fields.r = local_60.m_ColorMin.fields.r;
      value_07.fields.m_ColorMin.fields.g = local_60.m_ColorMin.fields.g;
      value_07.fields.m_ColorMin.fields.b = local_60.m_ColorMin.fields.b;
      value_07.fields.m_ColorMin.fields.a = local_60.m_ColorMin.fields.a;
      value_07.fields.m_ColorMax.fields.r = local_60.m_ColorMax.fields.r;
      value_07.fields.m_ColorMax.fields.g = local_60.m_ColorMax.fields.g;
      value_07.fields.m_ColorMax.fields.b = local_60.m_ColorMax.fields.b;
      value_07.fields.m_ColorMax.fields.a = local_60.m_ColorMax.fields.a;
      UnityEngine_ParticleSystem_MainModule__set_startColor(&local_250,value_07,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_b8,0.08,(MethodInfo *)0x0);
      value_03.fields.m_CurveMin = local_b8.m_CurveMin;
      value_03.fields.m_Mode = local_b8.m_Mode;
      value_03.fields.m_CurveMultiplier = local_b8.m_CurveMultiplier;
      value_03.fields.m_CurveMax = local_b8.m_CurveMax;
      value_03.fields.m_ConstantMin = local_b8.m_ConstantMin;
      value_03.fields.m_ConstantMax = local_b8.m_ConstantMax;
      UnityEngine_ParticleSystem_MainModule__set_gravityModifier(&local_250,value_03,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MainModule__set_maxParticles(&local_250,0x40,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MainModule__set_simulationSpace(&local_250,1,(MethodInfo *)0x0);
      local_290 = UnityEngine_ParticleSystem__get_emission(__this_00,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_d8,0.0,(MethodInfo *)0x0);
      value_04.fields.m_CurveMin = local_d8.m_CurveMin;
      value_04.fields.m_Mode = local_d8.m_Mode;
      value_04.fields.m_CurveMultiplier = local_d8.m_CurveMultiplier;
      value_04.fields.m_CurveMax = local_d8.m_CurveMax;
      value_04.fields.m_ConstantMin = local_d8.m_ConstantMin;
      value_04.fields.m_ConstantMax = local_d8.m_ConstantMax;
      UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(&local_290,value_04,(MethodInfo *)0x0);
      bursts = (UnityEngine_ParticleSystem_Burst_array *)
               SZArrayNew(TypeInfo_UnityEngine_ParticleSystem_Burst_array,1);
      local_208.m_Count.fields.m_ConstantMin = 0.0;
      local_208.m_Count.fields.m_ConstantMax = 0.0;
      local_208.m_RepeatCount = 0;
      local_208.m_RepeatInterval = 0.0;
      local_208.m_Count.fields.m_CurveMin = 0;
      local_208.m_Count.fields.m_CurveMax = 0;
      local_208.m_Time = 0.0;
      local_208._4_4_ = 0;
      local_208.m_Count.fields.m_Mode = 0;
      local_208.m_Count.fields.m_CurveMultiplier = 0.0;
      local_208.m_InvProbability = 0.0;
      local_208._52_4_ = 0;
      UnityEngine_ParticleSystem_Burst___ctor
                ((UnityEngine_ParticleSystem_Burst_o *)&local_208,0.0,0x40,(MethodInfo *)0x0);
      if (bursts != (UnityEngine_ParticleSystem_Burst_array *)0x0) {
        if ((int)bursts->max_length != 0) {
          bursts->m_Items[0].fields.m_InvProbability = local_208.m_InvProbability;
          *(undefined4 *)&bursts->m_Items[0].fields.field_0x34 = local_208._52_4_;
          bursts->m_Items[0].fields.m_Count.fields.m_ConstantMin = local_208.m_Count.fields.m_ConstantMin;
          bursts->m_Items[0].fields.m_Count.fields.m_ConstantMax = local_208.m_Count.fields.m_ConstantMax;
          bursts->m_Items[0].fields.m_RepeatCount = local_208.m_RepeatCount;
          bursts->m_Items[0].fields.m_RepeatInterval = local_208.m_RepeatInterval;
          bursts->m_Items[0].fields.m_Count.fields.m_CurveMin = local_208.m_Count.fields.m_CurveMin;
          bursts->m_Items[0].fields.m_Count.fields.m_CurveMax = local_208.m_Count.fields.m_CurveMax;
          bursts->m_Items[0].fields.m_Time = local_208.m_Time;
          *(undefined4 *)&bursts->m_Items[0].fields.field_0x4 = local_208._4_4_;
          bursts->m_Items[0].fields.m_Count.fields.m_Mode = local_208.m_Count.fields.m_Mode;
          bursts->m_Items[0].fields.m_Count.fields.m_CurveMultiplier =
               local_208.m_Count.fields.m_CurveMultiplier;
          UnityEngine_ParticleSystem_EmissionModule__SetBursts(&local_290,bursts,(MethodInfo *)0x0);
          local_258 = UnityEngine_ParticleSystem__get_shape(__this_00,(MethodInfo *)0x0);
          UnityEngine_ParticleSystem_ShapeModule__set_shapeType(&local_258,0,(MethodInfo *)0x0);
          UnityEngine_ParticleSystem_ShapeModule__set_radius(&local_258,1.0,(MethodInfo *)0x0);
          UnityEngine_ParticleSystem_ShapeModule__set_radiusThickness(&local_258,1.0,(MethodInfo *)0x0);
          auVar9._4_4_ = fVar10 * 0.2;
          auVar9._0_4_ = 0x3e800000;
          auVar9._8_8_ = 0;
          auVar4._4_4_ = fVar14;
          auVar4._0_4_ = fVar11;
          auVar4._8_4_ = (auVar13._8_4_ - auVar8._8_4_) * 0.0;
          auVar4._12_4_ = (auVar13._12_4_ - auVar8._12_4_) * 0.0;
          auVar8 = maxps(auVar9,auVar4);
          fVar11 = 0.25;
          if (0.25 <= fVar17) {
            fVar11 = fVar17;
          }
          value_10.fields._0_8_ = auVar8._0_8_;
          value_10.fields.z = fVar11;
          UnityEngine_ParticleSystem_ShapeModule__set_scale(&local_258,value_10,(MethodInfo *)0x0);
          local_298 = UnityEngine_ParticleSystem__get_colorOverLifetime(__this_00,(MethodInfo *)0x0);
          UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled(&local_298,true,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
          UnityEngine_Gradient___ctor(__this_01,(MethodInfo *)0x0);
          colorKeys = (UnityEngine_GradientColorKey_array *)
                      SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
          local_228.fields.color.fields.r = 0.0;
          local_228.fields.color.fields.g = 0.0;
          local_228.fields.color.fields.b = 0.0;
          local_228.fields.color.fields.a = 0.0;
          local_228.fields.time = 0.0;
          col.fields.b = 1.0;
          col.fields.a = 1.0;
          col.fields.r = 1.0;
          col.fields.g = 1.0;
          UnityEngine_GradientColorKey___ctor(&local_228,col,0.0,(MethodInfo *)0x0);
          if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_05981dc8;
          if ((int)colorKeys->max_length != 0) {
            colorKeys->m_Items[0].fields.time = local_228.fields.time;
            colorKeys->m_Items[0].fields.color.fields.r = local_228.fields.color.fields.r;
            colorKeys->m_Items[0].fields.color.fields.g = local_228.fields.color.fields.g;
            colorKeys->m_Items[0].fields.color.fields.b = local_228.fields.color.fields.b;
            colorKeys->m_Items[0].fields.color.fields.a = local_228.fields.color.fields.a;
            local_248.fields.color.fields.r = 0.0;
            local_248.fields.color.fields.g = 0.0;
            local_248.fields.color.fields.b = 0.0;
            local_248.fields.color.fields.a = 0.0;
            local_248.fields.time = 0.0;
            col_00.fields.b = 1.0;
            col_00.fields.a = 1.0;
            col_00.fields.r = 1.0;
            col_00.fields.g = 1.0;
            UnityEngine_GradientColorKey___ctor(&local_248,col_00,1.0,(MethodInfo *)0x0);
            if ((colorKeys->max_length & 0xfffffffe) != 0) {
              colorKeys->m_Items[1].fields.time = local_248.fields.time;
              colorKeys->m_Items[1].fields.color.fields.r = local_248.fields.color.fields.r;
              colorKeys->m_Items[1].fields.color.fields.g = local_248.fields.color.fields.g;
              colorKeys->m_Items[1].fields.color.fields.b = local_248.fields.color.fields.b;
              colorKeys->m_Items[1].fields.color.fields.a = local_248.fields.color.fields.a;
              alphaKeys = (UnityEngine_GradientAlphaKey_array *)
                          SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,3);
              local_270.alpha = 0.0;
              local_270.time = 0.0;
              UnityEngine_GradientAlphaKey___ctor
                        ((UnityEngine_GradientAlphaKey_o *)&local_270,0.0,0.0,(MethodInfo *)0x0);
              if (alphaKeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_05981dc8;
              if ((int)alphaKeys->max_length != 0) {
                alphaKeys->m_Items[0].fields = local_270;
                local_278.alpha = 0.0;
                local_278.time = 0.0;
                UnityEngine_GradientAlphaKey___ctor
                          ((UnityEngine_GradientAlphaKey_o *)&local_278,1.0,0.08,(MethodInfo *)0x0);
                if ((alphaKeys->max_length & 0xfffffffe) != 0) {
                  alphaKeys->m_Items[1].fields = local_278;
                  local_280.alpha = 0.0;
                  local_280.time = 0.0;
                  UnityEngine_GradientAlphaKey___ctor
                            ((UnityEngine_GradientAlphaKey_o *)&local_280,0.0,1.0,(MethodInfo *)0x0);
                  if (2 < (uint)alphaKeys->max_length) {
                    alphaKeys->m_Items[2].fields = local_280;
                    if (__this_01 != (UnityEngine_Gradient_o *)0x0) {
                      UnityEngine_Gradient__SetKeys(__this_01,colorKeys,alphaKeys,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_69c4a70
                                ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_98,__this_01,
                                 (MethodInfo *)0x0);
                      value_08.fields.m_GradientMin = local_98.m_GradientMin;
                      value_08.fields.m_Mode = local_98.m_Mode;
                      value_08.fields._4_4_ = local_98._4_4_;
                      value_08.fields.m_GradientMax = local_98.m_GradientMax;
                      value_08.fields.m_ColorMin.fields.r = local_98.m_ColorMin.fields.r;
                      value_08.fields.m_ColorMin.fields.g = local_98.m_ColorMin.fields.g;
                      value_08.fields.m_ColorMin.fields.b = local_98.m_ColorMin.fields.b;
                      value_08.fields.m_ColorMin.fields.a = local_98.m_ColorMin.fields.a;
                      value_08.fields.m_ColorMax.fields.r = local_98.m_ColorMax.fields.r;
                      value_08.fields.m_ColorMax.fields.g = local_98.m_ColorMax.fields.g;
                      value_08.fields.m_ColorMax.fields.b = local_98.m_ColorMax.fields.b;
                      value_08.fields.m_ColorMax.fields.a = local_98.m_ColorMax.fields.a;
                      UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color
                                (&local_298,value_08,(MethodInfo *)0x0);
                      local_260 = UnityEngine_ParticleSystem__get_sizeOverLifetime
                                            (__this_00,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_enabled
                                (&local_260,true,(MethodInfo *)0x0);
                      curve = UnityEngine_AnimationCurve__Linear(0.0,0.6,1.0,2.0,(MethodInfo *)0x0);
                      local_1c8.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
                      local_1c8.m_ConstantMin = 0.0;
                      local_1c8.m_ConstantMax = 0.0;
                      local_1c8.m_Mode = 0;
                      local_1c8.m_CurveMultiplier = 0.0;
                      local_1c8.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
                      UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c4760
                                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1c8,1.0,curve,
                                 (MethodInfo *)0x0);
                      value_05.fields.m_CurveMin = local_1c8.m_CurveMin;
                      value_05.fields.m_Mode = local_1c8.m_Mode;
                      value_05.fields.m_CurveMultiplier = local_1c8.m_CurveMultiplier;
                      value_05.fields.m_CurveMax = local_1c8.m_CurveMax;
                      value_05.fields.m_ConstantMin = local_1c8.m_ConstantMin;
                      value_05.fields.m_ConstantMax = local_1c8.m_ConstantMax;
                      UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_size
                                (&local_260,value_05,(MethodInfo *)0x0);
                      local_268 = UnityEngine_ParticleSystem__get_limitVelocityOverLifetime
                                            (__this_00,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule__set_enabled
                                (&local_268,true,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_f8,fVar10 * 0.5,
                                 (MethodInfo *)0x0);
                      value_06.fields.m_CurveMin = local_f8.m_CurveMin;
                      value_06.fields.m_Mode = local_f8.m_Mode;
                      value_06.fields.m_CurveMultiplier = local_f8.m_CurveMultiplier;
                      value_06.fields.m_CurveMax = local_f8.m_CurveMax;
                      value_06.fields.m_ConstantMin = local_f8.m_ConstantMin;
                      value_06.fields.m_ConstantMax = local_f8.m_ConstantMax;
                      UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule__set_limit
                                (&local_268,value_06,(MethodInfo *)0x0);
                      UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule__set_dampen
                                (&local_268,0.3,(MethodInfo *)0x0);
                      __this_02 = UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)obj,
                                             (MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer
                                            );
                      if (__this_02 != (UnityEngine_ParticleSystemRenderer_o *)0x0) {
                        UnityEngine_Renderer__set_sharedMaterial
                                  ((UnityEngine_Renderer_o *)__this_02,
                                   TypeInfo_Map_MapDestructionDust->static_fields->_material,(MethodInfo *)0x0
                                  );
                        UnityEngine_Renderer__set_shadowCastingMode
                                  ((UnityEngine_Renderer_o *)__this_02,0,(MethodInfo *)0x0);
                        UnityEngine_Renderer__set_receiveShadows
                                  ((UnityEngine_Renderer_o *)__this_02,false,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem__Play_69c2630(__this_00,(MethodInfo *)0x0);
                        pUVar3 = TypeInfo_Map_MapDestructionDust->static_fields->_sound;
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar5 = UnityEngine_Object__op_Inequality
                                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                        if (!bVar5) {
                          fVar10 = 3.0;
                          uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
joined_r0x05981d97:
                          if (uVar1 == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          UnityEngine_Object__Destroy(obj,fVar10,(MethodInfo *)0x0);
                          return;
                        }
                        __this_03 = UnityEngine_GameObject__AddComponent_object_
                                              ((UnityEngine_GameObject_o *)obj,
                                               (MethodInfo_353B6A0 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource);
                        if (__this_03 != (UnityEngine_AudioSource_o *)0x0) {
                          UnityEngine_AudioSource__set_clip
                                    (__this_03,TypeInfo_Map_MapDestructionDust->static_fields->_sound,
                                     (MethodInfo *)0x0);
                          UnityEngine_AudioSource__set_spatialBlend(__this_03,1.0,(MethodInfo *)0x0);
                          UnityEngine_AudioSource__set_rolloffMode(__this_03,1,(MethodInfo *)0x0);
                          UnityEngine_AudioSource__set_minDistance(__this_03,fVar10 * 3.0,(MethodInfo *)0x0);
                          UnityEngine_AudioSource__set_maxDistance(__this_03,350.0,(MethodInfo *)0x0);
                          UnityEngine_AudioSource__set_volume(__this_03,0.8,(MethodInfo *)0x0);
                          UnityEngine_AudioSource__set_pitch(__this_03,0.85,(MethodInfo *)0x0);
                          UnityEngine_AudioSource__set_dopplerLevel(__this_03,0.0,(MethodInfo *)0x0);
                          UnityEngine_AudioSource__Play_68b06a0(__this_03,(MethodInfo *)0x0);
                          pUVar3 = TypeInfo_Map_MapDestructionDust->static_fields->_sound;
                          if (pUVar3 != (UnityEngine_AudioClip_o *)0x0) {
                            fVar10 = UnityEngine_AudioClip__get_length(pUVar3,(MethodInfo *)0x0);
                            fVar17 = fVar10 / 0.85 + 0.1;
                            fVar10 = 3.0;
                            if (3.0 <= fVar17) {
                              fVar10 = fVar17;
                            }
                            uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
                            goto joined_r0x05981d97;
                          }
                        }
                      }
                    }
                    goto label_05981dc8;
                  }
                }
              }
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05981dc8:
  ThrowNullReferenceException();
}


