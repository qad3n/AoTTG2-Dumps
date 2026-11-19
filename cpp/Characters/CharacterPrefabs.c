// Type: Characters.CharacterPrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CharacterPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterPrefabs.cs
// --------------------------------

// Characters.CharacterPrefabs$$.ctor
// il2cpp: void Characters_CharacterPrefabs___ctor (Characters_CharacterPrefabs_o* __this, const MethodInfo* method);
// 0x5be2d00

void Characters_CharacterPrefabs___ctor(Characters_CharacterPrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.CharacterPrefabs$$.cctor
// il2cpp: void Characters_CharacterPrefabs___cctor (const MethodInfo* method);
// 0x5be2d10

void Characters_CharacterPrefabs___cctor(MethodInfo *method)

{
  Characters_CharacterPrefabs_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_075475ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"Horse/Prefabs/Horse");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/Armored");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Prefabs/HumanPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Prefabs/BasicTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/Eren");
    Il2CppMethodInitialized_075475ca = '\x01';
  }
  TypeInfo_Characters_CharacterPrefabs->static_fields->Human = "Human/Prefabs/HumanPlayer";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_CharacterPrefabs->static_fields->Human);
  pCVar1 = TypeInfo_Characters_CharacterPrefabs->static_fields;
  pCVar1->BasicTitanPrefix = "Titans/Prefabs/BasicTitan";
  Il2CppCodeGenWriteBarrier(&pCVar1->BasicTitanPrefix);
  pCVar1 = TypeInfo_Characters_CharacterPrefabs->static_fields;
  pCVar1->Horse = "Horse/Prefabs/Horse";
  Il2CppCodeGenWriteBarrier(&pCVar1->Horse);
  pCVar1 = TypeInfo_Characters_CharacterPrefabs->static_fields;
  pCVar1->ErenShifter = "Shifters/Prefabs/Eren";
  Il2CppCodeGenWriteBarrier(&pCVar1->ErenShifter);
  pCVar1 = TypeInfo_Characters_CharacterPrefabs->static_fields;
  pCVar1->AnnieShifter = "Shifters/Prefabs/Annie";
  Il2CppCodeGenWriteBarrier(&pCVar1->AnnieShifter);
  pCVar1 = TypeInfo_Characters_CharacterPrefabs->static_fields;
  pCVar1->ArmoredShifter = "Shifters/Prefabs/Armored";
  Il2CppCodeGenWriteBarrier(&pCVar1->ArmoredShifter);
  pCVar1 = TypeInfo_Characters_CharacterPrefabs->static_fields;
  pCVar1->WallColossal = "Shifters/Prefabs/WallColossal";
  Il2CppCodeGenWriteBarrier(&pCVar1->WallColossal);
  return;
}


