// Type: ClothFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ClothFactory.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ClothFactory.cs
// --------------------------------

// ClothFactory$$ClearClothCache
// il2cpp: void ClothFactory__ClearClothCache (const MethodInfo* method);
// 0x405a1c0

void ClothFactory__ClearClothCache(MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  int iVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Cloth_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  Il2CppObject *pIVar5;
  long lVar6;
  MethodInfo *method_00;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *pUVar7;
  
  if (g_data_057ac275 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ac275 = '\x01';
    iVar2 = *(int *)(TypeInfo_ClothFactory + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_ClothFactory + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8)
    ;
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8)
    ;
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(__this,MethodInfo_Void_Clear);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac276 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_FindObjectsByType_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac276 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x_00 = (UnityEngine_Object_o *)0x1;
  pSVar4 = UnityEngine_Object__FindObjectsByType_object__2589b50(1,0,MethodInfo_Cloth_FindObjectsByType_Cloth);
  if (pSVar4 != (System_Object_array *)0x0) {
    if ((pSVar4->max_length == 0) || (iVar2 = (int)pSVar4->max_length, iVar2 < 1)) {
      return;
    }
    lVar6 = 0;
    if (iVar2 != 0) {
      do {
        x_00 = (UnityEngine_Object_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar4->m_Items[lVar6] == (UnityEngine_Component_o *)0x0)
        goto label_0405a331;
        method_00 = (MethodInfo *)0x0;
        x_00 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pSVar4->m_Items[lVar6],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ClothFactory__DisposeObject((UnityEngine_GameObject_o *)x_00,method_00);
        uVar1 = (uint)pSVar4->max_length;
        lVar6 = lVar6 + 1;
        if ((int)uVar1 <= (int)(uint)lVar6) {
          return;
        }
      } while ((uint)lVar6 < uVar1);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0405a331:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac277 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_GetComponent_Cloth);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac277 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = x_00;
  bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (x_00 != (UnityEngine_Object_o *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_ParentFollow_GetComponent_ParentFollow);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar7 = x;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60(x_00,(MethodInfo *)0x0);
        return;
      }
      if (x != (UnityEngine_Object_o *)0x0) {
        if ((char)x[1].fields.m_CachedPtr == '\0') {
          return;
        }
        pUVar7 = x_00;
        __this_00 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)x_00,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_enabled(__this_00,0,(MethodInfo *)0x0);
          pUVar7 = x_00;
          __this_01 = (UnityEngine_Cloth_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)x_00,MethodInfo_Cloth_GetComponent_Cloth);
          if (__this_01 != (UnityEngine_Cloth_o *)0x0) {
            UnityEngine_Cloth__set_enabled(__this_01,0,(MethodInfo *)0x0);
            *(undefined1 *)&x[1].fields.m_CachedPtr = 0;
            pUVar7 = x_00;
            __this_02 = UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_position
                        (__this_02,(UnityEngine_Vector3_o)ZEXT812(0xc7c34f8000000000),(MethodInfo *)0x0);
              pIVar5 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)x_00,MethodInfo_ParentFollow_GetComponent_ParentFollow);
              pUVar7 = x_00;
              if (pIVar5 != (Il2CppObject *)0x0) {
                pIVar5[3].klass = (Il2CppClass *)0x0;
                il2cpp_runtime_helper_022b4080(pIVar5 + 3,0);
                return;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar7[2].klass = (UnityEngine_Object_c *)0x0;
    il2cpp_runtime_helper_022b4080(pUVar7 + 2,0);
    return;
  }
  return;
}


// ClothFactory$$DisposeAllObjects
// il2cpp: void ClothFactory__DisposeAllObjects (const MethodInfo* method);
// 0x405a250

void ClothFactory__DisposeAllObjects(MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this;
  UnityEngine_Cloth_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar5;
  long lVar6;
  MethodInfo *method_00;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *pUVar7;
  
  if (g_data_057ac276 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_FindObjectsByType_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac276 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x_00 = (UnityEngine_Object_o *)0x1;
  pSVar4 = UnityEngine_Object__FindObjectsByType_object__2589b50(1,0,MethodInfo_Cloth_FindObjectsByType_Cloth);
  if (pSVar4 != (System_Object_array *)0x0) {
    if ((pSVar4->max_length == 0) || (iVar2 = (int)pSVar4->max_length, iVar2 < 1)) {
      return;
    }
    lVar6 = 0;
    if (iVar2 != 0) {
      do {
        x_00 = (UnityEngine_Object_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar4->m_Items[lVar6] == (UnityEngine_Component_o *)0x0)
        goto label_0405a331;
        method_00 = (MethodInfo *)0x0;
        x_00 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pSVar4->m_Items[lVar6],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ClothFactory__DisposeObject((UnityEngine_GameObject_o *)x_00,method_00);
        uVar1 = (uint)pSVar4->max_length;
        lVar6 = lVar6 + 1;
        if ((int)uVar1 <= (int)(uint)lVar6) {
          return;
        }
      } while ((uint)lVar6 < uVar1);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0405a331:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac277 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_GetComponent_Cloth);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac277 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = x_00;
  bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (x_00 != (UnityEngine_Object_o *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_ParentFollow_GetComponent_ParentFollow);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar7 = x;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60(x_00,(MethodInfo *)0x0);
        return;
      }
      if (x != (UnityEngine_Object_o *)0x0) {
        if ((char)x[1].fields.m_CachedPtr == '\0') {
          return;
        }
        pUVar7 = x_00;
        __this = (UnityEngine_Renderer_o *)
                 UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        if (__this != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_enabled(__this,0,(MethodInfo *)0x0);
          pUVar7 = x_00;
          __this_00 = (UnityEngine_Cloth_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)x_00,MethodInfo_Cloth_GetComponent_Cloth);
          if (__this_00 != (UnityEngine_Cloth_o *)0x0) {
            UnityEngine_Cloth__set_enabled(__this_00,0,(MethodInfo *)0x0);
            *(undefined1 *)&x[1].fields.m_CachedPtr = 0;
            pUVar7 = x_00;
            __this_01 = UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_position
                        (__this_01,(UnityEngine_Vector3_o)ZEXT812(0xc7c34f8000000000),(MethodInfo *)0x0);
              pIVar5 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)x_00,MethodInfo_ParentFollow_GetComponent_ParentFollow);
              pUVar7 = x_00;
              if (pIVar5 != (Il2CppObject *)0x0) {
                pIVar5[3].klass = (Il2CppClass *)0x0;
                il2cpp_runtime_helper_022b4080(pIVar5 + 3,0);
                return;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar7[2].klass = (UnityEngine_Object_c *)0x0;
    il2cpp_runtime_helper_022b4080(pUVar7 + 2,0);
    return;
  }
  return;
}


// ClothFactory$$DisposeObject
// il2cpp: void ClothFactory__DisposeObject (UnityEngine_GameObject_o* cachedObject, const MethodInfo* method);
// 0x405a340

void ClothFactory__DisposeObject(UnityEngine_GameObject_o *cachedObject,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this;
  UnityEngine_Cloth_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar2;
  UnityEngine_Object_o *pUVar3;
  
  if (g_data_057ac277 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_GetComponent_Cloth);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac277 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_Object_o *)cachedObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)cachedObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (cachedObject != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(cachedObject,MethodInfo_ParentFollow_GetComponent_ParentFollow);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar3 = x;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)cachedObject,(MethodInfo *)0x0);
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      if ((char)x[1].fields.m_CachedPtr == '\0') {
        return;
      }
      pUVar3 = (UnityEngine_Object_o *)cachedObject;
      __this = (UnityEngine_Renderer_o *)
               UnityEngine_GameObject__GetComponent_object_(cachedObject,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
      if (__this != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_enabled(__this,0,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Object_o *)cachedObject;
        __this_00 = (UnityEngine_Cloth_o *)
                    UnityEngine_GameObject__GetComponent_object_(cachedObject,MethodInfo_Cloth_GetComponent_Cloth);
        if (__this_00 != (UnityEngine_Cloth_o *)0x0) {
          UnityEngine_Cloth__set_enabled(__this_00,0,(MethodInfo *)0x0);
          *(undefined1 *)&x[1].fields.m_CachedPtr = 0;
          pUVar3 = (UnityEngine_Object_o *)cachedObject;
          __this_01 = UnityEngine_GameObject__get_transform(cachedObject,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position
                      (__this_01,(UnityEngine_Vector3_o)ZEXT812(0xc7c34f8000000000),(MethodInfo *)0x0);
            pIVar2 = UnityEngine_GameObject__GetComponent_object_(cachedObject,MethodInfo_ParentFollow_GetComponent_ParentFollow);
            pUVar3 = (UnityEngine_Object_o *)cachedObject;
            if (pIVar2 != (Il2CppObject *)0x0) {
              pIVar2[3].klass = (Il2CppClass *)0x0;
              il2cpp_runtime_helper_022b4080(pIVar2 + 3,0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3[2].klass = (UnityEngine_Object_c *)0x0;
  il2cpp_runtime_helper_022b4080(pUVar3 + 2,0);
  return;
}


// ClothFactory$$GenerateCloth
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GenerateCloth (UnityEngine_GameObject_o* go, System_String_o* res, const MethodInfo* method);
// 0x405a510

UnityEngine_GameObject_o *
ClothFactory__GenerateCloth(UnityEngine_GameObject_o *go,System_String_o *res,MethodInfo *method)

{
  int *piVar1;
  char *pcVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar4;
  uint uVar5;
  UnityEngine_SkinnedMeshRenderer_o *pUVar6;
  Il2CppClass *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Cloth_o *__this_03;
  Il2CppClass *pIVar10;
  UnityEngine_Renderer_o *pUVar11;
  Il2CppClass *pIVar12;
  Il2CppClass *pIVar13;
  UnityEngine_GameObject_o *extraout_RAX;
  Il2CppClass *pIVar14;
  UnityEngine_Transform_array *value;
  UnityEngine_GameObject_o *extraout_RAX_00;
  System_Object_array *pSVar15;
  Il2CppObject *pIVar16;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Il2CppObject *arg2;
  System_String_o *pSVar17;
  long *plVar18;
  Il2CppClass *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar19;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  uint uVar20;
  Il2CppClass *unaff_RBX;
  int iVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *unaff_R12;
  undefined8 *unaff_R13;
  Il2CppObject *pIVar24;
  Il2CppClass *__this_05;
  UnityEngine_Quaternion_o UVar25;
  undefined1 auVar26 [12];
  undefined8 in_stack_fffffffffffffea8;
  undefined4 in_stack_fffffffffffffeb0;
  int in_stack_fffffffffffffeb4;
  Il2CppMethodPointer pIVar27;
  Il2CppRGCTXData *pIVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_118 [16];
  _union_231609 a_Stack_108 [3];
  Il2CppClass *pIStack_f0;
  Il2CppClass *pIStack_e8;
  Il2CppClass *pIStack_e0;
  Il2CppClass *pIStack_d8;
  Il2CppClass *pIStack_d0;
  Il2CppClass *pIStack_c8;
  undefined8 uStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppClass *pIStack_b0;
  Il2CppClass *pIStack_a8;
  Il2CppClass *pIStack_a0;
  undefined8 uStack_98;
  Il2CppClass *pIStack_90;
  Il2CppObject *pIStack_88;
  Il2CppClass *pIStack_78;
  Il2CppClass *pIStack_70;
  Il2CppClass *pIStack_68;
  Il2CppClass *pIStack_60;
  Il2CppClass *pIStack_58;
  Il2CppClass *pIStack_50;
  undefined8 *puStack_48;
  System_String_o *pSStack_40;
  UnityEngine_Transform_array *pUStack_38;
  
  pIVar23 = (Il2CppClass *)res;
  if (g_data_057ac278 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057ac278 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    unaff_R12 = (Il2CppClass *)&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
    unaff_RBX = (Il2CppClass *)
                UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    unaff_R13 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    }
    pIVar23 = MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
    pUVar6 = (UnityEngine_SkinnedMeshRenderer_o *)
             UnityEngine_GameObject__GetComponent_object_(go,(MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if (pUVar6 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      go = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_bones(pUVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (Il2CppClass *)
                  ApplicationManagers_ResourceManager__LoadAsset(pSVar17,res,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar23 = (Il2CppClass *)0x0;
      pIVar7 = (Il2CppClass *)
               UnityEngine_Object__Instantiate_4e01490((UnityEngine_Object_o *)unaff_RBX,(MethodInfo *)0x0);
      if (pIVar7 != (Il2CppClass *)0x0) {
        pIVar23 = TypeInfo_GameObject;
        if ((pIVar7->_1).image != TypeInfo_GameObject) goto label_0405a71d;
        pIVar23 = MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
        pIVar7 = (Il2CppClass *)
                 UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)pIVar7,(MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        if (pIVar7 != (Il2CppClass *)0x0) {
          pIVar23 = (Il2CppClass *)0x0;
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
          if (g_data_057a6932 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
          }
          res = (System_String_o *)0x0;
          unaff_RBX = pIVar7;
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (pUVar8,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                       (MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_bones
                      ((UnityEngine_SkinnedMeshRenderer_o *)pIVar7,(UnityEngine_Transform_array *)go,
                       (MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__set_quality
                      ((UnityEngine_SkinnedMeshRenderer_o *)pIVar7,4,(MethodInfo *)0x0);
            pUVar9 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
            return pUVar9;
          }
        }
      }
    }
  }
  pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_0405a71d:
  il2cpp_runtime_helper_022b2fd0();
  pIVar14 = pIVar23;
  pIStack_58 = unaff_RBX;
  pIStack_50 = unaff_R12;
  puStack_48 = unaff_R13;
  pSStack_40 = res;
  pUStack_38 = (UnityEngine_Transform_array *)go;
  if (g_data_057ac279 == '\0') {
    pIStack_88 = (Il2CppObject *)0x405a760;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pIStack_88 = (Il2CppObject *)0x405a76c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_88 = (Il2CppObject *)0x405a778;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    pIStack_88 = (Il2CppObject *)0x405a784;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pIStack_88 = (Il2CppObject *)0x405a790;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_AddComponent_ParentFollow);
    pIStack_88 = (Il2CppObject *)0x405a79c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_GetComponent_Cloth);
    pIStack_88 = (Il2CppObject *)0x405a7a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    pIStack_88 = (Il2CppObject *)0x405a7b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    pIStack_88 = (Il2CppObject *)0x405a7c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    pIStack_88 = (Il2CppObject *)0x405a7cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_88 = (Il2CppObject *)0x405a7d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    pIStack_88 = (Il2CppObject *)0x405a7e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    pIStack_88 = (Il2CppObject *)0x405a7f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pIStack_88 = (Il2CppObject *)0x405a7fc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    pIStack_88 = (Il2CppObject *)0x405a808;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    pIStack_88 = (Il2CppObject *)0x405a814;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac279 = '\x01';
  }
  pIStack_78 = (Il2CppClass *)0x0;
  pIVar24 = (Il2CppObject *)&TypeInfo_ClothFactory;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    pIStack_88 = (Il2CppObject *)0x405a83c;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar22 = (Il2CppClass *)0x0;
  __this_05 = value_00;
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIStack_88 = (Il2CppObject *)0x405a869;
    pIVar14 = pIVar23;
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)pIVar23,
                       (Il2CppObject **)&pIStack_78,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar4 == '\0') {
      pMVar19 = extraout_RDX;
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        pIStack_88 = (Il2CppObject *)0x405aa8f;
        il2cpp_runtime_helper_02337ed0();
        pMVar19 = extraout_RDX_04;
      }
      pIStack_88 = (Il2CppObject *)0x405aa9a;
      pIVar14 = pIVar23;
      pIVar22 = pIVar7;
      pIVar12 = (Il2CppClass *)
                ClothFactory__GenerateCloth
                          ((UnityEngine_GameObject_o *)pIVar7,(System_String_o *)pIVar23,pMVar19);
      if (pIVar12 != (Il2CppClass *)0x0) {
        pIStack_88 = (Il2CppObject *)0x405aab8;
        pIVar14 = MethodInfo_Renderer_GetComponent_Renderer;
        pIVar22 = pIVar12;
        pUVar11 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pIVar12,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
        unaff_RBX = pIVar12;
        if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
          pIStack_88 = (Il2CppObject *)0x405aace;
          UnityEngine_Renderer__set_material(pUVar11,(UnityEngine_Material_o *)value_00,(MethodInfo *)0x0);
          pIStack_88 = (Il2CppObject *)0x405aae0;
          pIVar14 = MethodInfo_ParentFollow_AddComponent_ParentFollow;
          pIVar22 = pIVar12;
          pIVar10 = (Il2CppClass *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pIVar12,(MethodInfo_255A020 *)MethodInfo_ParentFollow_AddComponent_ParentFollow);
          if (pIVar7 != (Il2CppClass *)0x0) {
            pIVar14 = (Il2CppClass *)0x0;
            pIStack_88 = (Il2CppObject *)0x405aaf6;
            pIVar22 = pIVar7;
            pIVar13 = (Il2CppClass *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pIVar7,(MethodInfo *)0x0);
            unaff_R12 = pIVar10;
            if (pIVar10 != (Il2CppClass *)0x0) {
              pIVar22 = (Il2CppClass *)&(pIVar10->_1).this_arg;
              (pIVar10->_1).this_arg.data = pIVar13;
              pIStack_88 = (Il2CppObject *)0x405ab16;
              pIVar14 = pIVar13;
              il2cpp_runtime_helper_022b4080();
              pIVar7 = pIVar13;
              if (pIVar13 != (Il2CppClass *)0x0) {
                __this_05 = (pIVar10->_1).byval_arg.data;
                pIVar14 = (Il2CppClass *)0x0;
                pIStack_88 = (Il2CppObject *)0x405ab2e;
                pIVar22 = pIVar13;
                UVar25 = UnityEngine_Transform__get_rotation
                                   ((UnityEngine_Transform_o *)pIVar13,(MethodInfo *)0x0);
                if (__this_05 != (Il2CppClass *)0x0) {
                  pIStack_88 = (Il2CppObject *)0x405ab41;
                  UnityEngine_Transform__set_rotation
                            ((UnityEngine_Transform_o *)__this_05,UVar25,(MethodInfo *)0x0);
                  pIStack_88 = (Il2CppObject *)0x405ab50;
                  pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
                  pIStack_88 = (Il2CppObject *)0x405ab65;
                  pIVar14 = MethodInfo_List_1_UnityEngine_GameObject;
                  pIVar22 = pIVar7;
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_List_object__o *)pIVar7,
                             (MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_GameObject);
                  lVar3 = MethodInfo_Void_Add;
                  if (pIVar7 != (Il2CppClass *)0x0) {
                    piVar1 = (int *)((long)&(pIVar7->_1).namespaze + 4);
                    *piVar1 = *piVar1 + 1;
                    pcVar2 = (pIVar7->_1).name;
                    if (pcVar2 != (char *)0x0) {
                      uVar5 = *(uint *)&(pIVar7->_1).namespaze;
                      pIVar14 = pIVar12;
                      if (uVar5 < *(uint *)(pcVar2 + 0x18)) {
                        *(uint *)&(pIVar7->_1).namespaze = uVar5 + 1;
                        *(Il2CppClass **)(pcVar2 + (long)(int)uVar5 * 8 + 0x20) = pIVar12;
                        pIStack_88 = (Il2CppObject *)0x405abb1;
                        il2cpp_runtime_helper_022b4080(pcVar2 + (long)(int)uVar5 * 8 + 0x20);
                      }
                      else {
                        pIStack_88 = (Il2CppObject *)0x405acf8;
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pIVar7,(Il2CppObject *)pIVar12
                                   ,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                                  );
                      }
                      pIVar22 = (Il2CppClass *)0x0;
                      pIStack_78 = pIVar7;
                      if ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        pIStack_88 = (Il2CppObject *)0x405ad24;
                        System_Collections_Generic_Dictionary_object__object___Add
                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                   **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)pIVar23,
                                   (Il2CppObject *)pIVar7,MethodInfo_Void_Add);
                        return (UnityEngine_GameObject_o *)pIVar12;
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
    else {
      pIVar22 = pIStack_78;
      pIStack_70 = value_00;
      pIStack_68 = pIVar7;
      pIStack_60 = pIVar23;
      if (pIStack_78 != (Il2CppClass *)0x0) {
        pIVar12 = (Il2CppClass *)0x0;
        unaff_R12 = (Il2CppClass *)0x0;
        __this_05 = (Il2CppClass *)&TypeInfo_Object;
        pIVar7 = (Il2CppClass *)0x0;
        pMVar19 = extraout_RDX;
        if (0 < *(int *)&(pIStack_78->_1).namespaze) {
          do {
            iVar21 = (int)pIVar7;
            pIStack_88 = (Il2CppObject *)0x405a8e4;
            unaff_RBX = (Il2CppClass *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pIStack_78,iVar21,MethodInfo_GameObject_get_Item
                                  );
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pIStack_88 = (Il2CppObject *)0x405a8f8;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar14 = (Il2CppClass *)0x0;
            pIStack_88 = (Il2CppObject *)0x405a904;
            pIVar22 = unaff_RBX;
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            pIVar23 = (Il2CppClass *)&MethodInfo_Void_RemoveAt;
            pIVar24 = (Il2CppObject *)&MethodInfo_GameObject_get_Item;
            if ((char)bVar4 == '\0') {
              if (unaff_RBX == (Il2CppClass *)0x0) goto label_0405ad78;
              pIStack_88 = (Il2CppObject *)0x405a94b;
              pIVar14 = MethodInfo_ParentFollow_GetComponent_ParentFollow;
              pIVar22 = unaff_RBX;
              pIVar16 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)unaff_RBX,(MethodInfo_255A0F0 *)MethodInfo_ParentFollow_GetComponent_ParentFollow);
              if (pIVar16 == (Il2CppObject *)0x0) goto label_0405ad78;
              pMVar19 = extraout_RDX_01;
              pIVar22 = pIVar7;
              if (*(char *)&pIVar16[2].monitor == '\0') {
                *(undefined1 *)&pIVar16[2].monitor = 1;
                pIStack_88 = (Il2CppObject *)0x405a974;
                pIVar14 = MethodInfo_Renderer_GetComponent_Renderer;
                pIVar22 = unaff_RBX;
                pUVar11 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)unaff_RBX,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer)
                ;
                if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                  pIStack_88 = (Il2CppObject *)0x405a98c;
                  UnityEngine_Renderer__set_material
                            (pUVar11,(UnityEngine_Material_o *)pIStack_70,(MethodInfo *)0x0);
                  pIStack_88 = (Il2CppObject *)0x405a99e;
                  pIVar14 = MethodInfo_Cloth_GetComponent_Cloth;
                  pIVar22 = unaff_RBX;
                  __this_03 = (UnityEngine_Cloth_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)unaff_RBX,
                                         (MethodInfo_255A0F0 *)MethodInfo_Cloth_GetComponent_Cloth);
                  __this_05 = pIStack_68;
                  if (__this_03 != (UnityEngine_Cloth_o *)0x0) {
                    pIStack_88 = (Il2CppObject *)0x405a9bb;
                    UnityEngine_Cloth__set_enabled(__this_03,1,(MethodInfo *)0x0);
                    pIStack_88 = (Il2CppObject *)0x405a9cd;
                    pIVar14 = MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
                    pIVar22 = unaff_RBX;
                    pUVar11 = (UnityEngine_Renderer_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)unaff_RBX,
                                         (MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                    if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                      pIStack_88 = (Il2CppObject *)0x405a9e5;
                      UnityEngine_Renderer__set_enabled(pUVar11,1,(MethodInfo *)0x0);
                      pIStack_88 = (Il2CppObject *)0x405a9f7;
                      pIVar14 = MethodInfo_ParentFollow_GetComponent_ParentFollow;
                      pIVar22 = unaff_RBX;
                      pIVar16 = UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)unaff_RBX,
                                           (MethodInfo_255A0F0 *)MethodInfo_ParentFollow_GetComponent_ParentFollow);
                      if (__this_05 != (Il2CppClass *)0x0) {
                        pIVar14 = (Il2CppClass *)0x0;
                        pIStack_88 = (Il2CppObject *)0x405aa0d;
                        pIVar22 = __this_05;
                        pIVar12 = (Il2CppClass *)
                                  UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
                        pIVar24 = pIVar16;
                        if (pIVar16 != (Il2CppObject *)0x0) {
                          pIVar22 = (Il2CppClass *)(pIVar16 + 3);
                          pIVar16[3].klass = pIVar12;
                          pIStack_88 = (Il2CppObject *)0x405aa2c;
                          pIVar14 = pIVar12;
                          il2cpp_runtime_helper_022b4080();
                          pIVar7 = pIVar12;
                          if (pIVar12 != (Il2CppClass *)0x0) {
                            pIVar10 = pIVar16[2].klass;
                            pIVar14 = (Il2CppClass *)0x0;
                            pIStack_88 = (Il2CppObject *)0x405aa43;
                            pIVar22 = pIVar12;
                            UVar25 = UnityEngine_Transform__get_rotation
                                               ((UnityEngine_Transform_o *)pIVar12,(MethodInfo *)0x0);
                            pIVar24 = (Il2CppObject *)0x0;
                            if (pIVar10 != (Il2CppClass *)0x0) {
                              pIStack_88 = (Il2CppObject *)0x405aa56;
                              UnityEngine_Transform__set_rotation
                                        ((UnityEngine_Transform_o *)pIVar10,UVar25,(MethodInfo *)0x0);
                              pMVar19 = extraout_RDX_02;
                              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                                pIStack_88 = (Il2CppObject *)0x405aa6e;
                                il2cpp_runtime_helper_02337ed0();
                                pMVar19 = extraout_RDX_03;
                              }
                              pIStack_88 = (Il2CppObject *)0x405aa79;
                              ClothFactory__ReapplyClothBones
                                        ((UnityEngine_GameObject_o *)__this_05,
                                         (UnityEngine_GameObject_o *)unaff_RBX,pMVar19);
                              return (UnityEngine_GameObject_o *)unaff_RBX;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_0405ad78;
              }
            }
            else {
              pIVar22 = pIStack_78;
              if (pIStack_78 == (Il2CppClass *)0x0) goto label_0405ad78;
              pIStack_88 = (Il2CppObject *)0x405a921;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)pIStack_78,iVar21,MethodInfo_Void_RemoveAt);
              pMVar19 = extraout_RDX_00;
              pIVar22 = (Il2CppClass *)(ulong)(iVar21 - 1U);
              pIVar14 = pIVar7;
              if ((int)(iVar21 - 1U) < 0) {
                pIVar22 = pIVar12;
              }
            }
            uVar5 = (int)pIVar22 + 1;
            pIVar7 = (Il2CppClass *)(ulong)uVar5;
            pIVar22 = pIStack_78;
            if (pIStack_78 == (Il2CppClass *)0x0) goto label_0405ad78;
          } while ((int)uVar5 < *(int *)&(pIStack_78->_1).namespaze);
        }
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          pIStack_88 = (Il2CppObject *)0x405abce;
          il2cpp_runtime_helper_02337ed0();
          pMVar19 = extraout_RDX_05;
        }
        pIVar23 = pIStack_60;
        pIVar7 = pIStack_68;
        pIStack_88 = (Il2CppObject *)0x405abe3;
        pIVar14 = pIStack_60;
        pIVar22 = pIStack_68;
        pIVar10 = (Il2CppClass *)
                  ClothFactory__GenerateCloth
                            ((UnityEngine_GameObject_o *)pIStack_68,(System_String_o *)pIStack_60,pMVar19);
        __this_05 = pIStack_70;
        unaff_R12 = pIVar12;
        pIVar24 = (Il2CppObject *)&TypeInfo_ClothFactory;
        if (pIVar10 != (Il2CppClass *)0x0) {
          pIStack_88 = (Il2CppObject *)0x405ac06;
          pIVar14 = MethodInfo_Renderer_GetComponent_Renderer;
          pIVar22 = pIVar10;
          pUVar11 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pIVar10,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
          unaff_RBX = pIVar10;
          if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
            pIStack_88 = (Il2CppObject *)0x405ac1c;
            UnityEngine_Renderer__set_material(pUVar11,(UnityEngine_Material_o *)__this_05,(MethodInfo *)0x0);
            pIStack_88 = (Il2CppObject *)0x405ac2e;
            pIVar14 = MethodInfo_ParentFollow_AddComponent_ParentFollow;
            pIVar22 = pIVar10;
            pIVar12 = (Il2CppClass *)
                      UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pIVar10,(MethodInfo_255A020 *)MethodInfo_ParentFollow_AddComponent_ParentFollow);
            if (pIVar7 != (Il2CppClass *)0x0) {
              pIVar14 = (Il2CppClass *)0x0;
              pIStack_88 = (Il2CppObject *)0x405ac44;
              pIVar22 = pIVar7;
              pIVar13 = (Il2CppClass *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pIVar7,(MethodInfo *)0x0);
              unaff_R12 = pIVar12;
              if (pIVar12 != (Il2CppClass *)0x0) {
                pIVar22 = (Il2CppClass *)&(pIVar12->_1).this_arg;
                (pIVar12->_1).this_arg.data = pIVar13;
                pIStack_88 = (Il2CppObject *)0x405ac64;
                pIVar14 = pIVar13;
                il2cpp_runtime_helper_022b4080();
                pIVar7 = pIVar13;
                if (pIVar13 != (Il2CppClass *)0x0) {
                  __this_05 = (pIVar12->_1).byval_arg.data;
                  pIVar14 = (Il2CppClass *)0x0;
                  pIStack_88 = (Il2CppObject *)0x405ac7c;
                  pIVar22 = pIVar13;
                  UVar25 = UnityEngine_Transform__get_rotation
                                     ((UnityEngine_Transform_o *)pIVar13,(MethodInfo *)0x0);
                  if (__this_05 != (Il2CppClass *)0x0) {
                    pIVar14 = (Il2CppClass *)0x0;
                    pIStack_88 = (Il2CppObject *)0x405ac8f;
                    UnityEngine_Transform__set_rotation
                              ((UnityEngine_Transform_o *)__this_05,UVar25,(MethodInfo *)0x0);
                    lVar3 = MethodInfo_Void_Add;
                    pIVar22 = pIStack_78;
                    if (pIStack_78 != (Il2CppClass *)0x0) {
                      piVar1 = (int *)((long)&(pIStack_78->_1).namespaze + 4);
                      *piVar1 = *piVar1 + 1;
                      pcVar2 = (pIStack_78->_1).name;
                      if (pcVar2 != (char *)0x0) {
                        uVar5 = *(uint *)&(pIStack_78->_1).namespaze;
                        pIVar14 = pIVar10;
                        if (uVar5 < *(uint *)(pcVar2 + 0x18)) {
                          *(uint *)&(pIStack_78->_1).namespaze = uVar5 + 1;
                          *(Il2CppClass **)(pcVar2 + (long)(int)uVar5 * 8 + 0x20) = pIVar10;
                          pIStack_88 = (Il2CppObject *)0x405acdc;
                          il2cpp_runtime_helper_022b4080(pcVar2 + (long)(int)uVar5 * 8 + 0x20);
                        }
                        else {
                          pIStack_88 = (Il2CppObject *)0x405ad3d;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pIStack_78,
                                     (Il2CppObject *)pIVar10,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                        }
                        pIVar22 = (Il2CppClass *)0x0;
                        if ((System_Collections_Generic_Dictionary_object__object__o *)
                            **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                            (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          pIStack_88 = (Il2CppObject *)0x405ad66;
                          System_Collections_Generic_Dictionary_object__object___set_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)pIVar23,
                                     (Il2CppObject *)pIStack_78,MethodInfo_Void_set_Item);
                          return (UnityEngine_GameObject_o *)pIVar10;
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
    }
  }
label_0405ad78:
  pIStack_88 = (Il2CppObject *)0x405ad7d;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pIVar12 = (Il2CppClass *)&(pIVar22->_1).this_arg;
  (pIVar22->_1).this_arg.data = pIVar14;
  pIStack_a0 = (Il2CppClass *)0x405ad97;
  pIVar10 = pIVar14;
  pIStack_90 = unaff_RBX;
  pIStack_88 = pIVar24;
  il2cpp_runtime_helper_022b4080();
  if (pIVar14 != (Il2CppClass *)0x0) {
    pUVar8 = (pIVar22->_1).byval_arg.data;
    pIVar10 = (Il2CppClass *)0x0;
    pIStack_a0 = (Il2CppClass *)0x405adaa;
    pIVar12 = pIVar14;
    UVar25 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)pIVar14,(MethodInfo *)0x0);
    pIVar22 = (Il2CppClass *)0x0;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(pUVar8,UVar25,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  pIStack_a0 = (Il2CppClass *)0x405adc5;
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pIStack_b8 = pIVar14;
  pIStack_b0 = unaff_R12;
  pIStack_a8 = pIVar22;
  pIStack_a0 = __this_05;
  if (g_data_057ac27c == '\0') {
    pIStack_c8 = (Il2CppClass *)0x405adf3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    g_data_057ac27c = '\x01';
  }
  if (pIVar12 != (Il2CppClass *)0x0) {
    unaff_R12 = (Il2CppClass *)&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
    pIStack_c8 = (Il2CppClass *)0x405ae16;
    pIVar14 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pIVar12,(MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if (pIVar10 != (Il2CppClass *)0x0) {
      pIStack_c8 = (Il2CppClass *)0x405ae2e;
      pUVar6 = (UnityEngine_SkinnedMeshRenderer_o *)
               UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)pIVar10,(MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
      pIVar22 = pIVar14;
      if (pIVar14 != (Il2CppClass *)0x0) {
        pIStack_c8 = (Il2CppClass *)0x405ae40;
        value = UnityEngine_SkinnedMeshRenderer__get_bones
                          ((UnityEngine_SkinnedMeshRenderer_o *)pIVar14,(MethodInfo *)0x0);
        pIVar12 = (Il2CppClass *)0x0;
        if (pUVar6 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          pIStack_c8 = (Il2CppClass *)0x405ae52;
          UnityEngine_SkinnedMeshRenderer__set_bones(pUVar6,value,(MethodInfo *)0x0);
          pIStack_c8 = (Il2CppClass *)0x405ae5c;
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
          if (g_data_057a6932 == '\0') {
            pIStack_c8 = (Il2CppClass *)0x405ae74;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
          }
          pIVar12 = (Il2CppClass *)0x0;
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (pUVar8,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                       (MethodInfo *)0x0);
            return extraout_RAX_00;
          }
        }
      }
    }
  }
  pIStack_c8 = (Il2CppClass *)0x405aeb5;
  il2cpp_runtime_helper_022b2c90();
  pIStack_f0 = pIVar12;
  pIStack_e8 = unaff_R12;
  pIStack_e0 = pIVar23;
  pIStack_d8 = pIVar22;
  pIStack_d0 = pIVar10;
  pIStack_c8 = pIVar7;
  if (g_data_057ac27a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_FindObjectsOfType_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"{0} cached cloths, {1} active cloths, {2} types cached");
    g_data_057ac27a = '\x01';
  }
  uVar29 = 0;
  uVar30 = 0;
  pIVar27 = (Il2CppMethodPointer)0x0;
  pIVar28 = (Il2CppRGCTXData *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_118,
               (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    pIVar27 = (Il2CppMethodPointer)CONCAT44(auStack_118._4_4_,auStack_118._0_4_);
    pIVar23 = (Il2CppClass *)0x0;
    pIVar28 = (Il2CppRGCTXData *)auStack_118._8_8_;
    uVar29 = a_Stack_108[0]._0_4_;
    uVar30 = a_Stack_108[0]._4_4_;
    while( true ) {
      __this.fields._version = in_stack_fffffffffffffeb0;
      __this.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea8;
      __this.fields._index = in_stack_fffffffffffffeb4;
      __this.fields._current.fields.key = (Il2CppObject *)pIVar27;
      __this.fields._current.fields.value = (Il2CppObject *)pIVar28;
      __this.fields._getEnumeratorRetType = uVar29;
      __this.fields._36_4_ = uVar30;
      bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this,(MethodInfo_3251160 *)&stack0xfffffffffffffeb8);
      if ((char)bVar4 == '\0') {
        __this_00.fields._version = in_stack_fffffffffffffeb0;
        __this_00.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea8;
        __this_00.fields._index = in_stack_fffffffffffffeb4;
        __this_00.fields._current.fields.key = (Il2CppObject *)pIVar27;
        __this_00.fields._current.fields.value = (Il2CppObject *)pIVar28;
        __this_00.fields._getEnumeratorRetType = uVar29;
        __this_00.fields._36_4_ = uVar30;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_00,(MethodInfo_3251280 *)&stack0xfffffffffffffeb8);
        goto label_0405b0a2;
      }
      pIVar24 = (Il2CppObject *)il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xfffffffffffffeb8,MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar24 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),pIVar24,MethodInfo_List_1_UnityEngine_GameObject_get_Item);
      if (pIVar24 == (Il2CppObject *)0x0) goto label_0405b1d9;
      pIVar23 = (Il2CppClass *)(ulong)(uint)((int)pIVar23 + *(int *)&pIVar24[1].monitor);
    }
    il2cpp_runtime_helper_022b2c90();
label_0405b1d9:
    il2cpp_runtime_helper_022b2c90();
  }
label_0405b1de:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0405b1e3:
    auVar26 = il2cpp_runtime_helper_022b2ca0();
    if (auVar26._8_4_ != 1) {
label_0405b257:
      __this_02.fields._version = in_stack_fffffffffffffeb0;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea8;
      __this_02.fields._index = in_stack_fffffffffffffeb4;
      __this_02.fields._current.fields.key = (Il2CppObject *)pIVar27;
      __this_02.fields._current.fields.value = (Il2CppObject *)pIVar28;
      __this_02.fields._getEnumeratorRetType = uVar29;
      __this_02.fields._36_4_ = uVar30;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&stack0xfffffffffffffeb8);
      _Unwind_Resume(auVar26._0_8_);
    }
    plVar18 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar3 = *plVar18;
    __cxa_end_catch();
    __this_01.fields._version = in_stack_fffffffffffffeb0;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffea8;
    __this_01.fields._index = in_stack_fffffffffffffeb4;
    __this_01.fields._current.fields.key = (Il2CppObject *)pIVar27;
    __this_01.fields._current.fields.value = (Il2CppObject *)pIVar28;
    __this_01.fields._getEnumeratorRetType = uVar29;
    __this_01.fields._36_4_ = uVar30;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251280 *)&stack0xfffffffffffffeb8);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0405b257;
    }
label_0405b0a2:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = UnityEngine_Object__FindObjectsOfType_object_(MethodInfo_Cloth_FindObjectsOfType_Cloth);
    if (pSVar15 == (System_Object_array *)0x0) goto label_0405b1de;
    uVar5 = (uint)pSVar15->max_length;
    if (0 < (int)uVar5) {
      uVar20 = 0;
      iVar21 = 0;
      while (uVar20 < uVar5) {
        if ((UnityEngine_Cloth_o *)pSVar15->m_Items[(int)uVar20] == (UnityEngine_Cloth_o *)0x0)
        goto label_0405b1de;
        uVar5 = UnityEngine_Cloth__get_enabled
                          ((UnityEngine_Cloth_o *)pSVar15->m_Items[(int)uVar20],(MethodInfo *)0x0);
        iVar21 = iVar21 + (uVar5 & 0xff);
        uVar20 = uVar20 + 1;
        uVar5 = (uint)pSVar15->max_length;
        if ((int)uVar5 <= (int)uVar20) goto label_0405b114;
      }
      goto label_0405b1e3;
    }
    iVar21 = 0;
label_0405b114:
    auStack_118._0_4_ = SUB84(pIVar23,0);
    pIVar24 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_118);
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xfffffffffffffeb4);
    in_stack_fffffffffffffeb4 = iVar21;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffeb4 = iVar21;
    }
    if (((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis),
       __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(__this_04,MethodInfo_Int32_get_Count);
      arg2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xfffffffffffffeb0);
      pSVar17 = System_String__Format_3af7930("{0} cached cloths, {1} active cloths, {2} types cached",pIVar24,pIVar16,arg2,(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)pSVar17;
    }
  } while( true );
}


// ClothFactory$$GetCape
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetCape (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x405a730

UnityEngine_GameObject_o *
ClothFactory__GetCape
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          MethodInfo *method)

{
  int *piVar1;
  InvokerMethod pIVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar4;
  uint uVar5;
  UnityEngine_Cloth_o *__this_03;
  Il2CppClass *pIVar6;
  UnityEngine_Renderer_o *pUVar7;
  Il2CppClass *pIVar8;
  Il2CppClass *pIVar9;
  UnityEngine_GameObject_o *extraout_RAX;
  Il2CppClass *pIVar10;
  UnityEngine_SkinnedMeshRenderer_o *__this_04;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_GameObject_o *extraout_RAX_00;
  System_Object_array *pSVar12;
  Il2CppObject *pIVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  Il2CppObject *arg2;
  System_String_o *pSVar14;
  long *plVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar16;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  uint uVar17;
  Il2CppClass *unaff_RBX;
  int iVar18;
  Il2CppClass *pIVar19;
  Il2CppClass *unaff_R12;
  Il2CppObject *pIVar20;
  UnityEngine_Quaternion_o UVar21;
  undefined1 auVar22 [12];
  undefined8 in_stack_fffffffffffffed0;
  undefined4 in_stack_fffffffffffffed8;
  int in_stack_fffffffffffffedc;
  Il2CppMethodPointer pIVar23;
  Il2CppRGCTXData *pIVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_f0 [16];
  _union_231609 a_Stack_e0 [3];
  Il2CppClass *pIStack_c8;
  Il2CppClass *pIStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppClass *pIStack_b0;
  Il2CppClass *pIStack_a8;
  Il2CppClass *pIStack_a0;
  undefined8 uStack_98;
  Il2CppClass *pIStack_90;
  Il2CppClass *pIStack_88;
  Il2CppClass *pIStack_80;
  Il2CppClass *pIStack_78;
  undefined8 uStack_70;
  Il2CppClass *pIStack_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_50;
  Il2CppClass *local_48;
  Il2CppClass *local_40;
  Il2CppClass *local_38;
  
  pIVar10 = (Il2CppClass *)name;
  if (g_data_057ac279 == '\0') {
    pIStack_60 = (Il2CppObject *)0x405a760;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pIStack_60 = (Il2CppObject *)0x405a76c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_60 = (Il2CppObject *)0x405a778;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    pIStack_60 = (Il2CppObject *)0x405a784;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pIStack_60 = (Il2CppObject *)0x405a790;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_AddComponent_ParentFollow);
    pIStack_60 = (Il2CppObject *)0x405a79c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_GetComponent_Cloth);
    pIStack_60 = (Il2CppObject *)0x405a7a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    pIStack_60 = (Il2CppObject *)0x405a7b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    pIStack_60 = (Il2CppObject *)0x405a7c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    pIStack_60 = (Il2CppObject *)0x405a7cc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_60 = (Il2CppObject *)0x405a7d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    pIStack_60 = (Il2CppObject *)0x405a7e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    pIStack_60 = (Il2CppObject *)0x405a7f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pIStack_60 = (Il2CppObject *)0x405a7fc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    pIStack_60 = (Il2CppObject *)0x405a808;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    pIStack_60 = (Il2CppObject *)0x405a814;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac279 = '\x01';
  }
  local_50 = (Il2CppClass *)0x0;
  pIVar20 = (Il2CppObject *)&TypeInfo_ClothFactory;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    pIStack_60 = (Il2CppObject *)0x405a83c;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = (Il2CppClass *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIStack_60 = (Il2CppObject *)0x405a869;
    pIVar10 = (Il2CppClass *)name;
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,(Il2CppObject **)&local_50,
                       MethodInfo_Boolean_TryGetValue);
    if ((char)bVar4 == '\0') {
      pMVar16 = extraout_RDX;
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        pIStack_60 = (Il2CppObject *)0x405aa8f;
        il2cpp_runtime_helper_02337ed0();
        pMVar16 = extraout_RDX_04;
      }
      pIStack_60 = (Il2CppObject *)0x405aa9a;
      pIVar10 = (Il2CppClass *)name;
      pIVar19 = (Il2CppClass *)reference;
      pIVar6 = (Il2CppClass *)ClothFactory__GenerateCloth(reference,name,pMVar16);
      if (pIVar6 != (Il2CppClass *)0x0) {
        pIStack_60 = (Il2CppObject *)0x405aab8;
        pIVar10 = MethodInfo_Renderer_GetComponent_Renderer;
        pIVar19 = pIVar6;
        pUVar7 = (UnityEngine_Renderer_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)pIVar6,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
        unaff_RBX = pIVar6;
        if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
          pIStack_60 = (Il2CppObject *)0x405aace;
          UnityEngine_Renderer__set_material(pUVar7,material,(MethodInfo *)0x0);
          pIStack_60 = (Il2CppObject *)0x405aae0;
          pIVar10 = MethodInfo_ParentFollow_AddComponent_ParentFollow;
          pIVar19 = pIVar6;
          pIVar8 = (Il2CppClass *)
                   UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)pIVar6,(MethodInfo_255A020 *)MethodInfo_ParentFollow_AddComponent_ParentFollow);
          if (reference != (UnityEngine_GameObject_o *)0x0) {
            pIVar10 = (Il2CppClass *)0x0;
            pIStack_60 = (Il2CppObject *)0x405aaf6;
            pIVar19 = (Il2CppClass *)reference;
            pIVar9 = (Il2CppClass *)UnityEngine_GameObject__get_transform(reference,(MethodInfo *)0x0);
            unaff_R12 = pIVar8;
            if (pIVar8 != (Il2CppClass *)0x0) {
              pIVar19 = (Il2CppClass *)&(pIVar8->_1).this_arg;
              (pIVar8->_1).this_arg.data = pIVar9;
              pIStack_60 = (Il2CppObject *)0x405ab16;
              pIVar10 = pIVar9;
              il2cpp_runtime_helper_022b4080();
              reference = (UnityEngine_GameObject_o *)pIVar9;
              if (pIVar9 != (Il2CppClass *)0x0) {
                material = (pIVar8->_1).byval_arg.data;
                pIVar10 = (Il2CppClass *)0x0;
                pIStack_60 = (Il2CppObject *)0x405ab2e;
                pIVar19 = pIVar9;
                UVar21 = UnityEngine_Transform__get_rotation
                                   ((UnityEngine_Transform_o *)pIVar9,(MethodInfo *)0x0);
                if ((Il2CppClass *)material != (Il2CppClass *)0x0) {
                  pIStack_60 = (Il2CppObject *)0x405ab41;
                  UnityEngine_Transform__set_rotation
                            ((UnityEngine_Transform_o *)material,UVar21,(MethodInfo *)0x0);
                  pIStack_60 = (Il2CppObject *)0x405ab50;
                  reference = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
                  pIStack_60 = (Il2CppObject *)0x405ab65;
                  pIVar10 = MethodInfo_List_1_UnityEngine_GameObject;
                  pIVar19 = (Il2CppClass *)reference;
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_List_object__o *)reference,
                             (MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_GameObject);
                  lVar3 = MethodInfo_Void_Add;
                  if ((Il2CppClass *)reference != (Il2CppClass *)0x0) {
                    piVar1 = (int *)((long)&(((Il2CppClass *)reference)->_1).namespaze + 4);
                    *piVar1 = *piVar1 + 1;
                    pIVar2 = (InvokerMethod)(((Il2CppClass *)reference)->_1).name;
                    if (pIVar2 != (InvokerMethod)0x0) {
                      uVar5 = *(uint *)&(((Il2CppClass *)reference)->_1).namespaze;
                      pIVar10 = pIVar6;
                      if (uVar5 < *(uint *)(pIVar2 + 0x18)) {
                        *(uint *)&(((Il2CppClass *)reference)->_1).namespaze = uVar5 + 1;
                        *(Il2CppClass **)(pIVar2 + (long)(int)uVar5 * 8 + 0x20) = pIVar6;
                        pIStack_60 = (Il2CppObject *)0x405abb1;
                        il2cpp_runtime_helper_022b4080(pIVar2 + (long)(int)uVar5 * 8 + 0x20);
                      }
                      else {
                        pIStack_60 = (Il2CppObject *)0x405acf8;
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)reference,
                                   (Il2CppObject *)pIVar6,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
                        ;
                      }
                      pIVar19 = (Il2CppClass *)0x0;
                      local_50 = (Il2CppClass *)reference;
                      if ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        pIStack_60 = (Il2CppObject *)0x405ad24;
                        System_Collections_Generic_Dictionary_object__object___Add
                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                   **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,
                                   (Il2CppObject *)reference,MethodInfo_Void_Add);
                        return (UnityEngine_GameObject_o *)pIVar6;
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
    else {
      pIVar19 = local_50;
      local_48 = (Il2CppClass *)material;
      local_40 = (Il2CppClass *)reference;
      local_38 = (Il2CppClass *)name;
      if (local_50 != (Il2CppClass *)0x0) {
        pIVar8 = (Il2CppClass *)0x0;
        unaff_R12 = (Il2CppClass *)0x0;
        pIVar6 = (Il2CppClass *)0x0;
        pMVar16 = extraout_RDX;
        if (0 < *(int *)&(local_50->_1).namespaze) {
          do {
            iVar18 = (int)pIVar6;
            pIStack_60 = (Il2CppObject *)0x405a8e4;
            unaff_RBX = (Il2CppClass *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)local_50,iVar18,MethodInfo_GameObject_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pIStack_60 = (Il2CppObject *)0x405a8f8;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar10 = (Il2CppClass *)0x0;
            pIStack_60 = (Il2CppObject *)0x405a904;
            pIVar19 = unaff_RBX;
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            material = (UnityEngine_Material_o *)&TypeInfo_Object;
            reference = (UnityEngine_GameObject_o *)pIVar6;
            name = (System_String_o *)&MethodInfo_Void_RemoveAt;
            pIVar20 = (Il2CppObject *)&MethodInfo_GameObject_get_Item;
            if ((char)bVar4 == '\0') {
              if (unaff_RBX == (Il2CppClass *)0x0) goto label_0405ad78;
              pIStack_60 = (Il2CppObject *)0x405a94b;
              pIVar10 = MethodInfo_ParentFollow_GetComponent_ParentFollow;
              pIVar19 = unaff_RBX;
              pIVar13 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)unaff_RBX,(MethodInfo_255A0F0 *)MethodInfo_ParentFollow_GetComponent_ParentFollow);
              if (pIVar13 == (Il2CppObject *)0x0) goto label_0405ad78;
              pMVar16 = extraout_RDX_01;
              pIVar19 = pIVar6;
              if (*(char *)&pIVar13[2].monitor == '\0') {
                *(undefined1 *)&pIVar13[2].monitor = 1;
                pIStack_60 = (Il2CppObject *)0x405a974;
                pIVar10 = MethodInfo_Renderer_GetComponent_Renderer;
                pIVar19 = unaff_RBX;
                pUVar7 = (UnityEngine_Renderer_o *)
                         UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)unaff_RBX,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
                  pIStack_60 = (Il2CppObject *)0x405a98c;
                  UnityEngine_Renderer__set_material
                            (pUVar7,(UnityEngine_Material_o *)local_48,(MethodInfo *)0x0);
                  pIStack_60 = (Il2CppObject *)0x405a99e;
                  pIVar10 = MethodInfo_Cloth_GetComponent_Cloth;
                  pIVar19 = unaff_RBX;
                  __this_03 = (UnityEngine_Cloth_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)unaff_RBX,
                                         (MethodInfo_255A0F0 *)MethodInfo_Cloth_GetComponent_Cloth);
                  material = (UnityEngine_Material_o *)local_40;
                  if (__this_03 != (UnityEngine_Cloth_o *)0x0) {
                    pIStack_60 = (Il2CppObject *)0x405a9bb;
                    UnityEngine_Cloth__set_enabled(__this_03,1,(MethodInfo *)0x0);
                    pIStack_60 = (Il2CppObject *)0x405a9cd;
                    pIVar10 = MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
                    pIVar19 = unaff_RBX;
                    pUVar7 = (UnityEngine_Renderer_o *)
                             UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)unaff_RBX,
                                        (MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                    if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
                      pIStack_60 = (Il2CppObject *)0x405a9e5;
                      UnityEngine_Renderer__set_enabled(pUVar7,1,(MethodInfo *)0x0);
                      pIStack_60 = (Il2CppObject *)0x405a9f7;
                      pIVar10 = MethodInfo_ParentFollow_GetComponent_ParentFollow;
                      pIVar19 = unaff_RBX;
                      pIVar13 = UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)unaff_RBX,
                                           (MethodInfo_255A0F0 *)MethodInfo_ParentFollow_GetComponent_ParentFollow);
                      if ((Il2CppClass *)material != (Il2CppClass *)0x0) {
                        pIVar10 = (Il2CppClass *)0x0;
                        pIStack_60 = (Il2CppObject *)0x405aa0d;
                        pIVar19 = (Il2CppClass *)material;
                        pIVar6 = (Il2CppClass *)
                                 UnityEngine_GameObject__get_transform
                                           ((UnityEngine_GameObject_o *)material,(MethodInfo *)0x0);
                        pIVar20 = pIVar13;
                        if (pIVar13 != (Il2CppObject *)0x0) {
                          pIVar19 = (Il2CppClass *)(pIVar13 + 3);
                          pIVar13[3].klass = pIVar6;
                          pIStack_60 = (Il2CppObject *)0x405aa2c;
                          pIVar10 = pIVar6;
                          il2cpp_runtime_helper_022b4080();
                          reference = (UnityEngine_GameObject_o *)pIVar6;
                          if (pIVar6 != (Il2CppClass *)0x0) {
                            pIVar8 = pIVar13[2].klass;
                            pIVar10 = (Il2CppClass *)0x0;
                            pIStack_60 = (Il2CppObject *)0x405aa43;
                            pIVar19 = pIVar6;
                            UVar21 = UnityEngine_Transform__get_rotation
                                               ((UnityEngine_Transform_o *)pIVar6,(MethodInfo *)0x0);
                            pIVar20 = (Il2CppObject *)0x0;
                            if (pIVar8 != (Il2CppClass *)0x0) {
                              pIStack_60 = (Il2CppObject *)0x405aa56;
                              UnityEngine_Transform__set_rotation
                                        ((UnityEngine_Transform_o *)pIVar8,UVar21,(MethodInfo *)0x0);
                              pMVar16 = extraout_RDX_02;
                              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                                pIStack_60 = (Il2CppObject *)0x405aa6e;
                                il2cpp_runtime_helper_02337ed0();
                                pMVar16 = extraout_RDX_03;
                              }
                              pIStack_60 = (Il2CppObject *)0x405aa79;
                              ClothFactory__ReapplyClothBones
                                        ((UnityEngine_GameObject_o *)material,
                                         (UnityEngine_GameObject_o *)unaff_RBX,pMVar16);
                              return (UnityEngine_GameObject_o *)unaff_RBX;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_0405ad78;
              }
            }
            else {
              pIVar19 = local_50;
              if (local_50 == (Il2CppClass *)0x0) goto label_0405ad78;
              pIStack_60 = (Il2CppObject *)0x405a921;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)local_50,iVar18,MethodInfo_Void_RemoveAt);
              pMVar16 = extraout_RDX_00;
              pIVar19 = (Il2CppClass *)(ulong)(iVar18 - 1U);
              pIVar10 = pIVar6;
              if ((int)(iVar18 - 1U) < 0) {
                pIVar19 = pIVar8;
              }
            }
            uVar5 = (int)pIVar19 + 1;
            pIVar6 = (Il2CppClass *)(ulong)uVar5;
            reference = (UnityEngine_GameObject_o *)pIVar6;
            pIVar19 = local_50;
            if (local_50 == (Il2CppClass *)0x0) goto label_0405ad78;
          } while ((int)uVar5 < *(int *)&(local_50->_1).namespaze);
        }
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          pIStack_60 = (Il2CppObject *)0x405abce;
          il2cpp_runtime_helper_02337ed0();
          pMVar16 = extraout_RDX_05;
        }
        name = (System_String_o *)local_38;
        reference = (UnityEngine_GameObject_o *)local_40;
        pIStack_60 = (Il2CppObject *)0x405abe3;
        pIVar10 = local_38;
        pIVar19 = local_40;
        pIVar6 = (Il2CppClass *)
                 ClothFactory__GenerateCloth
                           ((UnityEngine_GameObject_o *)local_40,(System_String_o *)local_38,pMVar16);
        material = (UnityEngine_Material_o *)local_48;
        unaff_R12 = pIVar8;
        pIVar20 = (Il2CppObject *)&TypeInfo_ClothFactory;
        if (pIVar6 != (Il2CppClass *)0x0) {
          pIStack_60 = (Il2CppObject *)0x405ac06;
          pIVar10 = MethodInfo_Renderer_GetComponent_Renderer;
          pIVar19 = pIVar6;
          pUVar7 = (UnityEngine_Renderer_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pIVar6,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
          unaff_RBX = pIVar6;
          if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
            pIStack_60 = (Il2CppObject *)0x405ac1c;
            UnityEngine_Renderer__set_material(pUVar7,material,(MethodInfo *)0x0);
            pIStack_60 = (Il2CppObject *)0x405ac2e;
            pIVar10 = MethodInfo_ParentFollow_AddComponent_ParentFollow;
            pIVar19 = pIVar6;
            pIVar8 = (Il2CppClass *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)pIVar6,(MethodInfo_255A020 *)MethodInfo_ParentFollow_AddComponent_ParentFollow);
            if ((Il2CppClass *)reference != (Il2CppClass *)0x0) {
              pIVar10 = (Il2CppClass *)0x0;
              pIStack_60 = (Il2CppObject *)0x405ac44;
              pIVar19 = (Il2CppClass *)reference;
              pIVar9 = (Il2CppClass *)UnityEngine_GameObject__get_transform(reference,(MethodInfo *)0x0);
              unaff_R12 = pIVar8;
              if (pIVar8 != (Il2CppClass *)0x0) {
                pIVar19 = (Il2CppClass *)&(pIVar8->_1).this_arg;
                (pIVar8->_1).this_arg.data = pIVar9;
                pIStack_60 = (Il2CppObject *)0x405ac64;
                pIVar10 = pIVar9;
                il2cpp_runtime_helper_022b4080();
                reference = (UnityEngine_GameObject_o *)pIVar9;
                if (pIVar9 != (Il2CppClass *)0x0) {
                  material = (pIVar8->_1).byval_arg.data;
                  pIVar10 = (Il2CppClass *)0x0;
                  pIStack_60 = (Il2CppObject *)0x405ac7c;
                  pIVar19 = pIVar9;
                  UVar21 = UnityEngine_Transform__get_rotation
                                     ((UnityEngine_Transform_o *)pIVar9,(MethodInfo *)0x0);
                  if ((Il2CppClass *)material != (Il2CppClass *)0x0) {
                    pIVar10 = (Il2CppClass *)0x0;
                    pIStack_60 = (Il2CppObject *)0x405ac8f;
                    UnityEngine_Transform__set_rotation
                              ((UnityEngine_Transform_o *)material,UVar21,(MethodInfo *)0x0);
                    lVar3 = MethodInfo_Void_Add;
                    pIVar19 = local_50;
                    if (local_50 != (Il2CppClass *)0x0) {
                      piVar1 = (int *)((long)&(local_50->_1).namespaze + 4);
                      *piVar1 = *piVar1 + 1;
                      pIVar2 = (InvokerMethod)(local_50->_1).name;
                      if (pIVar2 != (InvokerMethod)0x0) {
                        uVar5 = *(uint *)&(local_50->_1).namespaze;
                        pIVar10 = pIVar6;
                        if (uVar5 < *(uint *)(pIVar2 + 0x18)) {
                          *(uint *)&(local_50->_1).namespaze = uVar5 + 1;
                          *(Il2CppClass **)(pIVar2 + (long)(int)uVar5 * 8 + 0x20) = pIVar6;
                          pIStack_60 = (Il2CppObject *)0x405acdc;
                          il2cpp_runtime_helper_022b4080(pIVar2 + (long)(int)uVar5 * 8 + 0x20);
                        }
                        else {
                          pIStack_60 = (Il2CppObject *)0x405ad3d;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)local_50,
                                     (Il2CppObject *)pIVar6,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                        }
                        pIVar19 = (Il2CppClass *)0x0;
                        if ((System_Collections_Generic_Dictionary_object__object__o *)
                            **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                            (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          pIStack_60 = (Il2CppObject *)0x405ad66;
                          System_Collections_Generic_Dictionary_object__object___set_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,
                                     (Il2CppObject *)local_50,MethodInfo_Void_set_Item);
                          return (UnityEngine_GameObject_o *)pIVar6;
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
    }
  }
label_0405ad78:
  pIStack_60 = (Il2CppObject *)0x405ad7d;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pIVar6 = (Il2CppClass *)&(pIVar19->_1).this_arg;
  (pIVar19->_1).this_arg.data = pIVar10;
  pIStack_78 = (Il2CppClass *)0x405ad97;
  pIVar8 = pIVar10;
  pIStack_68 = unaff_RBX;
  pIStack_60 = pIVar20;
  il2cpp_runtime_helper_022b4080();
  if (pIVar10 != (Il2CppClass *)0x0) {
    pUVar11 = (pIVar19->_1).byval_arg.data;
    pIVar8 = (Il2CppClass *)0x0;
    pIStack_78 = (Il2CppClass *)0x405adaa;
    pIVar6 = pIVar10;
    UVar21 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)pIVar10,(MethodInfo *)0x0);
    pIVar19 = (Il2CppClass *)0x0;
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(pUVar11,UVar21,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  pIStack_78 = (Il2CppClass *)0x405adc5;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pIStack_90 = pIVar10;
  pIStack_88 = unaff_R12;
  pIStack_80 = pIVar19;
  pIStack_78 = (Il2CppClass *)material;
  if (g_data_057ac27c == '\0') {
    pIStack_a0 = (Il2CppClass *)0x405adf3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    g_data_057ac27c = '\x01';
  }
  if (pIVar6 != (Il2CppClass *)0x0) {
    unaff_R12 = (Il2CppClass *)&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
    pIStack_a0 = (Il2CppClass *)0x405ae16;
    pIVar10 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pIVar6,(MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if (pIVar8 != (Il2CppClass *)0x0) {
      pIStack_a0 = (Il2CppClass *)0x405ae2e;
      __this_04 = (UnityEngine_SkinnedMeshRenderer_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pIVar8,(MethodInfo_255A0F0 *)MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
      pIVar19 = pIVar10;
      if (pIVar10 != (Il2CppClass *)0x0) {
        pIStack_a0 = (Il2CppClass *)0x405ae40;
        value = UnityEngine_SkinnedMeshRenderer__get_bones
                          ((UnityEngine_SkinnedMeshRenderer_o *)pIVar10,(MethodInfo *)0x0);
        pIVar6 = (Il2CppClass *)0x0;
        if (__this_04 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          pIStack_a0 = (Il2CppClass *)0x405ae52;
          UnityEngine_SkinnedMeshRenderer__set_bones(__this_04,value,(MethodInfo *)0x0);
          pIStack_a0 = (Il2CppClass *)0x405ae5c;
          pUVar11 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          if (g_data_057a6932 == '\0') {
            pIStack_a0 = (Il2CppClass *)0x405ae74;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
          }
          pIVar6 = (Il2CppClass *)0x0;
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localScale
                      (pUVar11,(UnityEngine_Vector3_o)
                               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                       (MethodInfo *)0x0);
            return extraout_RAX_00;
          }
        }
      }
    }
  }
  pIStack_a0 = (Il2CppClass *)0x405aeb5;
  il2cpp_runtime_helper_022b2c90();
  pIStack_c8 = pIVar6;
  pIStack_c0 = unaff_R12;
  pIStack_b8 = (Il2CppClass *)name;
  pIStack_b0 = pIVar19;
  pIStack_a8 = pIVar8;
  pIStack_a0 = (Il2CppClass *)reference;
  if (g_data_057ac27a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_FindObjectsOfType_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"{0} cached cloths, {1} active cloths, {2} types cached");
    g_data_057ac27a = '\x01';
  }
  uVar25 = 0;
  uVar26 = 0;
  pIVar23 = (Il2CppMethodPointer)0x0;
  pIVar24 = (Il2CppRGCTXData *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_f0,
               (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    pIVar23 = (Il2CppMethodPointer)CONCAT44(auStack_f0._4_4_,auStack_f0._0_4_);
    name = (System_String_o *)0x0;
    pIVar24 = (Il2CppRGCTXData *)auStack_f0._8_8_;
    uVar25 = a_Stack_e0[0]._0_4_;
    uVar26 = a_Stack_e0[0]._4_4_;
    while( true ) {
      __this.fields._version = in_stack_fffffffffffffed8;
      __this.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
      __this.fields._index = in_stack_fffffffffffffedc;
      __this.fields._current.fields.key = (Il2CppObject *)pIVar23;
      __this.fields._current.fields.value = (Il2CppObject *)pIVar24;
      __this.fields._getEnumeratorRetType = uVar25;
      __this.fields._36_4_ = uVar26;
      bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this,(MethodInfo_3251160 *)&stack0xfffffffffffffee0);
      if ((char)bVar4 == '\0') {
        __this_00.fields._version = in_stack_fffffffffffffed8;
        __this_00.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
        __this_00.fields._index = in_stack_fffffffffffffedc;
        __this_00.fields._current.fields.key = (Il2CppObject *)pIVar23;
        __this_00.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_00.fields._getEnumeratorRetType = uVar25;
        __this_00.fields._36_4_ = uVar26;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_00,(MethodInfo_3251280 *)&stack0xfffffffffffffee0);
        goto label_0405b0a2;
      }
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xfffffffffffffee0,MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),pIVar20,MethodInfo_List_1_UnityEngine_GameObject_get_Item);
      if (pIVar20 == (Il2CppObject *)0x0) goto label_0405b1d9;
      name = (System_String_o *)(ulong)(uint)((int)name + *(int *)&pIVar20[1].monitor);
    }
    il2cpp_runtime_helper_022b2c90();
label_0405b1d9:
    il2cpp_runtime_helper_022b2c90();
  }
label_0405b1de:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0405b1e3:
    auVar22 = il2cpp_runtime_helper_022b2ca0();
    if (auVar22._8_4_ != 1) {
label_0405b257:
      __this_02.fields._version = in_stack_fffffffffffffed8;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
      __this_02.fields._index = in_stack_fffffffffffffedc;
      __this_02.fields._current.fields.key = (Il2CppObject *)pIVar23;
      __this_02.fields._current.fields.value = (Il2CppObject *)pIVar24;
      __this_02.fields._getEnumeratorRetType = uVar25;
      __this_02.fields._36_4_ = uVar26;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&stack0xfffffffffffffee0);
      _Unwind_Resume(auVar22._0_8_);
    }
    plVar15 = (long *)__cxa_begin_catch(auVar22._0_8_);
    lVar3 = *plVar15;
    __cxa_end_catch();
    __this_01.fields._version = in_stack_fffffffffffffed8;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
    __this_01.fields._index = in_stack_fffffffffffffedc;
    __this_01.fields._current.fields.key = (Il2CppObject *)pIVar23;
    __this_01.fields._current.fields.value = (Il2CppObject *)pIVar24;
    __this_01.fields._getEnumeratorRetType = uVar25;
    __this_01.fields._36_4_ = uVar26;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251280 *)&stack0xfffffffffffffee0);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0405b257;
    }
label_0405b0a2:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = UnityEngine_Object__FindObjectsOfType_object_(MethodInfo_Cloth_FindObjectsOfType_Cloth);
    if (pSVar12 == (System_Object_array *)0x0) goto label_0405b1de;
    uVar5 = (uint)pSVar12->max_length;
    if (0 < (int)uVar5) {
      uVar17 = 0;
      iVar18 = 0;
      while (uVar17 < uVar5) {
        if ((UnityEngine_Cloth_o *)pSVar12->m_Items[(int)uVar17] == (UnityEngine_Cloth_o *)0x0)
        goto label_0405b1de;
        uVar5 = UnityEngine_Cloth__get_enabled
                          ((UnityEngine_Cloth_o *)pSVar12->m_Items[(int)uVar17],(MethodInfo *)0x0);
        iVar18 = iVar18 + (uVar5 & 0xff);
        uVar17 = uVar17 + 1;
        uVar5 = (uint)pSVar12->max_length;
        if ((int)uVar5 <= (int)uVar17) goto label_0405b114;
      }
      goto label_0405b1e3;
    }
    iVar18 = 0;
label_0405b114:
    auStack_f0._0_4_ = SUB84(name,0);
    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_f0);
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xfffffffffffffedc);
    in_stack_fffffffffffffedc = iVar18;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffedc = iVar18;
    }
    if (((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis),
       __this_05 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(__this_05,MethodInfo_Int32_get_Count);
      arg2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xfffffffffffffed8);
      pSVar14 = System_String__Format_3af7930("{0} cached cloths, {1} active cloths, {2} types cached",pIVar20,pIVar13,arg2,(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)pSVar14;
    }
  } while( true );
}


// ClothFactory$$GetDebugInfo
// il2cpp: System_String_o* ClothFactory__GetDebugInfo (const MethodInfo* method);
// 0x405aec0

System_String_o * ClothFactory__GetDebugInfo(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  System_Object_array *pSVar5;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  Il2CppObject *arg2;
  System_String_o *pSVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  int unaff_R13D;
  undefined1 auVar10 [12];
  undefined8 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff70;
  int in_stack_ffffffffffffff74;
  Il2CppMethodPointer pIVar11;
  Il2CppRGCTXData *pIVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_58 [16];
  _union_231609 a_Stack_48 [3];
  
  if (g_data_057ac27a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_FindObjectsOfType_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"{0} cached cloths, {1} active cloths, {2} types cached");
    g_data_057ac27a = '\x01';
  }
  uVar13 = 0;
  uVar14 = 0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
               (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    pIVar11 = (Il2CppMethodPointer)CONCAT44(auStack_58._4_4_,auStack_58._0_4_);
    unaff_R13D = 0;
    pIVar12 = (Il2CppRGCTXData *)auStack_58._8_8_;
    uVar13 = a_Stack_48[0]._0_4_;
    uVar14 = a_Stack_48[0]._4_4_;
    while( true ) {
      __this.fields._version = in_stack_ffffffffffffff70;
      __this.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
      __this.fields._index = in_stack_ffffffffffffff74;
      __this.fields._current.fields.key = (Il2CppObject *)pIVar11;
      __this.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this.fields._getEnumeratorRetType = uVar13;
      __this.fields._36_4_ = uVar14;
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
      if ((char)bVar2 == '\0') {
        __this_00.fields._version = in_stack_ffffffffffffff70;
        __this_00.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
        __this_00.fields._index = in_stack_ffffffffffffff74;
        __this_00.fields._current.fields.key = (Il2CppObject *)pIVar11;
        __this_00.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_00.fields._getEnumeratorRetType = uVar13;
        __this_00.fields._36_4_ = uVar14;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_00,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
        goto label_0405b0a2;
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),pIVar4,MethodInfo_List_1_UnityEngine_GameObject_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_0405b1d9;
      unaff_R13D = unaff_R13D + *(int *)&pIVar4[1].monitor;
    }
    il2cpp_runtime_helper_022b2c90();
label_0405b1d9:
    il2cpp_runtime_helper_022b2c90();
  }
label_0405b1de:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0405b1e3:
    auVar10 = il2cpp_runtime_helper_022b2ca0();
    if (auVar10._8_4_ != 1) {
label_0405b257:
      __this_02.fields._version = in_stack_ffffffffffffff70;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
      __this_02.fields._index = in_stack_ffffffffffffff74;
      __this_02.fields._current.fields.key = (Il2CppObject *)pIVar11;
      __this_02.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this_02.fields._getEnumeratorRetType = uVar13;
      __this_02.fields._36_4_ = uVar14;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar1 = *plVar7;
    __cxa_end_catch();
    __this_01.fields._version = in_stack_ffffffffffffff70;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
    __this_01.fields._index = in_stack_ffffffffffffff74;
    __this_01.fields._current.fields.key = (Il2CppObject *)pIVar11;
    __this_01.fields._current.fields.value = (Il2CppObject *)pIVar12;
    __this_01.fields._getEnumeratorRetType = uVar13;
    __this_01.fields._36_4_ = uVar14;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_0405b257;
    }
label_0405b0a2:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = UnityEngine_Object__FindObjectsOfType_object_(MethodInfo_Cloth_FindObjectsOfType_Cloth);
    if (pSVar5 == (System_Object_array *)0x0) goto label_0405b1de;
    uVar3 = (uint)pSVar5->max_length;
    if (0 < (int)uVar3) {
      uVar8 = 0;
      iVar9 = 0;
      while (uVar8 < uVar3) {
        if ((UnityEngine_Cloth_o *)pSVar5->m_Items[(int)uVar8] == (UnityEngine_Cloth_o *)0x0)
        goto label_0405b1de;
        uVar3 = UnityEngine_Cloth__get_enabled
                          ((UnityEngine_Cloth_o *)pSVar5->m_Items[(int)uVar8],(MethodInfo *)0x0);
        iVar9 = iVar9 + (uVar3 & 0xff);
        uVar8 = uVar8 + 1;
        uVar3 = (uint)pSVar5->max_length;
        if ((int)uVar3 <= (int)uVar8) goto label_0405b114;
      }
      goto label_0405b1e3;
    }
    iVar9 = 0;
label_0405b114:
    auStack_58._0_4_ = unaff_R13D;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_58);
    arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff74);
    in_stack_ffffffffffffff74 = iVar9;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_ffffffffffffff74 = iVar9;
    }
    if (((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_03 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis),
       __this_03 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(__this_03,MethodInfo_Int32_get_Count);
      arg2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff70);
      pSVar6 = System_String__Format_3af7930("{0} cached cloths, {1} active cloths, {2} types cached",pIVar4,arg1,arg2,(MethodInfo *)0x0);
      return pSVar6;
    }
  } while( true );
}


// ClothFactory$$GetHair
// il2cpp: UnityEngine_GameObject_o* ClothFactory__GetHair (UnityEngine_GameObject_o* reference, System_String_o* name, UnityEngine_Material_o* material, UnityEngine_Color_o color, const MethodInfo* method);
// 0x405b290

UnityEngine_GameObject_o *
ClothFactory__GetHair
          (UnityEngine_GameObject_o *reference,System_String_o *name,UnityEngine_Material_o *material,
          UnityEngine_Color_o color,MethodInfo *method)

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
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Renderer_o *pUVar9;
  UnityEngine_Material_o *pUVar10;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  UnityEngine_GameObject_o *pUVar13;
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
  if (g_data_057ac27b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_AddComponent_ParentFollow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_GetComponent_Cloth);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParentFollow_GetComponent_ParentFollow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac27b = '\x01';
  }
  local_70 = (System_Collections_Generic_List_object__o *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,(Il2CppObject **)&local_70,
                       MethodInfo_Boolean_TryGetValue);
    if ((char)bVar8 == '\0') {
      pMVar14 = extraout_RDX;
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar14 = extraout_RDX_04;
      }
      pUVar13 = ClothFactory__GenerateCloth(reference,name,pMVar14);
      if ((pUVar13 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar9 = (UnityEngine_Renderer_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Renderer_GetComponent_Renderer),
         pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
        UnityEngine_Renderer__set_material(pUVar9,material,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Renderer_GetComponent_Renderer);
        if ((pUVar9 != (UnityEngine_Renderer_o *)0x0) &&
           (pUVar10 = UnityEngine_Renderer__get_material(pUVar9,(MethodInfo *)0x0), auVar7 = local_48,
           auVar6 = local_58, pUVar10 != (UnityEngine_Material_o *)0x0)) {
          value_00.fields.b = (float)local_48._0_4_;
          value_00.fields.a = (float)local_48._4_4_;
          value_00.fields.r = (float)local_58._0_4_;
          value_00.fields.g = (float)local_58._4_4_;
          local_58 = auVar6;
          local_48 = auVar7;
          UnityEngine_Material__set_color(pUVar10,value_00,(MethodInfo *)0x0);
          pIVar11 = UnityEngine_GameObject__AddComponent_object_(pUVar13,MethodInfo_ParentFollow_AddComponent_ParentFollow);
          if ((reference != (UnityEngine_GameObject_o *)0x0) &&
             (pIVar12 = (Il2CppClass *)UnityEngine_GameObject__get_transform(reference,(MethodInfo *)0x0),
             pIVar11 != (Il2CppObject *)0x0)) {
            pIVar11[3].klass = pIVar12;
            il2cpp_runtime_helper_022b4080(pIVar11 + 3);
            if (pIVar12 != (Il2CppClass *)0x0) {
              pIVar3 = pIVar11[2].klass;
              UVar15 = UnityEngine_Transform__get_rotation
                                 ((UnityEngine_Transform_o *)pIVar12,(MethodInfo *)0x0);
              if (pIVar3 != (Il2CppClass *)0x0) {
                UnityEngine_Transform__set_rotation
                          ((UnityEngine_Transform_o *)pIVar3,UVar15,(MethodInfo *)0x0);
                __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
                System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
                lVar5 = MethodInfo_Void_Add;
                if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (__this_00->fields)._items;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    uVar2 = (__this_00->fields)._size;
                    if (uVar2 < (uint)pSVar4->max_length) {
                      (__this_00->fields)._size = uVar2 + 1;
                      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar13;
                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pUVar13);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (__this_00,(Il2CppObject *)pUVar13,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    local_70 = __this_00;
                    if ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__object___Add
                                ((System_Collections_Generic_Dictionary_object__object__o *)
                                 **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),(Il2CppObject *)name,
                                 (Il2CppObject *)__this_00,MethodInfo_Void_Add);
                      return pUVar13;
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
                System_Collections_Generic_List_object___get_Item(local_70,index,MethodInfo_GameObject_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              if ((x == (UnityEngine_Object_o *)0x0) ||
                 (pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)x,MethodInfo_ParentFollow_GetComponent_ParentFollow),
                 pIVar11 == (Il2CppObject *)0x0)) goto label_0405b98a;
              pMVar14 = extraout_RDX_01;
              if (*(char *)&pIVar11[2].monitor == '\0') {
                *(undefined1 *)&pIVar11[2].monitor = 1;
                pUVar9 = (UnityEngine_Renderer_o *)
                         UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponent_Renderer);
                if (pUVar9 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material(pUVar9,local_68,(MethodInfo *)0x0);
                  pUVar9 = (UnityEngine_Renderer_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponent_Renderer);
                  pUVar13 = local_60;
                  if ((pUVar9 != (UnityEngine_Renderer_o *)0x0) &&
                     (pUVar10 = UnityEngine_Renderer__get_material(pUVar9,(MethodInfo *)0x0),
                     auVar7 = local_48, auVar6 = local_58, pUVar10 != (UnityEngine_Material_o *)0x0)) {
                    value.fields.b = (float)local_48._0_4_;
                    value.fields.a = (float)local_48._4_4_;
                    value.fields.r = (float)local_58._0_4_;
                    value.fields.g = (float)local_58._4_4_;
                    local_58 = auVar6;
                    local_48 = auVar7;
                    UnityEngine_Material__set_color(pUVar10,value,(MethodInfo *)0x0);
                    __this = (UnityEngine_Cloth_o *)
                             UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)x,MethodInfo_Cloth_GetComponent_Cloth);
                    if (__this != (UnityEngine_Cloth_o *)0x0) {
                      UnityEngine_Cloth__set_enabled(__this,1,(MethodInfo *)0x0);
                      pUVar9 = (UnityEngine_Renderer_o *)
                               UnityEngine_GameObject__GetComponent_object_
                                         ((UnityEngine_GameObject_o *)x,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                      if (pUVar9 != (UnityEngine_Renderer_o *)0x0) {
                        UnityEngine_Renderer__set_enabled(pUVar9,1,(MethodInfo *)0x0);
                        pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)x,MethodInfo_ParentFollow_GetComponent_ParentFollow);
                        if ((pUVar13 != (UnityEngine_GameObject_o *)0x0) &&
                           (pIVar12 = (Il2CppClass *)
                                      UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0),
                           pIVar11 != (Il2CppObject *)0x0)) {
                          pIVar11[3].klass = pIVar12;
                          il2cpp_runtime_helper_022b4080(pIVar11 + 3);
                          if (pIVar12 != (Il2CppClass *)0x0) {
                            pIVar3 = pIVar11[2].klass;
                            UVar15 = UnityEngine_Transform__get_rotation
                                               ((UnityEngine_Transform_o *)pIVar12,(MethodInfo *)0x0);
                            if (pIVar3 != (Il2CppClass *)0x0) {
                              UnityEngine_Transform__set_rotation
                                        ((UnityEngine_Transform_o *)pIVar3,UVar15,(MethodInfo *)0x0);
                              pMVar14 = extraout_RDX_02;
                              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                                pMVar14 = extraout_RDX_03;
                              }
                              ClothFactory__ReapplyClothBones(pUVar13,(UnityEngine_GameObject_o *)x,pMVar14);
                              return (UnityEngine_GameObject_o *)x;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto label_0405b98a;
              }
            }
            else {
              if (local_70 == (System_Collections_Generic_List_object__o *)0x0) goto label_0405b98a;
              System_Collections_Generic_List_object___RemoveAt(local_70,index,MethodInfo_Void_RemoveAt);
              index = index + -1;
              pMVar14 = extraout_RDX_00;
              if (index < 0) {
                index = 0;
              }
            }
            index = index + 1;
            if (local_70 == (System_Collections_Generic_List_object__o *)0x0) goto label_0405b98a;
          } while (index < (local_70->fields)._size);
        }
        if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar14 = extraout_RDX_05;
        }
        key = local_38;
        pUVar13 = local_60;
        __this_01 = ClothFactory__GenerateCloth(local_60,local_38,pMVar14);
        pUVar10 = local_68;
        if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar9 = (UnityEngine_Renderer_o *)
                     UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Renderer_GetComponent_Renderer),
           pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_material(pUVar9,pUVar10,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Renderer_o *)
                   UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Renderer_GetComponent_Renderer);
          if ((pUVar9 != (UnityEngine_Renderer_o *)0x0) &&
             (pUVar10 = UnityEngine_Renderer__get_material(pUVar9,(MethodInfo *)0x0), auVar7 = local_48,
             auVar6 = local_58, pUVar10 != (UnityEngine_Material_o *)0x0)) {
            value_01.fields.b = (float)local_48._0_4_;
            value_01.fields.a = (float)local_48._4_4_;
            value_01.fields.r = (float)local_58._0_4_;
            value_01.fields.g = (float)local_58._4_4_;
            local_58 = auVar6;
            local_48 = auVar7;
            UnityEngine_Material__set_color(pUVar10,value_01,(MethodInfo *)0x0);
            pIVar11 = UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_ParentFollow_AddComponent_ParentFollow);
            if ((pUVar13 != (UnityEngine_GameObject_o *)0x0) &&
               (pIVar12 = (Il2CppClass *)UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0),
               pIVar11 != (Il2CppObject *)0x0)) {
              pIVar11[3].klass = pIVar12;
              il2cpp_runtime_helper_022b4080(pIVar11 + 3);
              if (pIVar12 != (Il2CppClass *)0x0) {
                pIVar3 = pIVar11[2].klass;
                UVar15 = UnityEngine_Transform__get_rotation
                                   ((UnityEngine_Transform_o *)pIVar12,(MethodInfo *)0x0);
                if ((pIVar3 != (Il2CppClass *)0x0) &&
                   (UnityEngine_Transform__set_rotation
                              ((UnityEngine_Transform_o *)pIVar3,UVar15,(MethodInfo *)0x0),
                   lVar5 = MethodInfo_Void_Add, local_70 != (System_Collections_Generic_List_object__o *)0x0)) {
                  piVar1 = &(local_70->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (local_70->fields)._items;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    uVar2 = (local_70->fields)._size;
                    if (uVar2 < (uint)pSVar4->max_length) {
                      (local_70->fields)._size = uVar2 + 1;
                      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,__this_01);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (local_70,(Il2CppObject *)__this_01,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
                        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__object___set_Item
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
label_0405b98a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac27d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_GameObject);
    g_data_057ac27d = '\x01';
  }
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_GameObject);
  **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) = __this_02;
  pUVar13 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ClothFactory + 0xb8),__this_02);
  return pUVar13;
}


// ClothFactory$$ReapplyClothBones
// il2cpp: void ClothFactory__ReapplyClothBones (UnityEngine_GameObject_o* reference, UnityEngine_GameObject_o* clothObject, const MethodInfo* method);
// 0x405add0

void ClothFactory__ReapplyClothBones
               (UnityEngine_GameObject_o *reference,UnityEngine_GameObject_o *clothObject,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar2;
  uint uVar3;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_SkinnedMeshRenderer_o *__this_04;
  UnityEngine_Transform_array *value;
  UnityEngine_Transform_o *__this_05;
  Il2CppObject *pIVar4;
  System_Object_array *pSVar5;
  Il2CppObject *arg1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Il2CppObject *arg2;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 *unaff_R12;
  int unaff_R13D;
  undefined1 auVar9 [12];
  undefined8 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff48;
  int in_stack_ffffffffffffff4c;
  Il2CppMethodPointer pIVar10;
  Il2CppRGCTXData *pIVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_80 [16];
  _union_231609 local_70 [3];
  UnityEngine_GameObject_o *pUStack_58;
  undefined8 *puStack_50;
  
  if (g_data_057ac27c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    g_data_057ac27c = '\x01';
  }
  if (reference != (UnityEngine_GameObject_o *)0x0) {
    unaff_R12 = &MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
    __this_03 = (UnityEngine_SkinnedMeshRenderer_o *)
                UnityEngine_GameObject__GetComponent_object_(reference,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if ((clothObject != (UnityEngine_GameObject_o *)0x0) &&
       (__this_04 = (UnityEngine_SkinnedMeshRenderer_o *)
                    UnityEngine_GameObject__GetComponent_object_(clothObject,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
       __this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
      value = UnityEngine_SkinnedMeshRenderer__get_bones(__this_03,(MethodInfo *)0x0);
      reference = (UnityEngine_GameObject_o *)0x0;
      if (__this_04 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
        UnityEngine_SkinnedMeshRenderer__set_bones(__this_04,value,(MethodInfo *)0x0);
        __this_05 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        if (g_data_057a6932 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        reference = (UnityEngine_GameObject_o *)0x0;
        if (__this_05 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale
                    (__this_05,
                     (UnityEngine_Vector3_o)
                     *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_58 = reference;
  puStack_50 = unaff_R12;
  if (g_data_057ac27a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Cloth_FindObjectsOfType_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"{0} cached cloths, {1} active cloths, {2} types cached");
    g_data_057ac27a = '\x01';
  }
  uVar12 = 0;
  uVar13 = 0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppRGCTXData *)0x0;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_80,
               (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_List_1);
    pIVar10 = (Il2CppMethodPointer)CONCAT44(local_80._4_4_,local_80._0_4_);
    unaff_R13D = 0;
    pIVar11 = (Il2CppRGCTXData *)local_80._8_8_;
    uVar12 = local_70[0]._0_4_;
    uVar13 = local_70[0]._4_4_;
    while( true ) {
      __this.fields._version = in_stack_ffffffffffffff48;
      __this.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff40;
      __this.fields._index = in_stack_ffffffffffffff4c;
      __this.fields._current.fields.key = (Il2CppObject *)pIVar10;
      __this.fields._current.fields.value = (Il2CppObject *)pIVar11;
      __this.fields._getEnumeratorRetType = uVar12;
      __this.fields._36_4_ = uVar13;
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this,(MethodInfo_3251160 *)&stack0xffffffffffffff50);
      if ((char)bVar2 == '\0') {
        __this_00.fields._version = in_stack_ffffffffffffff48;
        __this_00.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff40;
        __this_00.fields._index = in_stack_ffffffffffffff4c;
        __this_00.fields._current.fields.key = (Il2CppObject *)pIVar10;
        __this_00.fields._current.fields.value = (Il2CppObject *)pIVar11;
        __this_00.fields._getEnumeratorRetType = uVar12;
        __this_00.fields._36_4_ = uVar13;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_00,(MethodInfo_3251280 *)&stack0xffffffffffffff50);
        goto label_0405b0a2;
      }
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff50,MethodInfo_KeyValuePair_2_System_String_List_1_UnityEngine_GameObje);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),pIVar4,MethodInfo_List_1_UnityEngine_GameObject_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_0405b1d9;
      unaff_R13D = unaff_R13D + *(int *)&pIVar4[1].monitor;
    }
    il2cpp_runtime_helper_022b2c90();
label_0405b1d9:
    il2cpp_runtime_helper_022b2c90();
  }
label_0405b1de:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0405b1e3:
    auVar9 = il2cpp_runtime_helper_022b2ca0();
    if (auVar9._8_4_ != 1) {
label_0405b257:
      __this_02.fields._version = in_stack_ffffffffffffff48;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff40;
      __this_02.fields._index = in_stack_ffffffffffffff4c;
      __this_02.fields._current.fields.key = (Il2CppObject *)pIVar10;
      __this_02.fields._current.fields.value = (Il2CppObject *)pIVar11;
      __this_02.fields._getEnumeratorRetType = uVar12;
      __this_02.fields._36_4_ = uVar13;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff50);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_01.fields._version = in_stack_ffffffffffffff48;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff40;
    __this_01.fields._index = in_stack_ffffffffffffff4c;
    __this_01.fields._current.fields.key = (Il2CppObject *)pIVar10;
    __this_01.fields._current.fields.value = (Il2CppObject *)pIVar11;
    __this_01.fields._getEnumeratorRetType = uVar12;
    __this_01.fields._36_4_ = uVar13;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251280 *)&stack0xffffffffffffff50);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_0405b257;
    }
label_0405b0a2:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = UnityEngine_Object__FindObjectsOfType_object_(MethodInfo_Cloth_FindObjectsOfType_Cloth);
    if (pSVar5 == (System_Object_array *)0x0) goto label_0405b1de;
    uVar3 = (uint)pSVar5->max_length;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      iVar8 = 0;
      while (uVar7 < uVar3) {
        if ((UnityEngine_Cloth_o *)pSVar5->m_Items[(int)uVar7] == (UnityEngine_Cloth_o *)0x0)
        goto label_0405b1de;
        uVar3 = UnityEngine_Cloth__get_enabled
                          ((UnityEngine_Cloth_o *)pSVar5->m_Items[(int)uVar7],(MethodInfo *)0x0);
        iVar8 = iVar8 + (uVar3 & 0xff);
        uVar7 = uVar7 + 1;
        uVar3 = (uint)pSVar5->max_length;
        if ((int)uVar3 <= (int)uVar7) goto label_0405b114;
      }
      goto label_0405b1e3;
    }
    iVar8 = 0;
label_0405b114:
    local_80._0_4_ = unaff_R13D;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_80);
    arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff4c);
    in_stack_ffffffffffffff4c = iVar8;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_ffffffffffffff4c = iVar8;
    }
    if (((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ClothFactory + 0xb8) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               **(undefined8 **)(TypeInfo_ClothFactory + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis),
       __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count(__this_06,MethodInfo_Int32_get_Count);
      arg2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff48);
      System_String__Format_3af7930("{0} cached cloths, {1} active cloths, {2} types cached",pIVar4,arg1,arg2,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// ClothFactory$$.cctor
// il2cpp: void ClothFactory___cctor (const MethodInfo* method);
// 0x405b990

void ClothFactory___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ac27d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_GameObject);
    g_data_057ac27d = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_GameObject);
  **(undefined8 **)(TypeInfo_ClothFactory + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ClothFactory + 0xb8),__this);
  return;
}


