// Type: Map.MapTags
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapTags.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapTags.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapTags$$.ctor
// il2cpp: void Map_MapTags___ctor (Map_MapTags_o* __this, const MethodInfo* method);
// 0x3db0110

void Map_MapTags___ctor(Map_MapTags_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTags$$.cctor
// il2cpp: void Map_MapTags___cctor (const MethodInfo* method);
// 0x3db0120

void Map_MapTags___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057027bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapTags);
    il2cpp_init_method_metadata(&"TitanSpawnPoint");
    il2cpp_init_method_metadata(&"HumanSpawnPoint");
    il2cpp_init_method_metadata(&"HumanSpawnPointBlue");
    il2cpp_init_method_metadata(&"HumanSpawnPointRed");
    il2cpp_init_method_metadata(&"CameraSpawnPoint");
    DAT_057027bb = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapTags + 0xb8) = "CameraSpawnPoint";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MapTags + 0xb8),"CameraSpawnPoint");
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "HumanSpawnPoint";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "HumanSpawnPointBlue";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "HumanSpawnPointRed";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "TitanSpawnPoint";
  il2cpp_runtime_glue(lVar1 + 0x20);
  return;
}


