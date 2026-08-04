// Type: Utility.FolderPaths
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/FolderPaths.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/FolderPaths.cs
// --------------------------------

// Utility.FolderPaths$$.ctor
// il2cpp: void Utility_FolderPaths___ctor (Utility_FolderPaths_o* __this, const MethodInfo* method);
// 0x4491cf0

void Utility_FolderPaths___ctor(Utility_FolderPaths_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FolderPaths$$.cctor
// il2cpp: void Utility_FolderPaths___cctor (const MethodInfo* method);
// 0x4491d00

void Utility_FolderPaths___cctor(MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  int32_t folder;
  
  if (g_data_057ae90f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/PersistentData");
    il2cpp_runtime_helper_023445d0(&"/Aottg2");
    il2cpp_runtime_helper_023445d0(&"/Settings");
    il2cpp_runtime_helper_023445d0(&"/CustomMap");
    il2cpp_runtime_helper_023445d0(&"/UIThemes");
    il2cpp_runtime_helper_023445d0(&"/GameProgress");
    il2cpp_runtime_helper_023445d0(&"/CustomMap/Autosave");
    il2cpp_runtime_helper_023445d0(&"/CustomLocale");
    il2cpp_runtime_helper_023445d0(&"/CustomAssets");
    il2cpp_runtime_helper_023445d0(&"/CustomLogic");
    il2cpp_runtime_helper_023445d0(&"/Presets");
    il2cpp_runtime_helper_023445d0(&"/CharacterPreviews");
    il2cpp_runtime_helper_023445d0(&"/CustomAddon");
    il2cpp_runtime_helper_023445d0(&"/CustomAssets/WebDownload");
    il2cpp_runtime_helper_023445d0(&"/TesterData");
    il2cpp_runtime_helper_023445d0(&"/Snapshots");
    il2cpp_runtime_helper_023445d0(&"/Languages");
    g_data_057ae90f = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  folder = 5;
  if (iVar2 == 0xd) {
    folder = 0x1c;
  }
  pSVar3 = System_Environment__GetFolderPath(folder,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3ae5ba0(pSVar3,"/Aottg2",(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_FolderPaths + 0xb8) = pSVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_FolderPaths + 0xb8),pSVar3);
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/Languages",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/TesterData",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/Presets",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/UIThemes",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/Settings",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x30) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/Snapshots",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x38) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/GameProgress",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x40) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/PersistentData",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x48) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomLogic",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x50) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomAddon",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x58) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomMap",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x60) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomMap/Autosave",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x68) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomAssets",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x70) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomAssets/WebDownload",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x78) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CharacterPreviews",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x80) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80,pSVar3);
  pSVar3 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomLocale",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x88) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88,pSVar3);
  return;
}


