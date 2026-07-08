// Type: Utility.BaseComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/BaseComponentCache.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/BaseComponentCache.cs  [CHANGED since prior version]
// --------------------------------

// Utility.BaseComponentCache$$.ctor
// il2cpp: void Utility_BaseComponentCache___ctor (Utility_BaseComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x4142930

void Utility_BaseComponentCache___ctor
               (Utility_BaseComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  System_Collections_Generic_List_Collider__o **ppSVar1;
  int32_t *piVar2;
  uint uVar3;
  UnityEngine_Collider_o *item;
  UnityEngine_Collider_array *pUVar4;
  long lVar5;
  System_Collections_Generic_List_Collider__o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Rigidbody_o *pUVar8;
  Photon_Pun_PhotonView_o *pPVar9;
  System_Object_array *pSVar10;
  ulong uVar11;
  
  if (DAT_057049ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSour);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_init_method_metadata(&TypeInfo_List_Collider);
    DAT_057049ec = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_glue(TypeInfo_List_Collider);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,MethodInfo_List_1_UnityEngine_Collider);
  ppSVar1 = &(__this->fields).Colliders;
  (__this->fields).Colliders = pSVar6;
  il2cpp_runtime_glue(ppSVar1,pSVar6);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__AudioSource);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSour);
  (__this->fields).AudioSources =
       (System_Collections_Generic_Dictionary_string__AudioSource__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).AudioSources);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    (__this->fields).Transform = pUVar7;
    il2cpp_runtime_glue(&__this->fields,pUVar7);
    pUVar8 = (UnityEngine_Rigidbody_o *)
             UnityEngine_GameObject__GetComponent<object>(owner,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    (__this->fields).Rigidbody = pUVar8;
    il2cpp_runtime_glue(&(__this->fields).Rigidbody,pUVar8);
    pPVar9 = (Photon_Pun_PhotonView_o *)
             UnityEngine_GameObject__GetComponent<object>(owner,MethodInfo_PhotonView_GetComponent_PhotonView);
    (__this->fields).PhotonView = pPVar9;
    il2cpp_runtime_glue(&(__this->fields).PhotonView,pPVar9);
    pSVar10 = UnityEngine_GameObject__GetComponentsInChildren<object>(owner,MethodInfo_Collider___GetComponentsInChildren_Collider);
    if (pSVar10 != (System_Object_array *)0x0) {
      if ((int)pSVar10->max_length < 1) {
        return;
      }
      uVar11 = 0;
      if ((pSVar10->max_length & 0xffffffff) != 0) {
        do {
          lVar5 = MethodInfo_Void_Add;
          pSVar6 = *ppSVar1;
          if (pSVar6 == (System_Collections_Generic_List_Collider__o *)0x0) goto LAB_04142b48;
          item = (UnityEngine_Collider_o *)pSVar10->m_Items[uVar11];
          piVar2 = &(pSVar6->fields)._version;
          *piVar2 = *piVar2 + 1;
          pUVar4 = (pSVar6->fields)._items;
          if (pUVar4 == (UnityEngine_Collider_array *)0x0) goto LAB_04142b48;
          uVar3 = (pSVar6->fields)._size;
          if (uVar3 < (uint)pUVar4->max_length) {
            (pSVar6->fields)._size = uVar3 + 1;
            pUVar4->m_Items[(int)uVar3] = item;
            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = uVar11 + 1;
          uVar3 = (uint)pSVar10->max_length;
          if ((long)(int)uVar3 <= (long)uVar11) {
            return;
          }
        } while (uVar11 < uVar3);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_04142b48:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.BaseComponentCache$$LoadAudio
// il2cpp: void Utility_BaseComponentCache__LoadAudio (Utility_BaseComponentCache_o* __this, System_String_o* prefab, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x41514e0

void Utility_BaseComponentCache__LoadAudio
               (Utility_BaseComponentCache_o *__this,System_String_o *prefab,
               UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  uint uVar1;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_03;
  System_String_o *pSVar4;
  uint uVar5;
  
  if (DAT_057049ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    DAT_057049ed = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_02 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (pSVar4,prefab,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar2,parent,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar2,(UnityEngine_Vector3_o)
                          **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
        pSVar3 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_02,MethodInfo_AudioSource___GetComponentsInChildren_AudioSourc);
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar1 = (uint)pSVar3->max_length;
          if (0 < (int)uVar1) {
            uVar5 = 0;
            do {
              if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              __this_00 = (UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar5];
              if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_041516af;
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields).AudioSources;
              __this_03 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
              if (__this_03 == (UnityEngine_Object_o *)0x0) goto LAB_041516af;
              pSVar4 = UnityEngine_Object__get_name(__this_03,(MethodInfo *)0x0);
              if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_041516af;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
              uVar5 = uVar5 + 1;
              uVar1 = (uint)pSVar3->max_length;
            } while ((int)uVar5 < (int)uVar1);
          }
          return;
        }
      }
    }
  }
LAB_041516af:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


