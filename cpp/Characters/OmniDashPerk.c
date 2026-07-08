// Type: Characters.OmniDashPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/OmniDashPerk.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Perks/OmniDashPerk.cs  [CHANGED since prior version]
// --------------------------------

// Characters.OmniDashPerk$$get_Name
// il2cpp: System_String_o* Characters_OmniDashPerk__get_Name (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fda650

System_String_o *
Characters_OmniDashPerk__get_Name(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  if (DAT_05704114 == '\0') {
    il2cpp_init_method_metadata(&"OmniDash");
    DAT_05704114 = '\x01';
  }
  return "OmniDash";
}


// Characters.OmniDashPerk$$get_MaxPoints
// il2cpp: int32_t Characters_OmniDashPerk__get_MaxPoints (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fda680

int32_t Characters_OmniDashPerk__get_MaxPoints(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.OmniDashPerk$$get_MaxPower
// il2cpp: float Characters_OmniDashPerk__get_MaxPower (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fda690

float Characters_OmniDashPerk__get_MaxPower(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.OmniDashPerk$$get_MinPower
// il2cpp: float Characters_OmniDashPerk__get_MinPower (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fda6a0

float Characters_OmniDashPerk__get_MinPower(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.OmniDashPerk$$get_PowerUsageDivisor
// il2cpp: float Characters_OmniDashPerk__get_PowerUsageDivisor (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fda6b0

float Characters_OmniDashPerk__get_PowerUsageDivisor
                (Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Characters.OmniDashPerk$$get_LinearRecoveryRate
// il2cpp: float Characters_OmniDashPerk__get_LinearRecoveryRate (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fda6c0

float Characters_OmniDashPerk__get_LinearRecoveryRate
                (Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  return 25.0;
}


// Characters.OmniDashPerk$$SetupRequirements
// il2cpp: void Characters_OmniDashPerk__SetupRequirements (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fda6d0

void Characters_OmniDashPerk__SetupRequirements
               (Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if (DAT_05704115 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"VerticalDash");
    DAT_05704115 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object__int>__Add(__this_00,"VerticalDash",1,MethodInfo_Void_Add);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.OmniDashPerk$$.ctor
// il2cpp: void Characters_OmniDashPerk___ctor (Characters_OmniDashPerk_o* __this, const MethodInfo* method);
// 0x3fd86f0

void Characters_OmniDashPerk___ctor(Characters_OmniDashPerk_o *__this,MethodInfo *method)

{
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
            ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)__this,(MethodInfo *)0x0);
  return;
}


