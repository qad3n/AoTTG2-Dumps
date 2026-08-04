// Type: GameManagers.RoomProperty
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/RoomProperty.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.RoomProperty$$.ctor
// il2cpp: void GameManagers_RoomProperty___ctor (GameManagers_RoomProperty_o* __this, const MethodInfo* method);
// 0x4570350

void GameManagers_RoomProperty___ctor(GameManagers_RoomProperty_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.RoomProperty$$.cctor
// il2cpp: void GameManagers_RoomProperty___cctor (const MethodInfo* method);
// 0x4570360

void GameManagers_RoomProperty___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057af05c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"GameMode");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Password");
    il2cpp_runtime_helper_023445d0(&"PH");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"PS");
    il2cpp_runtime_helper_023445d0(&"AccountRequired");
    g_data_057af05c = '\x01';
  }
  **(undefined8 **)(TypeInfo_RoomProperty + 0xb8) = "Name";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_RoomProperty + 0xb8),"Name");
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Map";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "GameMode";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Password";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "PS";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "PH";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_RoomProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "AccountRequired";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  return;
}


