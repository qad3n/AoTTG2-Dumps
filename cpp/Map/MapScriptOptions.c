// Type: Map.MapScriptOptions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptOptions.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptOptions.cs
// --------------------------------

// Map.MapScriptOptions$$get_NamedParams
// il2cpp: bool Map_MapScriptOptions__get_NamedParams (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x40b5f10

bool_conflict Map_MapScriptOptions__get_NamedParams(Map_MapScriptOptions_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Map.MapScriptOptions$$get_Delimiter
// il2cpp: uint16_t Map_MapScriptOptions__get_Delimiter (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x40b5f20

uint16_t Map_MapScriptOptions__get_Delimiter(Map_MapScriptOptions_o *__this,MethodInfo *method)

{
  return 0x7c;
}


// Map.MapScriptOptions$$.ctor
// il2cpp: void Map_MapScriptOptions___ctor (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x40b5b20

void Map_MapScriptOptions___ctor(Map_MapScriptOptions_o *__this,MethodInfo *method)

{
  if (g_data_057ac4e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"1.0");
    g_data_057ac4e9 = '\x01';
  }
  (__this->fields).EditorVersion = "1.0";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  (__this->fields).Description = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).Description);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


