// Type: ApplicationManagers.Credits.AottgCreditsResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsResponse$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResponse___ctor (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, ApplicationManagers_Credits_AottgCreditCategory_array* categories, const MethodInfo* method);
// 0x5e22490

void ApplicationManagers_Credits_AottgCreditsResponse___ctor
               (ApplicationManagers_Credits_AottgCreditsResponse_o *__this,
               ApplicationManagers_Credits_AottgCreditCategory_array *categories,MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (Il2CppMethodInitialized_075484bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_AottgCreditCategory);
    Il2CppMethodInitialized_075484bd = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (categories == (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    categories = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                 SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_
                     ((System_Object_array *)categories,
                      (MethodInfo_34889C0 *)MethodInfo_System_Array_AsReadOnly_AottgCreditCategory);
  if (__this == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._Categories_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Categories_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditsResponse$$get_Categories
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o* ApplicationManagers_Credits_AottgCreditsResponse__get_Categories (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, const MethodInfo* method);
// 0x5e22520

System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *
ApplicationManagers_Credits_AottgCreditsResponse__get_Categories
          (ApplicationManagers_Credits_AottgCreditsResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Categories_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResponse$$set_Categories
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResponse__set_Categories (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o* value, const MethodInfo* method);
// 0x5e22530

void ApplicationManagers_Credits_AottgCreditsResponse__set_Categories
               (ApplicationManagers_Credits_AottgCreditsResponse_o *__this,
               System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *value,MethodInfo *method)

{
  (__this->fields)._Categories_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Categories_k__BackingField);
  return;
}


