// Type: Gisketch.Aottg2UI.Game.AottgChangelogDialogState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogDialogState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_LatestVersion
// il2cpp: ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_LatestVersion (const MethodInfo* method);
// 0x44ddf10

ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *
Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_LatestVersion(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb0 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)
            (*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)
          (*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 8);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_LatestVersion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_LatestVersion (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* value, const MethodInfo* method);
// 0x44ddf80

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_LatestVersion
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aebb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb1 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)(lVar1 + 8) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_LatestPreviewEntry
// il2cpp: ApplicationManagers_Changelog_ChangelogEntryResponse_o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_LatestPreviewEntry (const MethodInfo* method);
// 0x44ddfe0

ApplicationManagers_Changelog_ChangelogEntryResponse_o *
Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_LatestPreviewEntry(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb2 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10)
    ;
  }
  il2cpp_runtime_helper_02337ed0();
  return *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_LatestPreviewEntry
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_LatestPreviewEntry (ApplicationManagers_Changelog_ChangelogEntryResponse_o* value, const MethodInfo* method);
// 0x44de050

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_LatestPreviewEntry
               (ApplicationManagers_Changelog_ChangelogEntryResponse_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aebb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb3 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_ReaderEntry
// il2cpp: ApplicationManagers_Changelog_ChangelogEntryResponse_o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_ReaderEntry (const MethodInfo* method);
// 0x44de0b0

ApplicationManagers_Changelog_ChangelogEntryResponse_o *
Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_ReaderEntry(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb4 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x18)
    ;
  }
  il2cpp_runtime_helper_02337ed0();
  return *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x18);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_ReaderEntry
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_ReaderEntry (ApplicationManagers_Changelog_ChangelogEntryResponse_o* value, const MethodInfo* method);
// 0x44de120

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_ReaderEntry
               (ApplicationManagers_Changelog_ChangelogEntryResponse_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aebb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb5 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(lVar1 + 0x18) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_ReaderMode
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_ReaderMode (const MethodInfo* method);
// 0x44de180

int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_ReaderMode(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb6 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x20);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_ReaderMode
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_ReaderMode (int32_t value, const MethodInfo* method);
// 0x44de1f0

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_ReaderMode(int32_t value,MethodInfo *method)

{
  if (g_data_057aebb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb7 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x20) = value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_ReaderShowsNewUpdate
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_ReaderShowsNewUpdate (const MethodInfo* method);
// 0x44de240

bool_conflict Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_ReaderShowsNewUpdate(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x24));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x24));
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_ReaderShowsNewUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_ReaderShowsNewUpdate (bool value, const MethodInfo* method);
// 0x44de2b0

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_ReaderShowsNewUpdate
               (bool_conflict value,MethodInfo *method)

{
  if (g_data_057aebb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebb9 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x24) = (char)value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_SelectedEntryId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_SelectedEntryId (const MethodInfo* method);
// 0x44de300

System_String_o * Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_SelectedEntryId(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebba = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x28);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_SelectedEntryId
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_SelectedEntryId (System_String_o* value, const MethodInfo* method);
// 0x44de370

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_SelectedEntryId
               (System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aebbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebbb = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryPage
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryPage (const MethodInfo* method);
// 0x44de3d0

int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryPage(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebbc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebbc = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x30);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_HistoryPage
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_HistoryPage (int32_t value, const MethodInfo* method);
// 0x44de440

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_HistoryPage(int32_t value,MethodInfo *method)

{
  if (g_data_057aebbd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebbd = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x30) = value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryTotal
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryTotal (const MethodInfo* method);
// 0x44de490

int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryTotal(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebbe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebbe = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x34);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x34);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_HistoryTotal
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_HistoryTotal (int32_t value, const MethodInfo* method);
// 0x44de500

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_HistoryTotal(int32_t value,MethodInfo *method)

{
  if (g_data_057aebbf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebbf = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x34) = value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryPageSize
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryPageSize (const MethodInfo* method);
// 0x44de550

int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryPageSize(MethodInfo *method)

{
  return 0x14;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HistoryEntries
// il2cpp: System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryEntries (const MethodInfo* method);
// 0x44de560

System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *
Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HistoryEntries(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc0 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)
           **(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)
         **(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_SelectedHistoryIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_SelectedHistoryIndex (const MethodInfo* method);
// 0x44de5d0

int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_SelectedHistoryIndex(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$set_SelectedHistoryIndex
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_SelectedHistoryIndex (int32_t value, const MethodInfo* method);
// 0x44de640

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__set_SelectedHistoryIndex
               (int32_t value,MethodInfo *method)

{
  if (g_data_057aebc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc2 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38) = value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HasMoreHistory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasMoreHistory (const MethodInfo* method);
// 0x44de690

bool_conflict Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasMoreHistory(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  int unaff_EBP;
  
  if (g_data_057aebc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aebc3 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044de6af;
label_044de719:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = **(long **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (lVar2 != 0) goto label_044de6be;
label_044de730:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044de719;
label_044de6af:
    lVar2 = **(long **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (lVar2 == 0) goto label_044de730;
label_044de6be:
    unaff_EBP = *(int *)(lVar2 + 0x18);
    if (g_data_057aeca6 != '\0') {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
      goto joined_r0x044de74e;
    }
  }
  il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
  g_data_057aeca6 = '\x01';
  iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
joined_r0x044de74e:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) >> 8),
                  unaff_EBP < *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x34));
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_HasHistory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasHistory (const MethodInfo* method);
// 0x44de760

bool_conflict Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasHistory(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  
  if (g_data_057aebc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aebc4 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer;
  }
  else {
    lVar2 = *(long *)((MethodInfo *)((long)TypeInfo_AottgChangelogDialogState + 0xb0))->virtualMethodPointer;
  }
  if (lVar2 != 0) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),0 < *(int *)(lVar2 + 0x18));
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aebc5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&((MethodInfo *)((long)TypeInfo_AottgChangelogDialogState + 0xb0))->parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer + 0x38);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer + 0x38);
  }
  if (iVar1 < 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar3 = TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer;
    lVar2 = *(long *)pIVar3;
    method_00 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    pIVar3 = TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer;
    lVar2 = *(long *)pIVar3;
    method_00 = TypeInfo_AottgChangelogDialogState;
  }
  TypeInfo_AottgChangelogDialogState = method_00;
  if (lVar2 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(pIVar3 + 0x38) + 1 < *(int *)(lVar2 + 0x18)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),1);
    }
    if (*(int *)((long)&method_00[2].parameters + 4) != 0) {
      bVar4 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasMoreHistory(method_00);
      return bVar4;
    }
  }
  il2cpp_runtime_helper_02337ed0();
  bVar4 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasMoreHistory(method_00);
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_CanGoPrevious
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_CanGoPrevious (const MethodInfo* method);
// 0x44de7f0

bool_conflict Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_CanGoPrevious(MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  bool_conflict bVar4;
  MethodInfo *method_00;
  
  if (g_data_057aebc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aebc5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&((MethodInfo *)((long)TypeInfo_AottgChangelogDialogState + 0xb0))->parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer + 0x38);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer + 0x38);
  }
  if (iVar1 < 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar2 = TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer;
    lVar3 = *(long *)pIVar2;
    method_00 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    pIVar2 = TypeInfo_AottgChangelogDialogState[2].virtualMethodPointer;
    lVar3 = *(long *)pIVar2;
    method_00 = TypeInfo_AottgChangelogDialogState;
  }
  TypeInfo_AottgChangelogDialogState = method_00;
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(pIVar2 + 0x38) + 1 < *(int *)(lVar3 + 0x18)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),1);
    }
    if (*(int *)((long)&method_00[2].parameters + 4) != 0) {
      bVar4 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasMoreHistory(method_00);
      return bVar4;
    }
  }
  il2cpp_runtime_helper_02337ed0();
  bVar4 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_HasMoreHistory(method_00);
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_CanGoNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_CanGoNext (const MethodInfo* method);
// 0x44de990

bool_conflict Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_CanGoNext(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aebc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc6 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) >> 8),
                  0 < *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38));
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_PreviousSummary
// il2cpp: ApplicationManagers_Changelog_ChangelogSummaryResponse_o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_PreviousSummary (const MethodInfo* method);
// 0x44dea30

ApplicationManagers_Changelog_ChangelogSummaryResponse_o *
Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_PreviousSummary(MethodInfo *method)

{
  int iVar1;
  undefined8 *puVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *pAVar5;
  undefined4 extraout_var;
  System_Collections_Generic_List_object__o *pSVar6;
  long lVar7;
  long lVar8;
  
  if (g_data_057aebc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
    g_data_057aebc7 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044deb49;
label_044dea58:
    if (g_data_057aeca7 != '\0') goto label_044dea65;
label_044deb5b:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044deb7e;
label_044dea75:
    iVar1 = *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044dea58;
label_044deb49:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca7 == '\0') goto label_044deb5b;
label_044dea65:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044dea75;
label_044deb7e:
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
  }
  if (iVar1 < 0) {
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca7 == '\0') goto label_044debb3;
label_044deaa0:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044deab0;
label_044debd6:
    il2cpp_runtime_helper_02337ed0();
    puVar2 = *(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    pSVar6 = (System_Collections_Generic_List_object__o *)*puVar2;
  }
  else {
    if (g_data_057aeca7 != '\0') goto label_044deaa0;
label_044debb3:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044debd6;
label_044deab0:
    puVar2 = *(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    pSVar6 = (System_Collections_Generic_List_object__o *)*puVar2;
  }
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((pSVar6->fields)._size <= *(int *)(puVar2 + 7) + 1) {
      return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
    }
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar6 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
      if (g_data_057aeca7 == '\0') goto label_044dec12;
label_044deaec:
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    else {
      if (g_data_057aeca7 != '\0') goto label_044deaec;
label_044dec12:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      g_data_057aeca7 = '\x01';
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
      pAVar5 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)
               System_Collections_Generic_List_object___get_Item
                         (pSVar6,*(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38) + 1,MethodInfo_ChangelogSummaryResponse_get_Item);
      return pAVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
    g_data_057aebc8 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044ded79;
label_044dec98:
    if (g_data_057aebc6 != '\0') goto label_044deca5;
label_044ded8b:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc6 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044dedae;
label_044decb5:
    if (g_data_057aeca7 != '\0') goto label_044decc2;
label_044dedc0:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044dede3;
label_044decd2:
    iVar1 = *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044dec98;
label_044ded79:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aebc6 == '\0') goto label_044ded8b;
label_044deca5:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044decb5;
label_044dedae:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca7 == '\0') goto label_044dedc0;
label_044decc2:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044decd2;
label_044dede3:
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
  }
  if (iVar1 < 1) {
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (g_data_057aeca7 == '\0') goto label_044dee25;
label_044ded07:
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    pSVar6 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (g_data_057aeca7 != '\0') goto label_044ded07;
label_044dee25:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  lVar7 = TypeInfo_AottgChangelogDialogState;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar7 = TypeInfo_AottgChangelogDialogState;
  }
  TypeInfo_AottgChangelogDialogState = lVar7;
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    pAVar5 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)
             System_Collections_Generic_List_object___get_Item
                       (pSVar6,*(int *)(*(long *)(lVar7 + 0xb8) + 0x38) + -1,MethodInfo_ChangelogSummaryResponse_get_Item);
    return pAVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044defc3;
label_044dee8b:
    if (g_data_057aeca8 != '\0') goto label_044dee98;
label_044defd5:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044dee8b;
label_044defc3:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca8 == '\0') goto label_044defd5;
label_044dee98:
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar8 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(long *)(lVar8 + 8) = lVar7;
  il2cpp_runtime_helper_022b4080(lVar8 + 8,lVar7);
  if (g_data_057aeca9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df028;
label_044deedc:
    pAVar5 = *(ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    pSVar3 = (pAVar5->fields)._Id_k__BackingField;
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044deedc;
label_044df028:
    il2cpp_runtime_helper_02337ed0();
    pAVar5 = *(ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    pSVar3 = (pAVar5->fields)._Id_k__BackingField;
  }
  if (pSVar3 == (System_String_o *)0x0) {
    return pAVar5;
  }
  if (lVar7 == 0) goto label_044def4e;
  pSVar3 = *(System_String_o **)(lVar7 + 0x18);
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca9 == '\0') goto label_044df09e;
label_044def11:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044def21;
label_044df0c1:
    il2cpp_runtime_helper_02337ed0();
    lVar7 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    lVar8 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    if (g_data_057aeca9 != '\0') goto label_044def11;
label_044df09e:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df0c1;
label_044def21:
    lVar7 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    lVar8 = TypeInfo_AottgChangelogDialogState;
  }
  TypeInfo_AottgChangelogDialogState = lVar8;
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebca == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      g_data_057aebca = '\x01';
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aecaa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      g_data_057aecaa = '\x01';
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar7 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
    *(long *)(lVar7 + 0x10) = lVar8;
    pAVar5 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)
             il2cpp_runtime_helper_022b4080(lVar7 + 0x10,lVar8);
    return pAVar5;
  }
  bVar4 = System_String__op_Inequality(pSVar3,*(System_String_o **)(lVar7 + 0x10),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)CONCAT44(extraout_var,bVar4);
  }
label_044def4e:
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aecaa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecaa = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar7 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  pAVar5 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)il2cpp_runtime_helper_022b4080(lVar7 + 0x10,0);
  return pAVar5;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$get_NextLoadedSummary
// il2cpp: ApplicationManagers_Changelog_ChangelogSummaryResponse_o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_NextLoadedSummary (const MethodInfo* method);
// 0x44dec70

ApplicationManagers_Changelog_ChangelogSummaryResponse_o *
Gisketch_Aottg2UI_Game_AottgChangelogDialogState__get_NextLoadedSummary(MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *pAVar4;
  undefined4 extraout_var;
  System_Collections_Generic_List_object__o *__this;
  long lVar5;
  long lVar6;
  
  if (g_data_057aebc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
    g_data_057aebc8 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044ded79;
label_044dec98:
    if (g_data_057aebc6 != '\0') goto label_044deca5;
label_044ded8b:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc6 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044dedae;
label_044decb5:
    if (g_data_057aeca7 != '\0') goto label_044decc2;
label_044dedc0:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044dede3;
label_044decd2:
    iVar1 = *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044dec98;
label_044ded79:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aebc6 == '\0') goto label_044ded8b;
label_044deca5:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044decb5;
label_044dedae:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca7 == '\0') goto label_044dedc0;
label_044decc2:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044decd2;
label_044dede3:
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38);
  }
  if (iVar1 < 1) {
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (g_data_057aeca7 == '\0') goto label_044dee25;
label_044ded07:
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    __this = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (g_data_057aeca7 != '\0') goto label_044ded07;
label_044dee25:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  lVar5 = TypeInfo_AottgChangelogDialogState;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar5 = TypeInfo_AottgChangelogDialogState;
  }
  TypeInfo_AottgChangelogDialogState = lVar5;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pAVar4 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)
             System_Collections_Generic_List_object___get_Item
                       (__this,*(int *)(*(long *)(lVar5 + 0xb8) + 0x38) + -1,MethodInfo_ChangelogSummaryResponse_get_Item);
    return pAVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044defc3;
label_044dee8b:
    if (g_data_057aeca8 != '\0') goto label_044dee98;
label_044defd5:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044dee8b;
label_044defc3:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca8 == '\0') goto label_044defd5;
label_044dee98:
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar6 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(long *)(lVar6 + 8) = lVar5;
  il2cpp_runtime_helper_022b4080(lVar6 + 8,lVar5);
  if (g_data_057aeca9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df028;
label_044deedc:
    pAVar4 = *(ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    pSVar2 = (pAVar4->fields)._Id_k__BackingField;
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044deedc;
label_044df028:
    il2cpp_runtime_helper_02337ed0();
    pAVar4 = *(ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    pSVar2 = (pAVar4->fields)._Id_k__BackingField;
  }
  if (pSVar2 == (System_String_o *)0x0) {
    return pAVar4;
  }
  if (lVar5 == 0) goto label_044def4e;
  pSVar2 = *(System_String_o **)(lVar5 + 0x18);
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca9 == '\0') goto label_044df09e;
label_044def11:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044def21;
label_044df0c1:
    il2cpp_runtime_helper_02337ed0();
    lVar5 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    lVar6 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    if (g_data_057aeca9 != '\0') goto label_044def11;
label_044df09e:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df0c1;
label_044def21:
    lVar5 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    lVar6 = TypeInfo_AottgChangelogDialogState;
  }
  TypeInfo_AottgChangelogDialogState = lVar6;
  if (lVar5 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebca == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      g_data_057aebca = '\x01';
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aecaa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      g_data_057aecaa = '\x01';
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
    *(long *)(lVar5 + 0x10) = lVar6;
    pAVar4 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)
             il2cpp_runtime_helper_022b4080(lVar5 + 0x10,lVar6);
    return pAVar4;
  }
  bVar3 = System_String__op_Inequality(pSVar2,*(System_String_o **)(lVar5 + 0x10),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)CONCAT44(extraout_var,bVar3);
  }
label_044def4e:
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aecaa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecaa = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar5 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  pAVar4 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)il2cpp_runtime_helper_022b4080(lVar5 + 0x10,0);
  return pAVar4;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SetLatestVersion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SetLatestVersion (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o* latestVersion, const MethodInfo* method);
// 0x44dee60

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SetLatestVersion
               (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *latestVersion,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *a;
  bool_conflict bVar3;
  long lVar4;
  
  if (g_data_057aebc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebc9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044dee8b;
label_044defc3:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca8 != '\0') goto label_044dee98;
label_044defd5:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044defc3;
label_044dee8b:
    if (g_data_057aeca8 == '\0') goto label_044defd5;
label_044dee98:
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)(lVar2 + 8) = latestVersion;
  il2cpp_runtime_helper_022b4080(lVar2 + 8,latestVersion);
  if (g_data_057aeca9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044deedc;
label_044df028:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df028;
label_044deedc:
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
  }
  if (lVar2 == 0) {
    return;
  }
  if (latestVersion == (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0)
  goto label_044def4e;
  a = (latestVersion->fields)._Id_k__BackingField;
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeca9 != '\0') goto label_044def11;
label_044df09e:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca9 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044def21;
label_044df0c1:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    lVar4 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    if (g_data_057aeca9 == '\0') goto label_044df09e;
label_044def11:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df0c1;
label_044def21:
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    lVar4 = TypeInfo_AottgChangelogDialogState;
  }
  TypeInfo_AottgChangelogDialogState = lVar4;
  if (lVar2 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebca == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      g_data_057aebca = '\x01';
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aecaa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      g_data_057aecaa = '\x01';
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
    *(long *)(lVar2 + 0x10) = lVar4;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,lVar4);
    return;
  }
  bVar3 = System_String__op_Inequality(a,*(System_String_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
label_044def4e:
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aecaa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecaa = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SetLatestPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SetLatestPreview (ApplicationManagers_Changelog_ChangelogEntryResponse_o* entry, const MethodInfo* method);
// 0x44df0f0

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SetLatestPreview
               (ApplicationManagers_Changelog_ChangelogEntryResponse_o *entry,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057aebca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebca = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aecaa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecaa = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(lVar2 + 0x10) = entry;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,entry);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SetReader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SetReader (int32_t mode, ApplicationManagers_Changelog_ChangelogEntryResponse_o* entry, const MethodInfo* method);
// 0x44df1b0

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SetReader
               (int32_t mode,ApplicationManagers_Changelog_ChangelogEntryResponse_o *entry,MethodInfo *method)

{
  int iVar1;
  System_String_o *id;
  int32_t iVar2;
  MethodInfo *method_00;
  long lVar3;
  
  if (g_data_057aebcb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebcb = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044df1dd;
label_044df338:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aecab != '\0') goto label_044df1ea;
label_044df34a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecab = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044df1fa;
label_044df36d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = TypeInfo_AottgChangelogDialogState;
    *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x20) = mode;
    if (g_data_057aecac != '\0') goto label_044df211;
label_044df38c:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecac = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    lVar3 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df338;
label_044df1dd:
    if (g_data_057aecab == '\0') goto label_044df34a;
label_044df1ea:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df36d;
label_044df1fa:
    lVar3 = TypeInfo_AottgChangelogDialogState;
    *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x20) = mode;
    if (g_data_057aecac == '\0') goto label_044df38c;
label_044df211:
    iVar1 = *(int *)(lVar3 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = TypeInfo_AottgChangelogDialogState;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(ApplicationManagers_Changelog_ChangelogEntryResponse_o **)(lVar3 + 0x18) = entry;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x18,entry);
  if (entry != (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0) {
    method_00 = (MethodInfo *)(entry->fields)._Id_k__BackingField;
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    goto joined_r0x044df3f2;
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae852 != '\0') goto label_044df3cd;
label_044df4cb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057ae852 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    if (g_data_057ae852 == '\0') goto label_044df4cb;
label_044df3cd:
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = *(MethodInfo **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x28);
  iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
joined_r0x044df3f2:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aecad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecad = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(MethodInfo **)(lVar3 + 0x28) = method_00;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x28);
  if (g_data_057ae852 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057ae852 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    id = *(System_String_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x28);
  }
  else {
    id = *(System_String_o **)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x28);
  }
  if (g_data_057aebd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebd0 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__IndexOfHistoryId(id,method_00);
  if (g_data_057aecb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecb1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38) = iVar2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$ClearReader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__ClearReader (int32_t mode, System_String_o* selectedEntryId, bool newUpdateTitle, const MethodInfo* method);
// 0x44df5a0

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__ClearReader
               (int32_t mode,System_String_o *selectedEntryId,bool_conflict newUpdateTitle,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  long lVar3;
  
  if (g_data_057aebcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebcc = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aecab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecab = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = TypeInfo_AottgChangelogDialogState;
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x20) = mode;
  if (g_data_057aecae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecae = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    lVar3 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = TypeInfo_AottgChangelogDialogState;
    *(byte *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x24) = mode == 0 & (byte)newUpdateTitle;
  }
  else {
    *(byte *)(*(long *)(lVar3 + 0xb8) + 0x24) = mode == 0 & (byte)newUpdateTitle;
  }
  if (g_data_057aecac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecac = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    lVar3 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = TypeInfo_AottgChangelogDialogState;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x18,0);
  if (g_data_057aecad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecad = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(System_String_o **)(lVar3 + 0x28) = selectedEntryId;
  method_00 = (MethodInfo *)selectedEntryId;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x28);
  if (g_data_057aebd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebd0 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__IndexOfHistoryId(selectedEntryId,method_00);
  if (g_data_057aecb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecb1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38) = iVar2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$ResetHistory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__ResetHistory (const MethodInfo* method);
// 0x44df840

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__ResetHistory(MethodInfo *method)

{
  int32_t length;
  int iVar1;
  long lVar2;
  
  if (g_data_057aebcd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aebcd = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044df94a;
label_044df865:
    lVar2 = **(long **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (lVar2 != 0) goto label_044df878;
label_044df965:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044df865;
label_044df94a:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = **(long **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (lVar2 == 0) goto label_044df965;
label_044df878:
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    length = *(int32_t *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,length,(MethodInfo *)0x0);
    }
    if (g_data_057aecaf != '\0') {
      iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
      lVar2 = TypeInfo_AottgChangelogDialogState;
      goto joined_r0x044df987;
    }
  }
  il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
  g_data_057aecaf = '\x01';
  iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  lVar2 = TypeInfo_AottgChangelogDialogState;
joined_r0x044df987:
  TypeInfo_AottgChangelogDialogState = lVar2;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = TypeInfo_AottgChangelogDialogState;
    *(undefined4 *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x30) = 0;
  }
  else {
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x30) = 0;
  }
  if (g_data_057aecb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecb0 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    lVar2 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = TypeInfo_AottgChangelogDialogState;
    *(undefined4 *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x34) = 0;
  }
  else {
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x34) = 0;
  }
  if (g_data_057aecb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecb1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
    lVar2 = TypeInfo_AottgChangelogDialogState;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    *(undefined4 *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38) = 0xffffffff;
    return;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x38) = 0xffffffff;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$AppendHistory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__AppendHistory (ApplicationManagers_Changelog_PublicChangelogListResponse_o* list, const MethodInfo* method);
// 0x44dfa30

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__AppendHistory
               (ApplicationManagers_Changelog_PublicChangelogListResponse_o *list,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  System_Collections_Generic_List_object__c *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_o *id;
  undefined8 uVar9;
  int iVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  Il2CppObject *pIVar13;
  Il2CppMethodPointer *ppIVar14;
  System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *pSVar15;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *pSVar16;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_object__o *pSVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  
  pSVar16 = (System_Collections_Generic_List_object__o *)list;
  if (g_data_057aebce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_ChangelogSummaryResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_ChangelogSummaryResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSVar16 = (System_Collections_Generic_List_object__o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057aebce = '\x01';
  }
  if (list == (ApplicationManagers_Changelog_PublicChangelogListResponse_o *)0x0) {
    return;
  }
  if ((list->fields)._Page_k__BackingField < 2) {
    if (TypeInfo_AottgChangelogDialogState[5].fields._version == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar18 = **(long **)&TypeInfo_AottgChangelogDialogState[4].fields._size;
    pSVar16 = TypeInfo_AottgChangelogDialogState;
    if (lVar18 != 0) {
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      iVar10 = *(int *)(lVar18 + 0x18);
      *(undefined4 *)(lVar18 + 0x18) = 0;
      if (0 < iVar10) {
        System_Array__Clear(*(System_Array_o **)(lVar18 + 0x10),0,iVar10,(MethodInfo *)0x0);
      }
      if (g_data_057aecb1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
        g_data_057aecb1 = '\x01';
        iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
      }
      else {
        iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
      }
      if (iVar10 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = TypeInfo_AottgChangelogDialogState;
      *(undefined4 *)(*(long *)&TypeInfo_AottgChangelogDialogState[4].fields._size + 0x38) = 0xffffffff;
      goto label_044dfb12;
    }
  }
  else {
label_044dfb12:
    pSVar15 = (list->fields)._Entries_k__BackingField;
    if (pSVar15 != (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)0x0) {
      uVar20 = 0;
label_044dfc6e:
      do {
        pSVar7 = pSVar15->klass;
        uVar3._0_1_ = (pSVar7->_2).rank;
        uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IReadOnlyCollection_ChangelogSummaryResponse) {
              ppIVar14 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar18)].methodPtr;
              goto label_044dfcc3;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar18);
        }
        ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IReadOnlyCollection_ChangelogSummaryResponse,0);
label_044dfcc3:
        method_00 = (MethodInfo *)ppIVar14[1];
        iVar10 = (**ppIVar14)(pSVar15);
        iVar19 = (int)uVar20;
        if (iVar10 <= iVar19) {
          iVar11 = (list->fields)._Page_k__BackingField;
          if (TypeInfo_AottgChangelogDialogState[5].fields._version == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aecaf == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
            g_data_057aecaf = '\x01';
            iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
          }
          else {
            iVar10 = (((System_Collections_Generic_List_object__o *)((long)TypeInfo_AottgChangelogDialogState + 200))->fields).
                     _version;
          }
          if (iVar10 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = TypeInfo_AottgChangelogDialogState;
          *(int32_t *)(*(long *)&TypeInfo_AottgChangelogDialogState[4].fields._size + 0x30) = iVar11;
          iVar11 = (list->fields)._Total_k__BackingField;
          if (g_data_057aecb0 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
            g_data_057aecb0 = '\x01';
            iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
            pSVar16 = TypeInfo_AottgChangelogDialogState;
          }
          else {
            iVar10 = pSVar16[5].fields._version;
          }
          if (iVar10 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar16 = TypeInfo_AottgChangelogDialogState;
            *(int32_t *)(*(long *)&TypeInfo_AottgChangelogDialogState[4].fields._size + 0x34) = iVar11;
          }
          else {
            *(int32_t *)
             (*(long *)&(((System_Collections_Generic_List_object__o *)((long)pSVar16 + 0xa0))->fields)._size
             + 0x34) = iVar11;
          }
          if (g_data_057ae852 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
            g_data_057ae852 = '\x01';
            iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
            pSVar16 = TypeInfo_AottgChangelogDialogState;
          }
          else {
            iVar10 = pSVar16[5].fields._version;
          }
          if (iVar10 == 0) {
            il2cpp_runtime_helper_02337ed0();
            id = *(System_String_o **)(*(long *)&TypeInfo_AottgChangelogDialogState[4].fields._size + 0x28);
            pSVar16 = TypeInfo_AottgChangelogDialogState;
          }
          else {
            id = *(System_String_o **)(*(long *)&pSVar16[4].fields._size + 0x28);
          }
          if (g_data_057aebd0 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
            g_data_057aebd0 = '\x01';
            iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
          }
          else {
            iVar10 = pSVar16[5].fields._version;
          }
          if (iVar10 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar11 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__IndexOfHistoryId(id,method_00);
          if (g_data_057aecb1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
            g_data_057aecb1 = '\x01';
            iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
          }
          else {
            iVar10 = TypeInfo_AottgChangelogDialogState[5].fields._version;
          }
          if (iVar10 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(int32_t *)(*(long *)&TypeInfo_AottgChangelogDialogState[4].fields._size + 0x38) = iVar11;
          return;
        }
        if (TypeInfo_AottgChangelogDialogState[5].fields._version == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = (System_Collections_Generic_List_object__o *)(list->fields)._Entries_k__BackingField;
        pSVar16 = TypeInfo_AottgChangelogDialogState;
        if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) break;
        __this = (System_Collections_Generic_List_object__o *)**(undefined8 **)&TypeInfo_AottgChangelogDialogState[4].fields._size;
        pSVar5 = pSVar17->klass;
        uVar2._0_1_ = (pSVar5->_2).rank;
        uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar8 = (pSVar5->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IReadOnlyList_ChangelogSummaryResponse) {
              ppIVar14 = &(&(pSVar5->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar18)].methodPtr;
              goto label_044dfc03;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar18);
        }
        ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IReadOnlyList_ChangelogSummaryResponse,0);
label_044dfc03:
        pIVar13 = (Il2CppObject *)(**ppIVar14)(pSVar17,uVar20,(MethodInfo *)ppIVar14[1]);
        lVar18 = MethodInfo_Void_Add;
        pSVar16 = pSVar17;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 == (System_Object_array *)0x0) break;
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pSVar16 = (System_Collections_Generic_List_object__o *)(pSVar6->m_Items + (int)uVar4);
          pSVar6->m_Items[(int)uVar4] = pIVar13;
          il2cpp_runtime_helper_022b4080();
          uVar20 = (ulong)(iVar19 + 1);
          pSVar15 = (list->fields)._Entries_k__BackingField;
          if (pSVar15 == (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)0x0) break;
          goto label_044dfc6e;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar13,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
        ;
        uVar20 = (ulong)(iVar19 + 1);
        pSVar15 = (list->fields)._Entries_k__BackingField;
        pSVar16 = __this;
      } while (pSVar15 != (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)0x0);
    }
  }
  iVar10 = (int)pSVar16;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebcf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
    g_data_057aebcf = '\x01';
  }
  if (-1 < iVar10) {
    if (TypeInfo_AottgChangelogDialogState[5].fields._version == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = (System_Collections_Generic_List_object__o *)**(long **)&TypeInfo_AottgChangelogDialogState[4].fields._size;
    pSVar17 = TypeInfo_AottgChangelogDialogState;
    if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
label_044dffc2:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aebd1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
        g_data_057aebd1 = '\x01';
      }
      iVar10 = 0;
      bVar12 = System_String__IsNullOrEmpty((System_String_o *)pSVar17,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      iVar19 = TypeInfo_AottgChangelogDialogState[5].fields._version;
      while( true ) {
        if (iVar19 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = (System_Collections_Generic_List_object__o *)**(long **)&TypeInfo_AottgChangelogDialogState[4].fields._size;
        if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) break;
        if ((pSVar16->fields)._size <= iVar10) {
          return;
        }
        if (TypeInfo_AottgChangelogDialogState[5].fields._version == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar16 = (System_Collections_Generic_List_object__o *)**(long **)&TypeInfo_AottgChangelogDialogState[4].fields._size;
          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) break;
        }
        pIVar13 = System_Collections_Generic_List_object___get_Item(pSVar16,iVar10,MethodInfo_ChangelogSummaryResponse_get_Item);
        if ((pIVar13 != (Il2CppObject *)0x0) &&
           (bVar12 = System_String__op_Equality
                               ((System_String_o *)pIVar13[1].klass,(System_String_o *)pSVar17,
                                (MethodInfo *)0x0), (char)bVar12 != '\0')) {
          return;
        }
        iVar10 = iVar10 + 1;
        iVar19 = TypeInfo_AottgChangelogDialogState[5].fields._version;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aebd2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
        g_data_057aebd2 = '\x01';
      }
      pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
      System_Collections_Generic_List_object____ctor(pSVar16,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
      **(undefined8 **)&TypeInfo_AottgChangelogDialogState[4].fields._size = pSVar16;
      uVar9._0_4_ = TypeInfo_AottgChangelogDialogState[4].fields._size;
      uVar9._4_4_ = TypeInfo_AottgChangelogDialogState[4].fields._version;
      il2cpp_runtime_helper_022b4080(uVar9,pSVar16);
      *(undefined4 *)(*(long *)&TypeInfo_AottgChangelogDialogState[4].fields._size + 0x38) = 0xffffffff;
      return;
    }
    if (iVar10 < (pSVar16->fields)._size) {
      if (TypeInfo_AottgChangelogDialogState[5].fields._version == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar16 = (System_Collections_Generic_List_object__o *)**(long **)&TypeInfo_AottgChangelogDialogState[4].fields._size;
        if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_044dffc2;
      }
      System_Collections_Generic_List_object___get_Item(pSVar16,iVar10,MethodInfo_ChangelogSummaryResponse_get_Item);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$HistoryAt
// il2cpp: ApplicationManagers_Changelog_ChangelogSummaryResponse_o* Gisketch_Aottg2UI_Game_AottgChangelogDialogState__HistoryAt (int32_t index, const MethodInfo* method);
// 0x44dff10

ApplicationManagers_Changelog_ChangelogSummaryResponse_o *
Gisketch_Aottg2UI_Game_AottgChangelogDialogState__HistoryAt(int32_t index,MethodInfo *method)

{
  int iVar1;
  System_String_Fields SVar2;
  bool_conflict bVar3;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *pAVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  uint index_00;
  System_String_o *value;
  
  if (g_data_057aebcf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
    g_data_057aebcf = '\x01';
  }
  if (index < 0) {
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AottgChangelogDialogState[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Collections_Generic_List_object__o **)TypeInfo_AottgChangelogDialogState[7].fields;
  value = TypeInfo_AottgChangelogDialogState;
  if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_044dffc2:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebd1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
      g_data_057aebd1 = '\x01';
    }
    index_00 = 0;
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)&g_data_ffffffff;
    }
    iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[9].monitor + 4);
    while( true ) {
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_List_object__o **)TypeInfo_AottgChangelogDialogState[7].fields;
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
      if ((pSVar6->fields)._size <= (int)index_00) {
        return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)&g_data_ffffffff;
      }
      if (*(int *)((long)&TypeInfo_AottgChangelogDialogState[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = *(System_Collections_Generic_List_object__o **)TypeInfo_AottgChangelogDialogState[7].fields;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
      }
      pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar6,index_00,MethodInfo_ChangelogSummaryResponse_get_Item);
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (bVar3 = System_String__op_Equality((System_String_o *)pIVar5[1].klass,value,(MethodInfo *)0x0),
         (char)bVar3 != '\0')) {
        return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)(ulong)index_00;
      }
      index_00 = index_00 + 1;
      iVar1 = *(int *)((long)&TypeInfo_AottgChangelogDialogState[9].monitor + 4);
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebd2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
      g_data_057aebd2 = '\x01';
    }
    pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
    System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
    *(System_Collections_Generic_List_object__o **)TypeInfo_AottgChangelogDialogState[7].fields = pSVar6;
    il2cpp_runtime_helper_022b4080(TypeInfo_AottgChangelogDialogState[7].fields,pSVar6);
    SVar2 = TypeInfo_AottgChangelogDialogState[7].fields;
    *(undefined4 *)&((ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)((long)SVar2 + 0x38))->klass
         = 0xffffffff;
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)SVar2;
  }
  if ((pSVar6->fields)._size <= index) {
    return (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AottgChangelogDialogState[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Collections_Generic_List_object__o **)TypeInfo_AottgChangelogDialogState[7].fields;
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_044dffc2;
  }
  pAVar4 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)
           System_Collections_Generic_List_object___get_Item(pSVar6,index,MethodInfo_ChangelogSummaryResponse_get_Item);
  return pAVar4;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$SelectHistoryId
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SelectHistoryId (System_String_o* id, const MethodInfo* method);
// 0x44df500

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState__SelectHistoryId(System_String_o *id,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (g_data_057aebd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aebd0 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = Gisketch_Aottg2UI_Game_AottgChangelogDialogState__IndexOfHistoryId(id,method);
  if (g_data_057aecb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aecb1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38) = iVar2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$IndexOfHistoryId
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__IndexOfHistoryId (System_String_o* id, const MethodInfo* method);
// 0x44dffd0

int32_t Gisketch_Aottg2UI_Game_AottgChangelogDialogState__IndexOfHistoryId
                  (System_String_o *id,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  int index;
  
  if (g_data_057aebd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_get_Item);
    g_data_057aebd1 = '\x01';
  }
  index = 0;
  bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return -1;
  }
  iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_Collections_Generic_List_object__o *)**(long **)(TypeInfo_AottgChangelogDialogState + 0xb8);
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) break;
    if ((pSVar5->fields)._size <= index) {
      return -1;
    }
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar5 = (System_Collections_Generic_List_object__o *)**(long **)(TypeInfo_AottgChangelogDialogState + 0xb8);
      if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) break;
    }
    pIVar4 = System_Collections_Generic_List_object___get_Item(pSVar5,index,MethodInfo_ChangelogSummaryResponse_get_Item);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (bVar3 = System_String__op_Equality((System_String_o *)pIVar4[1].klass,id,(MethodInfo *)0x0),
       (char)bVar3 != '\0')) {
      return index;
    }
    index = index + 1;
    iVar1 = *(int *)(TypeInfo_AottgChangelogDialogState + 0xe4);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
    g_data_057aebd2 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
  System_Collections_Generic_List_object____ctor(pSVar5,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
  **(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8) = pSVar5;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgChangelogDialogState + 0xb8),pSVar5);
  lVar2 = *(long *)(TypeInfo_AottgChangelogDialogState + 0xb8);
  *(undefined4 *)(lVar2 + 0x38) = 0xffffffff;
  return (int32_t)lVar2;
}


// Gisketch.Aottg2UI.Game.AottgChangelogDialogState$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogDialogState___cctor (const MethodInfo* method);
// 0x44e00e0

void Gisketch_Aottg2UI_Game_AottgChangelogDialogState___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  
  if (g_data_057aebd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
    g_data_057aebd2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
  **(undefined8 **)(TypeInfo_AottgChangelogDialogState + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgChangelogDialogState + 0xb8),__this);
  *(undefined4 *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x38) = 0xffffffff;
  return;
}


