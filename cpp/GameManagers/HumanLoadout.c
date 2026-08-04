// Type: GameManagers.HumanLoadout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/HumanLoadout.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.HumanLoadout$$.ctor
// il2cpp: void GameManagers_HumanLoadout___ctor (GameManagers_HumanLoadout_o* __this, const MethodInfo* method);
// 0x456fce0

void GameManagers_HumanLoadout___ctor(GameManagers_HumanLoadout_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.HumanLoadout$$.cctor
// il2cpp: void GameManagers_HumanLoadout___cctor (const MethodInfo* method);
// 0x456fcf0

void GameManagers_HumanLoadout___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057af055 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057af055 = '\x01';
  }
  **(undefined8 **)(TypeInfo_HumanLoadout + 0xb8) = "Blade";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_HumanLoadout + 0xb8),"Blade");
  lVar1 = *(long *)(TypeInfo_HumanLoadout + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "AHSS";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_HumanLoadout + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Thunderspear";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_HumanLoadout + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "APG";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  return;
}


