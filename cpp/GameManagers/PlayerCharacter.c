// Type: GameManagers.PlayerCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/PlayerCharacter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/PlayerProperty.cs  [prior source available (delta unverified)]
// --------------------------------

// GameManagers.PlayerCharacter$$.ctor
// il2cpp: void GameManagers_PlayerCharacter___ctor (GameManagers_PlayerCharacter_o* __this, const MethodInfo* method);
// 0x423b240

void GameManagers_PlayerCharacter___ctor(GameManagers_PlayerCharacter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerCharacter$$.cctor
// il2cpp: void GameManagers_PlayerCharacter___cctor (const MethodInfo* method);
// 0x423b250

void GameManagers_PlayerCharacter___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05705165 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Shifter");
    DAT_05705165 = '\x01';
  }
  **(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8) = "Human";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_PlayerCharacter + 0xb8),"Human");
  lVar1 = *(long *)(TypeInfo_PlayerCharacter + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Titan";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_PlayerCharacter + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Shifter";
  il2cpp_runtime_glue(lVar1 + 0x10);
  return;
}


