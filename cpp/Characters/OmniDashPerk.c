// Type: Characters.OmniDashPerk
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/OmniDashPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/OmniDashPerk.cs
// --------------------------------

// Characters.OmniDashPerk$$get_Name
// il2cpp: System_String_o* Characters_OmniDashPerk__get_Name (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x182160810

System_String_o * Characters_OmniDashPerk__get_Name(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346c83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OmniDash");
    Il2CppMethodInitialized_184346c83 = '\x01';
  }
  return "OmniDash";
}


// Characters.OmniDashPerk$$get_MaxPoints
// il2cpp: int32_t Characters_OmniDashPerk__get_MaxPoints (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Characters_OmniDashPerk__get_MaxPoints(Characters_OmniDashPerk_o* __this, MethodInfo* method)

{
  return 1;
}


// Characters.OmniDashPerk$$get_MaxPower
// il2cpp: float Characters_OmniDashPerk__get_MaxPower (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x181da8af0

float
Characters_OmniDashPerk__get_MaxPower(Characters_OmniDashPerk_o* __this, MethodInfo* method)

{
  return 100.0;
}


// Characters.OmniDashPerk$$get_MinPower
// il2cpp: float Characters_OmniDashPerk__get_MinPower (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x180560480

float
Characters_OmniDashPerk__get_MinPower(Characters_OmniDashPerk_o* __this, MethodInfo* method)

{
  return 0.0;
}


// Characters.OmniDashPerk$$get_PowerUsageDivisor
// il2cpp: float Characters_OmniDashPerk__get_PowerUsageDivisor (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x181d9f790

float
Characters_OmniDashPerk__get_PowerUsageDivisor(Characters_OmniDashPerk_o* __this, MethodInfo* method)

{
  return 2.0;
}


// Characters.OmniDashPerk$$get_LinearRecoveryRate
// il2cpp: float Characters_OmniDashPerk__get_LinearRecoveryRate (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x182160800

float
Characters_OmniDashPerk__get_LinearRecoveryRate(Characters_OmniDashPerk_o* __this, MethodInfo* method)

{
  return 25.0;
}


// Characters.OmniDashPerk$$SetupRequirements
// il2cpp: void Characters_OmniDashPerk__SetupRequirements (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x182160790

void Characters_OmniDashPerk__SetupRequirements(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (Il2CppMethodInitialized_184346c84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalDash");
    Il2CppMethodInitialized_184346c84 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Add
              (__this_00,(Il2CppObject *)"VerticalDash",1,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.OmniDashPerk$$.ctor
// il2cpp: void Characters_OmniDashPerk___ctor (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x1821607f0

void
Characters_OmniDashPerk___ctor(Characters_OmniDashPerk_o* __this, MethodInfo* method)

{
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
            ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)__this,(MethodInfo *)0x0);
  return;
}


