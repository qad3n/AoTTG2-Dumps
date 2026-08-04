// Type: Map.MapTags
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapTags.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapTags.cs
// --------------------------------

// Map.MapTags$$.ctor
// il2cpp: void Map_MapTags___ctor (Map_MapTags_o* __this, const MethodInfo* method);
// 0x40b6450

void Map_MapTags___ctor(Map_MapTags_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTags$$.cctor
// il2cpp: void Map_MapTags___cctor (const MethodInfo* method);
// 0x40b6460

void Map_MapTags___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTags);
    il2cpp_runtime_helper_023445d0(&"TitanSpawnPoint");
    il2cpp_runtime_helper_023445d0(&"HumanSpawnPoint");
    il2cpp_runtime_helper_023445d0(&"HumanSpawnPointBlue");
    il2cpp_runtime_helper_023445d0(&"HumanSpawnPointRed");
    il2cpp_runtime_helper_023445d0(&"CameraSpawnPoint");
    g_data_057ac4f0 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapTags + 0xb8) = "CameraSpawnPoint";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MapTags + 0xb8),"CameraSpawnPoint");
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "HumanSpawnPoint";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "HumanSpawnPointBlue";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "HumanSpawnPointRed";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MapTags + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "TitanSpawnPoint";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  return;
}


