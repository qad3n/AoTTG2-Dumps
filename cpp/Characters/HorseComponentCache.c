// Type: Characters.HorseComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HorseComponentCache.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Horse/HorseComponentCache.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.HorseComponentCache$$.ctor
// il2cpp: void Characters_HorseComponentCache___ctor (Characters_HorseComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x3fd17c0

void Characters_HorseComponentCache___ctor
               (Characters_HorseComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  
  if (DAT_057040e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&"Horse/Prefabs/HorseSounds");
    il2cpp_init_method_metadata(&"Dust");
    DAT_057040e5 = '\x01';
  }
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Dust",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = (UnityEngine_ParticleSystem_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
        (__this->fields).Dust = pUVar2;
        il2cpp_runtime_glue(&(__this->fields).Dust,pUVar2);
        Utility_BaseComponentCache__LoadAudio
                  ((Utility_BaseComponentCache_o *)__this,"Horse/Prefabs/HorseSounds",(__this->fields).Transform,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


