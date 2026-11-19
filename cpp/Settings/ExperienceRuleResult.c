// Type: Settings.ExperienceRuleResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/ExperienceRuleResult.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceRuleResult$$get_IsValid
// il2cpp: bool Settings_ExperienceRuleResult__get_IsValid (Settings_ExperienceRuleResult_o* __this, const MethodInfo* method);
// 0x59d38e0

bool Settings_ExperienceRuleResult__get_IsValid(Settings_ExperienceRuleResult_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545c8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    Il2CppMethodInitialized_07545c8b = '\x01';
  }
  pSVar1 = (__this->fields).Errors;
  if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._size == 0;
}


// Settings.ExperienceRuleResult$$.ctor
// il2cpp: void Settings_ExperienceRuleResult___ctor (Settings_ExperienceRuleResult_o* __this, const MethodInfo* method);
// 0x59d3920

void Settings_ExperienceRuleResult___ctor(Settings_ExperienceRuleResult_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceRuleField__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (Il2CppMethodInitialized_07545c8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    Il2CppMethodInitialized_07545c8c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
  (__this->fields).Fields = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Fields);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Errors = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Errors);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


