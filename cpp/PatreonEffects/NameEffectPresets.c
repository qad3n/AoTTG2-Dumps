// Type: PatreonEffects.NameEffectPresets
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectPresets.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectPresets$$GetPreset
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__GetPreset (int32_t type, const MethodInfo* method);
// 0x1820caf30

PatreonEffects_NameEffectSettings_o *
PatreonEffects_NameEffectPresets__GetPreset(int32_t type,MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *pPVar1;
  
  if (Il2CppMethodInitialized_184346967 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_184346967 = '\x01';
  }
  if (type == 1) {
    if (Il2CppMethodInitialized_184346969 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_184346969 = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    return pPVar1;
  }
  if (type == 2) {
    if (Il2CppMethodInitialized_18434696a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_18434696a = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar1->fields).effectMode = 2;
      (pPVar1->fields).gradientA.fields.r = 0.95;
      (pPVar1->fields).gradientA.fields.g = 0.58;
      (pPVar1->fields).gradientA.fields.b = 0.12;
      (pPVar1->fields).gradientA.fields.a = 1.0;
      (pPVar1->fields).gradientB.fields.r = 1.0;
      (pPVar1->fields).gradientB.fields.g = 0.86;
      (pPVar1->fields).gradientB.fields.b = 0.32;
      (pPVar1->fields).gradientB.fields.a = 1.0;
      (pPVar1->fields).gradientC.fields.r = 1.0;
      (pPVar1->fields).gradientC.fields.g = 0.95;
      (pPVar1->fields).gradientC.fields.b = 0.58;
      (pPVar1->fields).gradientC.fields.a = 1.0;
      (pPVar1->fields).gradientD.fields.r = 0.95;
      (pPVar1->fields).gradientD.fields.g = 0.58;
      (pPVar1->fields).gradientD.fields.b = 0.12;
      (pPVar1->fields).gradientD.fields.a = 1.0;
      (pPVar1->fields).gradientSpeed = 0.18;
      (pPVar1->fields).glow = 0.88;
      (pPVar1->fields).scanlineStrength = 0.32;
      (pPVar1->fields).scanlineSpeed = 0.18;
      (pPVar1->fields).flickerStrength = 0.0;
      (pPVar1->fields).softness = 0.9;
      return pPVar1;
    }
  }
  else if (type == 3) {
    if (Il2CppMethodInitialized_18434696b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_18434696b = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar1->fields).effectMode = 1;
      (pPVar1->fields).flickerStrength = 0.0;
      (pPVar1->fields).popExtrusionOffset.fields.x = 0.0;
      (pPVar1->fields).gradientA.fields.r = 1.0;
      (pPVar1->fields).gradientA.fields.g = 1.0;
      (pPVar1->fields).gradientA.fields.b = 1.0;
      (pPVar1->fields).gradientA.fields.a = 1.0;
      (pPVar1->fields).gradientB.fields.r = 0.88;
      (pPVar1->fields).gradientB.fields.g = 0.95;
      (pPVar1->fields).gradientB.fields.b = 1.0;
      (pPVar1->fields).gradientB.fields.a = 1.0;
      (pPVar1->fields).gradientC.fields.r = 0.07;
      (pPVar1->fields).gradientC.fields.g = 0.08;
      (pPVar1->fields).gradientC.fields.b = 0.13;
      (pPVar1->fields).gradientC.fields.a = 1.0;
      (pPVar1->fields).gradientD.fields.r = 0.92;
      (pPVar1->fields).gradientD.fields.g = 0.02;
      (pPVar1->fields).gradientD.fields.b = 0.29;
      (pPVar1->fields).gradientD.fields.a = 1.0;
      (pPVar1->fields).gradientScale = 1.0;
      (pPVar1->fields).gradientSpeed = 0.0;
      (pPVar1->fields).glow = 1.0;
      (pPVar1->fields).scanlineStrength = 0.0;
      (pPVar1->fields).softness = 0.85;
      (pPVar1->fields).popShadowOffset.fields.x = 0.0;
      (pPVar1->fields).popShadowOffset.fields.y = -1.5;
      (pPVar1->fields).popExtrusionOffset.fields.y = -6.0;
      return pPVar1;
    }
  }
  else if (type == 4) {
    if (Il2CppMethodInitialized_18434696c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_18434696c = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar1->fields).effectMode = 3;
      (pPVar1->fields).gradientA.fields.r = 0.72;
      (pPVar1->fields).gradientA.fields.g = 0.08;
      (pPVar1->fields).gradientA.fields.b = 0.02;
      (pPVar1->fields).gradientA.fields.a = 1.0;
      (pPVar1->fields).gradientB.fields.r = 1.0;
      (pPVar1->fields).gradientB.fields.g = 0.36;
      (pPVar1->fields).gradientB.fields.b = 0.04;
      (pPVar1->fields).gradientB.fields.a = 1.0;
      (pPVar1->fields).gradientC.fields.r = 1.0;
      (pPVar1->fields).gradientC.fields.g = 0.86;
      (pPVar1->fields).gradientC.fields.b = 0.18;
      (pPVar1->fields).gradientC.fields.a = 1.0;
      (pPVar1->fields).gradientD.fields.r = 1.0;
      (pPVar1->fields).gradientD.fields.g = 0.45;
      (pPVar1->fields).gradientD.fields.b = 0.08;
      (pPVar1->fields).gradientD.fields.a = 1.0;
      (pPVar1->fields).gradientScale = 1.15;
      (pPVar1->fields).gradientSpeed = 0.42;
      (pPVar1->fields).glow = 0.38;
      (pPVar1->fields).scanlineStrength = 0.48;
      (pPVar1->fields).scanlineDensity = 11.0;
      (pPVar1->fields).scanlineSpeed = 0.46;
      (pPVar1->fields).flickerStrength = 0.12;
      (pPVar1->fields).flickerSpeed = 9.0;
      (pPVar1->fields).softness = 0.92;
      return pPVar1;
    }
  }
  else if (type == 5) {
    if (Il2CppMethodInitialized_18434696d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_18434696d = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar1->fields).effectMode = 4;
      (pPVar1->fields).gradientA.fields.r = 0.05;
      (pPVar1->fields).gradientA.fields.g = 0.34;
      (pPVar1->fields).gradientA.fields.b = 0.76;
      (pPVar1->fields).gradientA.fields.a = 1.0;
      (pPVar1->fields).gradientB.fields.r = 0.08;
      (pPVar1->fields).gradientB.fields.g = 0.74;
      (pPVar1->fields).gradientB.fields.b = 0.92;
      (pPVar1->fields).gradientB.fields.a = 1.0;
      (pPVar1->fields).gradientC.fields.r = 0.72;
      (pPVar1->fields).gradientC.fields.g = 0.96;
      (pPVar1->fields).gradientC.fields.b = 1.0;
      (pPVar1->fields).gradientC.fields.a = 1.0;
      (pPVar1->fields).gradientD.fields.r = 0.18;
      (pPVar1->fields).gradientD.fields.g = 0.86;
      (pPVar1->fields).gradientD.fields.b = 1.0;
      (pPVar1->fields).gradientD.fields.a = 1.0;
      (pPVar1->fields).gradientScale = 0.8;
      (pPVar1->fields).gradientSpeed = 0.18;
      (pPVar1->fields).glow = 0.42;
      (pPVar1->fields).scanlineStrength = 0.24;
      (pPVar1->fields).scanlineDensity = 8.0;
      (pPVar1->fields).scanlineSpeed = 0.2;
      (pPVar1->fields).flickerStrength = 0.0;
      (pPVar1->fields).softness = 0.95;
      return pPVar1;
    }
  }
  else if (type == 6) {
    if (Il2CppMethodInitialized_18434696e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_18434696e = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar1->fields).effectMode = 5;
      (pPVar1->fields).gradientA.fields.r = 0.08;
      (pPVar1->fields).gradientA.fields.g = 0.28;
      (pPVar1->fields).gradientA.fields.b = 1.0;
      (pPVar1->fields).gradientA.fields.a = 1.0;
      (pPVar1->fields).gradientB.fields.r = 0.08;
      (pPVar1->fields).gradientB.fields.g = 0.94;
      (pPVar1->fields).gradientB.fields.b = 1.0;
      (pPVar1->fields).gradientB.fields.a = 1.0;
      (pPVar1->fields).gradientC.fields.r = 0.86;
      (pPVar1->fields).gradientC.fields.g = 1.0;
      (pPVar1->fields).gradientC.fields.b = 1.0;
      (pPVar1->fields).gradientC.fields.a = 1.0;
      (pPVar1->fields).gradientD.fields.r = 0.24;
      (pPVar1->fields).gradientD.fields.g = 0.72;
      (pPVar1->fields).gradientD.fields.b = 1.0;
      (pPVar1->fields).gradientD.fields.a = 1.0;
      (pPVar1->fields).gradientScale = 1.35;
      (pPVar1->fields).gradientSpeed = 0.76;
      (pPVar1->fields).glow = 0.68;
      (pPVar1->fields).scanlineStrength = 0.36;
      (pPVar1->fields).scanlineDensity = 18.0;
      (pPVar1->fields).scanlineSpeed = 0.82;
      (pPVar1->fields).flickerStrength = 0.18;
      (pPVar1->fields).flickerSpeed = 16.0;
      (pPVar1->fields).softness = 0.82;
      return pPVar1;
    }
  }
  else if (type == 7) {
    if (Il2CppMethodInitialized_18434696f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
      Il2CppMethodInitialized_18434696f = '\x01';
    }
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar1->fields).effectMode = 6;
      (pPVar1->fields).flickerStrength = 0.0;
      (pPVar1->fields).gradientA.fields.r = 1.0;
      (pPVar1->fields).gradientA.fields.g = 1.0;
      (pPVar1->fields).gradientA.fields.b = 1.0;
      (pPVar1->fields).gradientA.fields.a = 1.0;
      (pPVar1->fields).gradientB.fields.r = 1.0;
      (pPVar1->fields).gradientB.fields.g = 1.0;
      (pPVar1->fields).gradientB.fields.b = 1.0;
      (pPVar1->fields).gradientB.fields.a = 1.0;
      (pPVar1->fields).gradientC.fields.r = 1.0;
      (pPVar1->fields).gradientC.fields.g = 1.0;
      (pPVar1->fields).gradientC.fields.b = 1.0;
      (pPVar1->fields).gradientC.fields.a = 1.0;
      (pPVar1->fields).gradientD.fields.r = 0.92;
      (pPVar1->fields).gradientD.fields.g = 0.02;
      (pPVar1->fields).gradientD.fields.b = 0.29;
      (pPVar1->fields).gradientD.fields.a = 1.0;
      (pPVar1->fields).gradientScale = 1.0;
      (pPVar1->fields).gradientSpeed = 0.0;
      (pPVar1->fields).glow = 0.42;
      (pPVar1->fields).scanlineStrength = 0.0;
      (pPVar1->fields).softness = 0.86;
      return pPVar1;
    }
  }
  else {
    pPVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
    PatreonEffects_NameEffectSettings___ctor(pPVar1,(MethodInfo *)0x0);
    if (pPVar1 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar1->fields).glow = 1.0;
      (pPVar1->fields).scanlineStrength = 0.0;
      (pPVar1->fields).flickerStrength = 0.0;
      return pPVar1;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectPresets$$TryResolve
// il2cpp: bool PatreonEffects_NameEffectPresets__TryResolve (System_String_o* raw, int32_t* type, const MethodInfo* method);
// 0x1820cbac0

bool PatreonEffects_NameEffectPresets__TryResolve(System_String_o *raw,int32_t *type,MethodInfo *method)

{
  bool bVar1;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346968 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346968 = '\x01';
  }
  local_res8[0] = 0;
  *type = 0;
  bVar1 = System_String__IsNullOrWhiteSpace(raw,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(raw,"None",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_196c550(raw,"Wave",5,(MethodInfo *)0x0);
      if (bVar1) {
        *type = 5;
        return true;
      }
      if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e58);
      }
      bVar1 = System_Enum__TryParse_Int32Enum__6b1ce0
                        (raw,true,local_res8,
                         (MethodInfo_6B1CE0 *)MethodInfo_System_Enum_TryParse_NameEffectType);
      if ((bVar1) && (local_res8[0] - 1U < 7)) {
        *type = local_res8[0];
        return true;
      }
      bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect(raw,(MethodInfo *)0x0);
      if (bVar1) {
        *type = 1;
        return true;
      }
    }
  }
  return false;
}


// PatreonEffects.NameEffectPresets$$IsSupportedEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsSupportedEffect (int32_t type, const MethodInfo* method);
// 0x1820cb7c0

bool PatreonEffects_NameEffectPresets__IsSupportedEffect(int32_t type,MethodInfo *method)

{
  if (type - 1U < 6) {
    return true;
  }
  return type == 7;
}


// PatreonEffects.NameEffectPresets$$Holographic
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Holographic (const MethodInfo* method);
// 0x1820cb5b0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Holographic(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_184346969 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_184346969 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  return __this;
}


// PatreonEffects.NameEffectPresets$$Shimmer
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Shimmer (const MethodInfo* method);
// 0x1820cb9d0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Shimmer(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_18434696a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_18434696a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
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
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectPresets$$Pop
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Pop (const MethodInfo* method);
// 0x1820cb8d0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Pop(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_18434696b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_18434696b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (__this->fields).effectMode = 1;
    (__this->fields).flickerStrength = 0.0;
    (__this->fields).popExtrusionOffset.fields.x = 0.0;
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
    (__this->fields).softness = 0.85;
    (__this->fields).popShadowOffset.fields.x = 0.0;
    (__this->fields).popShadowOffset.fields.y = -1.5;
    (__this->fields).popExtrusionOffset.fields.y = -6.0;
    return __this;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectPresets$$Ember
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Ember (const MethodInfo* method);
// 0x1820cae20

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Ember(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_18434696c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_18434696c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
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
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectPresets$$Waves
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Waves (const MethodInfo* method);
// 0x1820cbbe0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Waves(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_18434696d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_18434696d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
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
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectPresets$$Electric
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Electric (const MethodInfo* method);
// 0x1820cad10

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Electric(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_18434696e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_18434696e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
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
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectPresets$$Outline
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Outline (const MethodInfo* method);
// 0x1820cb7e0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Outline(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_18434696f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_18434696f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (__this->fields).effectMode = 6;
    (__this->fields).flickerStrength = 0.0;
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
    (__this->fields).softness = 0.86;
    return __this;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectPresets$$IsLegacyEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsLegacyEffect (System_String_o* raw, const MethodInfo* method);
// 0x1820cb600
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cb6c0: mov rdx, qword ptr [rip + 0x1faf899]  ; "Toxic"
// asm:   0x1820cb6c7: jmp 0x1820cb776
// asm:   0x1820cb6d3: mov rdx, qword ptr [rip + 0x1ff62be]  ; "Ember"
// asm:   0x1820cb6da: jmp 0x1820cb741
// asm:   0x1820cb6e3: mov rdx, qword ptr [rip + 0x1fa35a6]  ; "Matrix"
// asm:   0x1820cb6ea: jmp 0x1820cb741
// asm:   0x1820cb6f3: mov rdx, qword ptr [rip + 0x2010dce]  ; "CRT"
// asm:   0x1820cb6fa: jmp 0x1820cb741
// asm:   0x1820cb703: mov rdx, qword ptr [rip + 0x1ff430e]  ; "Electric"
// asm:   0x1820cb70a: jmp 0x1820cb741
// asm:   0x1820cb713: mov rdx, qword ptr [rip + 0x1fcf44e]  ; "AnimatedOutline"
// asm:   0x1820cb71a: jmp 0x1820cb741
// asm:   0x1820cb72a: mov rdx, qword ptr [rip + 0x1fba6cf]  ; "Cosmic"
// asm:   0x1820cb731: jmp 0x1820cb741
// asm:   0x1820cb73a: mov rdx, qword ptr [rip + 0x1fb08b7]  ; "GradientScroll"
// asm:   0x1820cb75f: mov rdx, qword ptr [rip + 0x202ac8a]  ; "Frost"
// asm:   0x1820cb766: jmp 0x1820cb741
// asm:   0x1820cb76f: mov rdx, qword ptr [rip + 0x1fdd17a]  ; "Sparkle"

bool PatreonEffects_NameEffectPresets__IsLegacyEffect(System_String_o *raw,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346970 == '\0') {
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
    Il2CppMethodInitialized_184346970 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(raw,(MethodInfo *)0x0);
  if (uVar2 < 0x73ce5e6e) {
    if (uVar2 < 0x2c96ccf5) {
      pSVar3 = "Sparkle";
      if (uVar2 != 0x58972d5) {
        if (uVar2 != 0x2c96ccf4) {
          return false;
        }
        bVar1 = System_String__op_Equality(raw,"Wave",(MethodInfo *)0x0);
        return bVar1;
      }
label_1820cb776:
      bVar1 = System_String__op_Equality(raw,pSVar3,(MethodInfo *)0x0);
      goto joined_r0x0001820cb74e;
    }
    pSVar3 = "Cosmic";
    if (((uVar2 != 0x5b778507) && (pSVar3 = "GradientScroll", uVar2 != 0x624dcb4c)) &&
       (pSVar3 = "Frost", uVar2 != 0x73ce5e6d)) {
      return false;
    }
  }
  else if (uVar2 < 0x9ce98adb) {
    pSVar3 = "CRT";
    if (((uVar2 != 0x771f5d5c) && (pSVar3 = "Electric", uVar2 != 0x8568fbde)) &&
       (pSVar3 = "AnimatedOutline", uVar2 != 0x9ce98ada)) {
      return false;
    }
  }
  else {
    pSVar3 = "Toxic";
    if (uVar2 == 0xbf0f8b8c) goto label_1820cb776;
    pSVar3 = "Ember";
    if ((uVar2 != 0xd2c95de4) && (pSVar3 = "Matrix", uVar2 != 0xe9d1810c)) {
      return false;
    }
  }
  bVar1 = System_String__op_Equality(raw,pSVar3,(MethodInfo *)0x0);
joined_r0x0001820cb74e:
  if (!bVar1) {
    return false;
  }
  return true;
}


