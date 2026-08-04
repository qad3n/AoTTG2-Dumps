// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$TryGet
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet (System_String_o* id, Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o* definition, const MethodInfo* method);
// 0x45199b0

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet
          (System_String_o *id,Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o *definition,
          MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (g_data_057aedec == '\0') {
    il2cpp_runtime_helper_023445d0(&"aottg2_developer_team");
    il2cpp_runtime_helper_023445d0(&"supporter");
    il2cpp_runtime_helper_023445d0(&"UI/GuildPresets/GuildAoTTG2");
    il2cpp_runtime_helper_023445d0(&"AoTTG 2 Team");
    il2cpp_runtime_helper_023445d0(&"SUPPORTER");
    g_data_057aedec = '\x01';
  }
  bVar2 = System_String__op_Equality(id,"aottg2_developer_team",(MethodInfo *)0x0);
  uVar1 = "UI/GuildPresets/GuildAoTTG2";
  uVar3 = "AoTTG 2 Team";
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(id,"supporter",(MethodInfo *)0x0);
    uVar3 = "SUPPORTER";
    if ((char)bVar2 == '\0') {
      *(undefined8 *)&(definition->fields).Kind = 0;
      (definition->fields).Sprite = (System_String_o *)0x0;
      (definition->fields).Id = (System_String_o *)0x0;
      (definition->fields).Label = (System_String_o *)0x0;
      *(undefined8 *)&(definition->fields).ImageScale = 0;
      return 0;
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    local_48 = "supporter";
    il2cpp_runtime_helper_022b4080(&local_48);
    uStack_40 = uVar3;
    il2cpp_runtime_helper_022b4080(&uStack_40,uVar3);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    uStack_30 = 0;
    il2cpp_runtime_helper_022b4080(&uStack_30,0);
    uStack_28 = CONCAT44(uStack_28._4_4_,0x3f800000);
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    local_48 = "aottg2_developer_team";
    il2cpp_runtime_helper_022b4080(&local_48);
    uStack_40 = uVar3;
    il2cpp_runtime_helper_022b4080(&uStack_40,uVar3);
    uStack_38 = CONCAT44(uStack_38._4_4_,1);
    uStack_30 = uVar1;
    il2cpp_runtime_helper_022b4080(&uStack_30,uVar1);
    uStack_28 = CONCAT44(uStack_28._4_4_,0x3f8ccccd);
  }
  (definition->fields).Kind = (int32_t)uStack_38;
  *(undefined4 *)&(definition->fields).field_0x14 = uStack_38._4_4_;
  *(undefined4 *)&(definition->fields).Sprite = (undefined4)uStack_30;
  *(undefined4 *)((long)&(definition->fields).Sprite + 4) = uStack_30._4_4_;
  *(undefined4 *)&(definition->fields).Id = (undefined4)local_48;
  *(undefined4 *)((long)&(definition->fields).Id + 4) = local_48._4_4_;
  *(undefined4 *)&(definition->fields).Label = (undefined4)uStack_40;
  *(undefined4 *)((long)&(definition->fields).Label + 4) = uStack_40._4_4_;
  *(undefined8 *)&(definition->fields).ImageScale = uStack_28;
  uVar3 = il2cpp_runtime_helper_022b4080(definition,0);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label (System_String_o* id, const MethodInfo* method);
// 0x4519b60

System_String_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_38;
  
  local_38.fields.Kind = 0;
  local_38.fields._20_4_ = 0;
  local_38.fields.Sprite = (System_String_o *)0x0;
  local_38.fields.Id = (System_String_o *)0x0;
  local_38.fields.Label = (System_String_o *)0x0;
  local_38.fields.ImageScale = 0.0;
  local_38.fields._36_4_ = 0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(id,&local_38,in_RDX);
  if ((char)bVar1 != '\0') {
    id = local_38.fields.Label;
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$SupporterShimmer
// il2cpp: PatreonEffects_NameEffectSettings_o* Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer (const MethodInfo* method);
// 0x4519ba0

PatreonEffects_NameEffectSettings_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  PatreonEffects_NameEffectSettings_o *pPVar3;
  System_Action_GisketchChoiceOptionRenderContext__o *renderer;
  PatreonEffects_NameEffectSettings_o *extraout_RAX;
  
  if (g_data_057aeded == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057aeded = '\x01';
  }
  pPVar3 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(pPVar3,(MethodInfo *)0x0);
  if (pPVar3 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar3->fields).effectMode = 2;
    (pPVar3->fields).gradientA.fields.r = 0.84;
    (pPVar3->fields).gradientA.fields.g = 0.2;
    (pPVar3->fields).gradientA.fields.b = 0.9;
    (pPVar3->fields).gradientA.fields.a = 1.0;
    (pPVar3->fields).gradientB.fields.r = 0.96;
    (pPVar3->fields).gradientB.fields.g = 0.5;
    (pPVar3->fields).gradientB.fields.b = 1.0;
    (pPVar3->fields).gradientB.fields.a = 1.0;
    (pPVar3->fields).gradientC.fields.r = 1.0;
    (pPVar3->fields).gradientC.fields.g = 0.6;
    (pPVar3->fields).gradientC.fields.b = 1.0;
    (pPVar3->fields).gradientC.fields.a = 1.0;
    (pPVar3->fields).gradientD.fields.r = 0.84;
    (pPVar3->fields).gradientD.fields.g = 0.2;
    (pPVar3->fields).gradientD.fields.b = 0.9;
    (pPVar3->fields).gradientD.fields.a = 1.0;
    (pPVar3->fields).gradientSpeed = 0.16;
    (pPVar3->fields).glow = 0.82;
    (pPVar3->fields).scanlineStrength = 0.24;
    (pPVar3->fields).scanlineSpeed = 0.16;
    (pPVar3->fields).flickerStrength = 0.0;
    (pPVar3->fields).softness = 0.9;
    return pPVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchChoiceOptionRenderContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Render);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-preset-preview");
    g_data_057aedee = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar3 = *(PatreonEffects_NameEffectSettings_o **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
    cVar1 = *(char *)&(pPVar3->fields).gradientA.fields.r;
  }
  else {
    pPVar3 = *(PatreonEffects_NameEffectSettings_o **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
    cVar1 = *(char *)&(pPVar3->fields).gradientA.fields.r;
  }
  if (cVar1 != '\0') {
    return pPVar3;
  }
  if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar3 = *(PatreonEffects_NameEffectSettings_o **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
  }
  *(undefined1 *)&(pPVar3->fields).gradientA.fields.r = 1;
  renderer = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor();
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register("profile-character-guild-preset-preview",renderer,(MethodInfo *)0x0);
  return extraout_RAX;
}


