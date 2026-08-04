// Type: ApplicationManagers.Credits.AottgCreditsResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsResponse$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResponse___ctor (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, ApplicationManagers_Credits_AottgCreditCategory_array* categories, const MethodInfo* method);
// 0x44c5e70

void ApplicationManagers_Credits_AottgCreditsResponse___ctor
               (ApplicationManagers_Credits_AottgCreditsResponse_o *__this,
               ApplicationManagers_Credits_AottgCreditCategory_array *categories,MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (g_data_057aeace == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditCategory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits_AottgCr);
    g_data_057aeace = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (categories == (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    categories = (ApplicationManagers_Credits_AottgCreditCategory_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditCategory,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_((System_Object_array *)categories,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits_AottgCr);
  if (__this != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    (__this->fields)._Categories_k__BackingField =
         (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)pSVar1;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar1);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// ApplicationManagers.Credits.AottgCreditsResponse$$get_Categories
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o* ApplicationManagers_Credits_AottgCreditsResponse__get_Categories (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, const MethodInfo* method);
// 0x44c5f00

System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *
ApplicationManagers_Credits_AottgCreditsResponse__get_Categories
          (ApplicationManagers_Credits_AottgCreditsResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Categories_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditsResponse$$set_Categories
// il2cpp: void ApplicationManagers_Credits_AottgCreditsResponse__set_Categories (ApplicationManagers_Credits_AottgCreditsResponse_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o* value, const MethodInfo* method);
// 0x44c5f10

void ApplicationManagers_Credits_AottgCreditsResponse__set_Categories
               (ApplicationManagers_Credits_AottgCreditsResponse_o *__this,
               System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *value,MethodInfo *method)

{
  (__this->fields)._Categories_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


