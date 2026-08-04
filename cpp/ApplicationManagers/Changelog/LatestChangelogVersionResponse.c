// Type: ApplicationManagers.Changelog.LatestChangelogVersionResponse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/LatestChangelogVersionResponse.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$.ctor
// il2cpp: void ApplicationManagers_Changelog_LatestChangelogVersionResponse___ctor (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, bool hasChangelog, System_String_o* id, System_String_o* version, System_String_o* contentHash, System_String_o* publishedAt, System_String_o* updatedAt, const MethodInfo* method);
// 0x44c88e0

void ApplicationManagers_Changelog_LatestChangelogVersionResponse___ctor
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,
               bool_conflict hasChangelog,System_String_o *id,System_String_o *version,
               System_String_o *contentHash,System_String_o *publishedAt,System_String_o *updatedAt,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(char *)&(__this->fields)._HasChangelog_k__BackingField = (char)hasChangelog;
  (__this->fields)._Id_k__BackingField = id;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Id_k__BackingField,id);
  (__this->fields)._Version_k__BackingField = version;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Version_k__BackingField,version);
  (__this->fields)._ContentHash_k__BackingField = contentHash;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentHash_k__BackingField,contentHash);
  (__this->fields)._PublishedAt_k__BackingField = publishedAt;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._PublishedAt_k__BackingField);
  (__this->fields)._UpdatedAt_k__BackingField = updatedAt;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._UpdatedAt_k__BackingField,updatedAt);
  return;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$get_HasChangelog
// il2cpp: bool ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_HasChangelog (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, const MethodInfo* method);
// 0x44c8970

bool_conflict
ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_HasChangelog
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._HasChangelog_k__BackingField);
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$set_HasChangelog
// il2cpp: void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_HasChangelog (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, bool value, const MethodInfo* method);
// 0x44c8980

void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_HasChangelog
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._HasChangelog_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$get_Id
// il2cpp: System_String_o* ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_Id (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, const MethodInfo* method);
// 0x44c8990

System_String_o *
ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_Id
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$set_Id
// il2cpp: void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_Id (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c89a0

void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_Id
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Id_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Id_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$get_Version
// il2cpp: System_String_o* ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_Version (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, const MethodInfo* method);
// 0x44c89b0

System_String_o *
ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_Version
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._Version_k__BackingField;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$set_Version
// il2cpp: void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_Version (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c89c0

void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_Version
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Version_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Version_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$get_ContentHash
// il2cpp: System_String_o* ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_ContentHash (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, const MethodInfo* method);
// 0x44c89d0

System_String_o *
ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_ContentHash
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._ContentHash_k__BackingField;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$set_ContentHash
// il2cpp: void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_ContentHash (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c89e0

void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_ContentHash
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._ContentHash_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentHash_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$get_PublishedAt
// il2cpp: System_String_o* ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_PublishedAt (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, const MethodInfo* method);
// 0x44c89f0

System_String_o *
ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_PublishedAt
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._PublishedAt_k__BackingField;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$set_PublishedAt
// il2cpp: void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_PublishedAt (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c8a00

void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_PublishedAt
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._PublishedAt_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._PublishedAt_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$get_UpdatedAt
// il2cpp: System_String_o* ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_UpdatedAt (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, const MethodInfo* method);
// 0x44c8a10

System_String_o *
ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_UpdatedAt
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,MethodInfo *method)

{
  return (__this->fields)._UpdatedAt_k__BackingField;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$set_UpdatedAt
// il2cpp: void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_UpdatedAt (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c8a20

void ApplicationManagers_Changelog_LatestChangelogVersionResponse__set_UpdatedAt
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._UpdatedAt_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._UpdatedAt_k__BackingField);
  return;
}


// ApplicationManagers.Changelog.LatestChangelogVersionResponse$$get_Identity
// il2cpp: System_String_o* ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_Identity (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* __this, const MethodInfo* method);
// 0x44c8a30

System_String_o *
ApplicationManagers_Changelog_LatestChangelogVersionResponse__get_Identity
          (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ContentHash_k__BackingField,(MethodInfo *)0x0);
  return (&(__this->fields)._Version_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
}


