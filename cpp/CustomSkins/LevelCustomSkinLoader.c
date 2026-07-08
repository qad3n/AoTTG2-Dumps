// Type: CustomSkins.LevelCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/LevelCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/LevelCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.LevelCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_LevelCustomSkinLoader__GetCustomSkinPart (CustomSkins_LevelCustomSkinLoader_o* __this, int32_t partId, int32_t randomIndex, const MethodInfo* method);
// 0x4244f70

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_LevelCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_LevelCustomSkinLoader_o *__this,int32_t partId,int32_t randomIndex,
          MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_BaseCustomSkinPart_GetCustomSkinPart);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomSkins.LevelCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_LevelCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_LevelCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4244fb0

void CustomSkins_LevelCustomSkinLoader__FindAndIndexLevelObjects
               (CustomSkins_LevelCustomSkinLoader_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_FindAndIndexLevelObjects);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomSkins.LevelCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_LevelCustomSkinLoader___ctor (CustomSkins_LevelCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4240740

void CustomSkins_LevelCustomSkinLoader___ctor
               (CustomSkins_LevelCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057051c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    DAT_057051c1 = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


