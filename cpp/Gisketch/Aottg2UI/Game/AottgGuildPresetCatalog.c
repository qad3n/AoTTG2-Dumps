// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetCatalog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$TryGet
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet (System_String_o* id, Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o* definition, const MethodInfo* method);
// 0x41e8870

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
  
  if (DAT_05704f14 == '\0') {
    il2cpp_init_method_metadata(&"aottg2_developer_team");
    il2cpp_init_method_metadata(&"supporter");
    il2cpp_init_method_metadata(&"UI/GuildPresets/GuildAoTTG2");
    il2cpp_init_method_metadata(&"AoTTG 2 Team");
    il2cpp_init_method_metadata(&"SUPPORTER");
    DAT_05704f14 = '\x01';
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
    il2cpp_runtime_glue(&local_48);
    uStack_40 = uVar3;
    il2cpp_runtime_glue(&uStack_40,uVar3);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    uStack_30 = 0;
    il2cpp_runtime_glue(&uStack_30,0);
    uStack_28 = CONCAT44(uStack_28._4_4_,0x3f800000);
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    local_48 = "aottg2_developer_team";
    il2cpp_runtime_glue(&local_48);
    uStack_40 = uVar3;
    il2cpp_runtime_glue(&uStack_40,uVar3);
    uStack_38 = CONCAT44(uStack_38._4_4_,1);
    uStack_30 = uVar1;
    il2cpp_runtime_glue(&uStack_30,uVar1);
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
  uVar3 = il2cpp_runtime_glue(definition,0);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label (System_String_o* id, const MethodInfo* method);
// 0x41e8a20

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
// 0x41e8a60

PatreonEffects_NameEffectSettings_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (DAT_05704f15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_05704f15 = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
  PatreonEffects_NameEffectSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (PatreonEffects_NameEffectSettings_o *)0x0) {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


