// Type: Characters.HorseComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HorseComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/HorseComponentCache.cs
// --------------------------------

// Characters.HorseComponentCache$$.ctor
// il2cpp: void Characters_HorseComponentCache___ctor (Characters_HorseComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x42de080

void Characters_HorseComponentCache___ctor
               (Characters_HorseComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  Characters_HorseComponentCache_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_ParticleSystem_o *pUVar1;
  Characters_HorseComponentCache_o *__this_02;
  
  if (g_data_057ade53 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&"Horse/Prefabs/HorseSounds");
    il2cpp_runtime_helper_023445d0(&"Dust");
    g_data_057ade53 = '\x01';
  }
  __this_02 = __this;
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Characters_HorseComponentCache_o *)
                UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    __this_02 = (Characters_HorseComponentCache_o *)owner;
    if (__this_00 != (Characters_HorseComponentCache_o *)0x0) {
      __this_01 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_00,"Dust",(MethodInfo *)0x0);
      __this_02 = __this_00;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = (UnityEngine_ParticleSystem_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_01,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
        (__this->fields).Dust = pUVar1;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Dust,pUVar1);
        Utility_BaseComponentCache__LoadAudio
                  ((Utility_BaseComponentCache_o *)__this,"Horse/Prefabs/HorseSounds",(__this->fields).Transform,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


