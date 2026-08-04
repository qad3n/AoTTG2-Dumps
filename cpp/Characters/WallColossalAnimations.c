// Type: Characters.WallColossalAnimations
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalAnimations.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalAnimations.cs
// --------------------------------

// Characters.WallColossalAnimations$$get_Idle
// il2cpp: System_String_o* Characters_WallColossalAnimations__get_Idle (Characters_WallColossalAnimations_o* __this, const MethodInfo* method);
// 0x43048d0

System_String_o *
Characters_WallColossalAnimations__get_Idle(Characters_WallColossalAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf4b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_idle");
    g_data_057adf4b = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// Characters.WallColossalAnimations$$.ctor
// il2cpp: void Characters_WallColossalAnimations___ctor (Characters_WallColossalAnimations_o* __this, const MethodInfo* method);
// 0x4304900

void Characters_WallColossalAnimations___ctor(Characters_WallColossalAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf4c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap1_L");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap2_R");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap2_L");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_steam");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_stun");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_colossal_kick");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_sweep");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2|wall_attack_slap1_R");
    g_data_057adf4c = '\x01';
  }
  (__this->fields).AttackWallSlap1L = "Armature_VER2|wall_attack_slap1_L";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  (__this->fields).AttackWallSlap1R = "Armature_VER2|wall_attack_slap1_R";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackWallSlap1R);
  (__this->fields).AttackWallSlap2L = "Armature_VER2|wall_attack_slap2_L";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackWallSlap2L);
  (__this->fields).AttackWallSlap2R = "Armature_VER2|wall_attack_slap2_R";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackWallSlap2R);
  (__this->fields).AttackSteam = "Armature_VER2|wall_attack_steam";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackSteam);
  (__this->fields).AttackSweep = "Armature_VER2|wall_attack_sweep";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackSweep);
  (__this->fields).AttackKick = "Armature_VER2|wall_colossal_kick";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackKick);
  (__this->fields).StunFallFaceAnim = "Armature_VER2|wall_colossal_stun";
  il2cpp_runtime_helper_022b4080(&(__this->fields).StunFallFaceAnim);
  Characters_BaseTitanAnimations___ctor((Characters_BaseTitanAnimations_o *)__this,(MethodInfo *)0x0);
  return;
}


