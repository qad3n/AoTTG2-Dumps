// Type: ApplicationManagers.Changelog.AottgChangelogVersionStatus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogVersionStatus.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogVersionStatus$$Evaluate
// il2cpp: int32_t ApplicationManagers_Changelog_AottgChangelogVersionStatus__Evaluate (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latest, System_String_o* currentGameVersion, const MethodInfo* method);
// 0x5e29210

int32_t ApplicationManagers_Changelog_AottgChangelogVersionStatus__Evaluate
                  (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latest,
                  System_String_o *currentGameVersion,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  iVar2 = 0;
  if ((latest != (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0) &&
     ((latest->fields)._HasChangelog_k__BackingField != false)) {
    iVar2 = 0;
    bVar1 = System_String__IsNullOrEmpty((latest->fields)._Version_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_52ffe30
                        ((latest->fields)._Version_k__BackingField,currentGameVersion,4,(MethodInfo *)0x0);
      iVar2 = 2 - (uint)bVar1;
    }
  }
  return iVar2;
}


