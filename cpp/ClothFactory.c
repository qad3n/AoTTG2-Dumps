// Type: ClothFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ClothFactory.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Setup/ClothFactory.cs  [CHANGED since prior version]
// --------------------------------

// ClothFactory$$ClearClothCache
// il2cpp: void ClothFactory__ClearClothCache (const MethodInfo* method);
// 0x3d64870

void ClothFactory__ClearClothCache(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_057025c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057025c5 = '\x01';
    iVar1 = *(int *)(TypeInfo_ClothFactory + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ClothFactory + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_ClothFactory + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_ClothFactory + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$DisposeAllObjects
// il2cpp: void ClothFactory__DisposeAllObjects (const MethodInfo* method);
// 0x3d64900

void ClothFactory__DisposeAllObjects(MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Object_array *pSVar3;
  UnityEngine_GameObject_o *cachedObject;
  long lVar4;
  MethodInfo *method_00;
  
  if (DAT_057025c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Cloth___FindObjectsByType_Cloth);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025c6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UnityEngine_Object__FindObjectsByType<object>(1,0,MethodInfo_Cloth___FindObjectsByType_Cloth);
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((pSVar3->max_length == 0) || (iVar2 = (int)pSVar3->max_length, iVar2 < 1)) {
      return;
    }
    lVar4 = 0;
    if (iVar2 != 0) {
      do {
        if ((UnityEngine_Component_o *)pSVar3->m_Items[lVar4] == (UnityEngine_Component_o *)0x0)
        goto LAB_03d649e1;
        method_00 = (MethodInfo *)0x0;
        cachedObject = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar3->m_Items[lVar4],
                                  (MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ClothFactory__DisposeObject(cachedObject,method_00);
        uVar1 = (uint)pSVar3->max_length;
        lVar4 = lVar4 + 1;
        if ((int)uVar1 <= (int)(uint)lVar4) {
          return;
        }
      } while ((uint)lVar4 < uVar1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03d649e1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$DisposeObject
// il2cpp: void ClothFactory__DisposeObject (UnityEngine_GameObject_o* cachedObject, const MethodInfo* method);
// 0x3d649f0

void ClothFactory__DisposeObject(UnityEngine_GameObject_o *cachedObject,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this;
  UnityEngine_Cloth_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar2;
  
  if (DAT_057025c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Cloth_GetComponent_Cloth);
    il2cpp_init_method_metadata(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025c7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)cachedObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (cachedObject != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>(cachedObject,MethodInfo_ParentFollow_GetComponent_ParentFollow);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy((UnityEngine_Object_o *)cachedObject,(MethodInfo *)0x0);
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      if ((char)x[1].fields.m_CachedPtr == '\0') {
        return;
      }
      __this = (UnityEngine_Renderer_o *)
               UnityEngine_GameObject__GetComponent<object>(cachedObject,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
      if (__this != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_enabled(__this,0,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_Cloth_o *)
                    UnityEngine_GameObject__GetComponent<object>(cachedObject,MethodInfo_Cloth_GetComponent_Cloth);
        if (__this_00 != (UnityEngine_Cloth_o *)0x0) {
          UnityEngine_Cloth__set_enabled(__this_00,0,(MethodInfo *)0x0);
          *(undefined1 *)&x[1].fields.m_CachedPtr = 0;
          __this_01 = UnityEngine_GameObject__get_transform(cachedObject,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position
                      (__this_01,(UnityEngine_Vector3_o)ZEXT812(0xc7c34f8000000000),
                       (MethodInfo *)0x0);
            pIVar2 = UnityEngine_GameObject__GetComponent<object>(cachedObject,MethodInfo_ParentFollow_GetComponent_ParentFollow);
            if (pIVar2 != (Il2CppObject *)0x0) {
              pIVar2[3].klass = (Il2CppClass *)0x0;
              il2cpp_runtime_glue(pIVar2 + 3,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$GenerateCloth
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GenerateCloth (UnityEngine_GameObject_o* go, System_String_o* res, const MethodInfo* method);
// 0x3d64bc0

UnityEngine_GameObject_o *
ClothFactory__GenerateCloth(UnityEngine_GameObject_o *go,System_String_o *res,MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_SkinnedMeshRenderer_o *__this;
  UnityEngine_Transform_array *value;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  
  if (DAT_057025c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    DAT_057025c8 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRend);
    }
    __this = (UnityEngine_SkinnedMeshRenderer_o *)
             UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    if (__this != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      value = UnityEngine_SkinnedMeshRenderer__get_bones(__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,res,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Object_o *)0x0) {
        if (pUVar2->klass != TypeInfo_GameObject) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pUVar2);
        }
        __this_00 = (UnityEngine_Component_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (__this_01,
                       (UnityEngine_Vector3_o)
                       *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                       (MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_bones
                      ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,value,(MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_quality
                      ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,4,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
            return pUVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$GetCape
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetCape (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3d64de0

UnityEngine_GameObject_o *
ClothFactory__GetCape
          (UnityEngine_GameObject_o *reference,System_String_o *name,
          UnityEngine_Material_o *material,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  System_Object_array *pSVar4;
  long lVar5;
  UnityEngine_Material_o *value;
  System_String_o *key;
  bool_conflict bVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Cloth_o *__this;
  UnityEngine_GameObject_o *pUVar7;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Renderer_o *pUVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  int index;
  UnityEngine_Quaternion_o UVar12;
  System_Collections_Generic_List_object__o *local_50;
  UnityEngine_Material_o *local_48;
  UnityEngine_GameObject_o *local_40;
  System_String_o *local_38;
  
  if (DAT_057025c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_ParentFollow_AddComponent_ParentFollow);
    il2cpp_init_method_metadata(&MethodInfo_Cloth_GetComponent_Cloth);
    il2cpp_init_method_metadata(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025c9 = '\x01';
  }
  local_50 = (System_Collections_Generic_List_object__o *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,
                       (Il2CppObject **)&local_50,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar6 == '\0') {
      pMVar11 = extraout_RDX;
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar11 = extraout_RDX_04;
      }
      pUVar7 = ClothFactory__GenerateCloth(reference,name,pMVar11);
      if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar8 = (UnityEngine_Renderer_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_Renderer_GetComponent_Renderer),
         pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
        UnityEngine_Renderer__set_material(pUVar8,material,(MethodInfo *)0x0);
        pIVar9 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_ParentFollow_AddComponent_ParentFollow);
        if ((reference != (UnityEngine_GameObject_o *)0x0) &&
           (pIVar10 = (Il2CppClass *)
                      UnityEngine_GameObject__get_transform(reference,(MethodInfo *)0x0),
           pIVar9 != (Il2CppObject *)0x0)) {
          pIVar9[3].klass = pIVar10;
          il2cpp_runtime_glue(pIVar9 + 3);
          if (pIVar10 != (Il2CppClass *)0x0) {
            pIVar3 = pIVar9[2].klass;
            UVar12 = UnityEngine_Transform__get_rotation
                               ((UnityEngine_Transform_o *)pIVar10,(MethodInfo *)0x0);
            if (pIVar3 != (Il2CppClass *)0x0) {
              UnityEngine_Transform__set_rotation
                        ((UnityEngine_Transform_o *)pIVar3,UVar12,(MethodInfo *)0x0);
              __this_00 = (System_Collections_Generic_List_object__o *)
                          il2cpp_runtime_glue(TypeInfo_List_GameObject);
              System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
              lVar5 = MethodInfo_Void_Add;
              if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (__this_00->fields)._items;
                if (pSVar4 != (System_Object_array *)0x0) {
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar7;
                    il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pUVar7);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this_00,(Il2CppObject *)pUVar7,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  local_50 = __this_00;
                  if ((System_Collections_Generic_Dictionary_object__object__o *)
                      **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary<object__object>__Add
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,
                               (Il2CppObject *)__this_00,MethodInfo_Void_Add);
                    return pUVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_48 = material;
      local_40 = reference;
      local_38 = name;
      if (local_50 != (System_Collections_Generic_List_object__o *)0x0) {
        index = 0;
        pMVar11 = extraout_RDX;
        if (0 < (local_50->fields)._size) {
          do {
            x = (UnityEngine_Object_o *)
                System_Collections_Generic_List<object>__get_Item(local_50,index,MethodInfo_GameObject_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar6 == '\0') {
              if ((x == (UnityEngine_Object_o *)0x0) ||
                 (pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                     ((UnityEngine_GameObject_o *)x,MethodInfo_ParentFollow_GetComponent_ParentFollow),
                 pIVar9 == (Il2CppObject *)0x0)) goto LAB_03d65428;
              pMVar11 = extraout_RDX_01;
              if (*(char *)&pIVar9[2].monitor == '\0') {
                *(undefined1 *)&pIVar9[2].monitor = 1;
                pUVar8 = (UnityEngine_Renderer_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponent_Renderer);
                if (pUVar8 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material(pUVar8,local_48,(MethodInfo *)0x0);
                  __this = (UnityEngine_Cloth_o *)
                           UnityEngine_GameObject__GetComponent<object>
                                     ((UnityEngine_GameObject_o *)x,MethodInfo_Cloth_GetComponent_Cloth);
                  pUVar7 = local_40;
                  if (__this != (UnityEngine_Cloth_o *)0x0) {
                    UnityEngine_Cloth__set_enabled(__this,1,(MethodInfo *)0x0);
                    pUVar8 = (UnityEngine_Renderer_o *)
                             UnityEngine_GameObject__GetComponent<object>
                                       ((UnityEngine_GameObject_o *)x,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
                    if (pUVar8 != (UnityEngine_Renderer_o *)0x0) {
                      UnityEngine_Renderer__set_enabled(pUVar8,1,(MethodInfo *)0x0);
                      pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                         ((UnityEngine_GameObject_o *)x,MethodInfo_ParentFollow_GetComponent_ParentFollow);
                      if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                         (pIVar10 = (Il2CppClass *)
                                    UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
                         pIVar9 != (Il2CppObject *)0x0)) {
                        pIVar9[3].klass = pIVar10;
                        il2cpp_runtime_glue(pIVar9 + 3);
                        if (pIVar10 != (Il2CppClass *)0x0) {
                          pIVar3 = pIVar9[2].klass;
                          UVar12 = UnityEngine_Transform__get_rotation
                                             ((UnityEngine_Transform_o *)pIVar10,(MethodInfo *)0x0);
                          if (pIVar3 != (Il2CppClass *)0x0) {
                            UnityEngine_Transform__set_rotation
                                      ((UnityEngine_Transform_o *)pIVar3,UVar12,(MethodInfo *)0x0);
                            pMVar11 = extraout_RDX_02;
                            if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                              il2cpp_init_class();
                              pMVar11 = extraout_RDX_03;
                            }
                            ClothFactory__ReapplyClothBones
                                      (pUVar7,(UnityEngine_GameObject_o *)x,pMVar11);
                            return (UnityEngine_GameObject_o *)x;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_03d65428;
              }
            }
            else {
              if (local_50 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d65428;
              System_Collections_Generic_List<object>__RemoveAt(local_50,index,MethodInfo_Void_RemoveAt);
              index = index + -1;
              pMVar11 = extraout_RDX_00;
              if (index < 0) {
                index = 0;
              }
            }
            index = index + 1;
            if (local_50 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d65428;
          } while (index < (local_50->fields)._size);
        }
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar11 = extraout_RDX_05;
        }
        key = local_38;
        pUVar7 = local_40;
        __this_01 = ClothFactory__GenerateCloth(local_40,local_38,pMVar11);
        value = local_48;
        if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar8 = (UnityEngine_Renderer_o *)
                     UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Renderer_GetComponent_Renderer),
           pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_material(pUVar8,value,(MethodInfo *)0x0);
          pIVar9 = UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_ParentFollow_AddComponent_ParentFollow);
          if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
             (pIVar10 = (Il2CppClass *)
                        UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
             pIVar9 != (Il2CppObject *)0x0)) {
            pIVar9[3].klass = pIVar10;
            il2cpp_runtime_glue(pIVar9 + 3);
            if (pIVar10 != (Il2CppClass *)0x0) {
              pIVar3 = pIVar9[2].klass;
              UVar12 = UnityEngine_Transform__get_rotation
                                 ((UnityEngine_Transform_o *)pIVar10,(MethodInfo *)0x0);
              if ((pIVar3 != (Il2CppClass *)0x0) &&
                 (UnityEngine_Transform__set_rotation
                            ((UnityEngine_Transform_o *)pIVar3,UVar12,(MethodInfo *)0x0),
                 lVar5 = MethodInfo_Void_Add, local_50 != (System_Collections_Generic_List_object__o *)0x0)
                 ) {
                piVar1 = &(local_50->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (local_50->fields)._items;
                if (pSVar4 != (System_Object_array *)0x0) {
                  uVar2 = (local_50->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (local_50->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
                    il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_01);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (local_50,(Il2CppObject *)__this_01,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  if ((System_Collections_Generic_Dictionary_object__object__o *)
                      **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary<object__object>__set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)key,
                               (Il2CppObject *)local_50,MethodInfo_Void_set_Item);
                    return __this_01;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03d65428:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$GetDebugInfo
// il2cpp: System_String_o* ClothFactory__GetDebugInfo (const MethodInfo* method);
// 0x3d65570

System_String_o * ClothFactory__GetDebugInfo(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  System_Object_array *pSVar3;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  Il2CppObject *arg2;
  System_String_o *pSVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  Il2CppMethodPointer pIVar8;
  Il2CppRGCTXData *pIVar9;
  _union_229680 _Var10;
  undefined1 auStack_58 [16];
  _union_229680 _Stack_48;
  
  if (DAT_057025ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Cloth___FindObjectsOfType_Cloth);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"{0} cached cloths, {1} active cloths, {2} types cached");
    DAT_057025ca = '\x01';
  }
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
               (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    pIVar8 = (Il2CppMethodPointer)CONCAT44(auStack_58._4_4_,auStack_58._0_4_);
    iVar7 = 0;
    pIVar9 = (Il2CppRGCTXData *)auStack_58._8_8_;
    _Var10 = _Stack_48;
    while (__this.fields._version = in_stack_ffffffffffffff70,
          __this.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68,
          __this.fields._index = in_stack_ffffffffffffff74,
          __this.fields._current.fields.key = (Il2CppObject *)pIVar8,
          __this.fields._current.fields.value = (Il2CppObject *)pIVar9,
          __this.fields._32_8_ = _Var10.genericMethod,
          bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                            (__this,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78),
          (char)bVar1 != '\0') {
      pIVar2 = (Il2CppObject *)
               il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),pIVar2,MethodInfo_List_1_UnityEngine_GameObject__get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar7 = iVar7 + *(int *)&pIVar2[1].monitor;
    }
    __this_00.fields._version = in_stack_ffffffffffffff70;
    __this_00.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
    __this_00.fields._index = in_stack_ffffffffffffff74;
    __this_00.fields._current.fields.key = (Il2CppObject *)pIVar8;
    __this_00.fields._current.fields.value = (Il2CppObject *)pIVar9;
    __this_00.fields._32_8_ = _Var10.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_00,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = UnityEngine_Object__FindObjectsOfType<object>(MethodInfo_Cloth___FindObjectsOfType_Cloth);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar5 = (uint)pSVar3->max_length;
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((UnityEngine_Cloth_o *)pSVar3->m_Items[(int)uVar6] == (UnityEngine_Cloth_o *)0x0)
          goto LAB_03d6588e;
          UnityEngine_Cloth__get_enabled
                    ((UnityEngine_Cloth_o *)pSVar3->m_Items[(int)uVar6],(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar5 = (uint)pSVar3->max_length;
        } while ((int)uVar6 < (int)uVar5);
      }
      auStack_58._0_4_ = iVar7;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_58);
      arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff74);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (((System_Collections_Generic_Dictionary_object__object__o *)
           **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
           (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_01 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
         __this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_KeyCollection<object__object>__get_Count
                  (__this_01,MethodInfo_Int32_get_Count);
        arg2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&stack0xffffffffffffff70);
        pSVar4 = System_String__Format("{0} cached cloths, {1} active cloths, {2} types cached",pIVar2,arg1,arg2,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
LAB_03d6588e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$GetHair
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetHair (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3d65940

UnityEngine_GameObject_o *
ClothFactory__GetHair
          (UnityEngine_GameObject_o *reference,System_String_o *name,
          UnityEngine_Material_o *material,UnityEngine_Color_o color,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  System_Object_array *pSVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  System_String_o *key;
  bool_conflict bVar8;
  UnityEngine_Object_o *x;
  UnityEngine_Cloth_o *__this;
  UnityEngine_GameObject_o *pUVar9;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Renderer_o *pUVar10;
  UnityEngine_Material_o *pUVar11;
  Il2CppObject *pIVar12;
  Il2CppClass *pIVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar14;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  int index;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Quaternion_o UVar15;
  System_Collections_Generic_List_object__o *local_70;
  UnityEngine_Material_o *local_68;
  UnityEngine_GameObject_o *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  local_48._8_4_ = in_XMM1_Dc;
  local_48._0_8_ = color.fields._8_8_;
  local_48._12_4_ = in_XMM1_Dd;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = color.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  if (DAT_057025cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_ParentFollow_AddComponent_ParentFollow);
    il2cpp_init_method_metadata(&MethodInfo_Cloth_GetComponent_Cloth);
    il2cpp_init_method_metadata(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025cb = '\x01';
  }
  local_70 = (System_Collections_Generic_List_object__o *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar8 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,
                       (Il2CppObject **)&local_70,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar8 == '\0') {
      pMVar14 = extraout_RDX;
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar14 = extraout_RDX_04;
      }
      pUVar9 = ClothFactory__GenerateCloth(reference,name,pMVar14);
      if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar10 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_Renderer_GetComponent_Renderer),
         pUVar10 != (UnityEngine_Renderer_o *)0x0)) {
        UnityEngine_Renderer__set_material(pUVar10,material,(MethodInfo *)0x0);
        pUVar10 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_Renderer_GetComponent_Renderer);
        if ((pUVar10 != (UnityEngine_Renderer_o *)0x0) &&
           (pUVar11 = UnityEngine_Renderer__get_material(pUVar10,(MethodInfo *)0x0),
           auVar7 = local_48, auVar6 = local_58, pUVar11 != (UnityEngine_Material_o *)0x0)) {
          value_00.fields.b = (float)local_48._0_4_;
          value_00.fields.a = (float)local_48._4_4_;
          value_00.fields.r = (float)local_58._0_4_;
          value_00.fields.g = (float)local_58._4_4_;
          local_58 = auVar6;
          local_48 = auVar7;
          UnityEngine_Material__set_color(pUVar11,value_00,(MethodInfo *)0x0);
          pIVar12 = UnityEngine_GameObject__AddComponent<object>(pUVar9,MethodInfo_ParentFollow_AddComponent_ParentFollow);
          if ((reference != (UnityEngine_GameObject_o *)0x0) &&
             (pIVar13 = (Il2CppClass *)
                        UnityEngine_GameObject__get_transform(reference,(MethodInfo *)0x0),
             pIVar12 != (Il2CppObject *)0x0)) {
            pIVar12[3].klass = pIVar13;
            il2cpp_runtime_glue(pIVar12 + 3);
            if (pIVar13 != (Il2CppClass *)0x0) {
              pIVar3 = pIVar12[2].klass;
              UVar15 = UnityEngine_Transform__get_rotation
                                 ((UnityEngine_Transform_o *)pIVar13,(MethodInfo *)0x0);
              if (pIVar3 != (Il2CppClass *)0x0) {
                UnityEngine_Transform__set_rotation
                          ((UnityEngine_Transform_o *)pIVar3,UVar15,(MethodInfo *)0x0);
                __this_00 = (System_Collections_Generic_List_object__o *)
                            il2cpp_runtime_glue(TypeInfo_List_GameObject);
                System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
                lVar5 = MethodInfo_Void_Add;
                if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (__this_00->fields)._items;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    uVar2 = (__this_00->fields)._size;
                    if (uVar2 < (uint)pSVar4->max_length) {
                      (__this_00->fields)._size = uVar2 + 1;
                      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
                      il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pUVar9);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (__this_00,(Il2CppObject *)pUVar9,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    local_70 = __this_00;
                    if ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary<object__object>__Add
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,
                                 (Il2CppObject *)__this_00,MethodInfo_Void_Add);
                      return pUVar9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_68 = material;
      local_60 = reference;
      local_38 = name;
      if (local_70 != (System_Collections_Generic_List_object__o *)0x0) {
        index = 0;
        pMVar14 = extraout_RDX;
        if (0 < (local_70->fields)._size) {
          do {
            x = (UnityEngine_Object_o *)
                System_Collections_Generic_List<object>__get_Item(local_70,index,MethodInfo_GameObject_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar8 == '\0') {
              if ((x == (UnityEngine_Object_o *)0x0) ||
                 (pIVar12 = UnityEngine_GameObject__GetComponent<object>
                                      ((UnityEngine_GameObject_o *)x,MethodInfo_ParentFollow_GetComponent_ParentFollow),
                 pIVar12 == (Il2CppObject *)0x0)) goto LAB_03d6603a;
              pMVar14 = extraout_RDX_01;
              if (*(char *)&pIVar12[2].monitor == '\0') {
                *(undefined1 *)&pIVar12[2].monitor = 1;
                pUVar10 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent<object>
                                    ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponent_Renderer);
                if (pUVar10 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material(pUVar10,local_68,(MethodInfo *)0x0);
                  pUVar10 = (UnityEngine_Renderer_o *)
                            UnityEngine_GameObject__GetComponent<object>
                                      ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponent_Renderer);
                  pUVar9 = local_60;
                  if ((pUVar10 != (UnityEngine_Renderer_o *)0x0) &&
                     (pUVar11 = UnityEngine_Renderer__get_material(pUVar10,(MethodInfo *)0x0),
                     auVar7 = local_48, auVar6 = local_58, pUVar11 != (UnityEngine_Material_o *)0x0)
                     ) {
                    value.fields.b = (float)local_48._0_4_;
                    value.fields.a = (float)local_48._4_4_;
                    value.fields.r = (float)local_58._0_4_;
                    value.fields.g = (float)local_58._4_4_;
                    local_58 = auVar6;
                    local_48 = auVar7;
                    UnityEngine_Material__set_color(pUVar11,value,(MethodInfo *)0x0);
                    __this = (UnityEngine_Cloth_o *)
                             UnityEngine_GameObject__GetComponent<object>
                                       ((UnityEngine_GameObject_o *)x,MethodInfo_Cloth_GetComponent_Cloth);
                    if (__this != (UnityEngine_Cloth_o *)0x0) {
                      UnityEngine_Cloth__set_enabled(__this,1,(MethodInfo *)0x0);
                      pUVar10 = (UnityEngine_Renderer_o *)
                                UnityEngine_GameObject__GetComponent<object>
                                          ((UnityEngine_GameObject_o *)x,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
                      if (pUVar10 != (UnityEngine_Renderer_o *)0x0) {
                        UnityEngine_Renderer__set_enabled(pUVar10,1,(MethodInfo *)0x0);
                        pIVar12 = UnityEngine_GameObject__GetComponent<object>
                                            ((UnityEngine_GameObject_o *)x,MethodInfo_ParentFollow_GetComponent_ParentFollow);
                        if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                           (pIVar13 = (Il2CppClass *)
                                      UnityEngine_GameObject__get_transform
                                                (pUVar9,(MethodInfo *)0x0),
                           pIVar12 != (Il2CppObject *)0x0)) {
                          pIVar12[3].klass = pIVar13;
                          il2cpp_runtime_glue(pIVar12 + 3);
                          if (pIVar13 != (Il2CppClass *)0x0) {
                            pIVar3 = pIVar12[2].klass;
                            UVar15 = UnityEngine_Transform__get_rotation
                                               ((UnityEngine_Transform_o *)pIVar13,(MethodInfo *)0x0
                                               );
                            if (pIVar3 != (Il2CppClass *)0x0) {
                              UnityEngine_Transform__set_rotation
                                        ((UnityEngine_Transform_o *)pIVar3,UVar15,(MethodInfo *)0x0)
                              ;
                              pMVar14 = extraout_RDX_02;
                              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                                il2cpp_init_class();
                                pMVar14 = extraout_RDX_03;
                              }
                              ClothFactory__ReapplyClothBones
                                        (pUVar9,(UnityEngine_GameObject_o *)x,pMVar14);
                              return (UnityEngine_GameObject_o *)x;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_03d6603a;
              }
            }
            else {
              if (local_70 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6603a;
              System_Collections_Generic_List<object>__RemoveAt(local_70,index,MethodInfo_Void_RemoveAt);
              index = index + -1;
              pMVar14 = extraout_RDX_00;
              if (index < 0) {
                index = 0;
              }
            }
            index = index + 1;
            if (local_70 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6603a;
          } while (index < (local_70->fields)._size);
        }
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar14 = extraout_RDX_05;
        }
        key = local_38;
        pUVar9 = local_60;
        __this_01 = ClothFactory__GenerateCloth(local_60,local_38,pMVar14);
        pUVar11 = local_68;
        if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar10 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Renderer_GetComponent_Renderer),
           pUVar10 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Renderer_GetComponent_Renderer);
          if ((pUVar10 != (UnityEngine_Renderer_o *)0x0) &&
             (pUVar11 = UnityEngine_Renderer__get_material(pUVar10,(MethodInfo *)0x0),
             auVar7 = local_48, auVar6 = local_58, pUVar11 != (UnityEngine_Material_o *)0x0)) {
            value_01.fields.b = (float)local_48._0_4_;
            value_01.fields.a = (float)local_48._4_4_;
            value_01.fields.r = (float)local_58._0_4_;
            value_01.fields.g = (float)local_58._4_4_;
            local_58 = auVar6;
            local_48 = auVar7;
            UnityEngine_Material__set_color(pUVar11,value_01,(MethodInfo *)0x0);
            pIVar12 = UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_ParentFollow_AddComponent_ParentFollow);
            if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
               (pIVar13 = (Il2CppClass *)
                          UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
               pIVar12 != (Il2CppObject *)0x0)) {
              pIVar12[3].klass = pIVar13;
              il2cpp_runtime_glue(pIVar12 + 3);
              if (pIVar13 != (Il2CppClass *)0x0) {
                pIVar3 = pIVar12[2].klass;
                UVar15 = UnityEngine_Transform__get_rotation
                                   ((UnityEngine_Transform_o *)pIVar13,(MethodInfo *)0x0);
                if ((pIVar3 != (Il2CppClass *)0x0) &&
                   (UnityEngine_Transform__set_rotation
                              ((UnityEngine_Transform_o *)pIVar3,UVar15,(MethodInfo *)0x0),
                   lVar5 = MethodInfo_Void_Add,
                   local_70 != (System_Collections_Generic_List_object__o *)0x0)) {
                  piVar1 = &(local_70->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (local_70->fields)._items;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    uVar2 = (local_70->fields)._size;
                    if (uVar2 < (uint)pSVar4->max_length) {
                      (local_70->fields)._size = uVar2 + 1;
                      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
                      il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_01);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (local_70,(Il2CppObject *)__this_01,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)key,
                                 (Il2CppObject *)local_70,MethodInfo_Void_set_Item);
                      return __this_01;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03d6603a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$ReapplyClothBones
// il2cpp: void ClothFactory__ReapplyClothBones (UnityEngine_GameObject_o* reference, UnityEngine_GameObject_o* clothObject, const MethodInfo* method);
// 0x3d65480

void ClothFactory__ReapplyClothBones
               (UnityEngine_GameObject_o *reference,UnityEngine_GameObject_o *clothObject,
               MethodInfo *method)

{
  UnityEngine_SkinnedMeshRenderer_o *__this;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *__this_01;
  
  if (DAT_057025cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    DAT_057025cc = '\x01';
  }
  if (reference != (UnityEngine_GameObject_o *)0x0) {
    __this = (UnityEngine_SkinnedMeshRenderer_o *)
             UnityEngine_GameObject__GetComponent<object>(reference,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    if (clothObject != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = (UnityEngine_SkinnedMeshRenderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(clothObject,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
      if (__this != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
        value = UnityEngine_SkinnedMeshRenderer__get_bones(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (__this_01,
                       (UnityEngine_Vector3_o)
                       *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ClothFactory$$.cctor
// il2cpp: void ClothFactory___cctor (const MethodInfo* method);
// 0x3d66040

void ClothFactory___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_057025cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Ga);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_GameObject);
    DAT_057025cd = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_GameObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Ga);
  **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ClothFactory + 0xb8),__this);
  return;
}


