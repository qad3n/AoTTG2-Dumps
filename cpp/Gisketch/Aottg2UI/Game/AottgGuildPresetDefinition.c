// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o __this, System_String_o* id, System_String_o* label, int32_t kind, System_String_o* sprite, float imageScale, const MethodInfo* method);
// 0x58f6a20

void Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o *__this,System_String_o *id,
               System_String_o *label,int32_t kind,System_String_o *sprite,float imageScale,MethodInfo *method
               )

{
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label);
  (__this->fields).Kind = kind;
  (__this->fields).Sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sprite);
  (__this->fields).ImageScale = imageScale;
  return;
}


