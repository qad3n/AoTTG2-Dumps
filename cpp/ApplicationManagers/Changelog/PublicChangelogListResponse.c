// Type: ApplicationManagers.Changelog.PublicChangelogListResponse
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/PublicChangelogListResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.PublicChangelogListResponse$$.ctor
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse___ctor (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t total, int32_t page, int32_t pageSize, ApplicationManagers_Changelog_ChangelogSummaryResponse_array* entries, const MethodInfo* method);
// 0x182371ad0

void ApplicationManagers_Changelog_PublicChangelogListResponse___ctor
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this,int32_t total,int32_t page
               ,int32_t pageSize,ApplicationManagers_Changelog_ChangelogSummaryResponse_array *entries,
               MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *value;
  
  if (Il2CppMethodInitialized_184347a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_ChangelogSummaryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse_array);
    Il2CppMethodInitialized_184347a28 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Total_k__BackingField = total;
  (__this->fields)._Page_k__BackingField = page;
  (__this->fields)._PageSize_k__BackingField = pageSize;
  if (entries == (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)0x0) {
    entries = (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)
              SZArrayNew(TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse_array,0);
  }
  value = System_Array__AsReadOnly_object_
                    ((System_Object_array *)entries,
                     (MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_ChangelogSummaryResponse);
  (__this->fields)._Entries_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Entries_k__BackingField,value);
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Total
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Total (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x180546860

int32_t
ApplicationManagers_Changelog_PublicChangelogListResponse__get_Total(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Total_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Total
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Total (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x180560b20

void
ApplicationManagers_Changelog_PublicChangelogListResponse__set_Total(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._Total_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Page
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_Page (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x1808e79a0

int32_t
ApplicationManagers_Changelog_PublicChangelogListResponse__get_Page(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Page_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Page
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Page (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x180d23ee0

void
ApplicationManagers_Changelog_PublicChangelogListResponse__set_Page(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._Page_k__BackingField = value;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_PageSize
// il2cpp: int32_t ApplicationManagers_Changelog_PublicChangelogListResponse__get_PageSize (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x1808fb390

int32_t
ApplicationManagers_Changelog_PublicChangelogListResponse__get_PageSize(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, MethodInfo* method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._PageSize_k__BackingField.fields._state;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_PageSize
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_PageSize (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, const MethodInfo* method);
// 0x18111c9c0

void
ApplicationManagers_Changelog_PublicChangelogListResponse__set_PageSize(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._PageSize_k__BackingField.fields._state = (uint32_t)value.fields._state;
  return;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$get_Entries
// il2cpp: System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* ApplicationManagers_Changelog_PublicChangelogListResponse__get_Entries (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, const MethodInfo* method);
// 0x1805852b0

System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o*
ApplicationManagers_Changelog_PublicChangelogListResponse__get_Entries(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, MethodInfo* method)

{
  return (__this->fields)._Entries_k__BackingField;
}


// ApplicationManagers.Changelog.PublicChangelogListResponse$$set_Entries
// il2cpp: void ApplicationManagers_Changelog_PublicChangelogListResponse__set_Entries (ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* value, const MethodInfo* method);
// 0x180ace2f0

void
ApplicationManagers_Changelog_PublicChangelogListResponse__set_Entries(ApplicationManagers_Changelog_PublicChangelogListResponse_o* __this, System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* value, MethodInfo* method)

{
  (__this->fields)._Entries_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Entries_k__BackingField,value);
  return;
}


