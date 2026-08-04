// Type: ApplicationManagers.Changelog.PublicChangelogListResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/PublicChangelogListResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.PublicChangelogListResponse$$.ctor
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse___ctor (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t total, int32_t page, int32_t pageSize, ApplicationManagers_Changelog_ChangelogSummaryResponse_array* entries, const MethodInfo* method);
// 0x44c8690

void ApplicationManagers_Changelog_PublicChangelogListResponse___ctor
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t total,int32_t page
               ,int32_t pageSize,ApplicationManagers_Changelog_ChangelogSummaryResponse_array *entries,
               MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (g_data_057aeae8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogSummaryResponse);
    g_data_057aeae8 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Total_k__BackingField = total;
  (__this->fields)._Page_k__BackingField = page;
  (__this->fields)._PageSize_k__BackingField = pageSize;
  if (entries == (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)0x0) {
    entries = (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_ChangelogSummaryResponse,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_((System_Object_array *)entries,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
  (__this->fields)._Entries_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Entries_k__BackingField,pSVar1);
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Total
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Total (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x44c8730

int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Total
                  (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Total_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Total
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Total (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x44c8740

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Total
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._Total_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Page
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Page (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x44c8750

int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Page
                  (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Page_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Page
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Page (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x44c8760

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Page
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._Page_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_PageSize
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_PageSize (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x44c8770

int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_PageSize
                  (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._PageSize_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_PageSize
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_PageSize (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x44c8780

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_PageSize
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t value,
               MethodInfo *method)

{
  (__this->fields)._PageSize_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Entries
// il2cpp: System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* ApplicationManagers_Changelog_PublicChangelogListResponse__get_Entries (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x44c8790

System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *
ApplicationManagers_Changelog_PublicChangelogListResponse__get_Entries
          (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Entries_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Entries
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Entries (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* value, const MethodInfo* method);
// 0x44c87a0

void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Entries
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,
               System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *value,MethodInfo *method)

{
  (__this->fields)._Entries_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Entries_k__BackingField);
  return;
}


