// Type: GameManagers.HumanLoadout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/HumanLoadout.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/PlayerProperty.cs  [prior source available (delta unverified)]
// --------------------------------

// GameManagers.HumanLoadout$$.ctor
// il2cpp: void GameManagers_HumanLoadout___ctor (GameManagers_HumanLoadout_o* __this, const MethodInfo* method);
// 0x423b310

void GameManagers_HumanLoadout___ctor(GameManagers_HumanLoadout_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.HumanLoadout$$.cctor
// il2cpp: void GameManagers_HumanLoadout___cctor (const MethodInfo* method);
// 0x423b320

void GameManagers_HumanLoadout___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05705166 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05705166 = '\x01';
  }
  **(undefined8 **)(TypeInfo_HumanLoadout + 0xb8) = "Blade";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HumanLoadout + 0xb8),"Blade");
  lVar1 = *(long *)(TypeInfo_HumanLoadout + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "AHSS";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_HumanLoadout + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Thunderspear";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_HumanLoadout + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "APG";
  il2cpp_runtime_glue(lVar1 + 0x18);
  return;
}


