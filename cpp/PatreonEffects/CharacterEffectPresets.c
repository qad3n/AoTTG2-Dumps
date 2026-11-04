// Type: PatreonEffects.CharacterEffectPresets
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/CharacterEffectPresets.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.CharacterEffectPresets$$ParseOrDefault
// il2cpp: int32_t PatreonEffects_CharacterEffectPresets__ParseOrDefault (System_String_o* raw, const MethodInfo* method);
// 0x1820b67e0

int32_t PatreonEffects_CharacterEffectPresets__ParseOrDefault(System_String_o *raw,MethodInfo *method)

{
  bool bVar1;
  int32_t local_res8 [8];
  
  if (Il2CppMethodInitialized_184346932 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_CharacterEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"ToxicSurge");
    il2cpp_codegen_initialize_runtime_metadata(&"GlowOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"PlasmaFlow");
    il2cpp_codegen_initialize_runtime_metadata(&"RoyalAura");
    il2cpp_codegen_initialize_runtime_metadata(&"FrostEdge");
    il2cpp_codegen_initialize_runtime_metadata(&"RuneGlow");
    il2cpp_codegen_initialize_runtime_metadata(&"NeonPulse");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorAmp");
    Il2CppMethodInitialized_184346932 = '\x01';
  }
  local_res8[0] = 0;
  bVar1 = System_String__IsNullOrEmpty(raw,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar1 = System_Enum__TryParse_Int32Enum_
                      (raw,local_res8,(MethodInfo_6B1BB0 *)MethodInfo_System_Enum_TryParse_CharacterEffectType
                      );
    if (bVar1) {
      return local_res8[0];
    }
  }
  bVar1 = System_String__op_Equality(raw,"NeonPulse",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(raw,"GlowOutline",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(raw,"PlasmaFlow",(MethodInfo *)0x0);
      if (bVar1) {
        return 3;
      }
      bVar1 = System_String__op_Equality(raw,"ToxicSurge",(MethodInfo *)0x0);
      if (bVar1) {
        return 4;
      }
      bVar1 = System_String__op_Equality(raw,"FrostEdge",(MethodInfo *)0x0);
      if (bVar1) {
        return 5;
      }
      bVar1 = System_String__op_Equality(raw,"RoyalAura",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(raw,"ColorAmp",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality(raw,"RuneGlow",(MethodInfo *)0x0);
          return -(uint)bVar1 & 10;
        }
        return 6;
      }
    }
  }
  return 1;
}


// PatreonEffects.CharacterEffectPresets$$GetPreset
// il2cpp: PatreonEffects_CharacterEffectPreset_o PatreonEffects_CharacterEffectPresets__GetPreset (int32_t type, const MethodInfo* method);
// 0x1820b6320

PatreonEffects_CharacterEffectPreset_o *
PatreonEffects_CharacterEffectPresets__GetPreset
          (PatreonEffects_CharacterEffectPreset_o *__return_storage_ptr__,int32_t type,MethodInfo *method)

{
  switch(type) {
  case 1:
    (__return_storage_ptr__->fields).GlowIntensity = 1.8;
    (__return_storage_ptr__->fields).StyleMode = 0;
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
    (__return_storage_ptr__->fields).OutlinePower = 1.0;
    (__return_storage_ptr__->fields).PulseSpeed = 0.0;
    (__return_storage_ptr__->fields).StyleMode = 0;
    (__return_storage_ptr__->fields).GlowIntensity = 0.0;
    (__return_storage_ptr__->fields).OutlineThickness = 0.0;
    (__return_storage_ptr__->fields).PulseAmount = 0.0;
    (__return_storage_ptr__->fields).FlowSpeed = 0.0;
    (__return_storage_ptr__->fields).FlowStrength = 0.0;
    (__return_storage_ptr__->fields).SecondaryScroll = 0.0;
    (__return_storage_ptr__->fields).EdgeSpark = 0.0;
    (__return_storage_ptr__->fields).StyleStrength = 0.0;
    (__return_storage_ptr__->fields).TexturePreserve = 1.0;
    (__return_storage_ptr__->fields).EmissionFromTexture = 0.0;
    (__return_storage_ptr__->fields).DetailScale = 8.0;
    (__return_storage_ptr__->fields).DetailSpeed = 0.0;
    return __return_storage_ptr__;
  }
}


// PatreonEffects.CharacterEffectPresets$$.cctor
// il2cpp: void PatreonEffects_CharacterEffectPresets___cctor (const MethodInfo* method);
// 0x1820b69b0

void PatreonEffects_CharacterEffectPresets___cctor(MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  System_Enum_o local_118;
  undefined4 local_108;
  System_Enum_o local_100;
  undefined4 local_f0;
  System_Enum_o local_e8;
  undefined4 local_d8;
  System_Enum_o local_d0;
  undefined4 local_c0;
  System_Enum_o local_b8;
  undefined4 local_a8;
  System_Enum_o local_a0;
  undefined4 local_90;
  System_Enum_o local_88;
  undefined4 local_78;
  System_Enum_o local_70;
  undefined4 local_60;
  System_Enum_o local_58;
  undefined4 local_48;
  System_Enum_o local_40;
  undefined4 local_30;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_184346933 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346933 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,0xb);
  local_118.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
  local_118.monitor = &g_data_ffffffffffffffff;
  local_108 = 0;
  pSVar1 = System_Enum__ToString(&local_118,(MethodInfo *)0x0);
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = pSVar1;
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      local_100.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
      local_100.monitor = &g_data_ffffffffffffffff;
      local_f0 = 1;
      pSVar1 = System_Enum__ToString(&local_100,(MethodInfo *)0x0);
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = pSVar1;
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        local_e8.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
        local_e8.monitor = &g_data_ffffffffffffffff;
        local_d8 = 2;
        pSVar1 = System_Enum__ToString(&local_e8,(MethodInfo *)0x0);
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = pSVar1;
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          local_d0.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
          local_d0.monitor = &g_data_ffffffffffffffff;
          local_c0 = 3;
          pSVar1 = System_Enum__ToString(&local_d0,(MethodInfo *)0x0);
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = pSVar1;
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            local_b8.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
            local_b8.monitor = &g_data_ffffffffffffffff;
            local_a8 = 4;
            pSVar1 = System_Enum__ToString(&local_b8,(MethodInfo *)0x0);
            if (4 < (uint)value->max_length) {
              value->m_Items[4] = pSVar1;
              Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar1);
              local_a0.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
              local_a0.monitor = &g_data_ffffffffffffffff;
              local_90 = 5;
              pSVar1 = System_Enum__ToString(&local_a0,(MethodInfo *)0x0);
              if (5 < (uint)value->max_length) {
                value->m_Items[5] = pSVar1;
                Il2CppCodeGenWriteBarrier(value->m_Items + 5,pSVar1);
                local_88.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                local_88.monitor = &g_data_ffffffffffffffff;
                local_78 = 6;
                pSVar1 = System_Enum__ToString(&local_88,(MethodInfo *)0x0);
                if (6 < (uint)value->max_length) {
                  value->m_Items[6] = pSVar1;
                  Il2CppCodeGenWriteBarrier(value->m_Items + 6,pSVar1);
                  local_70.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                  local_70.monitor = &g_data_ffffffffffffffff;
                  local_60 = 7;
                  pSVar1 = System_Enum__ToString(&local_70,(MethodInfo *)0x0);
                  if (7 < (uint)value->max_length) {
                    value->m_Items[7] = pSVar1;
                    Il2CppCodeGenWriteBarrier(value->m_Items + 7,pSVar1);
                    local_58.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                    local_58.monitor = &g_data_ffffffffffffffff;
                    local_48 = 8;
                    pSVar1 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
                    if (8 < (uint)value->max_length) {
                      value->m_Items[8] = pSVar1;
                      Il2CppCodeGenWriteBarrier(value->m_Items + 8,pSVar1);
                      local_40.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                      local_40.monitor = &g_data_ffffffffffffffff;
                      local_30 = 9;
                      pSVar1 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
                      if (9 < (uint)value->max_length) {
                        value->m_Items[9] = pSVar1;
                        Il2CppCodeGenWriteBarrier(value->m_Items + 9,pSVar1);
                        local_28.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                        local_28.monitor = &g_data_ffffffffffffffff;
                        local_18 = 10;
                        pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
                        if (10 < (uint)value->max_length) {
                          value->m_Items[10] = pSVar1;
                          Il2CppCodeGenWriteBarrier(value->m_Items + 10,pSVar1);
                          TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options = value;
                          Il2CppCodeGenWriteBarrier
                                    (&TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options,
                                     value);
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
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


