// Type: PatreonEffects.CharacterEffectPresets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/PatreonEffects/CharacterEffectPresets.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.CharacterEffectPresets$$ParseOrDefault
// il2cpp: int32_t PatreonEffects_CharacterEffectPresets__ParseOrDefault (System_String_o* raw, const MethodInfo* method);
// 0x58776a0

int32_t PatreonEffects_CharacterEffectPresets__ParseOrDefault(System_String_o *raw,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_0754518d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_CharacterEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"ToxicSurge");
    il2cpp_codegen_initialize_runtime_metadata(&"GlowOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"PlasmaFlow");
    il2cpp_codegen_initialize_runtime_metadata(&"RoyalAura");
    il2cpp_codegen_initialize_runtime_metadata(&"FrostEdge");
    il2cpp_codegen_initialize_runtime_metadata(&"RuneGlow");
    il2cpp_codegen_initialize_runtime_metadata(&"NeonPulse");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorAmp");
    Il2CppMethodInitialized_0754518d = '\x01';
  }
  local_1c = 0;
  bVar1 = System_String__IsNullOrEmpty(raw,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar1 = System_Enum__TryParse_Int32Enum_
                      (raw,&local_1c,(MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_CharacterEffectType
                      );
    if (bVar1) {
      return local_1c;
    }
  }
  bVar1 = System_String__op_Equality(raw,"NeonPulse",(MethodInfo *)0x0);
  iVar2 = 1;
  if ((!bVar1) && (bVar1 = System_String__op_Equality(raw,"GlowOutline",(MethodInfo *)0x0), !bVar1)) {
    bVar1 = System_String__op_Equality(raw,"PlasmaFlow",(MethodInfo *)0x0);
    iVar2 = 3;
    if (!bVar1) {
      bVar1 = System_String__op_Equality(raw,"ToxicSurge",(MethodInfo *)0x0);
      iVar2 = 4;
      if (!bVar1) {
        bVar1 = System_String__op_Equality(raw,"FrostEdge",(MethodInfo *)0x0);
        iVar2 = 5;
        if (!bVar1) {
          bVar1 = System_String__op_Equality(raw,"RoyalAura",(MethodInfo *)0x0);
          iVar2 = 1;
          if (!bVar1) {
            bVar1 = System_String__op_Equality(raw,"ColorAmp",(MethodInfo *)0x0);
            iVar2 = 6;
            if (!bVar1) {
              bVar1 = System_String__op_Equality(raw,"RuneGlow",(MethodInfo *)0x0);
              iVar2 = 10;
              if (!bVar1) {
                iVar2 = 0;
              }
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
// 0x5877880

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
// 0x5877ae0

void PatreonEffects_CharacterEffectPresets___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
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
  
  if (Il2CppMethodInitialized_0754518e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754518e = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0xb);
  SStack_28.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    SStack_40.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
    SStack_40.monitor = (void *)0xffffffffffffffff;
    uStack_30 = 1;
    pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      SStack_58.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
      SStack_58.monitor = (void *)0xffffffffffffffff;
      uStack_48 = 2;
      pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        SStack_70.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
        SStack_70.monitor = (void *)0xffffffffffffffff;
        uStack_60 = 3;
        pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = pSVar2;
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          SStack_88.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
          SStack_88.monitor = (void *)0xffffffffffffffff;
          uStack_78 = 4;
          pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = pSVar2;
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
            SStack_a0.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
            SStack_a0.monitor = (void *)0xffffffffffffffff;
            uStack_90 = 5;
            pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
            if (5 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[5] = pSVar2;
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 5);
              SStack_b8.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
              SStack_b8.monitor = (void *)0xffffffffffffffff;
              uStack_a8 = 6;
              pSVar2 = System_Enum__ToString(&SStack_b8,(MethodInfo *)0x0);
              if (6 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[6] = pSVar2;
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 6);
                SStack_d0.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                SStack_d0.monitor = (void *)0xffffffffffffffff;
                uStack_c0 = 7;
                pSVar2 = System_Enum__ToString(&SStack_d0,(MethodInfo *)0x0);
                if ((pSVar1->max_length & 0xfffffff8) != 0) {
                  pSVar1->m_Items[7] = pSVar2;
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 7);
                  SStack_e8.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                  SStack_e8.monitor = (void *)0xffffffffffffffff;
                  uStack_d8 = 8;
                  pSVar2 = System_Enum__ToString(&SStack_e8,(MethodInfo *)0x0);
                  if (8 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[8] = pSVar2;
                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 8);
                    SStack_100.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                    SStack_100.monitor = (void *)0xffffffffffffffff;
                    uStack_f0 = 9;
                    pSVar2 = System_Enum__ToString(&SStack_100,(MethodInfo *)0x0);
                    if (9 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[9] = pSVar2;
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 9);
                      SStack_118.klass = (System_Enum_c *)TypeInfo_PatreonEffects_CharacterEffectType;
                      SStack_118.monitor = (void *)0xffffffffffffffff;
                      uStack_108 = 10;
                      pSVar2 = System_Enum__ToString(&SStack_118,(MethodInfo *)0x0);
                      if (10 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[10] = pSVar2;
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 10);
                        TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options = pSVar1;
                        Il2CppCodeGenWriteBarrier
                                  (&TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options);
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


