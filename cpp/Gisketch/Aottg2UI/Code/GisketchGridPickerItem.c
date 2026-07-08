// Type: Gisketch.Aottg2UI.Code.GisketchGridPickerItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPickerItem.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPickerItem$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o __this, System_String_o* key, System_String_o* label, System_String_o* sprite, System_String_o* keywords, const MethodInfo* method);
// 0x3afa980

void Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o __this,System_String_o *key,
               System_String_o *label,System_String_o *sprite,System_String_o *keywords,
               MethodInfo *method)

{
  key->klass = (System_String_c *)label;
  il2cpp_runtime_glue();
  key->monitor = sprite;
  il2cpp_runtime_glue(&key->monitor,sprite);
  key->fields = (System_String_Fields)keywords;
  il2cpp_runtime_glue(&key->fields,keywords);
  key[1].klass = (System_String_c *)method;
  il2cpp_runtime_glue(key + 1,method);
  return;
}


