// Type: PatreonEffects.NameEffectPresets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectPresets.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectPresets$$GetPreset
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__GetPreset (int32_t type, const MethodInfo* method);
// 0x59bfa10

PatreonEffects_NameEffectSettings_o *
PatreonEffects_NameEffectPresets__GetPreset(int32_t type,MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *pPVar1;
  undefined4 in_register_0000003c;
  PatreonEffects_NameEffectSettings_c **method_00;
  
  method_00 = (PatreonEffects_NameEffectSettings_c **)CONCAT44(in_register_0000003c,type);
  if (g_data_07545bfd == '\0') {
    method_00 = &TypeInfo_PatreonEffects_NameEffectSettings;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    g_data_07545bfd = '\x01';
  }
  switch(type) {
  case 1:
    if (Il2CppMethodInitialized_07545bff == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_07545bff = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    (pPVar1->fields).gradientA.fields.r = 0.78;
    (pPVar1->fields).gradientA.fields.g = 1.0;
    (pPVar1->fields).gradientA.fields.b = 0.9;
    (pPVar1->fields).gradientA.fields.a = 1.0;
    (pPVar1->fields).gradientB.fields.r = 0.64;
    (pPVar1->fields).gradientB.fields.g = 0.95;
    (pPVar1->fields).gradientB.fields.b = 1.0;
    (pPVar1->fields).gradientB.fields.a = 1.0;
    (pPVar1->fields).gradientC.fields.r = 0.86;
    (pPVar1->fields).gradientC.fields.g = 0.76;
    (pPVar1->fields).gradientC.fields.b = 1.0;
    (pPVar1->fields).gradientC.fields.a = 1.0;
    (pPVar1->fields).gradientD.fields.r = 1.0;
    (pPVar1->fields).gradientD.fields.g = 0.96;
    (pPVar1->fields).gradientD.fields.b = 0.82;
    (pPVar1->fields).gradientD.fields.a = 1.0;
    (pPVar1->fields).gradientScale = 2.8;
    (pPVar1->fields).gradientSpeed = 0.16;
    (pPVar1->fields).glow = 1.35;
    (pPVar1->fields).scanlineStrength = 0.12;
    (pPVar1->fields).scanlineDensity = 180.0;
    (pPVar1->fields).scanlineSpeed = 0.18;
    (pPVar1->fields).flickerStrength = 0.05;
    (pPVar1->fields).flickerSpeed = 18.0;
    (pPVar1->fields).softness = 1.0;
    (pPVar1->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar1->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    System_Object___ctor((Il2CppObject *)pPVar1,(MethodInfo *)0x0);
    return pPVar1;
  case 2:
    pPVar1 = PatreonEffects_NameEffectPresets__Shimmer((MethodInfo *)method_00);
    return pPVar1;
  case 3:
    pPVar1 = PatreonEffects_NameEffectPresets__Pop((MethodInfo *)method_00);
    return pPVar1;
  case 4:
    pPVar1 = PatreonEffects_NameEffectPresets__Ember((MethodInfo *)method_00);
    return pPVar1;
  case 5:
    pPVar1 = PatreonEffects_NameEffectPresets__Waves((MethodInfo *)method_00);
    return pPVar1;
  case 6:
    pPVar1 = PatreonEffects_NameEffectPresets__Electric((MethodInfo *)method_00);
    return pPVar1;
  case 7:
    pPVar1 = PatreonEffects_NameEffectPresets__Outline((MethodInfo *)method_00);
    return pPVar1;
  default:
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    (pPVar1->fields).gradientA.fields.r = 0.78;
    (pPVar1->fields).gradientA.fields.g = 1.0;
    (pPVar1->fields).gradientA.fields.b = 0.9;
    (pPVar1->fields).gradientA.fields.a = 1.0;
    (pPVar1->fields).gradientB.fields.r = 0.64;
    (pPVar1->fields).gradientB.fields.g = 0.95;
    (pPVar1->fields).gradientB.fields.b = 1.0;
    (pPVar1->fields).gradientB.fields.a = 1.0;
    (pPVar1->fields).gradientC.fields.r = 0.86;
    (pPVar1->fields).gradientC.fields.g = 0.76;
    (pPVar1->fields).gradientC.fields.b = 1.0;
    (pPVar1->fields).gradientC.fields.a = 1.0;
    (pPVar1->fields).gradientD.fields.r = 1.0;
    (pPVar1->fields).gradientD.fields.g = 0.96;
    (pPVar1->fields).gradientD.fields.b = 0.82;
    (pPVar1->fields).gradientD.fields.a = 1.0;
    (pPVar1->fields).gradientScale = 2.8;
    (pPVar1->fields).gradientSpeed = 0.16;
    (pPVar1->fields).glow = 1.35;
    (pPVar1->fields).scanlineStrength = 0.12;
    (pPVar1->fields).scanlineDensity = 180.0;
    (pPVar1->fields).scanlineSpeed = 0.18;
    (pPVar1->fields).flickerStrength = 0.05;
    (pPVar1->fields).flickerSpeed = 18.0;
    (pPVar1->fields).softness = 1.0;
    (pPVar1->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar1->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    System_Object___ctor((Il2CppObject *)pPVar1,(MethodInfo *)0x0);
    (pPVar1->fields).glow = 1.0;
    (pPVar1->fields).scanlineStrength = 0.0;
    (pPVar1->fields).flickerStrength = 0.0;
    return pPVar1;
  }
}


// PatreonEffects.NameEffectPresets$$TryResolve
// il2cpp: bool PatreonEffects_NameEffectPresets__TryResolve (System_String_o* raw, int32_t* type, const MethodInfo* method);
// 0x59befc0

bool PatreonEffects_NameEffectPresets__TryResolve(System_String_o *raw,int32_t *type,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07545bfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545bfe = '\x01';
  }
  local_1c = 0;
  *type = 0;
  bVar2 = false;
  bVar1 = System_String__IsNullOrWhiteSpace(raw,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar2 = false;
    bVar1 = System_String__op_Equality(raw,"None",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_52ffe30(raw,"Wave",5,(MethodInfo *)0x0);
      iVar3 = 5;
      if (!bVar1) {
        if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556760);
        }
        method_00 = (MethodInfo *)0x1;
        bVar1 = System_Enum__TryParse_Int32Enum__34dc6f0
                          (raw,true,&local_1c,
                           (MethodInfo_34DC6F0 *)MethodInfo_System_Enum_TryParse_NameEffectType);
        if ((!bVar1) || (iVar3 = local_1c, 6 < local_1c - 1U)) {
          bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect(raw,method_00);
          iVar3 = 1;
          if (!bVar1) {
            return false;
          }
        }
      }
      *type = iVar3;
      bVar2 = true;
    }
  }
  return bVar2;
}


// PatreonEffects.NameEffectPresets$$IsSupportedEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsSupportedEffect (int32_t type, const MethodInfo* method);
// 0x59c5fd0

bool PatreonEffects_NameEffectPresets__IsSupportedEffect(int32_t type,MethodInfo *method)

{
  return type - 1U < 7;
}


// PatreonEffects.NameEffectPresets$$Holographic
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Holographic (const MethodInfo* method);
// 0x59c35c0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Holographic(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545bff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545bff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return __this;
}


// PatreonEffects.NameEffectPresets$$Shimmer
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Shimmer (const MethodInfo* method);
// 0x59c5a50

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Shimmer(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545c00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545c00 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).effectMode = 2;
  (__this->fields).gradientA.fields.r = 0.95;
  (__this->fields).gradientA.fields.g = 0.58;
  (__this->fields).gradientA.fields.b = 0.12;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 1.0;
  (__this->fields).gradientB.fields.g = 0.86;
  (__this->fields).gradientB.fields.b = 0.32;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 1.0;
  (__this->fields).gradientC.fields.g = 0.95;
  (__this->fields).gradientC.fields.b = 0.58;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 0.95;
  (__this->fields).gradientD.fields.g = 0.58;
  (__this->fields).gradientD.fields.b = 0.12;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientSpeed = 0.18;
  (__this->fields).glow = 0.88;
  (__this->fields).scanlineStrength = 0.32;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.0;
  (__this->fields).softness = 0.9;
  return __this;
}


// PatreonEffects.NameEffectPresets$$Pop
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Pop (const MethodInfo* method);
// 0x59c5b40

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Pop(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545c01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545c01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).effectMode = 1;
  (__this->fields).gradientA.fields.r = 1.0;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 1.0;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.88;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.07;
  (__this->fields).gradientC.fields.g = 0.08;
  (__this->fields).gradientC.fields.b = 0.13;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 0.92;
  (__this->fields).gradientD.fields.g = 0.02;
  (__this->fields).gradientD.fields.b = 0.29;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 1.0;
  (__this->fields).gradientSpeed = 0.0;
  (__this->fields).glow = 1.0;
  (__this->fields).scanlineStrength = 0.0;
  (__this->fields).flickerStrength = 0.0;
  (__this->fields).softness = 0.85;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  return __this;
}


// PatreonEffects.NameEffectPresets$$Ember
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Ember (const MethodInfo* method);
// 0x59c5c30

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Ember(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545c02 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).effectMode = 3;
  (__this->fields).gradientA.fields.r = 0.72;
  (__this->fields).gradientA.fields.g = 0.08;
  (__this->fields).gradientA.fields.b = 0.02;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 1.0;
  (__this->fields).gradientB.fields.g = 0.36;
  (__this->fields).gradientB.fields.b = 0.04;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 1.0;
  (__this->fields).gradientC.fields.g = 0.86;
  (__this->fields).gradientC.fields.b = 0.18;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.45;
  (__this->fields).gradientD.fields.b = 0.08;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 1.15;
  (__this->fields).gradientSpeed = 0.42;
  (__this->fields).glow = 0.38;
  (__this->fields).scanlineStrength = 0.48;
  (__this->fields).scanlineDensity = 11.0;
  (__this->fields).scanlineSpeed = 0.46;
  (__this->fields).flickerStrength = 0.12;
  (__this->fields).flickerSpeed = 9.0;
  (__this->fields).softness = 0.92;
  return __this;
}


// PatreonEffects.NameEffectPresets$$Waves
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Waves (const MethodInfo* method);
// 0x59c5d20

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Waves(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545c03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545c03 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).effectMode = 4;
  (__this->fields).gradientA.fields.r = 0.05;
  (__this->fields).gradientA.fields.g = 0.34;
  (__this->fields).gradientA.fields.b = 0.76;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.08;
  (__this->fields).gradientB.fields.g = 0.74;
  (__this->fields).gradientB.fields.b = 0.92;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.72;
  (__this->fields).gradientC.fields.g = 0.96;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 0.18;
  (__this->fields).gradientD.fields.g = 0.86;
  (__this->fields).gradientD.fields.b = 1.0;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 0.8;
  (__this->fields).gradientSpeed = 0.18;
  (__this->fields).glow = 0.42;
  (__this->fields).scanlineStrength = 0.24;
  (__this->fields).scanlineDensity = 8.0;
  (__this->fields).scanlineSpeed = 0.2;
  (__this->fields).flickerStrength = 0.0;
  (__this->fields).softness = 0.95;
  return __this;
}


// PatreonEffects.NameEffectPresets$$Electric
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Electric (const MethodInfo* method);
// 0x59c5e10

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Electric(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545c04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545c04 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).effectMode = 5;
  (__this->fields).gradientA.fields.r = 0.08;
  (__this->fields).gradientA.fields.g = 0.28;
  (__this->fields).gradientA.fields.b = 1.0;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.08;
  (__this->fields).gradientB.fields.g = 0.94;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 1.0;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 0.24;
  (__this->fields).gradientD.fields.g = 0.72;
  (__this->fields).gradientD.fields.b = 1.0;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 1.35;
  (__this->fields).gradientSpeed = 0.76;
  (__this->fields).glow = 0.68;
  (__this->fields).scanlineStrength = 0.36;
  (__this->fields).scanlineDensity = 18.0;
  (__this->fields).scanlineSpeed = 0.82;
  (__this->fields).flickerStrength = 0.18;
  (__this->fields).flickerSpeed = 16.0;
  (__this->fields).softness = 0.82;
  return __this;
}


// PatreonEffects.NameEffectPresets$$Outline
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Outline (const MethodInfo* method);
// 0x59c5f00

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Outline(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_07545c05 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).effectMode = 6;
  (__this->fields).gradientA.fields.r = 1.0;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 1.0;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 1.0;
  (__this->fields).gradientB.fields.g = 1.0;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 1.0;
  (__this->fields).gradientC.fields.g = 1.0;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 0.92;
  (__this->fields).gradientD.fields.g = 0.02;
  (__this->fields).gradientD.fields.b = 0.29;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 1.0;
  (__this->fields).gradientSpeed = 0.0;
  (__this->fields).glow = 0.42;
  (__this->fields).scanlineStrength = 0.0;
  (__this->fields).flickerStrength = 0.0;
  (__this->fields).softness = 0.86;
  return __this;
}


// PatreonEffects.NameEffectPresets$$IsLegacyEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsLegacyEffect (System_String_o* raw, const MethodInfo* method);
// 0x59c5fe0

bool PatreonEffects_NameEffectPresets__IsLegacyEffect(System_String_o *raw,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07545c06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"GradientScroll");
    il2cpp_codegen_initialize_runtime_metadata(&"Toxic");
    il2cpp_codegen_initialize_runtime_metadata(&"Electric");
    il2cpp_codegen_initialize_runtime_metadata(&"Frost");
    il2cpp_codegen_initialize_runtime_metadata(&"Cosmic");
    il2cpp_codegen_initialize_runtime_metadata(&"Matrix");
    il2cpp_codegen_initialize_runtime_metadata(&"AnimatedOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"CRT");
    il2cpp_codegen_initialize_runtime_metadata(&"Ember");
    il2cpp_codegen_initialize_runtime_metadata(&"Sparkle");
    Il2CppMethodInitialized_07545c06 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(raw,(MethodInfo *)0x0);
  if (uVar2 < 0x73ce5e6e) {
    if (uVar2 < 0x2c96ccf5) {
      if (uVar2 == 0x58972d5) {
        ppSVar3 = &"Sparkle";
      }
      else {
        if (uVar2 != 0x2c96ccf4) {
          return false;
        }
        ppSVar3 = &"Wave";
      }
    }
    else if (uVar2 == 0x5b778507) {
      ppSVar3 = &"Cosmic";
    }
    else if (uVar2 == 0x624dcb4c) {
      ppSVar3 = &"GradientScroll";
    }
    else {
      if (uVar2 != 0x73ce5e6d) {
        return false;
      }
      ppSVar3 = &"Frost";
    }
  }
  else if (uVar2 < 0x9ce98adb) {
    if (uVar2 == 0x8568fbde) {
      ppSVar3 = &"Electric";
    }
    else if (uVar2 == 0x9ce98ada) {
      ppSVar3 = &"AnimatedOutline";
    }
    else {
      if (uVar2 != 0x771f5d5c) {
        return false;
      }
      ppSVar3 = &"CRT";
    }
  }
  else if (uVar2 == 0xbf0f8b8c) {
    ppSVar3 = &"Toxic";
  }
  else if (uVar2 == 0xd2c95de4) {
    ppSVar3 = &"Ember";
  }
  else {
    if (uVar2 != 0xe9d1810c) {
      return false;
    }
    ppSVar3 = &"Matrix";
  }
  bVar1 = System_String__op_Equality(raw,*ppSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  return false;
}


