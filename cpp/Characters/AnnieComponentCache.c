// Type: Characters.AnnieComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AnnieComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieComponentCache.cs
// --------------------------------

// Characters.AnnieComponentCache$$.ctor
// il2cpp: void Characters_AnnieComponentCache___ctor (Characters_AnnieComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x42fd5a0

void Characters_AnnieComponentCache___ctor
               (Characters_AnnieComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Characters_BaseTitanComponentCache_o *__this_00;
  
  if (g_data_057adf0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck/head");
    il2cpp_runtime_helper_023445d0(&"Armature_FemT/Core");
    il2cpp_runtime_helper_023445d0(&"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_runtime_helper_023445d0(&"Armature_FemT/Core/Controller_Body/hip");
    il2cpp_runtime_helper_023445d0(&"Titans/Prefabs/TitanSounds");
    g_data_057adf0f = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    owner = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
    (__this->fields).Head = (UnityEngine_Transform_o *)owner;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Head);
    pUVar1 = (__this->fields).Transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      owner = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core/Controller_Body/hip/spine/chest/neck",(MethodInfo *)0x0);
      (__this->fields).Neck = (UnityEngine_Transform_o *)owner;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Neck);
      pUVar1 = (__this->fields).Transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        owner = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core",(MethodInfo *)0x0)
        ;
        (__this->fields).Core = (UnityEngine_Transform_o *)owner;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Core);
        pUVar1 = (__this->fields).Transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Armature_FemT/Core/Controller_Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = pUVar1;
          il2cpp_runtime_helper_022b4080(&(__this->fields).Hip,pUVar1);
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
  __this_00 = (Characters_BaseTitanComponentCache_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseTitanComponentCache___ctor(__this_00,owner,(MethodInfo *)0x0);
  return;
}


