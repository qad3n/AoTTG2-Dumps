// Type: Characters.ErenAnimations
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ErenAnimations.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/Eren/ErenAnimations.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.ErenAnimations$$get_Idle
// il2cpp: System_String_o* Characters_ErenAnimations__get_Idle (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff6f60

System_String_o *
Characters_ErenAnimations__get_Idle(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041ca == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_idle");
    DAT_057041ca = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// Characters.ErenAnimations$$get_Run
// il2cpp: System_String_o* Characters_ErenAnimations__get_Run (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff6f90

System_String_o *
Characters_ErenAnimations__get_Run(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041cb == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_run");
    DAT_057041cb = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// Characters.ErenAnimations$$get_Walk
// il2cpp: System_String_o* Characters_ErenAnimations__get_Walk (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff6fc0

System_String_o *
Characters_ErenAnimations__get_Walk(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041cc == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_walk");
    DAT_057041cc = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// Characters.ErenAnimations$$get_Jump
// il2cpp: System_String_o* Characters_ErenAnimations__get_Jump (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff6ff0

System_String_o *
Characters_ErenAnimations__get_Jump(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041cd == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_start");
    DAT_057041cd = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// Characters.ErenAnimations$$get_Fall
// il2cpp: System_String_o* Characters_ErenAnimations__get_Fall (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff7020

System_String_o *
Characters_ErenAnimations__get_Fall(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041ce == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_air");
    DAT_057041ce = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// Characters.ErenAnimations$$get_Land
// il2cpp: System_String_o* Characters_ErenAnimations__get_Land (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff7050

System_String_o *
Characters_ErenAnimations__get_Land(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041cf == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_jump_land");
    DAT_057041cf = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// Characters.ErenAnimations$$get_Die
// il2cpp: System_String_o* Characters_ErenAnimations__get_Die (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff7080

System_String_o *
Characters_ErenAnimations__get_Die(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041d0 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_die");
    DAT_057041d0 = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// Characters.ErenAnimations$$get_Stun
// il2cpp: System_String_o* Characters_ErenAnimations__get_Stun (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff70b0

System_String_o *
Characters_ErenAnimations__get_Stun(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041d1 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_hit_titan");
    DAT_057041d1 = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// Characters.ErenAnimations$$.ctor
// il2cpp: void Characters_ErenAnimations___ctor (Characters_ErenAnimations_o* __this, const MethodInfo* method);
// 0x3ff70e0

void Characters_ErenAnimations___ctor(Characters_ErenAnimations_o *__this,MethodInfo *method)

{
  if (DAT_057041d2 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_attack_combo_full");
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_born");
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_attack_kick");
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_yes");
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_lift");
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_walk");
    il2cpp_init_method_metadata(&"ErenRig_VER2|et_rock_lift.001");
    DAT_057041d2 = '\x01';
  }
  (__this->fields).AttackCombo = "ErenRig_VER2|et_attack_combo_full";
  il2cpp_runtime_glue(&__this->fields);
  (__this->fields).AttackKick = "ErenRig_VER2|et_attack_kick";
  il2cpp_runtime_glue(&(__this->fields).AttackKick);
  (__this->fields).EmoteNod = "ErenRig_VER2|et_yes";
  il2cpp_runtime_glue(&(__this->fields).EmoteNod);
  (__this->fields).EmoteRoar = "ErenRig_VER2|et_born";
  il2cpp_runtime_glue(&(__this->fields).EmoteRoar);
  (__this->fields).RockLift = "ErenRig_VER2|et_rock_lift";
  il2cpp_runtime_glue(&(__this->fields).RockLift);
  (__this->fields).RockLift001 = "ErenRig_VER2|et_rock_lift.001";
  il2cpp_runtime_glue(&(__this->fields).RockLift001);
  (__this->fields).RockWalk = "ErenRig_VER2|et_rock_walk";
  il2cpp_runtime_glue(&(__this->fields).RockWalk);
  (__this->fields).RockFixHole = "ErenRig_VER2|et_rock_fix_hole";
  il2cpp_runtime_glue(&(__this->fields).RockFixHole);
  Characters_BaseTitanAnimations___ctor
            ((Characters_BaseTitanAnimations_o *)__this,(MethodInfo *)0x0);
  return;
}


