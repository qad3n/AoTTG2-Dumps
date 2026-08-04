// Type: Map.MapObjectShader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObjectShader.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectShader$$IsLegacyShader
// il2cpp: bool Map_MapObjectShader__IsLegacyShader (System_String_o* shader, const MethodInfo* method);
// 0x40b1800

bool_conflict Map_MapObjectShader__IsLegacyShader(System_String_o *shader,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  ulong uVar3;
  
  if (g_data_057ac4c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    g_data_057ac4c9 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = System_String__op_Equality
                    (shader,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x30),(MethodInfo *)0x0);
  uVar3 = (ulong)uVar1;
  if ((char)uVar1 == '\0') {
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar1 = System_String__op_Equality
                      (shader,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x38),(MethodInfo *)0x0);
    uVar3 = (ulong)uVar1;
    if ((char)uVar1 == '\0') {
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar1 = System_String__op_Equality
                        (shader,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x40),(MethodInfo *)0x0
                        );
      uVar3 = (ulong)uVar1;
      if ((char)uVar1 == '\0') {
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_String__op_Equality
                          (shader,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x48),
                           (MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return (bool_conflict)CONCAT71((int7)(uVar3 >> 8),1);
}


// Map.MapObjectShader$$.cctor
// il2cpp: void Map_MapObjectShader___cctor (const MethodInfo* method);
// 0x40b18f0

void Map_MapObjectShader___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac4ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&"Smoke1Mat");
    il2cpp_runtime_helper_023445d0(&"Reflective");
    il2cpp_runtime_helper_023445d0(&"OldBombExplodeMat");
    il2cpp_runtime_helper_023445d0(&"BombTexMat");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"DefaultTiled");
    il2cpp_runtime_helper_023445d0(&"Basic");
    il2cpp_runtime_helper_023445d0(&"CannonRegionMat");
    il2cpp_runtime_helper_023445d0(&"DefaultNoTint");
    il2cpp_runtime_helper_023445d0(&"Transparent");
    g_data_057ac4ca = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectShader + 0xb8) = "Default";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MapObjectShader + 0xb8),"Default");
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "DefaultNoTint";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "DefaultTiled";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Basic";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Transparent";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Reflective";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "OldBombExplodeMat";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "CannonRegionMat";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "BombTexMat";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Smoke1Mat";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  return;
}


