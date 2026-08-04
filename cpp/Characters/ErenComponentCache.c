// Type: Characters.ErenComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ErenComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenComponentCache.cs
// --------------------------------

// Characters.ErenComponentCache$$.ctor
// il2cpp: void Characters_ErenComponentCache___ctor (Characters_ErenComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x4303ae0

void Characters_ErenComponentCache___ctor
               (Characters_ErenComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057adf41 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2/Core/Controller_Body/hip");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck/head");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_runtime_helper_023445d0(&"Titans/Prefabs/TitanSounds");
    il2cpp_runtime_helper_023445d0(&"ErenRig_VER2/Core");
    g_data_057adf41 = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).Transform;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
    (__this->fields).Head = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Head,pUVar6);
    pUVar6 = (__this->fields).Transform;
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__Find(pUVar6,"ErenRig_VER2/Core/Controller_Body/hip/spine/chest/neck",(MethodInfo *)0x0);
      (__this->fields).Neck = pUVar6;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Neck,pUVar6);
      pUVar6 = (__this->fields).Transform;
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"ErenRig_VER2/Core",(MethodInfo *)0x0);
        (__this->fields).Core = pUVar6;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Core,pUVar6);
        pUVar6 = (__this->fields).Transform;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = UnityEngine_Transform__Find(pUVar6,"ErenRig_VER2/Core/Controller_Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = pUVar6;
          il2cpp_runtime_helper_022b4080(&(__this->fields).Hip,pUVar6);
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
  if (g_data_057adf42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Nod");
    g_data_057adf42 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  pIVar5 = "Nod";
  lVar4 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar5;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar5,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                  );
      }
      pIVar5 = "Roar";
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar5;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,pIVar5,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


