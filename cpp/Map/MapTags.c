// Type: Map.MapTags
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapTags.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapTags.cs
// --------------------------------

// Map.MapTags$$.ctor
// il2cpp: void Map_MapTags___ctor (Map_MapTags_o* __this, const MethodInfo* method);
// 0x59a6360

void Map_MapTags___ctor(Map_MapTags_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTags$$.cctor
// il2cpp: void Map_MapTags___cctor (const MethodInfo* method);
// 0x59a6370

void Map_MapTags___cctor(MethodInfo *method)

{
  Map_MapTags_StaticFields *pMVar1;
  
  if (Il2CppMethodInitialized_07545abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanSpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanSpawnPointBlue");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanSpawnPointRed");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraSpawnPoint");
    Il2CppMethodInitialized_07545abb = '\x01';
  }
  TypeInfo_Map_MapTags->static_fields->CameraSpawnPoint = "CameraSpawnPoint";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTags->static_fields->CameraSpawnPoint);
  pMVar1 = TypeInfo_Map_MapTags->static_fields;
  pMVar1->HumanSpawnPoint = "HumanSpawnPoint";
  Il2CppCodeGenWriteBarrier(&pMVar1->HumanSpawnPoint);
  pMVar1 = TypeInfo_Map_MapTags->static_fields;
  pMVar1->HumanSpawnPointBlue = "HumanSpawnPointBlue";
  Il2CppCodeGenWriteBarrier(&pMVar1->HumanSpawnPointBlue);
  pMVar1 = TypeInfo_Map_MapTags->static_fields;
  pMVar1->HumanSpawnPointRed = "HumanSpawnPointRed";
  Il2CppCodeGenWriteBarrier(&pMVar1->HumanSpawnPointRed);
  pMVar1 = TypeInfo_Map_MapTags->static_fields;
  pMVar1->TitanSpawnPoint = "TitanSpawnPoint";
  Il2CppCodeGenWriteBarrier(&pMVar1->TitanSpawnPoint);
  return;
}


