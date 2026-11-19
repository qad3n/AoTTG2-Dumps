// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$TryGet
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet (System_String_o* id, Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o* definition, const MethodInfo* method);
// 0x58f6a80

bool Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet
               (System_String_o *id,Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o *definition,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  bool bVar3;
  System_String_o *local_48;
  System_String_o *pSStack_40;
  ulong uStack_38;
  System_String_o *pSStack_30;
  undefined8 uStack_28;
  
  if (Il2CppMethodInitialized_075455cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"aottg2_developer_team");
    il2cpp_codegen_initialize_runtime_metadata(&"supporter");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/GuildPresets/GuildAoTTG2");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG 2 Team");
    il2cpp_codegen_initialize_runtime_metadata(&"SUPPORTER");
    Il2CppMethodInitialized_075455cd = '\x01';
  }
  bVar3 = System_String__op_Equality(id,"aottg2_developer_team",(MethodInfo *)0x0);
  pSVar2 = "UI/GuildPresets/GuildAoTTG2";
  pSVar1 = "AoTTG 2 Team";
  if (bVar3) {
    pSStack_30 = (System_String_o *)0x0;
    uStack_28 = 0;
    pSStack_40 = (System_String_o *)0x0;
    uStack_38 = 0;
    local_48 = "aottg2_developer_team";
    Il2CppCodeGenWriteBarrier(&local_48);
    pSStack_40 = pSVar1;
    Il2CppCodeGenWriteBarrier(&pSStack_40);
    uStack_38 = CONCAT44(uStack_38._4_4_,1);
    pSStack_30 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pSStack_30);
    uStack_28 = CONCAT44(uStack_28._4_4_,0x3f8ccccd);
  }
  else {
    bVar3 = System_String__op_Equality(id,"supporter",(MethodInfo *)0x0);
    pSVar1 = "SUPPORTER";
    if (!bVar3) {
      *(undefined8 *)&(definition->fields).Kind = 0;
      (definition->fields).Sprite = (System_String_o *)0x0;
      (definition->fields).Id = (System_String_o *)0x0;
      (definition->fields).Label = (System_String_o *)0x0;
      *(undefined8 *)&(definition->fields).ImageScale = 0;
      return false;
    }
    pSStack_30 = (System_String_o *)0x0;
    uStack_28 = 0;
    pSStack_40 = (System_String_o *)0x0;
    uStack_38 = 0;
    local_48 = "supporter";
    Il2CppCodeGenWriteBarrier(&local_48);
    pSStack_40 = pSVar1;
    Il2CppCodeGenWriteBarrier(&pSStack_40);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    pSStack_30 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pSStack_30);
    uStack_28 = CONCAT44(uStack_28._4_4_,0x3f800000);
  }
  *(ulong *)&(definition->fields).Kind = uStack_38;
  (definition->fields).Sprite = pSStack_30;
  (definition->fields).Id = local_48;
  (definition->fields).Label = pSStack_40;
  *(undefined8 *)&(definition->fields).ImageScale = uStack_28;
  Il2CppCodeGenWriteBarrier((void **)definition);
  return true;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label (System_String_o* id, const MethodInfo* method);
// 0x58e04b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
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
  if (bVar1) {
    id = local_38.fields.Label;
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$SupporterShimmer
// il2cpp: PatreonEffects_NameEffectSettings_o* Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer (const MethodInfo* method);
// 0x58f6c30

PatreonEffects_NameEffectSettings_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (Il2CppMethodInitialized_075455ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
    Il2CppMethodInitialized_075455ce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this == (PatreonEffects_NameEffectSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).effectMode = 2;
  (__this->fields).gradientA.fields.r = 0.84;
  (__this->fields).gradientA.fields.g = 0.2;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.96;
  (__this->fields).gradientB.fields.g = 0.5;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 1.0;
  (__this->fields).gradientC.fields.g = 0.6;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 0.84;
  (__this->fields).gradientD.fields.g = 0.2;
  (__this->fields).gradientD.fields.b = 0.9;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 0.82;
  (__this->fields).scanlineStrength = 0.24;
  (__this->fields).scanlineSpeed = 0.16;
  (__this->fields).flickerStrength = 0.0;
  (__this->fields).softness = 0.9;
  return __this;
}


