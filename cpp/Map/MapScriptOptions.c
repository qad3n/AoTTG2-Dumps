// Type: Map.MapScriptOptions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptOptions.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptOptions.cs
// --------------------------------

// Map.MapScriptOptions$$get_NamedParams
// il2cpp: bool Map_MapScriptOptions__get_NamedParams (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Map_MapScriptOptions__get_NamedParams(Map_MapScriptOptions_o* __this, MethodInfo* method)

{
  return true;
}


// Map.MapScriptOptions$$get_Delimiter
// il2cpp: uint16_t Map_MapScriptOptions__get_Delimiter (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x181eda2e0

uint16_t
Map_MapScriptOptions__get_Delimiter(Map_MapScriptOptions_o* __this, MethodInfo* method)

{
  return 0x7c;
}


// Map.MapScriptOptions$$.ctor
// il2cpp: void Map_MapScriptOptions___ctor (Map_MapScriptOptions_o* __this, const MethodInfo* method);
// 0x181eda270

void Map_MapScriptOptions___ctor(Map_MapScriptOptions_o *__this,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184345109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_184345109 = '\x01';
  }
  (__this->fields).EditorVersion = "1.1";
  Il2CppCodeGenWriteBarrier(&(__this->fields).EditorVersion,"1.1");
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).Description = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Description,value);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  return;
}


