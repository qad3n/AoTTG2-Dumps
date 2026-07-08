// Type: Map.MapObjectShader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapObjectShader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapLoader.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapObjectShader$$IsLegacyShader
// il2cpp: bool Map_MapObjectShader__IsLegacyShader (System_String_o* shader, const MethodInfo* method);
// 0x3da5330

bool_conflict Map_MapObjectShader__IsLegacyShader(System_String_o *shader,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  ulong uVar3;
  
  if (DAT_05702794 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    DAT_05702794 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = System_String__op_Equality
                    (shader,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x30),
                     (MethodInfo *)0x0);
  uVar3 = (ulong)uVar1;
  if ((char)uVar1 == '\0') {
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = System_String__op_Equality
                      (shader,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x38),
                       (MethodInfo *)0x0);
    uVar3 = (ulong)uVar1;
    if ((char)uVar1 == '\0') {
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = System_String__op_Equality
                        (shader,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x40),
                         (MethodInfo *)0x0);
      uVar3 = (ulong)uVar1;
      if ((char)uVar1 == '\0') {
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_init_class();
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
// 0x3dac150

void Map_MapObjectShader___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05702795 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&"Smoke1Mat");
    il2cpp_init_method_metadata(&"Reflective");
    il2cpp_init_method_metadata(&"OldBombExplodeMat");
    il2cpp_init_method_metadata(&"BombTexMat");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"DefaultTiled");
    il2cpp_init_method_metadata(&"Basic");
    il2cpp_init_method_metadata(&"CannonRegionMat");
    il2cpp_init_method_metadata(&"DefaultNoTint");
    il2cpp_init_method_metadata(&"Transparent");
    DAT_05702795 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectShader + 0xb8) = "Default";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MapObjectShader + 0xb8),"Default");
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "DefaultNoTint";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "DefaultTiled";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Basic";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Transparent";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Reflective";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "OldBombExplodeMat";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "CannonRegionMat";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "BombTexMat";
  il2cpp_runtime_glue(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_MapObjectShader + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Smoke1Mat";
  il2cpp_runtime_glue(lVar1 + 0x48);
  return;
}


