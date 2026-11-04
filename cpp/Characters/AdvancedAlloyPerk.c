// Type: Characters.AdvancedAlloyPerk
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AdvancedAlloyPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/AdvancedAlloyPerk.cs
// --------------------------------

// Characters.AdvancedAlloyPerk$$get_Name
// il2cpp: System_String_o* Characters_AdvancedAlloyPerk__get_Name (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x1821466c0

System_String_o *
Characters_AdvancedAlloyPerk__get_Name(Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346c7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedAlloy");
    Il2CppMethodInitialized_184346c7d = '\x01';
  }
  return "AdvancedAlloy";
}


// Characters.AdvancedAlloyPerk$$get_MaxPoints
// il2cpp: int32_t Characters_AdvancedAlloyPerk__get_MaxPoints (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Characters_AdvancedAlloyPerk__get_MaxPoints(Characters_AdvancedAlloyPerk_o* __this, MethodInfo* method)

{
  return 1;
}


// Characters.AdvancedAlloyPerk$$SetupRequirements
// il2cpp: void Characters_AdvancedAlloyPerk__SetupRequirements (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x182146650

void Characters_AdvancedAlloyPerk__SetupRequirements
               (Characters_AdvancedAlloyPerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (Il2CppMethodInitialized_184346c7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"DurableBlades");
    Il2CppMethodInitialized_184346c7e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Add
              (__this_00,(Il2CppObject *)"DurableBlades",1,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.AdvancedAlloyPerk$$.ctor
// il2cpp: void Characters_AdvancedAlloyPerk___ctor (Characters_AdvancedAlloyPerk_o* __this, const MethodInfo* method);
// 0x1821466b0

void
Characters_AdvancedAlloyPerk___ctor(Characters_AdvancedAlloyPerk_o* __this, MethodInfo* method)

{
  Characters_BasePerk___ctor((Characters_BasePerk_o *)__this,(MethodInfo *)0x0);
  return;
}


