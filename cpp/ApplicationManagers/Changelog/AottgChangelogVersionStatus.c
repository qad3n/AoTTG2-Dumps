// Type: ApplicationManagers.Changelog.AottgChangelogVersionStatus
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogVersionStatus.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogVersionStatus$$Evaluate
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogVersionStatus__Evaluate (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, System_String_o* currentGameVersion, const MethodInfo* method);
// 0x1823637d0

int32_t ApplicationManagers_Changelog_AottgChangelogVersionStatus__Evaluate
                  (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,
                  System_String_o *currentGameVersion,MethodInfo *method)

{
  bool bVar1;
  
  if ((latest != (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) &&
     ((latest->fields)._HasChangelog_k__BackingField != false)) {
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._Version_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_196c550
                        ((latest->fields)._Version_k__BackingField,currentGameVersion,4,(MethodInfo *)0x0);
      return 2 - (uint)bVar1;
    }
  }
  return 0;
}


