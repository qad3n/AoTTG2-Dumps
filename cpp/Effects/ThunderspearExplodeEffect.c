// Type: Effects.ThunderspearExplodeEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Effects/ThunderspearExplodeEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/ThunderspearExplodeEffect.cs
// --------------------------------

// Effects.ThunderspearExplodeEffect$$Setup
// il2cpp: void Effects_ThunderspearExplodeEffect__Setup (Effects_ThunderspearExplodeEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x181e777f0

void Effects_ThunderspearExplodeEffect__Setup
               (Effects_ThunderspearExplodeEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  Settings_AbilitySettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Il2CppObject *pIVar7;
  Projectiles_ThunderspearProjectile_StaticFields *pPVar8;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_ParticleSystem_NoiseModule_o main;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *__this_01;
  float *pfVar10;
  UnityEngine_ParticleSystem_MinMaxGradient_o *pUVar11;
  int32_t *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_ParticleSystem_MainModule_o local_res8 [4];
  UnityEngine_Color_o local_f8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_e8;
  UnityEngine_ParticleSystem_MinMaxGradient_o local_a8 [2];
  
  if (Il2CppMethodInitialized_184344f63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_TSKillType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ThunderspearExplodeEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"OldExplodeEffect");
    Il2CppMethodInitialized_184344f63 = '\x01';
  }
  local_res8[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields)._timeLeft = liveTime;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if (((pSVar5 == (Settings_AbilitySettings_o *)0x0) ||
      (pSVar6 = (pSVar5->fields).UseOldEffect, pSVar6 == (Settings_BoolSetting_o *)0x0)) ||
     (__this_00 == (UnityEngine_ParticleSystem_o *)0x0)) goto label_181e77be4;
  if ((pSVar6->fields)._value == false) {
    main = UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Effects_ThunderspearExplodeEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ThunderspearExplodeEffect);
    }
    fVar1 = TypeInfo_Effects_ThunderspearExplodeEffect->static_fields->SizeMultiplier;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    Utility_Util__ScaleParticleStartSize
              ((UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem,fVar1,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_ParticleSystem__Stop_2fca820(__this_00,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem__Clear_2fc98e0(__this_00,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_181e77be4;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"OldExplodeEffect",(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_181e77be4;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar9,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181e77be4;
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_181e77be4;
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
  }
  if (settings == (System_Object_array *)0x0) goto label_181e77be4;
  if ((int)settings->max_length == 0) goto label_181e77bcc;
  pIVar7 = settings->m_Items[0];
  if (pIVar7 == (Il2CppObject *)0x0) goto label_181e77be4;
  if ((pIVar7->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(pIVar7,TypeInfo_UnityEngine_Color);
  }
  pfVar10 = il2cpp_object_unbox(pIVar7);
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if ((pSVar5 == (Settings_AbilitySettings_o *)0x0) ||
     (pSVar6 = (pSVar5->fields).ShowBombColors, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_181e77be4;
  fVar1 = *pfVar10;
  fVar2 = pfVar10[1];
  fVar3 = pfVar10[2];
  fVar17 = pfVar10[3];
  if ((pSVar6->fields)._value == false) {
    if ((TypeInfo_Projectiles_ThunderspearProjectile->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile);
    }
    pPVar8 = TypeInfo_Projectiles_ThunderspearProjectile->static_fields;
    fVar15 = fVar1 - (pPVar8->CritColor).fields.r;
    fVar16 = fVar2 - (pPVar8->CritColor).fields.g;
    fVar13 = fVar3 - (pPVar8->CritColor).fields.b;
    fVar14 = fVar17 - (pPVar8->CritColor).fields.a;
    if (fVar16 * fVar16 + fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14 < 9.9999994e-11)
    goto label_181e77ad8;
  }
  else {
label_181e77ad8:
    if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181e77be4;
    local_res8[0].fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_MainModule_Fields)
         UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
    if (fVar17 <= 0.5) {
      fVar17 = 0.5;
    }
    local_f8.fields.r = fVar1;
    local_f8.fields.g = fVar2;
    local_f8.fields.b = fVar3;
    local_f8.fields.a = fVar17;
    pUVar11 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(local_a8,&local_f8,(MethodInfo *)0x0);
    local_e8.m_Mode = (pUVar11->fields).m_Mode;
    local_e8._4_4_ = *(undefined4 *)&(pUVar11->fields).field_0x4;
    local_e8.m_GradientMin = (pUVar11->fields).m_GradientMin;
    local_e8.m_GradientMax = (pUVar11->fields).m_GradientMax;
    local_e8.m_ColorMin.fields.r = (pUVar11->fields).m_ColorMin.fields.r;
    local_e8.m_ColorMin.fields.g = (pUVar11->fields).m_ColorMin.fields.g;
    local_e8.m_ColorMin.fields.b = (pUVar11->fields).m_ColorMin.fields.b;
    local_e8.m_ColorMin.fields.a = (pUVar11->fields).m_ColorMin.fields.a;
    local_e8.m_ColorMax.fields.r = (pUVar11->fields).m_ColorMax.fields.r;
    local_e8.m_ColorMax.fields.g = (pUVar11->fields).m_ColorMax.fields.g;
    local_e8.m_ColorMax.fields.b = (pUVar11->fields).m_ColorMax.fields.b;
    local_e8.m_ColorMax.fields.a = (pUVar11->fields).m_ColorMax.fields.a;
    UnityEngine_ParticleSystem_MainModule__set_startColor
              (local_res8,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_e8,(MethodInfo *)0x0);
  }
  if (1 < (uint)settings->max_length) {
    pIVar7 = settings->m_Items[1];
    if (pIVar7 == (Il2CppObject *)0x0) {
label_181e77be4:
      ThrowNullReferenceException();
    }
    if ((pIVar7->klass->_1).element_class != (TypeInfo_Projectiles_TSKillType->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar7,TypeInfo_Projectiles_TSKillType);
    }
    piVar12 = il2cpp_object_unbox(pIVar7);
    (__this->fields)._killType = *piVar12;
    uVar4 = (uint)settings->max_length;
    if (((int)uVar4 < 3) || (2 < uVar4)) {
      return;
    }
  }
label_181e77bcc:
  ThrowIndexOutOfRangeException();
}


// Effects.ThunderspearExplodeEffect$$PlayAudio
// il2cpp: void Effects_ThunderspearExplodeEffect__PlayAudio (Effects_ThunderspearExplodeEffect_o* __this, const MethodInfo* method);
// 0x181e773a0

void Effects_ThunderspearExplodeEffect__PlayAudio
               (Effects_ThunderspearExplodeEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  UnityEngine_AudioSource_o *__this_00;
  int32_t local_res8 [8];
  
  if (Il2CppMethodInitialized_184344f64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&"TSHitTitan{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"TSKill{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"TSAir{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"TSArmor{0}");
    Il2CppMethodInitialized_184344f64 = '\x01';
  }
  switch((__this->fields)._killType) {
  case 0:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,3,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar3 = System_String__Format("TSAir{0}",pIVar2,(MethodInfo *)0x0);
    if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar1 = UnityEngine_Transform__Find(pUVar1,pSVar3,(MethodInfo *)0x0),
        pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
       , __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
      ThrowNullReferenceException();
    }
    break;
  case 1:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,3,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar3 = System_String__Format("TSHitTitan{0}",pIVar2,(MethodInfo *)0x0);
    if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar1 = UnityEngine_Transform__Find(pUVar1,pSVar3,(MethodInfo *)0x0),
        pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
       , __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
      ThrowNullReferenceException();
    }
    break;
  case 2:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,3,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar3 = System_String__Format("TSKill{0}",pIVar2,(MethodInfo *)0x0);
    if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar1 = UnityEngine_Transform__Find(pUVar1,pSVar3,(MethodInfo *)0x0),
        pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
       , __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
      ThrowNullReferenceException();
    }
    break;
  case 3:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,3,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar3 = System_String__Format("TSArmor{0}",pIVar2,(MethodInfo *)0x0);
    if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar1 = UnityEngine_Transform__Find(pUVar1,pSVar3,(MethodInfo *)0x0),
        pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
       , __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
      ThrowNullReferenceException();
    }
    break;
  case 4:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,3,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar3 = System_String__Format("TSKill{0}",pIVar2,(MethodInfo *)0x0);
    if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar1 = UnityEngine_Transform__Find(pUVar1,pSVar3,(MethodInfo *)0x0),
        pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
       , __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
      ThrowNullReferenceException();
    }
    break;
  case 5:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,3,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar3 = System_String__Format("TSArmor{0}",pIVar2,(MethodInfo *)0x0);
    if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar1 = UnityEngine_Transform__Find(pUVar1,pSVar3,(MethodInfo *)0x0),
        pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
       , __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
      ThrowNullReferenceException();
    }
    break;
  default:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_res8[0] = UnityEngine_Random__RandomRangeInt(1,3,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar3 = System_String__Format("TSAir{0}",pIVar2,(MethodInfo *)0x0);
    if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar1 = UnityEngine_Transform__Find(pUVar1,pSVar3,(MethodInfo *)0x0),
        pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
       , __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
      ThrowNullReferenceException();
    }
  }
  UnityEngine_AudioSource__Play_2eb4470(__this_00,(MethodInfo *)0x0);
  return;
}


// Effects.ThunderspearExplodeEffect$$.ctor
// il2cpp: void Effects_ThunderspearExplodeEffect___ctor (Effects_ThunderspearExplodeEffect_o* __this, const MethodInfo* method);
// 0x180528540

void
Effects_ThunderspearExplodeEffect___ctor(Effects_ThunderspearExplodeEffect_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.ThunderspearExplodeEffect$$.cctor
// il2cpp: void Effects_ThunderspearExplodeEffect___cctor (const MethodInfo* method);
// 0x181e77bf0

void Effects_ThunderspearExplodeEffect___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ThunderspearExplodeEffect);
    Il2CppMethodInitialized_184344f65 = '\x01';
  }
  TypeInfo_Effects_ThunderspearExplodeEffect->static_fields->SizeMultiplier = 1.1;
  return;
}


