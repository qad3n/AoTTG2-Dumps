// Type: Map.MapScriptComponent
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptComponent.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptComponent.cs
// --------------------------------

// Map.MapScriptComponent$$.ctor
// il2cpp: void Map_MapScriptComponent___ctor (Map_MapScriptComponent_o* __this, const MethodInfo* method);
// 0x181eb5700

void Map_MapScriptComponent___ctor(Map_MapScriptComponent_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_1843450f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843450f8 = '\x01';
  }
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).ComponentName = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ComponentName,value);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Parameters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters,__this_00);
  Utility_BaseCSVRowItem___ctor((Utility_BaseCSVRowItem_o *)__this,(MethodInfo *)0x0);
  return;
}


