// Type: Settings.InspectorSettingMetadata
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/InspectorSettingMetadata.cs
// Prior real C# source: none
// --------------------------------

// Settings.InspectorSettingMetadata$$.ctor
// il2cpp: void Settings_InspectorSettingMetadata___ctor (Settings_InspectorSettingMetadata_o* __this, const MethodInfo* method);
// 0x181f1dbc0

void Settings_InspectorSettingMetadata___ctor(Settings_InspectorSettingMetadata_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184345480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184345480 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).Tooltip = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tooltip,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Dropbox = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Dropbox,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).Header = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Header,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).GroupId = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupId,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).GroupHeader = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupHeader,pSVar1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


