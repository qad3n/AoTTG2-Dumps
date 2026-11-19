// Type: Settings.InspectorSettingMetadata
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InspectorSettingMetadata.cs
// Prior real C# source: none
// --------------------------------

// Settings.InspectorSettingMetadata$$.ctor
// il2cpp: void Settings_InspectorSettingMetadata___ctor (Settings_InspectorSettingMetadata_o* __this, const MethodInfo* method);
// 0x5b55000

void Settings_InspectorSettingMetadata___ctor(Settings_InspectorSettingMetadata_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_075472cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075472cc = '\x01';
  }
  (__this->fields).Tooltip = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tooltip);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Dropbox = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Dropbox);
  (__this->fields).Header = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).Header);
  (__this->fields).GroupId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupId);
  (__this->fields).GroupHeader = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupHeader);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


