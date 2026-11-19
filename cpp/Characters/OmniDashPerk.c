// Type: Characters.OmniDashPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/OmniDashPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/OmniDashPerk.cs
// --------------------------------

// Characters.OmniDashPerk$$get_Name
// il2cpp: System_String_o* Characters_OmniDashPerk__get_Name (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bfb410

System_String_o * Characters_OmniDashPerk__get_Name(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547653 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OmniDash");
    Il2CppMethodInitialized_07547653 = '\x01';
  }
  return "OmniDash";
}


// Characters.OmniDashPerk$$get_MaxPoints
// il2cpp: int32_t Characters_OmniDashPerk__get_MaxPoints (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bfb440

int32_t Characters_OmniDashPerk__get_MaxPoints(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.OmniDashPerk$$get_MaxPower
// il2cpp: float Characters_OmniDashPerk__get_MaxPower (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bfb450

float Characters_OmniDashPerk__get_MaxPower(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.OmniDashPerk$$get_MinPower
// il2cpp: float Characters_OmniDashPerk__get_MinPower (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bfb460

float Characters_OmniDashPerk__get_MinPower(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.OmniDashPerk$$get_PowerUsageDivisor
// il2cpp: float Characters_OmniDashPerk__get_PowerUsageDivisor (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bfb470

float Characters_OmniDashPerk__get_PowerUsageDivisor(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Characters.OmniDashPerk$$get_LinearRecoveryRate
// il2cpp: float Characters_OmniDashPerk__get_LinearRecoveryRate (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bfb480

float Characters_OmniDashPerk__get_LinearRecoveryRate(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 25.0;
}


// Characters.OmniDashPerk$$SetupRequirements
// il2cpp: void Characters_OmniDashPerk__SetupRequirements (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bfb490

void Characters_OmniDashPerk__SetupRequirements(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (Il2CppMethodInitialized_07547654 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalDash");
    Il2CppMethodInitialized_07547654 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__int___Add
            (__this_00,(Il2CppObject *)"VerticalDash",1,
             (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
  return;
}


// Characters.OmniDashPerk$$.ctor
// il2cpp: void Characters_OmniDashPerk___ctor (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x5bf97a0

void Characters_OmniDashPerk___ctor(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
            ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)__this,(MethodInfo *)0x0);
  return;
}


