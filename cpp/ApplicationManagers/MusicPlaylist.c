// Type: ApplicationManagers.MusicPlaylist
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/MusicPlaylist.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/MusicManager.cs  [prior source available (delta unverified)]
// --------------------------------

// ApplicationManagers.MusicPlaylist$$.ctor
// il2cpp: void ApplicationManagers_MusicPlaylist___ctor (ApplicationManagers_MusicPlaylist_o* __this, const MethodInfo* method);
// 0x41a4c70

void ApplicationManagers_MusicPlaylist___ctor
               (ApplicationManagers_MusicPlaylist_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.MusicPlaylist$$.cctor
// il2cpp: void ApplicationManagers_MusicPlaylist___cctor (const MethodInfo* method);
// 0x41a4c80

void ApplicationManagers_MusicPlaylist___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704cab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MusicPlaylist);
    il2cpp_init_method_metadata(&"Menu");
    il2cpp_init_method_metadata(&"Boss");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Ambient");
    il2cpp_init_method_metadata(&"Racing");
    il2cpp_init_method_metadata(&"Peaceful");
    il2cpp_init_method_metadata(&"Battle");
    DAT_05704cab = '\x01';
  }
  **(undefined8 **)(TypeInfo_MusicPlaylist + 0xb8) = "Menu";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MusicPlaylist + 0xb8),"Menu");
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Default";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Peaceful";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Ambient";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Battle";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Boss";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_MusicPlaylist + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Racing";
  il2cpp_runtime_glue(lVar1 + 0x30);
  return;
}


