// Type: Gisketch.Aottg2UI.Game.AottgProfilePreset
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreset.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreset$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreset_o __this, System_String_o* key, System_String_o* label, System_String_o* sprite, const MethodInfo* method);
// 0x4517820

void Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreset_o __this,System_String_o *key,System_String_o *label
               ,System_String_o *sprite,MethodInfo *method)

{
  key->klass = (System_String_c *)label;
  il2cpp_runtime_helper_022b4080();
  key->monitor = sprite;
  il2cpp_runtime_helper_022b4080(&key->monitor,sprite);
  key->fields = (System_String_Fields)method;
  il2cpp_runtime_helper_022b4080(&key->fields,method);
  return;
}


