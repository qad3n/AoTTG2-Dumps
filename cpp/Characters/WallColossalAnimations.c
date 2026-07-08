// Type: Characters.WallColossalAnimations
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/WallColossalAnimations.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalAnimations.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.WallColossalAnimations$$get_Idle
// il2cpp: System_String_o* Characters_WallColossalAnimations__get_Idle (Characters_WallColossalAnimations_o* __this, const MethodInfo* method);
// 0x3ff8010

System_String_o *
Characters_WallColossalAnimations__get_Idle
          (Characters_WallColossalAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041dd == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_colossal_idle");
    DAT_057041dd = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// Characters.WallColossalAnimations$$.ctor
// il2cpp: void Characters_WallColossalAnimations___ctor (Characters_WallColossalAnimations_o* __this, const MethodInfo* method);
// 0x3ff8040

void Characters_WallColossalAnimations___ctor
               (Characters_WallColossalAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041de == '\0') {
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap1_L");
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap2_R");
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap2_L");
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_steam");
    il2cpp_init_method_metadata(&"Armature_VER2|wall_colossal_stun");
    il2cpp_init_method_metadata(&"Armature_VER2|wall_colossal_kick");
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_sweep");
    il2cpp_init_method_metadata(&"Armature_VER2|wall_attack_slap1_R");
    DAT_057041de = '\x01';
  }
  (__this->fields).AttackWallSlap1L = "Armature_VER2|wall_attack_slap1_L";
  il2cpp_runtime_glue(&__this->fields);
  (__this->fields).AttackWallSlap1R = "Armature_VER2|wall_attack_slap1_R";
  il2cpp_runtime_glue(&(__this->fields).AttackWallSlap1R);
  (__this->fields).AttackWallSlap2L = "Armature_VER2|wall_attack_slap2_L";
  il2cpp_runtime_glue(&(__this->fields).AttackWallSlap2L);
  (__this->fields).AttackWallSlap2R = "Armature_VER2|wall_attack_slap2_R";
  il2cpp_runtime_glue(&(__this->fields).AttackWallSlap2R);
  (__this->fields).AttackSteam = "Armature_VER2|wall_attack_steam";
  il2cpp_runtime_glue(&(__this->fields).AttackSteam);
  (__this->fields).AttackSweep = "Armature_VER2|wall_attack_sweep";
  il2cpp_runtime_glue(&(__this->fields).AttackSweep);
  (__this->fields).AttackKick = "Armature_VER2|wall_colossal_kick";
  il2cpp_runtime_glue(&(__this->fields).AttackKick);
  (__this->fields).StunFallFaceAnim = "Armature_VER2|wall_colossal_stun";
  il2cpp_runtime_glue(&(__this->fields).StunFallFaceAnim);
  Characters_BaseTitanAnimations___ctor
            ((Characters_BaseTitanAnimations_o *)__this,(MethodInfo *)0x0);
  return;
}


