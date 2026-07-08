// Type: Map.MapScriptOptions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptOptions.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/MapScriptOptions.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptOptions$$get_NamedParams
// il2cpp: bool Map_MapScriptOptions__get_NamedParams (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x3daff60

bool_conflict
Map_MapScriptOptions__get_NamedParams(Map_MapScriptOptions_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Map.MapScriptOptions$$get_Delimiter
// il2cpp: uint16_t Map_MapScriptOptions__get_Delimiter (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x3daff70

uint16_t Map_MapScriptOptions__get_Delimiter(Map_MapScriptOptions_o *__this,MethodInfo *method)

{
  return 0x7c;
}


// Map.MapScriptOptions$$.ctor
// il2cpp: void Map_MapScriptOptions___ctor (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x3dafc50

void Map_MapScriptOptions___ctor(Map_MapScriptOptions_o *__this,MethodInfo *method)

{
  if (DAT_057027b4 == '\0') {
    il2cpp_init_method_metadata(&"1.0");
    DAT_057027b4 = '\x01';
  }
  (__this->fields).EditorVersion = "1.0";
  il2cpp_runtime_glue(&__this->fields);
  (__this->fields).Description = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).Description);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


