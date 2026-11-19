// Type: Gisketch.Aottg2UI.Game.AottgProfilePreset
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreset.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreset$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreset_o __this, System_String_o* key, System_String_o* label, System_String_o* sprite, const MethodInfo* method);
// 0x5904950

void Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreset_o *__this,System_String_o *key,
               System_String_o *label,System_String_o *sprite,MethodInfo *method)

{
  (__this->fields).Key = key;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label);
  (__this->fields).Sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sprite);
  return;
}


