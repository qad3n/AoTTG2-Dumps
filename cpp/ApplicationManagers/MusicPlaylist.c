// Type: ApplicationManagers.MusicPlaylist
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/MusicPlaylist.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MusicManager.cs
// --------------------------------

// ApplicationManagers.MusicPlaylist$$.ctor
// il2cpp: void ApplicationManagers_MusicPlaylist___ctor (ApplicationManagers_MusicPlaylist_o* __this, const MethodInfo* method);
// 0x44bddf0

void ApplicationManagers_MusicPlaylist___ctor(ApplicationManagers_MusicPlaylist_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.MusicPlaylist$$.cctor
// il2cpp: void ApplicationManagers_MusicPlaylist___cctor (const MethodInfo* method);
// 0x44bde00

void ApplicationManagers_MusicPlaylist___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aea79 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    il2cpp_runtime_helper_023445d0(&"Menu");
    il2cpp_runtime_helper_023445d0(&"Boss");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Ambient");
    il2cpp_runtime_helper_023445d0(&"Racing");
    il2cpp_runtime_helper_023445d0(&"Peaceful");
    il2cpp_runtime_helper_023445d0(&"Battle");
    g_data_057aea79 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MusicPlaylist + 0xb8) = "Menu";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MusicPlaylist + 0xb8),"Menu");
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Default";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Peaceful";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Ambient";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Battle";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Boss";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Racing";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  return;
}


