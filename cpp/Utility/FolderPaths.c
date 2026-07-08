// Type: Utility.FolderPaths
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/FolderPaths.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/FolderPaths.cs  [prior source available (delta unverified)]
// --------------------------------

// Utility.FolderPaths$$.ctor
// il2cpp: void Utility_FolderPaths___ctor (Utility_FolderPaths_o* __this, const MethodInfo* method);
// 0x4179d10

void Utility_FolderPaths___ctor(Utility_FolderPaths_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FolderPaths$$.cctor
// il2cpp: void Utility_FolderPaths___cctor (const MethodInfo* method);
// 0x4179d20

void Utility_FolderPaths___cctor(MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  int32_t folder;
  
  if (DAT_05704b43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/PersistentData");
    il2cpp_init_method_metadata(&"/Aottg2");
    il2cpp_init_method_metadata(&"/Settings");
    il2cpp_init_method_metadata(&"/CustomMap");
    il2cpp_init_method_metadata(&"/UIThemes");
    il2cpp_init_method_metadata(&"/GameProgress");
    il2cpp_init_method_metadata(&"/CustomMap/Autosave");
    il2cpp_init_method_metadata(&"/CustomLocale");
    il2cpp_init_method_metadata(&"/CustomAssets");
    il2cpp_init_method_metadata(&"/CustomLogic");
    il2cpp_init_method_metadata(&"/Presets");
    il2cpp_init_method_metadata(&"/CharacterPreviews");
    il2cpp_init_method_metadata(&"/CustomAddon");
    il2cpp_init_method_metadata(&"/CustomAssets/WebDownload");
    il2cpp_init_method_metadata(&"/TesterData");
    il2cpp_init_method_metadata(&"/Snapshots");
    il2cpp_init_method_metadata(&"/Languages");
    DAT_05704b43 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  folder = 5;
  if (iVar2 == 0xd) {
    folder = 0x1c;
  }
  pSVar3 = System_Environment__GetFolderPath(folder,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,"/Aottg2",(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_FolderPaths + 0xb8) = pSVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_FolderPaths + 0xb8),pSVar3);
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 8,pSVar3);
  pSVar3 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/Languages",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar3);
  pSVar3 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/TesterData",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x18,pSVar3);
  pSVar3 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/Presets",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x20,pSVar3);
  pSVar3 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 8),"/UIThemes",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x28,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/Settings",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x30) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x30,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/Snapshots",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x38) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x38,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/GameProgress",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x40) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x40,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/PersistentData",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x48) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x48,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomLogic",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x50) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x50,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomAddon",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x58) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x58,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomMap",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x60) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x60,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomMap/Autosave",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x68) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x68,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomAssets",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x70) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x70,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomAssets/WebDownload",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x78) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x78,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CharacterPreviews",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x80) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x80,pSVar3);
  pSVar3 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CustomLocale",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_FolderPaths + 0xb8);
  *(System_String_o **)(lVar1 + 0x88) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x88,pSVar3);
  return;
}


