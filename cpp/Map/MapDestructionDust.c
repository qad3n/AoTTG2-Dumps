// Type: Map.MapDestructionDust
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapDestructionDust.cs
// Prior real C# source: none
// --------------------------------

// Map.MapDestructionDust$$LoadAssets
// il2cpp: void Map_MapDestructionDust__LoadAssets (const MethodInfo* method);
// 0x181e9fd90

void Map_MapDestructionDust__LoadAssets(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_AudioClip_o *pUVar3;
  
  if (Il2CppMethodInitialized_184345081 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDust);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Materials/Smoke1Mat");
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Sounds/Boom1Sound");
    Il2CppMethodInitialized_184345081 = '\x01';
  }
  pUVar2 = TypeInfo_Map_MapDestructionDust->static_fields->_material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Resources__Load_object_
                       ("Effects/Materials/Smoke1Mat",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Material);
    TypeInfo_Map_MapDestructionDust->static_fields->_material = pUVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDust->static_fields->_material,pUVar2);
  }
  pUVar3 = TypeInfo_Map_MapDestructionDust->static_fields->_sound;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Resources__Load_object_
                       ("Effects/Sounds/Boom1Sound",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    TypeInfo_Map_MapDestructionDust->static_fields->_sound = pUVar3;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDust->static_fields->_sound,pUVar3);
    return;
  }
  return;
}


// Map.MapDestructionDust$$Spawn
// il2cpp: void Map_MapDestructionDust__Spawn (UnityEngine_Bounds_o objectBounds, UnityEngine_Vector3_o impact, float hitRadius, const MethodInfo* method);
// 0x181e9fef0

void Map_MapDestructionDust__Spawn
               (UnityEngine_Bounds_o *objectBounds,UnityEngine_Vector3_o *impact,float hitRadius,
               MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_AudioClip_o *pUVar4;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *__this;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_ParticleSystem_MinMaxGradient_o *pUVar5;
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar6;
  UnityEngine_ParticleSystem_Burst_array *bursts;
  UnityEngine_Gradient_o *__this_01;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_GradientAlphaKey_array *alphaKeys;
  UnityEngine_AnimationCurve_o *curve;
  UnityEngine_ParticleSystemRenderer_o *__this_02;
  UnityEngine_AudioSource_o *__this_03;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_ParticleSystem_MainModule_o local_res8;
  UnityEngine_ParticleSystem_ShapeModule_o local_res10;
  undefined1 local_288 [8];
  UnityEngine_AnimationCurve_o *pUStack_280;
  UnityEngine_AnimationCurve_o *local_278;
  float fStack_270;
  float fStack_26c;
  UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule_o local_268;
  UnityEngine_ParticleSystem_EmissionModule_o local_260;
  _union_125884 local_258;
  _union_125884 local_250;
  _union_125884 local_248;
  UnityEngine_ParticleSystem_ColorOverLifetimeModule_o local_240;
  UnityEngine_ParticleSystem_SizeOverLifetimeModule_o local_238;
  UnityEngine_GradientColorKey_o local_230;
  UnityEngine_GradientColorKey_o local_218;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_1f8;
  UnityEngine_ParticleSystem_Burst_Fields local_1b8;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_180;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_160;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_140;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_120;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_100;
  UnityEngine_ParticleSystem_MinMaxGradient_o local_e0 [3];
  
  if (Il2CppMethodInitialized_184345082 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Map destruction dust");
    Il2CppMethodInitialized_184345082 = '\x01';
  }
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_260.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_res10.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ShapeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_240.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_238.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  local_268.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  if (Il2CppMethodInitialized_184345081 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDust);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_AudioClip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Materials/Smoke1Mat");
    il2cpp_codegen_initialize_runtime_metadata(&"Effects/Sounds/Boom1Sound");
    Il2CppMethodInitialized_184345081 = '\x01';
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
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Material);
    TypeInfo_Map_MapDestructionDust->static_fields->_material = pUVar3;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDust->static_fields->_material,pUVar3);
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
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_AudioClip);
    TypeInfo_Map_MapDestructionDust->static_fields->_sound = pUVar4;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDust->static_fields->_sound,pUVar4);
  }
  fVar9 = (impact->fields).x;
  fVar11 = (impact->fields).y;
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  if (hitRadius <= 0.75) {
    hitRadius = 0.75;
  }
  fVar12 = (objectBounds->fields).m_Center.fields.x - (objectBounds->fields).m_Extents.fields.x;
  fVar8 = (objectBounds->fields).m_Center.fields.y - (objectBounds->fields).m_Extents.fields.y;
  fVar10 = (objectBounds->fields).m_Center.fields.z - (objectBounds->fields).m_Extents.fields.z;
  fVar13 = (pUVar1->oneVector).fields.x * hitRadius;
  fVar15 = (pUVar1->oneVector).fields.y * hitRadius;
  fVar7 = (pUVar1->oneVector).fields.z * hitRadius;
  fVar14 = (fVar13 + fVar13) * 0.5;
  fVar15 = (fVar15 + fVar15) * 0.5;
  fVar17 = fVar9 - fVar14;
  fVar13 = (fVar7 + fVar7) * 0.5;
  fVar16 = fVar11 - fVar15;
  fVar7 = (impact->fields).z - fVar13;
  if (fVar17 <= fVar12) {
    fVar17 = fVar12;
  }
  if (fVar16 <= fVar8) {
    fVar16 = fVar8;
  }
  if (fVar7 <= fVar10) {
    fVar7 = fVar10;
  }
  fVar14 = fVar14 + fVar9;
  fVar8 = (objectBounds->fields).m_Extents.fields.x + (objectBounds->fields).m_Center.fields.x;
  fVar15 = fVar15 + fVar11;
  fVar13 = fVar13 + (impact->fields).z;
  fVar9 = (objectBounds->fields).m_Extents.fields.y + (objectBounds->fields).m_Center.fields.y;
  fVar11 = (objectBounds->fields).m_Extents.fields.z + (objectBounds->fields).m_Center.fields.z;
  if (fVar8 <= fVar14) {
    fVar14 = fVar8;
  }
  if (fVar9 <= fVar15) {
    fVar15 = fVar9;
  }
  if (fVar11 <= fVar13) {
    fVar13 = fVar11;
  }
  fVar11 = (fVar14 - fVar17) * 0.5;
  fVar8 = (fVar13 - fVar7) * 0.5;
  fVar9 = fVar14 - fVar17;
  if (fVar11 <= fVar8) {
    fVar9 = fVar13 - fVar7;
  }
  fVar9 = fVar9 * 0.5;
  if (fVar9 <= 0.75) {
    fVar9 = 0.75;
  }
  obj = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"Map destruction dust",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)obj,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      fVar13 = (fVar15 - fVar16) * 0.5;
      local_288._4_4_ = fVar13 + fVar16;
      local_288._0_4_ = fVar11 + fVar17;
      pUStack_280 = (UnityEngine_AnimationCurve_o *)CONCAT44(pUStack_280._4_4_,fVar8 + fVar7);
      UnityEngine_Transform__set_position(__this,(UnityEngine_Vector3_o *)local_288,(MethodInfo *)0x0);
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)obj,
                             (MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_ParticleSystem);
      if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
        UnityEngine_ParticleSystem__Stop(__this_00,true,0,(MethodInfo *)0x0);
        local_res8.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_MainModule_Fields)
             UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
        UnityEngine_ParticleSystem_MainModule__set_loop(&local_res8,false,(MethodInfo *)0x0);
        UnityEngine_ParticleSystem_MainModule__set_playOnAwake(&local_res8,false,(MethodInfo *)0x0);
        UnityEngine_ParticleSystem_MainModule__set_duration(&local_res8,0.15,(MethodInfo *)0x0);
        local_180.m_Mode = 0;
        local_180.m_CurveMultiplier = 0.0;
        local_180.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
        local_180.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
        local_180.m_ConstantMin = 0.0;
        local_180.m_ConstantMax = 0.0;
        UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_180,0.8,2.2,(MethodInfo *)0x0);
        local_288._0_4_ = local_180.m_Mode;
        local_288._4_4_ = local_180.m_CurveMultiplier;
        pUStack_280 = local_180.m_CurveMin;
        local_278 = local_180.m_CurveMax;
        fStack_270 = local_180.m_ConstantMin;
        fStack_26c = local_180.m_ConstantMax;
        UnityEngine_ParticleSystem_MainModule__set_startLifetime
                  (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,(MethodInfo *)0x0);
        local_160.m_Mode = 0;
        local_160.m_CurveMultiplier = 0.0;
        local_160.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
        local_160.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
        local_160.m_ConstantMin = 0.0;
        local_160.m_ConstantMax = 0.0;
        UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_160,fVar9 * 0.65,fVar9 * 1.2,
                   (MethodInfo *)0x0);
        local_288._0_4_ = local_160.m_Mode;
        local_288._4_4_ = local_160.m_CurveMultiplier;
        pUStack_280 = local_160.m_CurveMin;
        local_278 = local_160.m_CurveMax;
        fStack_270 = local_160.m_ConstantMin;
        fStack_26c = local_160.m_ConstantMax;
        UnityEngine_ParticleSystem_MainModule__set_startSize
                  (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,(MethodInfo *)0x0);
        local_140.m_Mode = 0;
        local_140.m_CurveMultiplier = 0.0;
        local_140.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
        local_140.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
        local_140.m_ConstantMin = 0.0;
        local_140.m_ConstantMax = 0.0;
        UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_140,fVar9 * 1.2,fVar9 * 2.4,
                   (MethodInfo *)0x0);
        local_288._0_4_ = local_140.m_Mode;
        local_288._4_4_ = local_140.m_CurveMultiplier;
        pUStack_280 = local_140.m_CurveMin;
        local_278 = local_140.m_CurveMax;
        fStack_270 = local_140.m_ConstantMin;
        fStack_26c = local_140.m_ConstantMax;
        UnityEngine_ParticleSystem_MainModule__set_startSpeed
                  (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,(MethodInfo *)0x0);
        local_120.m_Mode = 0;
        local_120.m_CurveMultiplier = 0.0;
        local_120.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
        local_120.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
        local_120.m_ConstantMin = 0.0;
        local_120.m_ConstantMax = 0.0;
        UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8b50
                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_120,-3.1415927,3.1415927,
                   (MethodInfo *)0x0);
        local_288._0_4_ = local_120.m_Mode;
        local_288._4_4_ = local_120.m_CurveMultiplier;
        pUStack_280 = local_120.m_CurveMin;
        local_278 = local_120.m_CurveMax;
        fStack_270 = local_120.m_ConstantMin;
        fStack_26c = local_120.m_ConstantMax;
        UnityEngine_ParticleSystem_MainModule__set_startRotation
                  (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,(MethodInfo *)0x0);
        local_288._0_4_ = 0x3f800000;
        local_288._4_4_ = 1.0;
        pUStack_280 = (UnityEngine_AnimationCurve_o *)0x3f4000003f800000;
        pUVar5 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                           (local_e0,(UnityEngine_Color_o *)local_288,(MethodInfo *)0x0);
        local_1f8.m_Mode = (pUVar5->fields).m_Mode;
        local_1f8._4_4_ = *(undefined4 *)&(pUVar5->fields).field_0x4;
        local_1f8.m_GradientMin = (pUVar5->fields).m_GradientMin;
        local_1f8.m_GradientMax = (pUVar5->fields).m_GradientMax;
        local_1f8.m_ColorMin.fields.r = (pUVar5->fields).m_ColorMin.fields.r;
        local_1f8.m_ColorMin.fields.g = (pUVar5->fields).m_ColorMin.fields.g;
        local_1f8.m_ColorMin.fields.b = (pUVar5->fields).m_ColorMin.fields.b;
        local_1f8.m_ColorMin.fields.a = (pUVar5->fields).m_ColorMin.fields.a;
        local_1f8.m_ColorMax.fields.r = (pUVar5->fields).m_ColorMax.fields.r;
        local_1f8.m_ColorMax.fields.g = (pUVar5->fields).m_ColorMax.fields.g;
        local_1f8.m_ColorMax.fields.b = (pUVar5->fields).m_ColorMax.fields.b;
        local_1f8.m_ColorMax.fields.a = (pUVar5->fields).m_ColorMax.fields.a;
        UnityEngine_ParticleSystem_MainModule__set_startColor
                  (&local_res8,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_1f8,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                           ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1f8,0.08,(MethodInfo *)0x0);
        local_288._0_4_ = (pUVar6->fields).m_Mode;
        local_288._4_4_ = (pUVar6->fields).m_CurveMultiplier;
        pUStack_280 = (pUVar6->fields).m_CurveMin;
        local_278 = (pUVar6->fields).m_CurveMax;
        fStack_270 = (pUVar6->fields).m_ConstantMin;
        fStack_26c = (pUVar6->fields).m_ConstantMax;
        UnityEngine_ParticleSystem_MainModule__set_gravityModifier
                  (&local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,(MethodInfo *)0x0);
        UnityEngine_ParticleSystem_MainModule__set_maxParticles(&local_res8,0x40,(MethodInfo *)0x0);
        UnityEngine_ParticleSystem_MainModule__set_simulationSpace(&local_res8,1,(MethodInfo *)0x0);
        local_260.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                           ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1f8,0.0,(MethodInfo *)0x0);
        local_288._0_4_ = (pUVar6->fields).m_Mode;
        local_288._4_4_ = (pUVar6->fields).m_CurveMultiplier;
        pUStack_280 = (pUVar6->fields).m_CurveMin;
        local_278 = (pUVar6->fields).m_CurveMax;
        fStack_270 = (pUVar6->fields).m_ConstantMin;
        fStack_26c = (pUVar6->fields).m_ConstantMax;
        UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime
                  (&local_260,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,(MethodInfo *)0x0);
        bursts = (UnityEngine_ParticleSystem_Burst_array *)
                 SZArrayNew(TypeInfo_UnityEngine_ParticleSystem_Burst_array,1);
        local_1b8.m_InvProbability = 0.0;
        local_1b8._52_4_ = 0;
        local_1b8.m_Time = 0.0;
        local_1b8._4_4_ = 0;
        local_1b8.m_Count.fields.m_Mode = 0;
        local_1b8.m_Count.fields.m_CurveMultiplier = 0.0;
        local_1b8.m_Count.fields.m_CurveMin = 0;
        local_1b8.m_Count.fields.m_CurveMax = 0;
        local_1b8.m_Count.fields.m_ConstantMin = 0.0;
        local_1b8.m_Count.fields.m_ConstantMax = 0.0;
        local_1b8.m_RepeatCount = 0;
        local_1b8.m_RepeatInterval = 0.0;
        UnityEngine_ParticleSystem_Burst___ctor
                  ((UnityEngine_ParticleSystem_Burst_o *)&local_1b8,0.0,0x40,(MethodInfo *)0x0);
        if (bursts != (UnityEngine_ParticleSystem_Burst_array *)0x0) {
          if ((int)bursts->max_length != 0) {
            bursts->m_Items[0].fields.m_Time = local_1b8.m_Time;
            *(undefined4 *)&bursts->m_Items[0].fields.field_0x4 = local_1b8._4_4_;
            bursts->m_Items[0].fields.m_Count.fields.m_Mode = local_1b8.m_Count.fields.m_Mode;
            bursts->m_Items[0].fields.m_Count.fields.m_CurveMultiplier =
                 local_1b8.m_Count.fields.m_CurveMultiplier;
            bursts->m_Items[0].fields.m_Count.fields.m_CurveMin = local_1b8.m_Count.fields.m_CurveMin;
            bursts->m_Items[0].fields.m_Count.fields.m_CurveMax = local_1b8.m_Count.fields.m_CurveMax;
            bursts->m_Items[0].fields.m_Count.fields.m_ConstantMin = local_1b8.m_Count.fields.m_ConstantMin;
            bursts->m_Items[0].fields.m_Count.fields.m_ConstantMax = local_1b8.m_Count.fields.m_ConstantMax;
            bursts->m_Items[0].fields.m_RepeatCount = local_1b8.m_RepeatCount;
            bursts->m_Items[0].fields.m_RepeatInterval = local_1b8.m_RepeatInterval;
            bursts->m_Items[0].fields.m_InvProbability = local_1b8.m_InvProbability;
            *(undefined4 *)&bursts->m_Items[0].fields.field_0x34 = local_1b8._52_4_;
            UnityEngine_ParticleSystem_EmissionModule__SetBursts(&local_260,bursts,(MethodInfo *)0x0);
            local_res10.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_ShapeModule_Fields)
                 UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
            UnityEngine_ParticleSystem_ShapeModule__set_shapeType(&local_res10,0,(MethodInfo *)0x0);
            UnityEngine_ParticleSystem_ShapeModule__set_radius(&local_res10,1.0,(MethodInfo *)0x0);
            UnityEngine_ParticleSystem_ShapeModule__set_radiusThickness(&local_res10,1.0,(MethodInfo *)0x0);
            if (fVar11 < 0.25) {
              fVar11 = 0.25;
            }
            local_288._4_4_ = fVar9 * 0.2;
            if (fVar9 * 0.2 <= fVar13) {
              local_288._4_4_ = fVar13;
            }
            fVar7 = 0.25;
            if (0.25 <= fVar8) {
              fVar7 = fVar8;
            }
            local_288._0_4_ = fVar11;
            pUStack_280 = (UnityEngine_AnimationCurve_o *)CONCAT44(pUStack_280._4_4_,fVar7);
            UnityEngine_ParticleSystem_ShapeModule__set_scale
                      (&local_res10,(UnityEngine_Vector3_o *)local_288,(MethodInfo *)0x0);
            local_240.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_ColorOverLifetimeModule_Fields)
                 UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
            UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled(&local_240,true,(MethodInfo *)0x0)
            ;
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Gradient);
            UnityEngine_Gradient___ctor(__this_01,(MethodInfo *)0x0);
            colorKeys = (UnityEngine_GradientColorKey_array *)
                        SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
            local_288._0_4_ = 0x3f800000;
            local_288._4_4_ = 1.0;
            pUStack_280 = (UnityEngine_AnimationCurve_o *)0x3f8000003f800000;
            local_230.fields.time = 0.0;
            local_230.fields.color.fields.r = 0.0;
            local_230.fields.color.fields.g = 0.0;
            local_230.fields.color.fields.b = 0.0;
            local_230.fields.color.fields.a = 0.0;
            UnityEngine_GradientColorKey___ctor
                      (&local_230,(UnityEngine_Color_o *)local_288,0.0,(MethodInfo *)0x0);
            if (colorKeys == (UnityEngine_GradientColorKey_array *)0x0) goto label_181ea0c0b;
            if ((int)colorKeys->max_length != 0) {
              local_288._0_4_ = 0x3f800000;
              local_288._4_4_ = 1.0;
              pUStack_280 = (UnityEngine_AnimationCurve_o *)0x3f8000003f800000;
              colorKeys->m_Items[0].fields.color.fields.r = local_230.fields.color.fields.r;
              colorKeys->m_Items[0].fields.color.fields.g = local_230.fields.color.fields.g;
              colorKeys->m_Items[0].fields.color.fields.b = local_230.fields.color.fields.b;
              colorKeys->m_Items[0].fields.color.fields.a = local_230.fields.color.fields.a;
              colorKeys->m_Items[0].fields.time = local_230.fields.time;
              local_218.fields.time = 0.0;
              local_218.fields.color.fields.r = 0.0;
              local_218.fields.color.fields.g = 0.0;
              local_218.fields.color.fields.b = 0.0;
              local_218.fields.color.fields.a = 0.0;
              UnityEngine_GradientColorKey___ctor
                        (&local_218,(UnityEngine_Color_o *)local_288,1.0,(MethodInfo *)0x0);
              if (1 < (uint)colorKeys->max_length) {
                colorKeys->m_Items[1].fields.color.fields.r = local_218.fields.color.fields.r;
                colorKeys->m_Items[1].fields.color.fields.g = local_218.fields.color.fields.g;
                colorKeys->m_Items[1].fields.color.fields.b = local_218.fields.color.fields.b;
                colorKeys->m_Items[1].fields.color.fields.a = local_218.fields.color.fields.a;
                colorKeys->m_Items[1].fields.time = local_218.fields.time;
                alphaKeys = (UnityEngine_GradientAlphaKey_array *)
                            SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,3);
                local_258 = (_union_125884)0x0;
                Unity_Burst_Intrinsics_v64___ctor_1028c00
                          ((Unity_Burst_Intrinsics_v64_o *)&local_258._at_Byte0,0.0,0.0,(MethodInfo *)0x0);
                if (alphaKeys == (UnityEngine_GradientAlphaKey_array *)0x0) goto label_181ea0c0b;
                if ((int)alphaKeys->max_length != 0) {
                  alphaKeys->m_Items[0].fields.time = (float)local_258._at_UInt1.UInt1;
                  alphaKeys->m_Items[0].fields.alpha = (float)local_258._at_UInt0.UInt0;
                  local_250 = (_union_125884)0x0;
                  Unity_Burst_Intrinsics_v64___ctor_1028c00
                            ((Unity_Burst_Intrinsics_v64_o *)&local_250._at_Byte0,1.0,0.08,(MethodInfo *)0x0);
                  if (1 < (uint)alphaKeys->max_length) {
                    alphaKeys->m_Items[1].fields.time = (float)local_250._at_UInt1.UInt1;
                    alphaKeys->m_Items[1].fields.alpha = (float)local_250._at_UInt0.UInt0;
                    local_248 = (_union_125884)0x0;
                    Unity_Burst_Intrinsics_v64___ctor_1028c00
                              ((Unity_Burst_Intrinsics_v64_o *)&local_248._at_Byte0,0.0,1.0,(MethodInfo *)0x0)
                    ;
                    if (2 < (uint)alphaKeys->max_length) {
                      alphaKeys->m_Items[2].fields.alpha = (float)local_248._at_UInt0.UInt0;
                      alphaKeys->m_Items[2].fields.time = (float)local_248._at_UInt1.UInt1;
                      if (__this_01 != (UnityEngine_Gradient_o *)0x0) {
                        UnityEngine_Gradient__SetKeys(__this_01,colorKeys,alphaKeys,(MethodInfo *)0x0);
                        pUVar5 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_2fc8f10
                                           (local_e0,__this_01,(MethodInfo *)0x0);
                        local_1f8.m_Mode = (pUVar5->fields).m_Mode;
                        local_1f8._4_4_ = *(undefined4 *)&(pUVar5->fields).field_0x4;
                        local_1f8.m_GradientMin = (pUVar5->fields).m_GradientMin;
                        local_1f8.m_GradientMax = (pUVar5->fields).m_GradientMax;
                        local_1f8.m_ColorMin.fields.r = (pUVar5->fields).m_ColorMin.fields.r;
                        local_1f8.m_ColorMin.fields.g = (pUVar5->fields).m_ColorMin.fields.g;
                        local_1f8.m_ColorMin.fields.b = (pUVar5->fields).m_ColorMin.fields.b;
                        local_1f8.m_ColorMin.fields.a = (pUVar5->fields).m_ColorMin.fields.a;
                        local_1f8.m_ColorMax.fields.r = (pUVar5->fields).m_ColorMax.fields.r;
                        local_1f8.m_ColorMax.fields.g = (pUVar5->fields).m_ColorMax.fields.g;
                        local_1f8.m_ColorMax.fields.b = (pUVar5->fields).m_ColorMax.fields.b;
                        local_1f8.m_ColorMax.fields.a = (pUVar5->fields).m_ColorMax.fields.a;
                        UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color
                                  (&local_240,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_1f8,
                                   (MethodInfo *)0x0);
                        local_238.fields.m_ParticleSystem =
                             (UnityEngine_ParticleSystem_SizeOverLifetimeModule_Fields)
                             UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_enabled
                                  (&local_238,true,(MethodInfo *)0x0);
                        curve = UnityEngine_AnimationCurve__Linear(0.0,0.6,1.0,2.0,(MethodInfo *)0x0);
                        local_100.m_Mode = 0;
                        local_100.m_CurveMultiplier = 0.0;
                        local_100.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
                        local_100.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
                        local_100.m_ConstantMin = 0.0;
                        local_100.m_ConstantMax = 0.0;
                        UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8c00
                                  ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_100,1.0,curve,
                                   (MethodInfo *)0x0);
                        local_288._0_4_ = local_100.m_Mode;
                        local_288._4_4_ = local_100.m_CurveMultiplier;
                        pUStack_280 = local_100.m_CurveMin;
                        local_278 = local_100.m_CurveMax;
                        fStack_270 = local_100.m_ConstantMin;
                        fStack_26c = local_100.m_ConstantMax;
                        UnityEngine_ParticleSystem_SizeOverLifetimeModule__set_size
                                  (&local_238,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,
                                   (MethodInfo *)0x0);
                        local_268.fields.m_ParticleSystem =
                             (UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule_Fields)
                             UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule__set_enabled
                                  (&local_268,true,(MethodInfo *)0x0);
                        pUVar6 = UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                                           ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_1f8,fVar9 * 0.5
                                            ,(MethodInfo *)0x0);
                        local_288._0_4_ = (pUVar6->fields).m_Mode;
                        local_288._4_4_ = (pUVar6->fields).m_CurveMultiplier;
                        pUStack_280 = (pUVar6->fields).m_CurveMin;
                        local_278 = (pUVar6->fields).m_CurveMax;
                        fStack_270 = (pUVar6->fields).m_ConstantMin;
                        fStack_26c = (pUVar6->fields).m_ConstantMax;
                        UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule__set_limit
                                  (&local_268,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_288,
                                   (MethodInfo *)0x0);
                        UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule__set_dampen
                                  (&local_268,0.3,(MethodInfo *)0x0);
                        __this_02 = UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)obj,
                                               (MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer
                                              );
                        if (__this_02 != (UnityEngine_ParticleSystemRenderer_o *)0x0) {
                          UnityEngine_Renderer__set_sharedMaterial
                                    ((UnityEngine_Renderer_o *)__this_02,
                                     TypeInfo_Map_MapDestructionDust->static_fields->_material,
                                     (MethodInfo *)0x0);
                          UnityEngine_Renderer__set_shadowCastingMode
                                    ((UnityEngine_Renderer_o *)__this_02,0,(MethodInfo *)0x0);
                          UnityEngine_Renderer__set_receiveShadows
                                    ((UnityEngine_Renderer_o *)__this_02,false,(MethodInfo *)0x0);
                          UnityEngine_ParticleSystem__Play_2fca570(__this_00,(MethodInfo *)0x0);
                          pUVar4 = TypeInfo_Map_MapDestructionDust->static_fields->_sound;
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar2 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          fVar11 = 3.0;
                          if (bVar2) {
                            __this_03 = UnityEngine_GameObject__AddComponent_object_
                                                  ((UnityEngine_GameObject_o *)obj,
                                                   (MethodInfo_6F4D60 *)
                                                   MethodInfo_UnityEngine_GameObject_AddComponent_AudioSource)
                            ;
                            if (__this_03 != (UnityEngine_AudioSource_o *)0x0) {
                              UnityEngine_AudioSource__set_generatorObject
                                        (__this_03,
                                         (UnityEngine_Object_o *)
                                         TypeInfo_Map_MapDestructionDust->static_fields->_sound,
                                         (MethodInfo *)0x0);
                              UnityEngine_AudioSource__set_spatialBlend(__this_03,1.0,(MethodInfo *)0x0);
                              UnityEngine_AudioSource__set_rolloffMode(__this_03,1,(MethodInfo *)0x0);
                              UnityEngine_AudioSource__set_minDistance
                                        (__this_03,fVar9 * 3.0,(MethodInfo *)0x0);
                              UnityEngine_AudioSource__set_maxDistance(__this_03,350.0,(MethodInfo *)0x0);
                              UnityEngine_AudioSource__set_volume(__this_03,0.8,(MethodInfo *)0x0);
                              UnityEngine_AudioSource__set_pitch(__this_03,0.85,(MethodInfo *)0x0);
                              UnityEngine_AudioSource__set_dopplerLevel(__this_03,0.0,(MethodInfo *)0x0);
                              UnityEngine_AudioSource__Play_2eb4470(__this_03,(MethodInfo *)0x0);
                              pUVar4 = TypeInfo_Map_MapDestructionDust->static_fields->_sound;
                              if (pUVar4 != (UnityEngine_AudioClip_o *)0x0) {
                                fVar9 = UnityEngine_AudioClip__get_length(pUVar4,(MethodInfo *)0x0);
                                fVar9 = fVar9 / 0.85 + 0.1;
                                if (3.0 <= fVar9) {
                                  fVar11 = fVar9;
                                }
                                goto label_181ea0b9e;
                              }
                            }
                            ThrowNullReferenceException();
                          }
label_181ea0b9e:
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          UnityEngine_Object__Destroy(obj,fVar11,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      goto label_181ea0c0b;
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
  }
label_181ea0c0b:
  ThrowNullReferenceException();
}


