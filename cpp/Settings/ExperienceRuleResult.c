// Type: Settings.ExperienceRuleResult
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/ExperienceRuleResult.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceRuleResult$$get_IsValid
// il2cpp: bool Settings_ExperienceRuleResult__get_IsValid (Settings_ExperienceRuleResult_o* __this, const MethodInfo* method);
// 0x181dbe660

bool Settings_ExperienceRuleResult__get_IsValid(Settings_ExperienceRuleResult_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344a1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    Il2CppMethodInitialized_184344a1a = '\x01';
  }
  pSVar1 = (__this->fields).Errors;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    return (pSVar1->fields)._size == 0;
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceRuleResult$$.ctor
// il2cpp: void Settings_ExperienceRuleResult___ctor (Settings_ExperienceRuleResult_o* __this, const MethodInfo* method);
// 0x181dbe5a0

void Settings_ExperienceRuleResult___ctor(Settings_ExperienceRuleResult_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceRuleField__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (Il2CppMethodInitialized_184344a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    Il2CppMethodInitialized_184344a1b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
  (__this->fields).Fields = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Fields,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Errors = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Errors,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


