// Type: Utility.BaseComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/BaseComponentCache.cs
// --------------------------------

// Utility.BaseComponentCache$$.ctor
// il2cpp: void Utility_BaseComponentCache___ctor (Utility_BaseComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x4475940

void Utility_BaseComponentCache___ctor
               (Utility_BaseComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  System_Collections_Generic_List_Collider__o **ppSVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppObject *item;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Collider__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Rigidbody_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  System_Object_array *pSVar9;
  ulong uVar10;
  Utility_BaseComponentCache_o *pUVar11;
  
  if (g_data_057ae8b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    g_data_057ae8b2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Collider);
  ppSVar1 = &(__this->fields).Colliders;
  (__this->fields).Colliders = __this_00;
  il2cpp_runtime_helper_022b4080(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  (__this->fields).AudioSources = (System_Collections_Generic_Dictionary_string__AudioSource__o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AudioSources);
  pUVar11 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    (__this->fields).Transform = pUVar6;
    il2cpp_runtime_helper_022b4080(&__this->fields,pUVar6);
    pUVar7 = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__GetComponent_object_(owner,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    (__this->fields).Rigidbody = pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Rigidbody,pUVar7);
    pPVar8 = (Photon_Pun_PhotonView_o *)UnityEngine_GameObject__GetComponent_object_(owner,MethodInfo_PhotonView_GetComponent_PhotonView);
    (__this->fields).PhotonView = pPVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).PhotonView,pPVar8);
    pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(owner,MethodInfo_Collider_GetComponentsInChildren_Collider);
    pUVar11 = (Utility_BaseComponentCache_o *)owner;
    if (pSVar9 != (System_Object_array *)0x0) {
      if ((int)pSVar9->max_length < 1) {
        return;
      }
      uVar10 = 0;
      if ((pSVar9->max_length & 0xffffffff) != 0) {
        do {
          lVar5 = MethodInfo_Void_Add;
          owner = (UnityEngine_GameObject_o *)*ppSVar1;
          pUVar11 = (Utility_BaseComponentCache_o *)owner;
          if ((Utility_BaseComponentCache_o *)owner == (Utility_BaseComponentCache_o *)0x0) goto label_04475b58;
          item = pSVar9->m_Items[uVar10];
          piVar2 = (int32_t *)((long)&(((Utility_BaseComponentCache_o *)owner)->fields).Rigidbody + 4);
          *piVar2 = *piVar2 + 1;
          pSVar4 = (System_Object_array *)(((Utility_BaseComponentCache_o *)owner)->fields).Transform;
          if (pSVar4 == (System_Object_array *)0x0) goto label_04475b58;
          uVar3 = *(uint *)&(((Utility_BaseComponentCache_o *)owner)->fields).Rigidbody;
          if (uVar3 < (uint)pSVar4->max_length) {
            *(uint *)&(((Utility_BaseComponentCache_o *)owner)->fields).Rigidbody = uVar3 + 1;
            owner = (UnityEngine_GameObject_o *)(pSVar4->m_Items + (int)uVar3);
            pSVar4->m_Items[(int)uVar3] = item;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)owner,item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = uVar10 + 1;
          uVar3 = (uint)pSVar9->max_length;
          if ((long)(int)uVar3 <= (long)uVar10) {
            return;
          }
        } while (uVar10 < uVar3);
      }
      goto label_04475b5d;
    }
  }
label_04475b58:
  owner = (UnityEngine_GameObject_o *)pUVar11;
  il2cpp_runtime_helper_022b2c90();
label_04475b5d:
  il2cpp_runtime_helper_022b2ca0();
  (*(((System_Collections_Generic_List_object__c *)((Utility_BaseComponentCache_o *)owner)->klass)->vtable).
    _6_IndexOf.methodPtr)();
  return;
}


// Utility.BaseComponentCache$$LoadAudio
// il2cpp: void Utility_BaseComponentCache__LoadAudio (Utility_BaseComponentCache_o* __this, System_String_o* prefab, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x44844f0

void Utility_BaseComponentCache__LoadAudio
               (Utility_BaseComponentCache_o *__this,System_String_o *prefab,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  uint uVar1;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_03;
  MethodInfo *key;
  uint uVar4;
  
  if (g_data_057ae8b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057ae8b3 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,prefab,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    prefab = (System_String_o *)0x0;
    pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar2,parent,(MethodInfo *)0x0);
      prefab = (System_String_o *)0x0;
      pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar2,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        key = MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
        pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                           (__this_02,(MethodInfo_255AB00 *)MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
        prefab = (System_String_o *)key;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar1 = (uint)pSVar3->max_length;
          if (0 < (int)uVar1) {
            uVar4 = 0;
            do {
              prefab = (System_String_o *)key;
              if (uVar1 <= uVar4) goto label_044846c4;
              __this_00 = (UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar4];
              if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_044846bf;
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields).AudioSources;
              prefab = (System_String_o *)0x0;
              __this_03 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
              if (__this_03 == (UnityEngine_Object_o *)0x0) goto label_044846bf;
              prefab = (System_String_o *)0x0;
              key = (MethodInfo *)UnityEngine_Object__get_name(__this_03,(MethodInfo *)0x0);
              if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_044846bf;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_01,(Il2CppObject *)key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
              uVar4 = uVar4 + 1;
              uVar1 = (uint)pSVar3->max_length;
            } while ((int)uVar4 < (int)uVar1);
          }
          return;
        }
      }
    }
  }
label_044846bf:
  il2cpp_runtime_helper_022b2c90();
label_044846c4:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae8b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae8b4 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,(MethodInfo *)prefab);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,(MethodInfo *)prefab);
  return;
}


