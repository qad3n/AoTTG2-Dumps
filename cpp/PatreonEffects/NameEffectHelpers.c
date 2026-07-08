// Type: PatreonEffects.NameEffectHelpers
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectHelpers.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.NameEffectHelpers$$TryGetNameEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetNameEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x4037f20

bool_conflict
PatreonEffects_NameEffectHelpers__TryGetNameEffect
          (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,
          MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  Settings_ProfileSettings_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *raw;
  char cVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar9;
  int32_t local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  method_01 = (MethodInfo *)result;
  if (DAT_05704392 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_05704392 = '\x01';
  }
  pSVar7 = PatreonEffects_NameEffectHelpers__GetProfile(player,method_01);
  if (pSVar7 != (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (pSVar7->fields).NameEffectEnabled;
    if ((((pSVar1 != (Settings_BoolSetting_o *)0x0) &&
         (pSVar2 = (pSVar7->fields).NameEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
        (pSVar3 = (pSVar7->fields).NameEffectColorA, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
       (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
      cVar8 = *(char *)((long)&(pSVar1->fields).DefaultValue + 1);
      raw = (pSVar2->fields)._value;
      UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
      local_68._8_4_ = in_XMM1_Dc;
      local_68._0_8_ = UVar9.fields._8_8_;
      local_68._12_4_ = in_XMM1_Dd;
      pSVar3 = (pSVar7->fields).NameEffectColorB;
      if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
        local_58._8_4_ = extraout_XMM0_Dc;
        local_58._0_8_ = UVar9.fields._0_8_;
        local_58._12_4_ = extraout_XMM0_Dd;
        pUVar4 = (pSVar3->fields)._value;
        if (pUVar4 != (Utility_Color255_o *)0x0) {
          UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
          local_88._8_4_ = in_XMM1_Dc;
          local_88._0_8_ = UVar9.fields._8_8_;
          local_88._12_4_ = in_XMM1_Dd;
          pSVar3 = (pSVar7->fields).NameEffectColorC;
          if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
            local_78._8_4_ = extraout_XMM0_Dc_00;
            local_78._0_8_ = UVar9.fields._0_8_;
            local_78._12_4_ = extraout_XMM0_Dd_00;
            pUVar4 = (pSVar3->fields)._value;
            if (pUVar4 != (Utility_Color255_o *)0x0) {
              UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
              pSVar3 = (pSVar7->fields).NameEffectColorD;
              if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
                local_a8._8_4_ = extraout_XMM0_Dc_01;
                local_a8._0_8_ = UVar9.fields._0_8_;
                local_a8._12_4_ = extraout_XMM0_Dd_01;
                local_98._8_4_ = in_XMM1_Dc;
                local_98._0_8_ = UVar9.fields._8_8_;
                local_98._12_4_ = in_XMM1_Dd;
                pUVar4 = (pSVar3->fields)._value;
                if (pUVar4 != (Utility_Color255_o *)0x0) {
                  method_01 = (MethodInfo *)0x0;
                  UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                  local_38 = UVar9.fields.r;
                  fStack_34 = UVar9.fields.g;
                  uStack_30 = extraout_XMM0_Dc_02;
                  uStack_2c = extraout_XMM0_Dd_02;
                  local_48 = UVar9.fields.b;
                  fStack_44 = UVar9.fields.a;
                  uStack_40 = in_XMM1_Dc;
                  uStack_3c = in_XMM1_Dd;
                  goto LAB_04038088;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  cVar8 = '\0';
  local_38 = 1.0;
  fStack_34 = 1.0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_a8 = ZEXT816(0x3f8000003f800000);
  local_68 = ZEXT816(0x3f8000003f800000);
  local_58 = ZEXT816(0x3f8000003f800000);
  raw = (System_String_o *)0x0;
  local_78 = ZEXT816(0x3f8000003f800000);
  local_88 = ZEXT816(0x3f8000003f800000);
  local_98 = ZEXT816(0x3f8000003f800000);
  local_48 = local_38;
  fStack_44 = fStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
LAB_04038088:
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
  (result->fields).Enabled = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  bVar6 = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (pSVar7 != (Settings_ProfileSettings_o *)0x0) {
      bVar5 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,method_01);
      bVar6 = 0;
      if ((cVar8 != '\0') && ((char)bVar5 != '\0')) {
        bVar6 = PatreonEffects_NameEffectPresets__TryResolve(raw,&local_ac,method_00);
        if ((char)bVar6 == '\0') {
          bVar6 = 0;
        }
        else {
          *(undefined1 *)&(result->fields).Enabled = 1;
          (result->fields).Type = local_ac;
          (result->fields).ColorA.fields.r = (float)local_58._0_4_;
          (result->fields).ColorA.fields.g = (float)local_58._4_4_;
          (result->fields).ColorA.fields.b = local_68._0_4_;
          (result->fields).ColorA.fields.a = local_68._4_4_;
          (result->fields).ColorB.fields.r = (float)local_78._0_4_;
          (result->fields).ColorB.fields.g = (float)local_78._4_4_;
          (result->fields).ColorB.fields.b = local_88._0_4_;
          (result->fields).ColorB.fields.a = local_88._4_4_;
          (result->fields).ColorC.fields.r = (float)local_a8._0_4_;
          (result->fields).ColorC.fields.g = (float)local_a8._4_4_;
          (result->fields).ColorC.fields.b = local_98._0_4_;
          (result->fields).ColorC.fields.a = local_98._4_4_;
          (result->fields).ColorD.fields.r = local_38;
          (result->fields).ColorD.fields.g = fStack_34;
          (result->fields).ColorD.fields.b = local_48;
          (result->fields).ColorD.fields.a = fStack_44;
          bVar6 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)local_ac >> 8),1);
        }
      }
    }
  }
  return bVar6;
}


// PatreonEffects.NameEffectHelpers$$TryGetGuildEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetGuildEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x4038340

bool_conflict
PatreonEffects_NameEffectHelpers__TryGetGuildEffect
          (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,
          MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  Settings_ProfileSettings_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *raw;
  char cVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar9;
  int32_t local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  method_01 = (MethodInfo *)result;
  if (DAT_05704393 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_05704393 = '\x01';
  }
  pSVar7 = PatreonEffects_NameEffectHelpers__GetProfile(player,method_01);
  if (pSVar7 != (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (pSVar7->fields).GuildEffectEnabled;
    if ((((pSVar1 != (Settings_BoolSetting_o *)0x0) &&
         (pSVar2 = (pSVar7->fields).GuildEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
        (pSVar3 = (pSVar7->fields).GuildEffectColorA, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
       (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
      cVar8 = *(char *)((long)&(pSVar1->fields).DefaultValue + 1);
      raw = (pSVar2->fields)._value;
      UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
      local_68._8_4_ = in_XMM1_Dc;
      local_68._0_8_ = UVar9.fields._8_8_;
      local_68._12_4_ = in_XMM1_Dd;
      pSVar3 = (pSVar7->fields).GuildEffectColorB;
      if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
        local_58._8_4_ = extraout_XMM0_Dc;
        local_58._0_8_ = UVar9.fields._0_8_;
        local_58._12_4_ = extraout_XMM0_Dd;
        pUVar4 = (pSVar3->fields)._value;
        if (pUVar4 != (Utility_Color255_o *)0x0) {
          UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
          local_88._8_4_ = in_XMM1_Dc;
          local_88._0_8_ = UVar9.fields._8_8_;
          local_88._12_4_ = in_XMM1_Dd;
          pSVar3 = (pSVar7->fields).GuildEffectColorC;
          if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
            local_78._8_4_ = extraout_XMM0_Dc_00;
            local_78._0_8_ = UVar9.fields._0_8_;
            local_78._12_4_ = extraout_XMM0_Dd_00;
            pUVar4 = (pSVar3->fields)._value;
            if (pUVar4 != (Utility_Color255_o *)0x0) {
              UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
              pSVar3 = (pSVar7->fields).GuildEffectColorD;
              if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
                local_a8._8_4_ = extraout_XMM0_Dc_01;
                local_a8._0_8_ = UVar9.fields._0_8_;
                local_a8._12_4_ = extraout_XMM0_Dd_01;
                local_98._8_4_ = in_XMM1_Dc;
                local_98._0_8_ = UVar9.fields._8_8_;
                local_98._12_4_ = in_XMM1_Dd;
                pUVar4 = (pSVar3->fields)._value;
                if (pUVar4 != (Utility_Color255_o *)0x0) {
                  method_01 = (MethodInfo *)0x0;
                  UVar9 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                  local_38 = UVar9.fields.r;
                  fStack_34 = UVar9.fields.g;
                  uStack_30 = extraout_XMM0_Dc_02;
                  uStack_2c = extraout_XMM0_Dd_02;
                  local_48 = UVar9.fields.b;
                  fStack_44 = UVar9.fields.a;
                  uStack_40 = in_XMM1_Dc;
                  uStack_3c = in_XMM1_Dd;
                  goto LAB_040384a8;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  cVar8 = '\0';
  local_38 = 1.0;
  fStack_34 = 1.0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_a8 = ZEXT816(0x3f8000003f800000);
  local_68 = ZEXT816(0x3f8000003f800000);
  local_58 = ZEXT816(0x3f8000003f800000);
  raw = (System_String_o *)0x0;
  local_78 = ZEXT816(0x3f8000003f800000);
  local_88 = ZEXT816(0x3f8000003f800000);
  local_98 = ZEXT816(0x3f8000003f800000);
  local_48 = local_38;
  fStack_44 = fStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
LAB_040384a8:
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
  (result->fields).Enabled = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  bVar6 = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (pSVar7 != (Settings_ProfileSettings_o *)0x0) {
      bVar5 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,method_01);
      bVar6 = 0;
      if ((cVar8 != '\0') && ((char)bVar5 != '\0')) {
        bVar6 = PatreonEffects_NameEffectPresets__TryResolve(raw,&local_ac,method_00);
        if ((char)bVar6 == '\0') {
          bVar6 = 0;
        }
        else {
          *(undefined1 *)&(result->fields).Enabled = 1;
          (result->fields).Type = local_ac;
          (result->fields).ColorA.fields.r = (float)local_58._0_4_;
          (result->fields).ColorA.fields.g = (float)local_58._4_4_;
          (result->fields).ColorA.fields.b = local_68._0_4_;
          (result->fields).ColorA.fields.a = local_68._4_4_;
          (result->fields).ColorB.fields.r = (float)local_78._0_4_;
          (result->fields).ColorB.fields.g = (float)local_78._4_4_;
          (result->fields).ColorB.fields.b = local_88._0_4_;
          (result->fields).ColorB.fields.a = local_88._4_4_;
          (result->fields).ColorC.fields.r = (float)local_a8._0_4_;
          (result->fields).ColorC.fields.g = (float)local_a8._4_4_;
          (result->fields).ColorC.fields.b = local_98._0_4_;
          (result->fields).ColorC.fields.a = local_98._4_4_;
          (result->fields).ColorD.fields.r = local_38;
          (result->fields).ColorD.fields.g = fStack_34;
          (result->fields).ColorD.fields.b = local_48;
          (result->fields).ColorD.fields.a = fStack_44;
          bVar6 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)local_ac >> 8),1);
        }
      }
    }
  }
  return bVar6;
}


// PatreonEffects.NameEffectHelpers$$GetProfile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameEffectHelpers__GetProfile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4038160

Settings_ProfileSettings_o *
PatreonEffects_NameEffectHelpers__GetProfile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Il2CppObject *local_18;
  
  if (DAT_05704394 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05704394 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
    }
    else {
      __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
    }
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
        __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
        if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      bVar1 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                        (__this,(player->fields).actorNumber,&local_18,MethodInfo_Boolean_TryGetValue);
      if (((char)bVar1 != '\0') && (local_18 != (Il2CppObject *)0x0)) {
        return (Settings_ProfileSettings_o *)local_18[2].klass;
      }
    }
  }
  return (Settings_ProfileSettings_o *)0x0;
}


// PatreonEffects.NameEffectHelpers$$TryGet
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGet (Photon_Realtime_Player_o* player, Settings_ProfileSettings_o* profile, bool enabled, System_String_o* effectStr, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x4038240

bool_conflict
PatreonEffects_NameEffectHelpers__TryGet
          (Photon_Realtime_Player_o *player,Settings_ProfileSettings_o *profile,
          bool_conflict enabled,System_String_o *effectStr,UnityEngine_Color_o colorA,
          UnityEngine_Color_o colorB,UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,
          PatreonEffects_ResolvedNameEffect_o *result,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
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
  (result->fields).Enabled = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  bVar2 = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    auStack_88._8_4_ = in_XMM0_Dc;
    auStack_88._0_8_ = colorA.fields._0_8_;
    auStack_88._12_4_ = in_XMM0_Dd;
    if (profile != (Settings_ProfileSettings_o *)0x0) {
      bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)profile);
      bVar2 = 0;
      if (((char)bVar1 != '\0') && ((char)enabled != '\0')) {
        bVar2 = PatreonEffects_NameEffectPresets__TryResolve
                          (effectStr,&iStack_9c,(MethodInfo *)CONCAT44(extraout_var,extraout_EDX));
        if ((char)bVar2 == '\0') {
          bVar2 = 0;
        }
        else {
          *(undefined1 *)&(result->fields).Enabled = 1;
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
          bVar2 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)iStack_9c >> 8),1);
        }
      }
    }
  }
  return bVar2;
}


