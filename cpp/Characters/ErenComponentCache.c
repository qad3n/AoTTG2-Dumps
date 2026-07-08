// Type: Characters.ErenComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ErenComponentCache.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/Eren/ErenComponentCache.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.ErenComponentCache$$.ctor
// il2cpp: void Characters_ErenComponentCache___ctor (Characters_ErenComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x3ff7220

void Characters_ErenComponentCache___ctor
               (Characters_ErenComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (DAT_057041d3 == '\0') {
    il2cpp_init_method_metadata(&"ErenRig_VER2/Core/Controller_Body/hip");
    il2cpp_init_method_metadata(&"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck/head");
    il2cpp_init_method_metadata(&"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck");
    il2cpp_init_method_metadata(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_init_method_metadata(&"Titans/Prefabs/TitanSounds");
    il2cpp_init_method_metadata(&"ErenRig_VER2/Core");
    DAT_057041d3 = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
    (__this->fields).Head = pUVar1;
    il2cpp_runtime_glue(&(__this->fields).Head,pUVar1);
    pUVar1 = (__this->fields).Transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck",(MethodInfo *)0x0);
      (__this->fields).Neck = pUVar1;
      il2cpp_runtime_glue(&(__this->fields).Neck,pUVar1);
      pUVar1 = (__this->fields).Transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core",(MethodInfo *)0x0);
        (__this->fields).Core = pUVar1;
        il2cpp_runtime_glue(&(__this->fields).Core,pUVar1);
        pUVar1 = (__this->fields).Transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"ErenRig_VER2/Core/Controller_Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = pUVar1;
          il2cpp_runtime_glue(&(__this->fields).Hip,pUVar1);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this,"Shifters/Prefabs/ShifterSounds",(__this->fields).Neck,
                     (MethodInfo *)0x0);
          Utility_BaseComponentCache__LoadAudio
                    ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",(__this->fields).Neck,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


