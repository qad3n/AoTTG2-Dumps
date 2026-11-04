// Type: Characters.WallColossalAnimations
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalAnimations.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalAnimations.cs
// --------------------------------

// Characters.WallColossalAnimations$$get_Idle
// il2cpp: System_String_o* Characters_WallColossalAnimations__get_Idle (Characters_WallColossalAnimations_o* __this, const MethodInfo* method);
// 0x1821939d0

System_String_o *
Characters_WallColossalAnimations__get_Idle(Characters_WallColossalAnimations_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_idle");
    Il2CppMethodInitialized_184346d6d = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// Characters.WallColossalAnimations$$.ctor
// il2cpp: void Characters_WallColossalAnimations___ctor (Characters_WallColossalAnimations_o* __this, const MethodInfo* method);
// 0x182193870

void Characters_WallColossalAnimations___ctor(Characters_WallColossalAnimations_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_L");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_R");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_L");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_steam");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_sweep");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_R");
    Il2CppMethodInitialized_184346d6e = '\x01';
  }
  (__this->fields).AttackWallSlap1L = "Armature_VER2|wall_attack_slap1_L";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackWallSlap1L,"Armature_VER2|wall_attack_slap1_L");
  (__this->fields).AttackWallSlap1R = "Armature_VER2|wall_attack_slap1_R";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackWallSlap1R,"Armature_VER2|wall_attack_slap1_R");
  (__this->fields).AttackWallSlap2L = "Armature_VER2|wall_attack_slap2_L";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackWallSlap2L,"Armature_VER2|wall_attack_slap2_L");
  (__this->fields).AttackWallSlap2R = "Armature_VER2|wall_attack_slap2_R";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackWallSlap2R,"Armature_VER2|wall_attack_slap2_R");
  (__this->fields).AttackSteam = "Armature_VER2|wall_attack_steam";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSteam,"Armature_VER2|wall_attack_steam");
  (__this->fields).AttackSweep = "Armature_VER2|wall_attack_sweep";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSweep,"Armature_VER2|wall_attack_sweep");
  (__this->fields).AttackKick = "Armature_VER2|wall_colossal_kick";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackKick,"Armature_VER2|wall_colossal_kick");
  (__this->fields).StunFallFaceAnim = "Armature_VER2|wall_colossal_stun";
  Il2CppCodeGenWriteBarrier(&(__this->fields).StunFallFaceAnim,"Armature_VER2|wall_colossal_stun");
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


