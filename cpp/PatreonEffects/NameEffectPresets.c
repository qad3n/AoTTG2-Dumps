// Type: PatreonEffects.NameEffectPresets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectPresets.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.NameEffectPresets$$GetPreset
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__GetPreset (int32_t type, const MethodInfo* method);
// 0x4037520

PatreonEffects_NameEffectSettings_o *
PatreonEffects_NameEffectPresets__GetPreset(int32_t type,MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *pPVar1;
  
  if (DAT_05704388 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_05704388 = '\x01';
  }
  switch(type) {
  case 1:
    if (DAT_0570438a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
      DAT_0570438a = '\x01';
    }
    pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
    if (DAT_0570438b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
      DAT_0570438b = '\x01';
    }
    pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
    if (pPVar1 == (PatreonEffects_NameEffectSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
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
  case 3:
    break;
  case 4:
    if (DAT_0570438d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
      DAT_0570438d = '\x01';
    }
    pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
    if (pPVar1 == (PatreonEffects_NameEffectSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
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
  case 5:
    if (DAT_0570438e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
      DAT_0570438e = '\x01';
    }
    pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
    if (pPVar1 == (PatreonEffects_NameEffectSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
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
  case 6:
    if (DAT_0570438f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
      DAT_0570438f = '\x01';
    }
    pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
    if (pPVar1 == (PatreonEffects_NameEffectSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
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
  case 7:
    if (DAT_05704390 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
      DAT_05704390 = '\x01';
    }
    pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
    if (pPVar1 == (PatreonEffects_NameEffectSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (pPVar1->fields).effectMode = 6;
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
    (pPVar1->fields).flickerStrength = 0.0;
    (pPVar1->fields).softness = 0.86;
    return pPVar1;
  default:
    pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
    if (pPVar1 == (PatreonEffects_NameEffectSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (pPVar1->fields).glow = 1.0;
    (pPVar1->fields).scanlineStrength = 0.0;
    (pPVar1->fields).flickerStrength = 0.0;
    return pPVar1;
  }
  if (DAT_0570438c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438c = '\x01';
  }
  pPVar1 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
  if (pPVar1 == (PatreonEffects_NameEffectSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (pPVar1->fields).effectMode = 1;
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
  (pPVar1->fields).flickerStrength = 0.0;
  (pPVar1->fields).softness = 0.85;
  (pPVar1->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar1->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  return pPVar1;
}


// PatreonEffects.NameEffectPresets$$TryResolve
// il2cpp: bool PatreonEffects_NameEffectPresets__TryResolve (System_String_o* raw, int32_t* type, const MethodInfo* method);
// 0x4037c50

bool_conflict
PatreonEffects_NameEffectPresets__TryResolve(System_String_o *raw,int32_t *type,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  int32_t local_1c;
  
  if (DAT_05704389 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryParse_NameEffectType);
    il2cpp_init_method_metadata(&"Wave");
    il2cpp_init_method_metadata(&"None");
    DAT_05704389 = '\x01';
  }
  local_1c = 0;
  *type = 0;
  bVar2 = 0;
  bVar1 = System_String__IsNullOrWhiteSpace(raw,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar2 = 0;
    bVar1 = System_String__op_Equality(raw,"None",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals(raw,"Wave",5,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        method_00 = (MethodInfo *)0x1;
        bVar1 = System_Enum__TryParse<Int32Enum>(raw,1,&local_1c,MethodInfo_Boolean_TryParse_NameEffectType);
        if (((char)bVar1 == '\0') || (6 < local_1c - 1U)) {
          bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect(raw,method_00);
          if ((char)bVar1 == '\0') {
            return 0;
          }
          *type = 1;
        }
        else {
          *type = local_1c;
        }
      }
      else {
        *type = 5;
      }
      bVar2 = 1;
    }
  }
  return bVar2;
}


// PatreonEffects.NameEffectPresets$$IsSupportedEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsSupportedEffect (int32_t type, const MethodInfo* method);
// 0x4037d70

bool_conflict PatreonEffects_NameEffectPresets__IsSupportedEffect(int32_t type,MethodInfo *method)

{
  uint3 uVar1;
  
  uVar1 = (uint3)(type - 1U >> 8);
  if (type - 1U < 5) {
    return (bool_conflict)CONCAT71((uint7)uVar1,1);
  }
  return CONCAT31(uVar1,(type | 1U) == 7);
}


// PatreonEffects.NameEffectPresets$$Holographic
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Holographic (const MethodInfo* method);
// 0x40353b0

PatreonEffects_NameEffectSettings_o *
PatreonEffects_NameEffectPresets__Holographic(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_0570438a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438a = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
// 0x40376a0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Shimmer(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_0570438b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438b = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectPresets$$Pop
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Pop (const MethodInfo* method);
// 0x4037790

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Pop(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_0570438c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438c = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectPresets$$Ember
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Ember (const MethodInfo* method);
// 0x4037890

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Ember(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_0570438d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438d = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectPresets$$Waves
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Waves (const MethodInfo* method);
// 0x4037980

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Waves(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_0570438e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438e = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectPresets$$Electric
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Electric (const MethodInfo* method);
// 0x4037a80

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Electric(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_0570438f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438f = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectPresets$$Outline
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Outline (const MethodInfo* method);
// 0x4037b70

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Outline(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_05704390 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_05704390 = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
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
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectPresets$$IsLegacyEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsLegacyEffect (System_String_o* raw, const MethodInfo* method);
// 0x4037d90

bool_conflict
PatreonEffects_NameEffectPresets__IsLegacyEffect(System_String_o *raw,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  
  if (DAT_05704391 == '\0') {
    il2cpp_init_method_metadata(&"Wave");
    il2cpp_init_method_metadata(&"GradientScroll");
    il2cpp_init_method_metadata(&"Toxic");
    il2cpp_init_method_metadata(&"Electric");
    il2cpp_init_method_metadata(&"Frost");
    il2cpp_init_method_metadata(&"Cosmic");
    il2cpp_init_method_metadata(&"Matrix");
    il2cpp_init_method_metadata(&"AnimatedOutline");
    il2cpp_init_method_metadata(&"CRT");
    il2cpp_init_method_metadata(&"Ember");
    il2cpp_init_method_metadata(&"Sparkle");
    DAT_05704391 = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(raw,(MethodInfo *)0x0);
  if (uVar1 < 0x73ce5e6e) {
    if (uVar1 < 0x2c96ccf5) {
      if (uVar1 == 0x58972d5) {
        puVar3 = &"Sparkle";
      }
      else {
        if (uVar1 != 0x2c96ccf4) {
          return 0;
        }
        puVar3 = &"Wave";
      }
    }
    else if (uVar1 == 0x5b778507) {
      puVar3 = &"Cosmic";
    }
    else if (uVar1 == 0x624dcb4c) {
      puVar3 = &"GradientScroll";
    }
    else {
      if (uVar1 != 0x73ce5e6d) {
        return 0;
      }
      puVar3 = &"Frost";
    }
  }
  else if (uVar1 < 0x9ce98adb) {
    if (uVar1 == 0x8568fbde) {
      puVar3 = &"Electric";
    }
    else if (uVar1 == 0x9ce98ada) {
      puVar3 = &"AnimatedOutline";
    }
    else {
      if (uVar1 != 0x771f5d5c) {
        return 0;
      }
      puVar3 = &"CRT";
    }
  }
  else if (uVar1 == 0xbf0f8b8c) {
    puVar3 = &"Toxic";
  }
  else if (uVar1 == 0xd2c95de4) {
    puVar3 = &"Ember";
  }
  else {
    if (uVar1 != 0xe9d1810c) {
      return 0;
    }
    puVar3 = &"Matrix";
  }
  bVar2 = System_String__op_Equality(raw,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
}


