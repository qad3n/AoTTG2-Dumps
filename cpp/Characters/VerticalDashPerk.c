// Type: Characters.VerticalDashPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/VerticalDashPerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/VerticalDashPerk.cs
// --------------------------------

// Characters.VerticalDashPerk$$get_Name
// il2cpp: System_String_o* Characters_VerticalDashPerk__get_Name (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x42e7030

System_String_o *
Characters_VerticalDashPerk__get_Name(Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  if (g_data_057ade85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"VerticalDash");
    g_data_057ade85 = '\x01';
  }
  return "VerticalDash";
}


// Characters.VerticalDashPerk$$get_MaxPoints
// il2cpp: int32_t Characters_VerticalDashPerk__get_MaxPoints (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x42e7060

int32_t Characters_VerticalDashPerk__get_MaxPoints(Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.VerticalDashPerk$$get_MaxPower
// il2cpp: float Characters_VerticalDashPerk__get_MaxPower (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x42e7070

float Characters_VerticalDashPerk__get_MaxPower(Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.VerticalDashPerk$$get_MinPower
// il2cpp: float Characters_VerticalDashPerk__get_MinPower (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x42e7080

float Characters_VerticalDashPerk__get_MinPower(Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.VerticalDashPerk$$get_PowerUsageDivisor
// il2cpp: float Characters_VerticalDashPerk__get_PowerUsageDivisor (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x42e7090

float Characters_VerticalDashPerk__get_PowerUsageDivisor
                (Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 3.0;
}


// Characters.VerticalDashPerk$$get_LinearRecoveryRate
// il2cpp: float Characters_VerticalDashPerk__get_LinearRecoveryRate (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x42e70a0

float Characters_VerticalDashPerk__get_LinearRecoveryRate
                (Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  return 25.0;
}


// Characters.VerticalDashPerk$$.ctor
// il2cpp: void Characters_VerticalDashPerk___ctor (Characters_VerticalDashPerk_o* __this, const MethodInfo* method);
// 0x42e4fa0

void Characters_VerticalDashPerk___ctor(Characters_VerticalDashPerk_o *__this,MethodInfo *method)

{
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
            ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)__this,(MethodInfo *)0x0);
  return;
}


