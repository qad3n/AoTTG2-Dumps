// Type: CustomSkins.LevelCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/LevelCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/LevelCustomSkinLoader.cs
// --------------------------------

// CustomSkins.LevelCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_LevelCustomSkinLoader__GetCustomSkinPart (CustomSkins_LevelCustomSkinLoader_o* __this, int32_t partId, int32_t randomIndex, const MethodInfo* method);
// 0x4092120

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_LevelCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_LevelCustomSkinLoader_o *__this,int32_t partId,int32_t randomIndex,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *pSVar2;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar2 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(pSVar2,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCustomSkinPart_GetCustomSkinPart);
  il2cpp_runtime_helper_022b2b10(pSVar2);
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  pSVar2 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(pSVar2,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FindAndIndexLevelObjects);
  il2cpp_runtime_helper_022b2b10(pSVar2,uVar1);
  if (g_data_057ac41b == '\0') {
    il2cpp_runtime_helper_023445d0(&"skybox");
    g_data_057ac41b = '\x01';
  }
  return "skybox";
}


// CustomSkins.LevelCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_LevelCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_LevelCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4092160

void CustomSkins_LevelCustomSkinLoader__FindAndIndexLevelObjects
               (CustomSkins_LevelCustomSkinLoader_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FindAndIndexLevelObjects);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  if (g_data_057ac41b == '\0') {
    il2cpp_runtime_helper_023445d0(&"skybox");
    g_data_057ac41b = '\x01';
  }
  return;
}


// CustomSkins.LevelCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_LevelCustomSkinLoader___ctor (CustomSkins_LevelCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x408fbd0

void CustomSkins_LevelCustomSkinLoader___ctor(CustomSkins_LevelCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac41a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac41a = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  if (iVar1 != 0) {
    CustomSkins_BaseCustomSkinLoader___ctor((CustomSkins_BaseCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomSkins_BaseCustomSkinLoader___ctor((CustomSkins_BaseCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
  return;
}


