// Type: ApplicationManagers.Credits.AottgCreditsResponse
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsResponse$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResponse___ctor (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, ApplicationManagers_Credits_AottgCreditCategory_array* categories, const MethodInfo* method);
// 0x182365770

void ApplicationManagers_Credits_AottgCreditsResponse___ctor
               (ApplicationManagers_Credits_AottgCreditsResponse_o *__this,
               ApplicationManagers_Credits_AottgCreditCategory_array *categories,MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *value;
  
  if (Il2CppMethodInitialized_184347a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_AottgCreditCategory);
    Il2CppMethodInitialized_184347a0e = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (categories == (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    categories = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                 SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array,0);
  }
  value = System_Array__AsReadOnly_object_
                    ((System_Object_array *)categories,
                     (MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_AottgCreditCategory);
  if (__this != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    (__this->fields)._Categories_k__BackingField =
         (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Categories_k__BackingField,value);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsResponse$$get_Categories
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o* ApplicationManagers_Credits_AottgCreditsResponse__get_Categories (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o*
ApplicationManagers_Credits_AottgCreditsResponse__get_Categories(ApplicationManagers_Credits_AottgCreditsResponse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Categories_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResponse$$set_Categories
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResponse__set_Categories (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o* value, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_Credits_AottgCreditsResponse__set_Categories(ApplicationManagers_Credits_AottgCreditsResponse_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o* value, MethodInfo* method)

{
  (__this->fields)._Categories_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Categories_k__BackingField,value);
  return;
}


