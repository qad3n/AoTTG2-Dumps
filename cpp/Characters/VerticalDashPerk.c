// Type: Characters.VerticalDashPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/VerticalDashPerk.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Perks/VerticalDashPerk.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.VerticalDashPerk$$get_Name
// il2cpp: System_String_o* Characters_VerticalDashPerk__get_Name (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x3fda770

System_String_o *
Characters_VerticalDashPerk__get_Name(Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  if (DAT_05704117 == '\0') {
    il2cpp_init_method_metadata(&"VerticalDash");
    DAT_05704117 = '\x01';
  }
  return "VerticalDash";
}


// Characters.VerticalDashPerk$$get_MaxPoints
// il2cpp: int32_t Characters_VerticalDashPerk__get_MaxPoints (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x3fda7a0

int32_t Characters_VerticalDashPerk__get_MaxPoints
                  (Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.VerticalDashPerk$$get_MaxPower
// il2cpp: float Characters_VerticalDashPerk__get_MaxPower (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x3fda7b0

float Characters_VerticalDashPerk__get_MaxPower
                (Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.VerticalDashPerk$$get_MinPower
// il2cpp: float Characters_VerticalDashPerk__get_MinPower (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x3fda7c0

float Characters_VerticalDashPerk__get_MinPower
                (Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.VerticalDashPerk$$get_PowerUsageDivisor
// il2cpp: float Characters_VerticalDashPerk__get_PowerUsageDivisor (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x3fda7d0

float Characters_VerticalDashPerk__get_PowerUsageDivisor
                (Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 3.0;
}


// Characters.VerticalDashPerk$$get_LinearRecoveryRate
// il2cpp: float Characters_VerticalDashPerk__get_LinearRecoveryRate (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x3fda7e0

float Characters_VerticalDashPerk__get_LinearRecoveryRate
                (Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 25.0;
}


// Characters.VerticalDashPerk$$.ctor
// il2cpp: void Characters_VerticalDashPerk___ctor (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x3fd86e0

void Characters_VerticalDashPerk___ctor(Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
            ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)__this,(MethodInfo *)0x0);
  return;
}


