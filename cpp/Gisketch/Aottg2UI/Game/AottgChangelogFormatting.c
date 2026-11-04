// Type: Gisketch.Aottg2UI.Game.AottgChangelogFormatting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogFormatting.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ShortDate
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ShortDate (System_String_o* isoDate, const MethodInfo* method);
// 0x1823a5420

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ShortDate(System_String_o *isoDate,MethodInfo *method)

{
  System_String_o *key;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347ca0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.UnknownDate");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown date");
    Il2CppMethodInitialized_184347ca0 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(isoDate,(MethodInfo *)0x0);
  key = "Changelog.UnknownDate";
  pSVar2 = "Unknown date";
  if (bVar1) {
    if (Il2CppMethodInitialized_184347ca2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347ca2 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  if (isoDate == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (9 < (isoDate->fields)._stringLength) {
    pSVar2 = System_String__Substring_1972740(isoDate,0,10,(MethodInfo *)0x0);
    return pSVar2;
  }
  return isoDate;
}


// Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x1823a5200
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a53b3: mov rbx, qword ptr [rip + 0x1d5ba3e]  ; "Check your connection and try again."
// asm:   0x1823a53ba: mov rdi, qword ptr [rip + 0x1ce73df]  ; "Network.CheckConnection"
// asm:   0x1823a53c1: jmp 0x1823a53d1
// asm:   0x1823a53c3: mov rbx, qword ptr [rip + 0x1cd820e]  ; "Try again."
// asm:   0x1823a53ca: mov rdi, qword ptr [rip + 0x1cd5517]  ; "Common.TryAgain"

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ErrorText(System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_184347ca1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"Try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    il2cpp_codegen_initialize_runtime_metadata(&"Network.CheckConnection");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_id");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NotReady");
    il2cpp_codegen_initialize_runtime_metadata(&"Check your connection and try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.BadId");
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog id is invalid.");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.BadResponse");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog response is malformed.");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog service is not ready.");
    Il2CppMethodInitialized_184347ca1 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  pSVar2 = "Try again.";
  key = "Common.TryAgain";
  if ((bVar1) ||
     (bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0),
     pSVar2 = "Check your connection and try again.", key = "Network.CheckConnection", bVar1)) {
    if (Il2CppMethodInitialized_184347ca2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347ca2 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  bVar1 = System_String__op_Equality(error,"bad_response",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = Gisketch_Aottg2UI_Game_AottgChangelogFormatting__Text
                       ("Changelog.BadResponse","Changelog response is malformed.",(MethodInfo *)0x0);
    return pSVar2;
  }
  bVar1 = System_String__op_Equality(error,"not_initialized",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = Gisketch_Aottg2UI_Game_AottgChangelogFormatting__Text
                       ("Changelog.NotReady","Changelog service is not ready.",(MethodInfo *)0x0);
    return pSVar2;
  }
  bVar1 = System_String__op_Equality(error,"bad_id",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = Gisketch_Aottg2UI_Game_AottgChangelogFormatting__Text
                       ("Changelog.BadId","Changelog id is invalid.",(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgChangelogFormatting__Text
                     ("Common.TryAgain","Try again.",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogFormatting__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x1823a5500

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogFormatting__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347ca2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


