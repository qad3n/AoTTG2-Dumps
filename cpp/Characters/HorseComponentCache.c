// Type: Characters.HorseComponentCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HorseComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/HorseComponentCache.cs
// --------------------------------

// Characters.HorseComponentCache$$.ctor
// il2cpp: void Characters_HorseComponentCache___ctor (Characters_HorseComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x18214d010

void Characters_HorseComponentCache___ctor
               (Characters_HorseComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_ParticleSystem_o *value;
  
  if (Il2CppMethodInitialized_184346c54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&"Horse/Prefabs/HorseSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"Dust");
    Il2CppMethodInitialized_184346c54 = '\x01';
  }
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Dust",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        value = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar1,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
        (__this->fields).Dust = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Dust,value);
        Utility_BaseComponentCache__LoadAudio
                  ((Utility_BaseComponentCache_o *)__this,"Horse/Prefabs/HorseSounds",(__this->fields).Transform,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


