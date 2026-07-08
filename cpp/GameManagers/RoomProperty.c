// Type: GameManagers.RoomProperty
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/RoomProperty.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/PlayerProperty.cs  [prior source available (delta unverified)]
// --------------------------------

// GameManagers.RoomProperty$$.ctor
// il2cpp: void GameManagers_RoomProperty___ctor (GameManagers_RoomProperty_o* __this, const MethodInfo* method);
// 0x423b980

void GameManagers_RoomProperty___ctor(GameManagers_RoomProperty_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.RoomProperty$$.cctor
// il2cpp: void GameManagers_RoomProperty___cctor (const MethodInfo* method);
// 0x423b990

void GameManagers_RoomProperty___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_0570516d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&"GameMode");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Password");
    il2cpp_init_method_metadata(&"PH");
    il2cpp_init_method_metadata(&"Map");
    il2cpp_init_method_metadata(&"PS");
    il2cpp_init_method_metadata(&"AccountRequired");
    DAT_0570516d = '\x01';
  }
  **(undefined8 **)(TypeInfo_RoomProperty + 0xb8) = "Name";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_RoomProperty + 0xb8),"Name");
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Map";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "GameMode";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Password";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "PS";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "PH";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "AccountRequired";
  il2cpp_runtime_glue(lVar1 + 0x30);
  return;
}


