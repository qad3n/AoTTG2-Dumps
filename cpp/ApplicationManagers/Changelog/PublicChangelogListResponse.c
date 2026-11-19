// Type: ApplicationManagers.Changelog.PublicChangelogListResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Changelog/PublicChangelogListResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.PublicChangelogListResponse$$.ctor
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse___ctor (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t total, int32_t page, int32_t pageSize, ApplicationManagers_Changelog_ChangelogSummaryResponse_array* entries, const MethodInfo* method);
// 0x5e24c10

void ApplicationManagers_Changelog_PublicChangelogListResponse___ctor
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t total,int32_t page
               ,int32_t pageSize,ApplicationManagers_Changelog_ChangelogSummaryResponse_array *entries,
               MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (Il2CppMethodInitialized_075484e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_ChangelogSummaryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse_array);
    Il2CppMethodInitialized_075484e2 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Total_k__BackingField = total;
  (__this->fields)._Page_k__BackingField = page;
  (__this->fields)._PageSize_k__BackingField = pageSize;
  if (entries == (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)0x0) {
    entries = (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)
              SZArrayNew(TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse_array,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_
                     ((System_Object_array *)entries,
                      (MethodInfo_34889C0 *)MethodInfo_System_Array_AsReadOnly_ChangelogSummaryResponse);
  (__this->fields)._Entries_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Entries_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Total
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Total (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x5e24cb0

int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Total
                  (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Total_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Total
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Total (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x5e24cc0

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Total
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._Total_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Page
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Page (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x5e24cd0

int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Page
                  (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Page_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Page
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Page (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x5e24ce0

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Page
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._Page_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_PageSize
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_PageSize (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x5e24cf0

int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_PageSize
                  (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._PageSize_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_PageSize
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_PageSize (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x5e24d00

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_PageSize
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._PageSize_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Entries
// il2cpp: System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* ApplicationManagers_Changelog_PublicChangelogListResponse__get_Entries (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x5e24d10

System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *
ApplicationManagers_Changelog_PublicChangelogListResponse__get_Entries
          (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Entries_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Entries
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Entries (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* value, const MethodInfo* method);
// 0x5e24d20

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Entries
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,
               System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *value,MethodInfo *method)

{
  (__this->fields)._Entries_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Entries_k__BackingField);
  return;
}


