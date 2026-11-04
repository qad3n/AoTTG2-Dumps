// Type: Utility.FolderPaths
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Utility/FolderPaths.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/FolderPaths.cs
// --------------------------------

// Utility.FolderPaths$$.ctor
// il2cpp: void Utility_FolderPaths___ctor (Utility_FolderPaths_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_FolderPaths___ctor(Utility_FolderPaths_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FolderPaths$$.cctor
// il2cpp: void Utility_FolderPaths___cctor (const MethodInfo* method);
// 0x182338c90

void Utility_FolderPaths___cctor(MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  int32_t folder;
  
  if (Il2CppMethodInitialized_184347832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/PersistentData");
    il2cpp_codegen_initialize_runtime_metadata(&"/Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomMap/Backups");
    il2cpp_codegen_initialize_runtime_metadata(&"/Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomMap");
    il2cpp_codegen_initialize_runtime_metadata(&"/UIThemes");
    il2cpp_codegen_initialize_runtime_metadata(&"/GameProgress");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomMap/Autosave");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomLocale");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomLogic");
    il2cpp_codegen_initialize_runtime_metadata(&"/Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"/CharacterPreviews");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomAddon");
    il2cpp_codegen_initialize_runtime_metadata(&"/CustomAssets/WebDownload");
    il2cpp_codegen_initialize_runtime_metadata(&"/TesterData");
    il2cpp_codegen_initialize_runtime_metadata(&"/Snapshots");
    il2cpp_codegen_initialize_runtime_metadata(&"/Languages");
    Il2CppMethodInitialized_184347832 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  folder = 0x1c;
  if (iVar1 != 0xd) {
    folder = 5;
  }
  pSVar2 = System_Environment__GetFolderPath(folder,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50(pSVar2,"/Aottg2",(MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->Documents = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->Documents,pSVar2);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  pSVar2 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,"/Languages",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->LanguagesPath = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->LanguagesPath,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,"/TesterData",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->TesterData = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->TesterData,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,"/Presets",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->PresetsPath = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->PresetsPath,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->StreamingAssetsPath,"/UIThemes",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->UIThemesPath = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->UIThemesPath,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/Settings",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->Settings = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->Settings,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/Snapshots",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->Snapshots = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->Snapshots,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/GameProgress",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->GameProgress = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->GameProgress,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/PersistentData",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->PersistentData = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->PersistentData,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomLogic",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomLogic = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomLogic,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomAddon",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomAddon = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomAddon,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomMap",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomMap = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomMap,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomMap/Autosave",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomMapAutosave = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomMapAutosave,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomMap/Backups",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomMapBackups = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomMapBackups,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomAssets",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomAssets/WebDownload",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CharacterPreviews",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews,pSVar2);
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CustomLocale",
                      (MethodInfo *)0x0);
  TypeInfo_Utility_FolderPaths->static_fields->CustomLocale = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_FolderPaths->static_fields->CustomLocale,pSVar2);
  return;
}


