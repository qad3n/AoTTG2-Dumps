// Type: PatreonEffects.NameEffectHelpers
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectHelpers.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectHelpers$$TryGetNameEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetNameEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x59c1090

bool PatreonEffects_NameEffectHelpers__TryGetNameEffect
               (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,
               MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  System_String_o *raw;
  bool bVar5;
  bool bVar6;
  Settings_ProfileSettings_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  UnityEngine_Color_o UVar9;
  int32_t local_ac;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_38 [16];
  
  pMVar8 = (MethodInfo *)result;
  if (Il2CppMethodInitialized_07545c07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07545c07 = '\x01';
  }
  pSVar7 = PatreonEffects_NameEffectHelpers__GetProfile(player,pMVar8);
  if (pSVar7 == (Settings_ProfileSettings_o *)0x0) {
    (result->fields).ColorC.fields.b = 0.0;
    (result->fields).ColorC.fields.a = 0.0;
    (result->fields).ColorD.fields.r = 0.0;
    (result->fields).ColorD.fields.g = 0.0;
    (result->fields).ColorB.fields.b = 0.0;
    (result->fields).ColorB.fields.a = 0.0;
    (result->fields).ColorC.fields.r = 0.0;
    (result->fields).ColorC.fields.g = 0.0;
    (result->fields).ColorA.fields.b = 0.0;
    (result->fields).ColorA.fields.a = 0.0;
    (result->fields).ColorB.fields.r = 0.0;
    (result->fields).ColorB.fields.g = 0.0;
    (result->fields).Enabled = false;
    *(undefined3 *)&(result->fields).field_0x1 = 0;
    (result->fields).Type = 0;
    (result->fields).ColorA.fields.r = 0.0;
    (result->fields).ColorA.fields.g = 0.0;
    (result->fields).ColorD.fields.b = 0.0;
    (result->fields).ColorD.fields.a = 0.0;
    return false;
  }
  pSVar1 = (pSVar7->fields).NameEffectEnabled;
  if ((((pSVar1 != (Settings_BoolSetting_o *)0x0) &&
       (pSVar2 = (pSVar7->fields).NameEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
      (pSVar3 = (pSVar7->fields).NameEffectColorA, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
     (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
    bVar6 = (pSVar1->fields)._value;
    raw = (pSVar2->fields)._value;
    UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    pSVar3 = (pSVar7->fields).NameEffectColorB;
    if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
      local_38._8_4_ = extraout_XMM0_Dc;
      local_38._0_8_ = UVar9.fields._0_8_;
      local_38._12_4_ = extraout_XMM0_Dd;
      pUVar4 = (pSVar3->fields)._value;
      local_48 = UVar9.fields._8_8_;
      if (pUVar4 != (Utility_Color255_o *)0x0) {
        UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
        pSVar3 = (pSVar7->fields).NameEffectColorC;
        if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
          local_58._8_4_ = extraout_XMM0_Dc_00;
          local_58._0_8_ = UVar9.fields._0_8_;
          local_58._12_4_ = extraout_XMM0_Dd_00;
          pUVar4 = (pSVar3->fields)._value;
          local_68 = UVar9.fields._8_8_;
          if (pUVar4 != (Utility_Color255_o *)0x0) {
            UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
            pSVar3 = (pSVar7->fields).NameEffectColorD;
            if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
              local_78._8_4_ = extraout_XMM0_Dc_01;
              local_78._0_8_ = UVar9.fields._0_8_;
              local_78._12_4_ = extraout_XMM0_Dd_01;
              pUVar4 = (pSVar3->fields)._value;
              local_88 = UVar9.fields._8_8_;
              if (pUVar4 != (Utility_Color255_o *)0x0) {
                pMVar8 = (MethodInfo *)0x0;
                UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                local_a8 = UVar9.fields._8_8_;
                local_ac = 0;
                (result->fields).ColorC.fields.b = 0.0;
                (result->fields).ColorC.fields.a = 0.0;
                (result->fields).ColorD.fields.r = 0.0;
                (result->fields).ColorD.fields.g = 0.0;
                (result->fields).ColorB.fields.b = 0.0;
                (result->fields).ColorB.fields.a = 0.0;
                (result->fields).ColorC.fields.r = 0.0;
                (result->fields).ColorC.fields.g = 0.0;
                (result->fields).ColorA.fields.b = 0.0;
                (result->fields).ColorA.fields.a = 0.0;
                (result->fields).ColorB.fields.r = 0.0;
                (result->fields).ColorB.fields.g = 0.0;
                (result->fields).Enabled = false;
                *(undefined3 *)&(result->fields).field_0x1 = 0;
                (result->fields).Type = 0;
                (result->fields).ColorA.fields.r = 0.0;
                (result->fields).ColorA.fields.g = 0.0;
                (result->fields).ColorD.fields.b = 0.0;
                (result->fields).ColorD.fields.a = 0.0;
                if (player == (Photon_Realtime_Player_o *)0x0) {
                  return false;
                }
                local_98._8_4_ = extraout_XMM0_Dc_02;
                local_98._0_8_ = UVar9.fields._0_8_;
                local_98._12_4_ = extraout_XMM0_Dd_02;
                bVar5 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,pMVar8);
                if (bVar6 == false) {
                  return false;
                }
                if (!bVar5) {
                  return false;
                }
                bVar6 = PatreonEffects_NameEffectPresets__TryResolve(raw,&local_ac,method_00);
                if (bVar6) {
                  (result->fields).Enabled = true;
                  (result->fields).Type = local_ac;
                  (result->fields).ColorA.fields.r = (float)local_38._0_4_;
                  (result->fields).ColorA.fields.g = (float)local_38._4_4_;
                  (result->fields).ColorA.fields.b = (float)local_48;
                  (result->fields).ColorA.fields.a = (float)((ulong)local_48 >> 0x20);
                  (result->fields).ColorB.fields.r = (float)local_58._0_4_;
                  (result->fields).ColorB.fields.g = (float)local_58._4_4_;
                  (result->fields).ColorB.fields.b = (float)local_68;
                  (result->fields).ColorB.fields.a = (float)((ulong)local_68 >> 0x20);
                  (result->fields).ColorC.fields.r = (float)local_78._0_4_;
                  (result->fields).ColorC.fields.g = (float)local_78._4_4_;
                  (result->fields).ColorC.fields.b = (float)local_88;
                  (result->fields).ColorC.fields.a = (float)((ulong)local_88 >> 0x20);
                  (result->fields).ColorD.fields.r = (float)local_98._0_4_;
                  (result->fields).ColorD.fields.g = (float)local_98._4_4_;
                  (result->fields).ColorD.fields.b = (float)local_a8;
                  (result->fields).ColorD.fields.a = (float)((ulong)local_a8 >> 0x20);
                  return true;
                }
                return false;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectHelpers$$TryGetGuildEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetGuildEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x59c6380

bool PatreonEffects_NameEffectHelpers__TryGetGuildEffect
               (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,
               MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  System_String_o *raw;
  bool bVar5;
  bool bVar6;
  Settings_ProfileSettings_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  UnityEngine_Color_o UVar9;
  int32_t local_ac;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_38 [16];
  
  pMVar8 = (MethodInfo *)result;
  if (Il2CppMethodInitialized_07545c08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07545c08 = '\x01';
  }
  pSVar7 = PatreonEffects_NameEffectHelpers__GetProfile(player,pMVar8);
  if (pSVar7 == (Settings_ProfileSettings_o *)0x0) {
    (result->fields).ColorC.fields.b = 0.0;
    (result->fields).ColorC.fields.a = 0.0;
    (result->fields).ColorD.fields.r = 0.0;
    (result->fields).ColorD.fields.g = 0.0;
    (result->fields).ColorB.fields.b = 0.0;
    (result->fields).ColorB.fields.a = 0.0;
    (result->fields).ColorC.fields.r = 0.0;
    (result->fields).ColorC.fields.g = 0.0;
    (result->fields).ColorA.fields.b = 0.0;
    (result->fields).ColorA.fields.a = 0.0;
    (result->fields).ColorB.fields.r = 0.0;
    (result->fields).ColorB.fields.g = 0.0;
    (result->fields).Enabled = false;
    *(undefined3 *)&(result->fields).field_0x1 = 0;
    (result->fields).Type = 0;
    (result->fields).ColorA.fields.r = 0.0;
    (result->fields).ColorA.fields.g = 0.0;
    (result->fields).ColorD.fields.b = 0.0;
    (result->fields).ColorD.fields.a = 0.0;
    return false;
  }
  pSVar1 = (pSVar7->fields).GuildEffectEnabled;
  if ((((pSVar1 != (Settings_BoolSetting_o *)0x0) &&
       (pSVar2 = (pSVar7->fields).GuildEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
      (pSVar3 = (pSVar7->fields).GuildEffectColorA, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
     (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
    bVar6 = (pSVar1->fields)._value;
    raw = (pSVar2->fields)._value;
    UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    pSVar3 = (pSVar7->fields).GuildEffectColorB;
    if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
      local_38._8_4_ = extraout_XMM0_Dc;
      local_38._0_8_ = UVar9.fields._0_8_;
      local_38._12_4_ = extraout_XMM0_Dd;
      pUVar4 = (pSVar3->fields)._value;
      local_48 = UVar9.fields._8_8_;
      if (pUVar4 != (Utility_Color255_o *)0x0) {
        UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
        pSVar3 = (pSVar7->fields).GuildEffectColorC;
        if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
          local_58._8_4_ = extraout_XMM0_Dc_00;
          local_58._0_8_ = UVar9.fields._0_8_;
          local_58._12_4_ = extraout_XMM0_Dd_00;
          pUVar4 = (pSVar3->fields)._value;
          local_68 = UVar9.fields._8_8_;
          if (pUVar4 != (Utility_Color255_o *)0x0) {
            UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
            pSVar3 = (pSVar7->fields).GuildEffectColorD;
            if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
              local_78._8_4_ = extraout_XMM0_Dc_01;
              local_78._0_8_ = UVar9.fields._0_8_;
              local_78._12_4_ = extraout_XMM0_Dd_01;
              pUVar4 = (pSVar3->fields)._value;
              local_88 = UVar9.fields._8_8_;
              if (pUVar4 != (Utility_Color255_o *)0x0) {
                pMVar8 = (MethodInfo *)0x0;
                UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                local_a8 = UVar9.fields._8_8_;
                local_ac = 0;
                (result->fields).ColorC.fields.b = 0.0;
                (result->fields).ColorC.fields.a = 0.0;
                (result->fields).ColorD.fields.r = 0.0;
                (result->fields).ColorD.fields.g = 0.0;
                (result->fields).ColorB.fields.b = 0.0;
                (result->fields).ColorB.fields.a = 0.0;
                (result->fields).ColorC.fields.r = 0.0;
                (result->fields).ColorC.fields.g = 0.0;
                (result->fields).ColorA.fields.b = 0.0;
                (result->fields).ColorA.fields.a = 0.0;
                (result->fields).ColorB.fields.r = 0.0;
                (result->fields).ColorB.fields.g = 0.0;
                (result->fields).Enabled = false;
                *(undefined3 *)&(result->fields).field_0x1 = 0;
                (result->fields).Type = 0;
                (result->fields).ColorA.fields.r = 0.0;
                (result->fields).ColorA.fields.g = 0.0;
                (result->fields).ColorD.fields.b = 0.0;
                (result->fields).ColorD.fields.a = 0.0;
                if (player == (Photon_Realtime_Player_o *)0x0) {
                  return false;
                }
                local_98._8_4_ = extraout_XMM0_Dc_02;
                local_98._0_8_ = UVar9.fields._0_8_;
                local_98._12_4_ = extraout_XMM0_Dd_02;
                bVar5 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,pMVar8);
                if (bVar6 == false) {
                  return false;
                }
                if (!bVar5) {
                  return false;
                }
                bVar6 = PatreonEffects_NameEffectPresets__TryResolve(raw,&local_ac,method_00);
                if (bVar6) {
                  (result->fields).Enabled = true;
                  (result->fields).Type = local_ac;
                  (result->fields).ColorA.fields.r = (float)local_38._0_4_;
                  (result->fields).ColorA.fields.g = (float)local_38._4_4_;
                  (result->fields).ColorA.fields.b = (float)local_48;
                  (result->fields).ColorA.fields.a = (float)((ulong)local_48 >> 0x20);
                  (result->fields).ColorB.fields.r = (float)local_58._0_4_;
                  (result->fields).ColorB.fields.g = (float)local_58._4_4_;
                  (result->fields).ColorB.fields.b = (float)local_68;
                  (result->fields).ColorB.fields.a = (float)((ulong)local_68 >> 0x20);
                  (result->fields).ColorC.fields.r = (float)local_78._0_4_;
                  (result->fields).ColorC.fields.g = (float)local_78._4_4_;
                  (result->fields).ColorC.fields.b = (float)local_88;
                  (result->fields).ColorC.fields.a = (float)((ulong)local_88 >> 0x20);
                  (result->fields).ColorD.fields.r = (float)local_98._0_4_;
                  (result->fields).ColorD.fields.g = (float)local_98._4_4_;
                  (result->fields).ColorD.fields.b = (float)local_a8;
                  (result->fields).ColorD.fields.a = (float)((ulong)local_a8 >> 0x20);
                  return true;
                }
                return false;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectHelpers$$GetProfile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameEffectHelpers__GetProfile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c6170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c61df: jmp 0x59c6245

Settings_ProfileSettings_o *
PatreonEffects_NameEffectHelpers__GetProfile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__PlayerInfo__o *__this;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_07545c09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545c09 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      __this = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    }
    else {
      __this = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    }
    if (__this != (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        __this = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
        if (__this == (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_int__object__o *)__this,
                         (player->fields).actorNumber,&local_18,
                         (MethodInfo_4A114B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
      if ((bVar1) && (local_18 != (Il2CppObject *)0x0)) {
        local_18 = local_18 + 3;
        goto label_059c6260;
      }
    }
    if ((player->fields).IsLocal != false) {
      local_18 = (Il2CppObject *)&TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
label_059c6260:
      return (Settings_ProfileSettings_o *)local_18->klass;
    }
  }
  return (Settings_ProfileSettings_o *)0x0;
}


// PatreonEffects.NameEffectHelpers$$TryGet
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGet (Photon_Realtime_Player_o* player, Settings_ProfileSettings_o* profile, bool enabled, System_String_o* effectStr, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x59c6280

bool PatreonEffects_NameEffectHelpers__TryGet
               (Photon_Realtime_Player_o *player,Settings_ProfileSettings_o *profile,bool enabled,
               System_String_o *effectStr,UnityEngine_Color_o colorA,UnityEngine_Color_o colorB,
               UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,
               PatreonEffects_ResolvedNameEffect_o *result,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  int32_t iStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_58 = colorC.fields._8_8_;
  uStack_48 = colorC.fields._0_8_;
  uStack_38 = colorD.fields._8_8_;
  uStack_28 = colorD.fields._0_8_;
  uStack_78 = colorB.fields._8_8_;
  uStack_68 = colorB.fields._0_8_;
  uStack_98 = colorA.fields._8_8_;
  iStack_9c = 0;
  (result->fields).ColorC.fields.b = 0.0;
  (result->fields).ColorC.fields.a = 0.0;
  (result->fields).ColorD.fields.r = 0.0;
  (result->fields).ColorD.fields.g = 0.0;
  (result->fields).ColorB.fields.b = 0.0;
  (result->fields).ColorB.fields.a = 0.0;
  (result->fields).ColorC.fields.r = 0.0;
  (result->fields).ColorC.fields.g = 0.0;
  (result->fields).ColorA.fields.b = 0.0;
  (result->fields).ColorA.fields.a = 0.0;
  (result->fields).ColorB.fields.r = 0.0;
  (result->fields).ColorB.fields.g = 0.0;
  (result->fields).Enabled = false;
  *(undefined3 *)&(result->fields).field_0x1 = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  bVar2 = false;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    auStack_88._8_4_ = in_XMM0_Dc;
    auStack_88._0_8_ = colorA.fields._0_8_;
    auStack_88._12_4_ = in_XMM0_Dd;
    if (profile != (Settings_ProfileSettings_o *)0x0) {
      bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)profile);
      bVar2 = false;
      if ((bVar1) && (enabled)) {
        bVar2 = PatreonEffects_NameEffectPresets__TryResolve
                          (effectStr,&iStack_9c,(MethodInfo *)CONCAT44(extraout_var,extraout_EDX));
        if (bVar2) {
          (result->fields).Enabled = true;
          (result->fields).Type = iStack_9c;
          (result->fields).ColorA.fields.r = (float)auStack_88._0_4_;
          (result->fields).ColorA.fields.g = (float)auStack_88._4_4_;
          (result->fields).ColorA.fields.b = (float)uStack_98;
          (result->fields).ColorA.fields.a = (float)((ulong)uStack_98 >> 0x20);
          (result->fields).ColorB.fields.r = (float)uStack_68;
          (result->fields).ColorB.fields.g = uStack_68._4_4_;
          (result->fields).ColorB.fields.b = (float)uStack_78;
          (result->fields).ColorB.fields.a = (float)((ulong)uStack_78 >> 0x20);
          (result->fields).ColorC.fields.r = (float)uStack_48;
          (result->fields).ColorC.fields.g = uStack_48._4_4_;
          (result->fields).ColorC.fields.b = (float)uStack_58;
          (result->fields).ColorC.fields.a = (float)((ulong)uStack_58 >> 0x20);
          (result->fields).ColorD.fields.r = (float)uStack_28;
          (result->fields).ColorD.fields.g = uStack_28._4_4_;
          (result->fields).ColorD.fields.b = (float)uStack_38;
          (result->fields).ColorD.fields.a = (float)((ulong)uStack_38 >> 0x20);
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
    }
  }
  return bVar2;
}


