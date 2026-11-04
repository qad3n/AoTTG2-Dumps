// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o __this, System_String_o* id, System_String_o* label, int32_t kind, System_String_o* sprite, float imageScale, const MethodInfo* method);
// 0x181e12d20

void Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o *__this,System_String_o *id,
               System_String_o *label,int32_t kind,System_String_o *sprite,float imageScale,MethodInfo *method
               )

{
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this,id);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label,label);
  (__this->fields).Sprite = sprite;
  (__this->fields).Kind = kind;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sprite,sprite);
  (__this->fields).ImageScale = imageScale;
  return;
}


