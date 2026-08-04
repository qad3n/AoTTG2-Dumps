// Type: Characters.ErenAnimations
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ErenAnimations.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenAnimations.cs
// --------------------------------

// Characters.ErenAnimations$$get_Idle
// il2cpp: System_String_o* Characters_ErenAnimations__get_Idle (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x4303820

System_String_o * Characters_ErenAnimations__get_Idle(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf38 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_idle");
    g_data_057adf38 = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// Characters.ErenAnimations$$get_Run
// il2cpp: System_String_o* Characters_ErenAnimations__get_Run (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x4303850

System_String_o * Characters_ErenAnimations__get_Run(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf39 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_run");
    g_data_057adf39 = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// Characters.ErenAnimations$$get_Walk
// il2cpp: System_String_o* Characters_ErenAnimations__get_Walk (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x4303880

System_String_o * Characters_ErenAnimations__get_Walk(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf3a == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_walk");
    g_data_057adf3a = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// Characters.ErenAnimations$$get_Jump
// il2cpp: System_String_o* Characters_ErenAnimations__get_Jump (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x43038b0

System_String_o * Characters_ErenAnimations__get_Jump(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf3b == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_start");
    g_data_057adf3b = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// Characters.ErenAnimations$$get_Fall
// il2cpp: System_String_o* Characters_ErenAnimations__get_Fall (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x43038e0

System_String_o * Characters_ErenAnimations__get_Fall(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf3c == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_air");
    g_data_057adf3c = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// Characters.ErenAnimations$$get_Land
// il2cpp: System_String_o* Characters_ErenAnimations__get_Land (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x4303910

System_String_o * Characters_ErenAnimations__get_Land(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf3d == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_jump_land");
    g_data_057adf3d = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// Characters.ErenAnimations$$get_Die
// il2cpp: System_String_o* Characters_ErenAnimations__get_Die (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x4303940

System_String_o * Characters_ErenAnimations__get_Die(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf3e == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_die");
    g_data_057adf3e = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// Characters.ErenAnimations$$get_Stun
// il2cpp: System_String_o* Characters_ErenAnimations__get_Stun (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x4303970

System_String_o * Characters_ErenAnimations__get_Stun(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf3f == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_hit_titan");
    g_data_057adf3f = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// Characters.ErenAnimations$$.ctor
// il2cpp: void Characters_ErenAnimations___ctor (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x43039a0

void Characters_ErenAnimations___ctor(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (g_data_057adf40 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_fix_hole");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_attack_combo_full");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_born");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_attack_kick");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_yes");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_lift");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_walk");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2|et_rock_lift.001");
    g_data_057adf40 = '\x01';
  }
  (__this->fields).AttackCombo = "ErenRig_VER2|et_attack_combo_full";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  (__this->fields).AttackKick = "ErenRig_VER2|et_attack_kick";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackKick);
  (__this->fields).EmoteNod = "ErenRig_VER2|et_yes";
  il2cpp_runtime_helper_022b4080(&(__this->fields).EmoteNod);
  (__this->fields).EmoteRoar = "ErenRig_VER2|et_born";
  il2cpp_runtime_helper_022b4080(&(__this->fields).EmoteRoar);
  (__this->fields).RockLift = "ErenRig_VER2|et_rock_lift";
  il2cpp_runtime_helper_022b4080(&(__this->fields).RockLift);
  (__this->fields).RockLift001 = "ErenRig_VER2|et_rock_lift.001";
  il2cpp_runtime_helper_022b4080(&(__this->fields).RockLift001);
  (__this->fields).RockWalk = "ErenRig_VER2|et_rock_walk";
  il2cpp_runtime_helper_022b4080(&(__this->fields).RockWalk);
  (__this->fields).RockFixHole = "ErenRig_VER2|et_rock_fix_hole";
  il2cpp_runtime_helper_022b4080(&(__this->fields).RockFixHole);
  Characters_BaseTitanAnimations___ctor((Characters_BaseTitanAnimations_o *)__this,(MethodInfo *)0x0);
  return;
}


