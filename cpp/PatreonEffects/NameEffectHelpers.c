// Type: PatreonEffects.NameEffectHelpers
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectHelpers.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectHelpers$$TryGetNameEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetNameEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x1820c8fb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c92eb: xor al, al
// asm:   0x1820c92ed: jmp 0x1820c9281

bool PatreonEffects_NameEffectHelpers__TryGetNameEffect
               (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,
               MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  bool bVar5;
  Settings_ProfileSettings_o *pSVar6;
  UnityEngine_Color_o *pUVar7;
  System_String_o *raw;
  char cVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int32_t local_res8 [2];
  UnityEngine_Color_Fields local_d8;
  UnityEngine_Color_o local_c8 [11];
  
  if (Il2CppMethodInitialized_184346971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_184346971 = '\x01';
  }
  pSVar6 = PatreonEffects_NameEffectHelpers__GetProfile(player,(MethodInfo *)0x0);
  if (pSVar6 != (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (pSVar6->fields).NameEffectEnabled;
    if ((((pSVar1 != (Settings_BoolSetting_o *)0x0) &&
         (pSVar2 = (pSVar6->fields).NameEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
        (pSVar3 = (pSVar6->fields).NameEffectColorA, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
       (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
      cVar8 = (pSVar1->fields)._value;
      raw = (pSVar2->fields)._value;
      pUVar7 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_d8,pUVar4,(MethodInfo *)0x0);
      pSVar3 = (pSVar6->fields).NameEffectColorB;
      if ((pSVar3 != (Settings_ColorSetting_o *)0x0) &&
         (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
        uVar17._0_4_ = (pUVar7->fields).r;
        uVar17._4_4_ = (pUVar7->fields).g;
        uVar18._0_4_ = (pUVar7->fields).b;
        uVar18._4_4_ = (pUVar7->fields).a;
        pUVar7 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_d8,pUVar4,(MethodInfo *)0x0);
        pSVar3 = (pSVar6->fields).NameEffectColorC;
        if ((pSVar3 != (Settings_ColorSetting_o *)0x0) &&
           (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
          uVar15._0_4_ = (pUVar7->fields).r;
          uVar15._4_4_ = (pUVar7->fields).g;
          uVar16._0_4_ = (pUVar7->fields).b;
          uVar16._4_4_ = (pUVar7->fields).a;
          pUVar7 = Utility_Color255__ToColor(local_c8,pUVar4,(MethodInfo *)0x0);
          pSVar3 = (pSVar6->fields).NameEffectColorD;
          local_d8._0_8_ = uVar15;
          local_d8._8_8_ = uVar16;
          if ((pSVar3 != (Settings_ColorSetting_o *)0x0) &&
             (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
            uVar10._0_4_ = (pUVar7->fields).r;
            uVar10._4_4_ = (pUVar7->fields).g;
            uVar11._0_4_ = (pUVar7->fields).b;
            uVar11._4_4_ = (pUVar7->fields).a;
            pUVar7 = Utility_Color255__ToColor(local_c8,pUVar4,(MethodInfo *)0x0);
            fVar9 = (pUVar7->fields).r;
            fVar12 = (pUVar7->fields).g;
            fVar13 = (pUVar7->fields).b;
            fVar14 = (pUVar7->fields).a;
            goto label_1820c91d4;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  fVar9 = 1.0;
  cVar8 = '\0';
  uVar17._0_4_ = 1.0;
  uVar17._4_4_ = 1.0;
  uVar18._0_4_ = 1.0;
  uVar18._4_4_ = 1.0;
  raw = (System_String_o *)0x0;
  fVar12 = 1.0;
  fVar13 = 1.0;
  fVar14 = 1.0;
  uVar15 = uVar17;
  uVar16 = uVar18;
  uVar10 = uVar17;
  uVar11 = uVar18;
label_1820c91d4:
  local_res8[0] = 0;
  (result->fields).Enabled = false;
  *(undefined3 *)&(result->fields).field_0x1 = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorA.fields.b = 0.0;
  (result->fields).ColorA.fields.a = 0.0;
  (result->fields).ColorB.fields.r = 0.0;
  (result->fields).ColorB.fields.g = 0.0;
  (result->fields).ColorB.fields.b = 0.0;
  (result->fields).ColorB.fields.a = 0.0;
  (result->fields).ColorC.fields.r = 0.0;
  (result->fields).ColorC.fields.g = 0.0;
  (result->fields).ColorC.fields.b = 0.0;
  (result->fields).ColorC.fields.a = 0.0;
  (result->fields).ColorD.fields.r = 0.0;
  (result->fields).ColorD.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  if ((((player != (Photon_Realtime_Player_o *)0x0) && (pSVar6 != (Settings_ProfileSettings_o *)0x0)) &&
      (bVar5 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0), bVar5)) &&
     ((cVar8 != '\0' &&
      (bVar5 = PatreonEffects_NameEffectPresets__TryResolve(raw,local_res8,(MethodInfo *)0x0), bVar5)))) {
    (result->fields).Type = local_res8[0];
    (result->fields).Enabled = true;
    (result->fields).ColorD.fields.r = fVar9;
    (result->fields).ColorD.fields.g = fVar12;
    (result->fields).ColorD.fields.b = fVar13;
    (result->fields).ColorD.fields.a = fVar14;
    (result->fields).ColorA.fields.r = (float)uVar17;
    (result->fields).ColorA.fields.g = SUB84(uVar17,4);
    (result->fields).ColorA.fields.b = (float)uVar18;
    (result->fields).ColorA.fields.a = SUB84(uVar18,4);
    (result->fields).ColorB.fields.r = (float)uVar15;
    (result->fields).ColorB.fields.g = SUB84(uVar15,4);
    (result->fields).ColorB.fields.b = (float)uVar16;
    (result->fields).ColorB.fields.a = SUB84(uVar16,4);
    (result->fields).ColorC.fields.r = (float)uVar10;
    (result->fields).ColorC.fields.g = SUB84(uVar10,4);
    (result->fields).ColorC.fields.b = (float)uVar11;
    (result->fields).ColorC.fields.a = SUB84(uVar11,4);
    return true;
  }
  return false;
}


// PatreonEffects.NameEffectHelpers$$TryGetGuildEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetGuildEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x1820c8c60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820c8f9b: xor al, al
// asm:   0x1820c8f9d: jmp 0x1820c8f31

bool PatreonEffects_NameEffectHelpers__TryGetGuildEffect
               (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,
               MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  bool bVar5;
  Settings_ProfileSettings_o *pSVar6;
  UnityEngine_Color_o *pUVar7;
  System_String_o *raw;
  char cVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int32_t local_res8 [2];
  UnityEngine_Color_Fields local_d8;
  UnityEngine_Color_o local_c8 [11];
  
  if (Il2CppMethodInitialized_184346972 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_184346972 = '\x01';
  }
  pSVar6 = PatreonEffects_NameEffectHelpers__GetProfile(player,(MethodInfo *)0x0);
  if (pSVar6 != (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (pSVar6->fields).GuildEffectEnabled;
    if ((((pSVar1 != (Settings_BoolSetting_o *)0x0) &&
         (pSVar2 = (pSVar6->fields).GuildEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
        (pSVar3 = (pSVar6->fields).GuildEffectColorA, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
       (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
      cVar8 = (pSVar1->fields)._value;
      raw = (pSVar2->fields)._value;
      pUVar7 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_d8,pUVar4,(MethodInfo *)0x0);
      pSVar3 = (pSVar6->fields).GuildEffectColorB;
      if ((pSVar3 != (Settings_ColorSetting_o *)0x0) &&
         (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
        uVar17._0_4_ = (pUVar7->fields).r;
        uVar17._4_4_ = (pUVar7->fields).g;
        uVar18._0_4_ = (pUVar7->fields).b;
        uVar18._4_4_ = (pUVar7->fields).a;
        pUVar7 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_d8,pUVar4,(MethodInfo *)0x0);
        pSVar3 = (pSVar6->fields).GuildEffectColorC;
        if ((pSVar3 != (Settings_ColorSetting_o *)0x0) &&
           (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
          uVar15._0_4_ = (pUVar7->fields).r;
          uVar15._4_4_ = (pUVar7->fields).g;
          uVar16._0_4_ = (pUVar7->fields).b;
          uVar16._4_4_ = (pUVar7->fields).a;
          pUVar7 = Utility_Color255__ToColor(local_c8,pUVar4,(MethodInfo *)0x0);
          pSVar3 = (pSVar6->fields).GuildEffectColorD;
          local_d8._0_8_ = uVar15;
          local_d8._8_8_ = uVar16;
          if ((pSVar3 != (Settings_ColorSetting_o *)0x0) &&
             (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
            uVar10._0_4_ = (pUVar7->fields).r;
            uVar10._4_4_ = (pUVar7->fields).g;
            uVar11._0_4_ = (pUVar7->fields).b;
            uVar11._4_4_ = (pUVar7->fields).a;
            pUVar7 = Utility_Color255__ToColor(local_c8,pUVar4,(MethodInfo *)0x0);
            fVar9 = (pUVar7->fields).r;
            fVar12 = (pUVar7->fields).g;
            fVar13 = (pUVar7->fields).b;
            fVar14 = (pUVar7->fields).a;
            goto label_1820c8e84;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  fVar9 = 1.0;
  cVar8 = '\0';
  uVar17._0_4_ = 1.0;
  uVar17._4_4_ = 1.0;
  uVar18._0_4_ = 1.0;
  uVar18._4_4_ = 1.0;
  raw = (System_String_o *)0x0;
  fVar12 = 1.0;
  fVar13 = 1.0;
  fVar14 = 1.0;
  uVar15 = uVar17;
  uVar16 = uVar18;
  uVar10 = uVar17;
  uVar11 = uVar18;
label_1820c8e84:
  local_res8[0] = 0;
  (result->fields).Enabled = false;
  *(undefined3 *)&(result->fields).field_0x1 = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorA.fields.b = 0.0;
  (result->fields).ColorA.fields.a = 0.0;
  (result->fields).ColorB.fields.r = 0.0;
  (result->fields).ColorB.fields.g = 0.0;
  (result->fields).ColorB.fields.b = 0.0;
  (result->fields).ColorB.fields.a = 0.0;
  (result->fields).ColorC.fields.r = 0.0;
  (result->fields).ColorC.fields.g = 0.0;
  (result->fields).ColorC.fields.b = 0.0;
  (result->fields).ColorC.fields.a = 0.0;
  (result->fields).ColorD.fields.r = 0.0;
  (result->fields).ColorD.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  if ((((player != (Photon_Realtime_Player_o *)0x0) && (pSVar6 != (Settings_ProfileSettings_o *)0x0)) &&
      (bVar5 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0), bVar5)) &&
     ((cVar8 != '\0' &&
      (bVar5 = PatreonEffects_NameEffectPresets__TryResolve(raw,local_res8,(MethodInfo *)0x0), bVar5)))) {
    (result->fields).Type = local_res8[0];
    (result->fields).Enabled = true;
    (result->fields).ColorD.fields.r = fVar9;
    (result->fields).ColorD.fields.g = fVar12;
    (result->fields).ColorD.fields.b = fVar13;
    (result->fields).ColorD.fields.a = fVar14;
    (result->fields).ColorA.fields.r = (float)uVar17;
    (result->fields).ColorA.fields.g = SUB84(uVar17,4);
    (result->fields).ColorA.fields.b = (float)uVar18;
    (result->fields).ColorA.fields.a = SUB84(uVar18,4);
    (result->fields).ColorB.fields.r = (float)uVar15;
    (result->fields).ColorB.fields.g = SUB84(uVar15,4);
    (result->fields).ColorB.fields.b = (float)uVar16;
    (result->fields).ColorB.fields.a = SUB84(uVar16,4);
    (result->fields).ColorC.fields.r = (float)uVar10;
    (result->fields).ColorC.fields.g = SUB84(uVar10,4);
    (result->fields).ColorC.fields.b = (float)uVar11;
    (result->fields).ColorC.fields.a = SUB84(uVar11,4);
    return true;
  }
  return false;
}


// PatreonEffects.NameEffectHelpers$$GetProfile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameEffectHelpers__GetProfile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820c8b60

Settings_ProfileSettings_o *
PatreonEffects_NameEffectHelpers__GetProfile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool bVar1;
  Il2CppObject *local_res8 [4];
  
  if (Il2CppMethodInitialized_184346973 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346973 = '\x01';
  }
  local_res8[0] = (Il2CppObject *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo !=
        (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (__this,(player->fields).actorNumber,local_res8,
                         (MethodInfo_141F4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
      if ((bVar1) && (local_res8[0] != (Il2CppObject *)0x0)) {
        return (Settings_ProfileSettings_o *)local_res8[0][3].klass;
      }
    }
    if ((player->fields).IsLocal != false) {
      return TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    }
  }
  return (Settings_ProfileSettings_o *)0x0;
}


// PatreonEffects.NameEffectHelpers$$TryGet
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGet (Photon_Realtime_Player_o* player, Settings_ProfileSettings_o* profile, bool enabled, System_String_o* effectStr, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x1820c9300

bool PatreonEffects_NameEffectHelpers__TryGet
               (Photon_Realtime_Player_o *player,Settings_ProfileSettings_o *profile,bool enabled,
               System_String_o *effectStr,UnityEngine_Color_o *colorA,UnityEngine_Color_o *colorB,
               UnityEngine_Color_o *colorC,UnityEngine_Color_o *colorD,
               PatreonEffects_ResolvedNameEffect_o *result,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  (result->fields).Enabled = false;
  *(undefined3 *)&(result->fields).field_0x1 = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorA.fields.b = 0.0;
  (result->fields).ColorA.fields.a = 0.0;
  (result->fields).ColorB.fields.r = 0.0;
  (result->fields).ColorB.fields.g = 0.0;
  (result->fields).ColorB.fields.b = 0.0;
  (result->fields).ColorB.fields.a = 0.0;
  (result->fields).ColorC.fields.r = 0.0;
  (result->fields).ColorC.fields.g = 0.0;
  (result->fields).ColorC.fields.b = 0.0;
  (result->fields).ColorC.fields.a = 0.0;
  (result->fields).ColorD.fields.r = 0.0;
  (result->fields).ColorD.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  if ((player != (Photon_Realtime_Player_o *)0x0) && (profile != (Settings_ProfileSettings_o *)0x0)) {
    bVar4 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0);
    if ((bVar4) && (enabled)) {
      bVar4 = PatreonEffects_NameEffectPresets__TryResolve(effectStr,local_res8,(MethodInfo *)0x0);
      if (bVar4) {
        (result->fields).Type = local_res8[0];
        (result->fields).Enabled = true;
        fVar1 = (colorA->fields).g;
        fVar2 = (colorA->fields).b;
        fVar3 = (colorA->fields).a;
        (result->fields).ColorA.fields.r = (colorA->fields).r;
        (result->fields).ColorA.fields.g = fVar1;
        (result->fields).ColorA.fields.b = fVar2;
        (result->fields).ColorA.fields.a = fVar3;
        fVar1 = (colorB->fields).g;
        fVar2 = (colorB->fields).b;
        fVar3 = (colorB->fields).a;
        (result->fields).ColorB.fields.r = (colorB->fields).r;
        (result->fields).ColorB.fields.g = fVar1;
        (result->fields).ColorB.fields.b = fVar2;
        (result->fields).ColorB.fields.a = fVar3;
        fVar1 = (colorC->fields).g;
        fVar2 = (colorC->fields).b;
        fVar3 = (colorC->fields).a;
        (result->fields).ColorC.fields.r = (colorC->fields).r;
        (result->fields).ColorC.fields.g = fVar1;
        (result->fields).ColorC.fields.b = fVar2;
        (result->fields).ColorC.fields.a = fVar3;
        fVar1 = (colorD->fields).g;
        fVar2 = (colorD->fields).b;
        fVar3 = (colorD->fields).a;
        (result->fields).ColorD.fields.r = (colorD->fields).r;
        (result->fields).ColorD.fields.g = fVar1;
        (result->fields).ColorD.fields.b = fVar2;
        (result->fields).ColorD.fields.a = fVar3;
        return true;
      }
    }
  }
  return false;
}


