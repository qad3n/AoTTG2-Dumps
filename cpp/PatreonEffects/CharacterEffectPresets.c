// Type: PatreonEffects.CharacterEffectPresets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/CharacterEffectPresets.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.CharacterEffectPresets$$ParseOrDefault
// il2cpp: int32_t PatreonEffects_CharacterEffectPresets__ParseOrDefault (System_String_o* raw, const MethodInfo* method);
// 0x420ce70

int32_t PatreonEffects_CharacterEffectPresets__ParseOrDefault(System_String_o *raw,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  int32_t local_1c;
  
  if (g_data_057ad900 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_CharacterEffectType);
    il2cpp_runtime_helper_023445d0(&"ToxicSurge");
    il2cpp_runtime_helper_023445d0(&"GlowOutline");
    il2cpp_runtime_helper_023445d0(&"PlasmaFlow");
    il2cpp_runtime_helper_023445d0(&"RoyalAura");
    il2cpp_runtime_helper_023445d0(&"FrostEdge");
    il2cpp_runtime_helper_023445d0(&"NeonPulse");
    il2cpp_runtime_helper_023445d0(&"ColorAmp");
    g_data_057ad900 = '\x01';
  }
  local_1c = 0;
  bVar1 = System_String__IsNullOrEmpty(raw,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_Enum__TryParse_Int32Enum_(raw,&local_1c,MethodInfo_Boolean_TryParse_CharacterEffectType);
    if ((char)bVar1 != '\0') {
      return local_1c;
    }
  }
  bVar1 = System_String__op_Equality(raw,"NeonPulse",(MethodInfo *)0x0);
  iVar2 = 1;
  if (((char)bVar1 == '\0') &&
     (bVar1 = System_String__op_Equality(raw,"GlowOutline",(MethodInfo *)0x0), (char)bVar1 == '\0')) {
    bVar1 = System_String__op_Equality(raw,"PlasmaFlow",(MethodInfo *)0x0);
    iVar2 = 3;
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(raw,"ToxicSurge",(MethodInfo *)0x0);
      iVar2 = 4;
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(raw,"FrostEdge",(MethodInfo *)0x0);
        iVar2 = 5;
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__op_Equality(raw,"RoyalAura",(MethodInfo *)0x0);
          iVar2 = 1;
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__op_Equality(raw,"ColorAmp",(MethodInfo *)0x0);
            iVar2 = 6;
            if ((char)bVar1 == '\0') {
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
  return iVar2;
}


// PatreonEffects.CharacterEffectPresets$$GetPreset
// il2cpp: PatreonEffects_CharacterEffectPreset_o PatreonEffects_CharacterEffectPresets__GetPreset (int32_t type, const MethodInfo* method);
// 0x420d020

PatreonEffects_CharacterEffectPreset_o *
PatreonEffects_CharacterEffectPresets__GetPreset
          (PatreonEffects_CharacterEffectPreset_o *__return_storage_ptr__,int32_t type,MethodInfo *method)

{
  switch(type) {
  case 1:
    (__return_storage_ptr__->fields).StyleMode = 0;
    (__return_storage_ptr__->fields).GlowIntensity = 1.8;
    (__return_storage_ptr__->fields).OutlineThickness = 2.6;
    (__return_storage_ptr__->fields).OutlinePower = 2.2;
    (__return_storage_ptr__->fields).PulseSpeed = 1.2;
    (__return_storage_ptr__->fields).PulseAmount = 0.12;
    (__return_storage_ptr__->fields).FlowSpeed = 0.35;
    (__return_storage_ptr__->fields).FlowStrength = 0.16;
    (__return_storage_ptr__->fields).TexturePreserve = 1.22;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.84;
    (__return_storage_ptr__->fields).DetailScale = 10.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.65;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.35;
    (__return_storage_ptr__->fields).EdgeSpark = 0.2;
    (__return_storage_ptr__->fields).StyleStrength = 0.55;
    return __return_storage_ptr__;
  case 2:
    (__return_storage_ptr__->fields).StyleMode = 4;
    (__return_storage_ptr__->fields).GlowIntensity = 2.05;
    (__return_storage_ptr__->fields).OutlineThickness = 3.2;
    (__return_storage_ptr__->fields).OutlinePower = 2.8;
    (__return_storage_ptr__->fields).PulseSpeed = 1.1;
    (__return_storage_ptr__->fields).PulseAmount = 0.08;
    (__return_storage_ptr__->fields).FlowSpeed = 0.15;
    (__return_storage_ptr__->fields).FlowStrength = 0.05;
    (__return_storage_ptr__->fields).TexturePreserve = 1.24;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.95;
    (__return_storage_ptr__->fields).DetailScale = 9.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.45;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.15;
    (__return_storage_ptr__->fields).EdgeSpark = 0.15;
    (__return_storage_ptr__->fields).StyleStrength = 1.0;
    return __return_storage_ptr__;
  case 3:
    (__return_storage_ptr__->fields).StyleMode = 1;
    (__return_storage_ptr__->fields).GlowIntensity = 1.35;
    (__return_storage_ptr__->fields).OutlineThickness = 1.15;
    (__return_storage_ptr__->fields).OutlinePower = 1.8;
    (__return_storage_ptr__->fields).PulseSpeed = 1.2;
    (__return_storage_ptr__->fields).PulseAmount = 0.18;
    (__return_storage_ptr__->fields).FlowSpeed = 0.5;
    (__return_storage_ptr__->fields).FlowStrength = 0.28;
    (__return_storage_ptr__->fields).TexturePreserve = 1.16;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.74;
    (__return_storage_ptr__->fields).DetailScale = 14.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.95;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.45;
    (__return_storage_ptr__->fields).EdgeSpark = 0.25;
    (__return_storage_ptr__->fields).StyleStrength = 0.9;
    return __return_storage_ptr__;
  case 4:
    (__return_storage_ptr__->fields).StyleMode = 2;
    (__return_storage_ptr__->fields).GlowIntensity = 2.05;
    (__return_storage_ptr__->fields).OutlineThickness = 1.45;
    (__return_storage_ptr__->fields).OutlinePower = 2.0;
    (__return_storage_ptr__->fields).PulseSpeed = 1.35;
    (__return_storage_ptr__->fields).PulseAmount = 0.24;
    (__return_storage_ptr__->fields).FlowSpeed = 0.9;
    (__return_storage_ptr__->fields).FlowStrength = 0.55;
    (__return_storage_ptr__->fields).TexturePreserve = 1.08;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.55;
    (__return_storage_ptr__->fields).DetailScale = 17.5;
    (__return_storage_ptr__->fields).DetailSpeed = 1.35;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.8;
    (__return_storage_ptr__->fields).EdgeSpark = 0.52;
    (__return_storage_ptr__->fields).StyleStrength = 1.05;
    return __return_storage_ptr__;
  case 5:
    (__return_storage_ptr__->fields).StyleMode = 3;
    (__return_storage_ptr__->fields).GlowIntensity = 1.05;
    (__return_storage_ptr__->fields).OutlineThickness = 2.7;
    (__return_storage_ptr__->fields).OutlinePower = 3.2;
    (__return_storage_ptr__->fields).PulseSpeed = 0.28;
    (__return_storage_ptr__->fields).PulseAmount = 0.03;
    (__return_storage_ptr__->fields).FlowSpeed = 0.12;
    (__return_storage_ptr__->fields).FlowStrength = 0.07;
    (__return_storage_ptr__->fields).TexturePreserve = 1.3;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.92;
    (__return_storage_ptr__->fields).DetailScale = 20.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.2;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.08;
    (__return_storage_ptr__->fields).EdgeSpark = 0.12;
    (__return_storage_ptr__->fields).StyleStrength = 0.88;
    return __return_storage_ptr__;
  case 6:
    (__return_storage_ptr__->fields).StyleMode = 5;
    (__return_storage_ptr__->fields).GlowIntensity = 1.85;
    (__return_storage_ptr__->fields).OutlineThickness = 2.45;
    (__return_storage_ptr__->fields).OutlinePower = 2.9;
    (__return_storage_ptr__->fields).PulseSpeed = 1.05;
    (__return_storage_ptr__->fields).PulseAmount = 0.1;
    (__return_storage_ptr__->fields).FlowSpeed = 0.4;
    (__return_storage_ptr__->fields).FlowStrength = 0.28;
    (__return_storage_ptr__->fields).TexturePreserve = 1.2;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.85;
    (__return_storage_ptr__->fields).DetailScale = 11.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.55;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.35;
    (__return_storage_ptr__->fields).EdgeSpark = 0.22;
    (__return_storage_ptr__->fields).StyleStrength = 0.95;
    return __return_storage_ptr__;
  case 7:
    (__return_storage_ptr__->fields).StyleMode = 6;
    (__return_storage_ptr__->fields).GlowIntensity = 1.95;
    (__return_storage_ptr__->fields).OutlineThickness = 1.7;
    (__return_storage_ptr__->fields).OutlinePower = 2.2;
    (__return_storage_ptr__->fields).PulseSpeed = 2.2;
    (__return_storage_ptr__->fields).PulseAmount = 0.26;
    (__return_storage_ptr__->fields).FlowSpeed = 0.9;
    (__return_storage_ptr__->fields).FlowStrength = 0.45;
    (__return_storage_ptr__->fields).TexturePreserve = 1.14;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.72;
    (__return_storage_ptr__->fields).DetailScale = 18.0;
    (__return_storage_ptr__->fields).DetailSpeed = 1.3;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.95;
    (__return_storage_ptr__->fields).EdgeSpark = 0.48;
    (__return_storage_ptr__->fields).StyleStrength = 1.0;
    return __return_storage_ptr__;
  case 8:
    (__return_storage_ptr__->fields).StyleMode = 7;
    (__return_storage_ptr__->fields).GlowIntensity = 1.45;
    (__return_storage_ptr__->fields).OutlineThickness = 1.3;
    (__return_storage_ptr__->fields).OutlinePower = 1.9;
    (__return_storage_ptr__->fields).PulseSpeed = 1.0;
    (__return_storage_ptr__->fields).PulseAmount = 0.08;
    (__return_storage_ptr__->fields).FlowSpeed = 0.5;
    (__return_storage_ptr__->fields).FlowStrength = 0.3;
    (__return_storage_ptr__->fields).TexturePreserve = 1.12;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.78;
    (__return_storage_ptr__->fields).DetailScale = 16.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.75;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.45;
    (__return_storage_ptr__->fields).EdgeSpark = 0.2;
    (__return_storage_ptr__->fields).StyleStrength = 0.92;
    return __return_storage_ptr__;
  case 9:
    (__return_storage_ptr__->fields).StyleMode = 8;
    (__return_storage_ptr__->fields).GlowIntensity = 1.7;
    (__return_storage_ptr__->fields).OutlineThickness = 1.15;
    (__return_storage_ptr__->fields).OutlinePower = 2.1;
    (__return_storage_ptr__->fields).PulseSpeed = 0.8;
    (__return_storage_ptr__->fields).PulseAmount = 0.12;
    (__return_storage_ptr__->fields).FlowSpeed = 0.28;
    (__return_storage_ptr__->fields).FlowStrength = 0.2;
    (__return_storage_ptr__->fields).TexturePreserve = 1.2;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.8;
    (__return_storage_ptr__->fields).DetailScale = 22.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.35;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.22;
    (__return_storage_ptr__->fields).EdgeSpark = 0.35;
    (__return_storage_ptr__->fields).StyleStrength = 1.0;
    return __return_storage_ptr__;
  case 10:
    (__return_storage_ptr__->fields).StyleMode = 9;
    (__return_storage_ptr__->fields).GlowIntensity = 1.8;
    (__return_storage_ptr__->fields).OutlineThickness = 1.9;
    (__return_storage_ptr__->fields).OutlinePower = 2.4;
    (__return_storage_ptr__->fields).PulseSpeed = 1.4;
    (__return_storage_ptr__->fields).PulseAmount = 0.15;
    (__return_storage_ptr__->fields).FlowSpeed = 0.42;
    (__return_storage_ptr__->fields).FlowStrength = 0.25;
    (__return_storage_ptr__->fields).TexturePreserve = 1.18;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.82;
    (__return_storage_ptr__->fields).DetailScale = 12.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.45;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.3;
    (__return_storage_ptr__->fields).EdgeSpark = 0.28;
    (__return_storage_ptr__->fields).StyleStrength = 0.98;
    return __return_storage_ptr__;
  default:
    (__return_storage_ptr__->fields).StyleMode = 0;
    (__return_storage_ptr__->fields).GlowIntensity = 0.0;
    (__return_storage_ptr__->fields).OutlineThickness = 0.0;
    (__return_storage_ptr__->fields).OutlinePower = 1.0;
    (__return_storage_ptr__->fields).PulseSpeed = 0.0;
    (__return_storage_ptr__->fields).PulseAmount = 0.0;
    (__return_storage_ptr__->fields).FlowSpeed = 0.0;
    (__return_storage_ptr__->fields).FlowStrength = 0.0;
    (__return_storage_ptr__->fields).TexturePreserve = 1.0;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.0;
    (__return_storage_ptr__->fields).DetailScale = 8.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.0;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.0;
    (__return_storage_ptr__->fields).EdgeSpark = 0.0;
    (__return_storage_ptr__->fields).StyleStrength = 0.0;
    return __return_storage_ptr__;
  }
}


// PatreonEffects.CharacterEffectPresets$$.cctor
// il2cpp: void PatreonEffects_CharacterEffectPresets___cctor (const MethodInfo* method);
// 0x420d290

void PatreonEffects_CharacterEffectPresets___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_118;
  undefined4 uStack_108;
  System_Enum_o SStack_100;
  undefined4 uStack_f0;
  System_Enum_o SStack_e8;
  undefined4 uStack_d8;
  System_Enum_o SStack_d0;
  undefined4 uStack_c0;
  System_Enum_o SStack_b8;
  undefined4 uStack_a8;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (g_data_057ad901 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ad901 = '\x01';
  }
  lVar1 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  SStack_28.klass = TypeInfo_CharacterEffectType;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(System_String_o **)(lVar1 + 0x20) = pSVar2;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
      SStack_40.klass = TypeInfo_CharacterEffectType;
      SStack_40.monitor = (void *)0xffffffffffffffff;
      uStack_30 = 1;
      pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(System_String_o **)(lVar1 + 0x28) = pSVar2;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
        SStack_58.klass = TypeInfo_CharacterEffectType;
        SStack_58.monitor = (void *)0xffffffffffffffff;
        uStack_48 = 2;
        pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(System_String_o **)(lVar1 + 0x30) = pSVar2;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
          SStack_70.klass = TypeInfo_CharacterEffectType;
          SStack_70.monitor = (void *)0xffffffffffffffff;
          uStack_60 = 3;
          pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(System_String_o **)(lVar1 + 0x38) = pSVar2;
            il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
            SStack_88.klass = TypeInfo_CharacterEffectType;
            SStack_88.monitor = (void *)0xffffffffffffffff;
            uStack_78 = 4;
            pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(System_String_o **)(lVar1 + 0x40) = pSVar2;
              il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
              SStack_a0.klass = TypeInfo_CharacterEffectType;
              SStack_a0.monitor = (void *)0xffffffffffffffff;
              uStack_90 = 5;
              pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(System_String_o **)(lVar1 + 0x48) = pSVar2;
                il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
                SStack_b8.klass = TypeInfo_CharacterEffectType;
                SStack_b8.monitor = (void *)0xffffffffffffffff;
                uStack_a8 = 6;
                pSVar2 = System_Enum__ToString(&SStack_b8,(MethodInfo *)0x0);
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  *(System_String_o **)(lVar1 + 0x50) = pSVar2;
                  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
                  SStack_d0.klass = TypeInfo_CharacterEffectType;
                  SStack_d0.monitor = (void *)0xffffffffffffffff;
                  uStack_c0 = 7;
                  pSVar2 = System_Enum__ToString(&SStack_d0,(MethodInfo *)0x0);
                  if (7 < *(uint *)(lVar1 + 0x18)) {
                    *(System_String_o **)(lVar1 + 0x58) = pSVar2;
                    il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
                    SStack_e8.klass = TypeInfo_CharacterEffectType;
                    SStack_e8.monitor = (void *)0xffffffffffffffff;
                    uStack_d8 = 8;
                    pSVar2 = System_Enum__ToString(&SStack_e8,(MethodInfo *)0x0);
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      *(System_String_o **)(lVar1 + 0x60) = pSVar2;
                      il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
                      SStack_100.klass = TypeInfo_CharacterEffectType;
                      SStack_100.monitor = (void *)0xffffffffffffffff;
                      uStack_f0 = 9;
                      pSVar2 = System_Enum__ToString(&SStack_100,(MethodInfo *)0x0);
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        *(System_String_o **)(lVar1 + 0x68) = pSVar2;
                        il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
                        SStack_118.klass = TypeInfo_CharacterEffectType;
                        SStack_118.monitor = (void *)0xffffffffffffffff;
                        uStack_108 = 10;
                        pSVar2 = System_Enum__ToString(&SStack_118,(MethodInfo *)0x0);
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          *(System_String_o **)(lVar1 + 0x70) = pSVar2;
                          il2cpp_runtime_helper_022b4080(lVar1 + 0x70,pSVar2);
                          **(long **)(TypeInfo_CharacterEffectPresets + 0xb8) = lVar1;
                          il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CharacterEffectPresets + 0xb8),lVar1);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


