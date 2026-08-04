// Type: Gisketch.Aottg2UI.Game.AottgChangelogFormatting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogFormatting.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ShortDate
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ShortDate (System_String_o* isoDate, const MethodInfo* method);
// 0x44e0180

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ShortDate(System_String_o *isoDate,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (g_data_057aebd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Unknown date");
    g_data_057aebd3 = '\x01';
  }
  pSVar2 = isoDate;
  bVar1 = System_String__IsNullOrEmpty(isoDate,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Unknown date";
  }
  if (isoDate != (System_String_o *)0x0) {
    if ((isoDate->fields)._stringLength < 10) {
      return isoDate;
    }
    pSVar2 = System_String__Substring_3af8da0(isoDate,0,10,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"bad_response");
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    il2cpp_runtime_helper_023445d0(&"bad_id");
    il2cpp_runtime_helper_023445d0(&"Check your connection and try again.");
    il2cpp_runtime_helper_023445d0(&"network_error");
    il2cpp_runtime_helper_023445d0(&"Changelog id is invalid.");
    il2cpp_runtime_helper_023445d0(&"Changelog response is malformed.");
    il2cpp_runtime_helper_023445d0(&"Changelog service is not ready.");
    g_data_057aebd4 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Try again.";
  }
  bVar1 = System_String__op_Equality(pSVar2,"network_error",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Check your connection and try again.";
  }
  bVar1 = System_String__op_Equality(pSVar2,"bad_response",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Changelog response is malformed.";
  }
  bVar1 = System_String__op_Equality(pSVar2,"not_initialized",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Changelog service is not ready.";
  }
  bVar1 = System_String__op_Equality(pSVar2,"bad_id",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Changelog id is invalid.";
  }
  return "Try again.";
}


// Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x44e01f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ErrorText(System_String_o *error,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aebd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"bad_response");
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    il2cpp_runtime_helper_023445d0(&"bad_id");
    il2cpp_runtime_helper_023445d0(&"Check your connection and try again.");
    il2cpp_runtime_helper_023445d0(&"network_error");
    il2cpp_runtime_helper_023445d0(&"Changelog id is invalid.");
    il2cpp_runtime_helper_023445d0(&"Changelog response is malformed.");
    il2cpp_runtime_helper_023445d0(&"Changelog service is not ready.");
    g_data_057aebd4 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Try again.";
  }
  bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Check your connection and try again.";
  }
  bVar1 = System_String__op_Equality(error,"bad_response",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Changelog response is malformed.";
  }
  bVar1 = System_String__op_Equality(error,"not_initialized",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Changelog service is not ready.";
  }
  bVar1 = System_String__op_Equality(error,"bad_id",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Changelog id is invalid.";
  }
  return "Try again.";
}


