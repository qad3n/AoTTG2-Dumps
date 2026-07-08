// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetDefinition.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o __this, System_String_o* id, System_String_o* label, int32_t kind, System_String_o* sprite, float imageScale, const MethodInfo* method);
// 0x41e8810

void Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o __this,System_String_o *id,
               System_String_o *label,int32_t kind,System_String_o *sprite,float imageScale,
               MethodInfo *method)

{
  undefined4 in_register_00000014;
  
  id->klass = (System_String_c *)label;
  il2cpp_runtime_glue();
  id->monitor = (void *)CONCAT44(in_register_00000014,kind);
  il2cpp_runtime_glue(&id->monitor,(void *)CONCAT44(in_register_00000014,kind));
  (id->fields)._stringLength = (int32_t)sprite;
  id[1].klass = (System_String_c *)method;
  il2cpp_runtime_glue(id + 1,method);
  *(float *)&id[1].monitor = imageScale;
  return;
}


