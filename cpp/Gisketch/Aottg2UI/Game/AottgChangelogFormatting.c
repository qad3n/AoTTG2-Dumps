// Type: Gisketch.Aottg2UI.Game.AottgChangelogFormatting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogFormatting.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ShortDate
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ShortDate (System_String_o* isoDate, const MethodInfo* method);
// 0x5e77010

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ShortDate(System_String_o *isoDate,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075487cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.UnknownDate");
    Il2CppMethodInitialized_075487cd = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(isoDate,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("Changelog.UnknownDate",(MethodInfo *)0x0);
    return pSVar2;
  }
  if (isoDate == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((isoDate->fields)._stringLength < 10) {
    return isoDate;
  }
  pSVar2 = System_String__Substring_53042f0(isoDate,0,10,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgChangelogFormatting$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x5e770a0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7713a: lea rax, [rip + 0x13fe227]  ; TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale
// asm:   0x5e77141: mov rdi, qword ptr [rax]
// asm:   0x5e77158: jmp 0x5e7723b
// asm:   0x5e7718f: jmp 0x5e7723b
// asm:   0x5e771c6: jmp 0x5e7723b

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogFormatting__ErrorText(System_String_o *error,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_075487ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    il2cpp_codegen_initialize_runtime_metadata(&"Network.CheckConnection");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_id");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NotReady");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.BadId");
    il2cpp_codegen_initialize_runtime_metadata(&"network_error");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.BadResponse");
    Il2CppMethodInitialized_075487ce = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar4 = &"Network.CheckConnection";
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05e7718d;
    }
    bVar2 = System_String__op_Equality(error,"bad_response",(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar4 = &"Changelog.BadResponse";
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05e7718d;
    }
    bVar2 = System_String__op_Equality(error,"not_initialized",(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar4 = &"Changelog.NotReady";
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05e7718d;
    }
    bVar2 = System_String__op_Equality(error,"bad_id",(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar4 = &"Changelog.BadId";
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05e7718d;
    }
  }
  ppSVar4 = &"Common.TryAgain";
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
joined_r0x05e7718d:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar4,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar4,(MethodInfo *)0x0);
  return pSVar3;
}


