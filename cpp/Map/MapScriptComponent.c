// Type: Map.MapScriptComponent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptComponent.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptComponent.cs
// --------------------------------

// Map.MapScriptComponent$$.ctor
// il2cpp: void Map_MapScriptComponent___ctor (Map_MapScriptComponent_o* __this, const MethodInfo* method);
// 0x40b5d70

void Map_MapScriptComponent___ctor(Map_MapScriptComponent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (g_data_057ac4e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac4e5 = '\x01';
  }
  (__this->fields).ComponentName = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this->fields);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).Parameters = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Parameters);
  Utility_BaseCSVRowItem___ctor((Utility_BaseCSVRowItem_o *)__this,(MethodInfo *)0x0);
  return;
}


