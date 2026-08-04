// Type: Characters.ArmoredComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ArmoredComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Armored/ArmoredComponentCache.cs
// --------------------------------

// Characters.ArmoredComponentCache$$.ctor
// il2cpp: void Characters_ArmoredComponentCache___ctor (Characters_ArmoredComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x42ff110

void Characters_ArmoredComponentCache___ctor
               (Characters_ArmoredComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057adf20 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_runtime_helper_023445d0(&"Titans/Prefabs/TitanSounds");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip");
    g_data_057adf20 = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
    (__this->fields).Head = pUVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Head,pUVar1);
    pUVar1 = (__this->fields).Transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck",(MethodInfo *)0x0);
      (__this->fields).Neck = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Neck,pUVar1);
      pUVar1 = (__this->fields).Transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core",(MethodInfo *)0x0);
        (__this->fields).Core = pUVar1;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Core,pUVar1);
        pUVar1 = (__this->fields).Transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core/Controller.Body/hip",(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adf21 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  return;
}


