// Type: Effects.ThunderspearExplodeEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Effects/ThunderspearExplodeEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/ThunderspearExplodeEffect.cs
// --------------------------------

// Effects.ThunderspearExplodeEffect$$Setup
// il2cpp: void Effects_ThunderspearExplodeEffect__Setup (Effects_ThunderspearExplodeEffect_o* __this, Photon_Realtime_Player_o* owner, float liveTime, System_Object_array* settings, const MethodInfo* method);
// 0x595e350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595e4e9: jmp 0x595e719

void Effects_ThunderspearExplodeEffect__Setup
               (Effects_ThunderspearExplodeEffect_o *__this,Photon_Realtime_Player_o *owner,float liveTime,
               System_Object_array *settings,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Settings_AbilitySettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Il2CppObject *pIVar8;
  Projectiles_ThunderspearProjectile_StaticFields *pPVar9;
  UnityEngine_ParticleSystem_MinMaxGradient_o value;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_ParticleSystem_MainModule_o main;
  undefined8 *puVar11;
  int32_t *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o color;
  UnityEngine_ParticleSystem_MainModule_o UStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_68;
  
  if (Il2CppMethodInitialized_07545904 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_TSKillType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ThunderspearExplodeEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"OldExplodeEffect");
    Il2CppMethodInitialized_07545904 = '\x01';
  }
  UStack_90.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  (__this->fields)._timeLeft = liveTime;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if ((pSVar6 == (Settings_AbilitySettings_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).UseOldEffect, pSVar7 == (Settings_BoolSetting_o *)0x0)) goto label_0595e719;
  if ((pSVar7->fields)._value == false) {
    if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto label_0595e719;
    main = UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Effects_ThunderspearExplodeEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_ThunderspearExplodeEffect);
    }
    fVar13 = TypeInfo_Effects_ThunderspearExplodeEffect->static_fields->SizeMultiplier;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    Utility_Util__ScaleParticleStartSize(main,fVar13,(MethodInfo *)0x0);
  }
  else {
    if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto label_0595e719;
    UnityEngine_ParticleSystem__Stop_69c2810(__this_00,(MethodInfo *)0x0);
    UnityEngine_ParticleSystem__Clear_69c2960(__this_00,(MethodInfo *)0x0);
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((((pUVar10 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar10 = UnityEngine_Transform__Find(pUVar10,"OldExplodeEffect",(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
        (__this_00 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar10,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem),
        __this_00 == (UnityEngine_ParticleSystem_o *)0x0)) ||
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_0595e719;
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
  }
  if (settings == (System_Object_array *)0x0) goto label_0595e719;
  if ((int)settings->max_length == 0) goto label_0595e71e;
  pIVar8 = settings->m_Items[0];
  if (pIVar8 == (Il2CppObject *)0x0) goto label_0595e719;
  if ((pIVar8->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) goto label_0595e723;
  puVar11 = il2cpp_vm_Object_Unbox(pIVar8);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if ((pSVar6 == (Settings_AbilitySettings_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).ShowBombColors, pSVar7 == (Settings_BoolSetting_o *)0x0)) goto label_0595e719;
  uVar3 = *puVar11;
  uStack_78 = puVar11[1];
  fVar13 = (float)((ulong)uStack_78 >> 0x20);
  uStack_70 = 0;
  if ((pSVar7->fields)._value == false) {
    if ((TypeInfo_Projectiles_ThunderspearProjectile->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile);
      fVar13 = uStack_78._4_4_;
    }
    pPVar9 = TypeInfo_Projectiles_ThunderspearProjectile->static_fields;
    uVar1 = (pPVar9->CritColor).fields.r;
    uVar4 = (pPVar9->CritColor).fields.g;
    uVar2 = (pPVar9->CritColor).fields.b;
    uVar5 = (pPVar9->CritColor).fields.a;
    fVar14 = (float)uVar3 - (float)uVar1;
    fVar15 = (float)((ulong)uVar3 >> 0x20) - (float)uVar4;
    if ((fVar13 - (float)uVar5) * (fVar13 - (float)uVar5) +
        fVar15 * fVar15 + fVar14 * fVar14 +
        ((float)uStack_78 - (float)uVar2) * ((float)uStack_78 - (float)uVar2) < 9.9999994e-11)
    goto label_0595e64b;
  }
  else {
label_0595e64b:
    fStack_88 = fVar13;
    fStack_84 = fVar13;
    fStack_80 = fVar13;
    fStack_7c = fVar13;
    UStack_90 = UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
    fVar13 = fStack_88;
    if (fStack_88 <= 0.5) {
      fVar13 = 0.5;
    }
    color.fields.a = fVar13;
    color.fields.b = (float)uStack_78;
    color.fields.r = (float)(int)uVar3;
    color.fields.g = (float)(int)((ulong)uVar3 >> 0x20);
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
              ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&UStack_68,color,(MethodInfo *)0x0);
    value.fields.m_GradientMin = UStack_68.m_GradientMin;
    value.fields.m_Mode = UStack_68.m_Mode;
    value.fields._4_4_ = UStack_68._4_4_;
    value.fields.m_GradientMax = UStack_68.m_GradientMax;
    value.fields.m_ColorMin.fields.r = UStack_68.m_ColorMin.fields.r;
    value.fields.m_ColorMin.fields.g = UStack_68.m_ColorMin.fields.g;
    value.fields.m_ColorMin.fields.b = UStack_68.m_ColorMin.fields.b;
    value.fields.m_ColorMin.fields.a = UStack_68.m_ColorMin.fields.a;
    value.fields.m_ColorMax.fields.r = UStack_68.m_ColorMax.fields.r;
    value.fields.m_ColorMax.fields.g = UStack_68.m_ColorMax.fields.g;
    value.fields.m_ColorMax.fields.b = UStack_68.m_ColorMax.fields.b;
    value.fields.m_ColorMax.fields.a = UStack_68.m_ColorMax.fields.a;
    UnityEngine_ParticleSystem_MainModule__set_startColor(&UStack_90,value,(MethodInfo *)0x0);
  }
  if ((settings->max_length & 0xfffffffe) == 0) {
label_0595e71e:
    ThrowIndexOutOfRangeException();
  }
  pIVar8 = settings->m_Items[1];
  if (pIVar8 != (Il2CppObject *)0x0) {
    if ((pIVar8->klass->_1).element_class == (TypeInfo_Projectiles_TSKillType->_1).element_class) {
      piVar12 = il2cpp_vm_Object_Unbox(pIVar8);
      (__this->fields)._killType = *piVar12;
      return;
    }
label_0595e723:
    il2cpp_codegen_raise_invalid_cast_exception();
  }
label_0595e719:
  ThrowNullReferenceException();
}


// Effects.ThunderspearExplodeEffect$$PlayAudio
// il2cpp: void Effects_ThunderspearExplodeEffect__PlayAudio (Effects_ThunderspearExplodeEffect_o* __this, const MethodInfo* method);
// 0x595e730

void Effects_ThunderspearExplodeEffect__PlayAudio
               (Effects_ThunderspearExplodeEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Il2CppObject *arg0;
  System_String_o *n;
  UnityEngine_AudioSource_o *__this_00;
  System_String_o **ppSVar2;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_07545905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&"TSHitTitan{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"TSKill{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"TSAir{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"TSArmor{0}");
    Il2CppMethodInitialized_07545905 = '\x01';
  }
  switch((__this->fields)._killType) {
  default:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_c = UnityEngine_Random__Range_690e2b0(1,3,(MethodInfo *)0x0);
    arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
    ppSVar2 = &"TSAir{0}";
    break;
  case 1:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_c = UnityEngine_Random__Range_690e2b0(1,3,(MethodInfo *)0x0);
    arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
    ppSVar2 = &"TSHitTitan{0}";
    break;
  case 2:
  case 4:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_c = UnityEngine_Random__Range_690e2b0(1,3,(MethodInfo *)0x0);
    arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
    ppSVar2 = &"TSKill{0}";
    break;
  case 3:
  case 5:
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    local_c = UnityEngine_Random__Range_690e2b0(1,3,(MethodInfo *)0x0);
    arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
    ppSVar2 = &"TSArmor{0}";
  }
  n = System_String__Format(*ppSVar2,arg0,(MethodInfo *)0x0);
  if (((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
      (pUVar1 = UnityEngine_Transform__Find(pUVar1,n,(MethodInfo *)0x0),
      pUVar1 == (UnityEngine_Transform_o *)0x0)) ||
     (__this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar1,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource),
     __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__Play_68b06a0(__this_00,(MethodInfo *)0x0);
  return;
}


// Effects.ThunderspearExplodeEffect$$.ctor
// il2cpp: void Effects_ThunderspearExplodeEffect___ctor (Effects_ThunderspearExplodeEffect_o* __this, const MethodInfo* method);
// 0x595e8f0

void Effects_ThunderspearExplodeEffect___ctor(Effects_ThunderspearExplodeEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Effects.ThunderspearExplodeEffect$$.cctor
// il2cpp: void Effects_ThunderspearExplodeEffect___cctor (const MethodInfo* method);
// 0x595e900

void Effects_ThunderspearExplodeEffect___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_ThunderspearExplodeEffect);
    Il2CppMethodInitialized_07545906 = '\x01';
  }
  TypeInfo_Effects_ThunderspearExplodeEffect->static_fields->SizeMultiplier = 1.1;
  return;
}


