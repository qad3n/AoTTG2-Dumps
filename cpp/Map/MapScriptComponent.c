// Type: Map.MapScriptComponent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptComponent.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/MapScriptComponent.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptComponent$$.ctor
// il2cpp: void Map_MapScriptComponent___ctor (Map_MapScriptComponent_o* __this, const MethodInfo* method);
// 0x3d9ac70

void Map_MapScriptComponent___ctor(Map_MapScriptComponent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057027b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057027b0 = '\x01';
  }
  (__this->fields).ComponentName = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&__this->fields);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).Parameters = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Parameters);
  Utility_BaseCSVRowItem___ctor((Utility_BaseCSVRowItem_o *)__this,(MethodInfo *)0x0);
  return;
}


