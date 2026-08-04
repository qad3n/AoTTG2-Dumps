// Type: MapEditor.EditorGizmoIcon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/EditorGizmoIcon.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.EditorGizmoIcon$$Setup
// il2cpp: void MapEditor_EditorGizmoIcon__Setup (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x433bec0

void MapEditor_EditorGizmoIcon__Setup(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_SphereCollider_o **ppUVar2;
  undefined8 uVar3;
  System_String_o *path;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  MapEditor_EditorGizmoIcon_o *pMVar9;
  UnityEngine_Shader_o *shader;
  MapEditor_EditorGizmoIcon_o *pMVar10;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Transform_o *p;
  UnityEngine_SphereCollider_o *pUVar11;
  MapEditor_EditorGizmoIcon_o *__this_01;
  MapEditor_EditorGizmoIcon_o *pMVar12;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_Fields value_01;
  UnityEngine_Bounds_o local_48;
  
  pMVar12 = (MapEditor_EditorGizmoIcon_o *)&local_48;
  if (g_data_057ae0b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Unlit/Color");
    il2cpp_runtime_helper_023445d0(&"EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback");
    il2cpp_runtime_helper_023445d0(&"Gizmos/MissingRenderer");
    g_data_057ae0b5 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Gizmos/MissingRenderer",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  ppUVar1 = &(__this->fields)._iconObject;
  (__this->fields)._iconObject = pUVar6;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar7 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogWarning("EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback",(MethodInfo *)0x0);
    pUVar6 = UnityEngine_GameObject__CreatePrimitive(0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar6;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    __this_01 = (MapEditor_EditorGizmoIcon_o *)0x0;
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_0433c476;
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(*ppUVar1,MethodInfo_SphereCollider_GetComponent_SphereCollider);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar7,(MethodInfo *)0x0);
    __this_01 = (MapEditor_EditorGizmoIcon_o *)*ppUVar1;
    if (__this_01 == (MapEditor_EditorGizmoIcon_o *)0x0) goto label_0433c476;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      __this_01 = (MapEditor_EditorGizmoIcon_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_0433c476;
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    value_00.fields.x = (float)uVar3 * 0.3;
    value_00.fields.y = (float)((ulong)uVar3 >> 0x20) * 0.3;
    value_00.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.3;
    UnityEngine_Transform__set_localScale(pUVar8,value_00,(MethodInfo *)0x0);
    __this_01 = (MapEditor_EditorGizmoIcon_o *)0x0;
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_0433c476;
    pMVar9 = (MapEditor_EditorGizmoIcon_o *)
             UnityEngine_GameObject__GetComponent_object_(*ppUVar1,MethodInfo_Renderer_GetComponent_Renderer);
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      shader = UnityEngine_Shader__Find("Unlit/Color",(MethodInfo *)0x0);
      pMVar10 = (MapEditor_EditorGizmoIcon_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      __this_01 = pMVar10;
      UnityEngine_Material___ctor((UnityEngine_Material_o *)pMVar10,shader,(MethodInfo *)0x0);
      if (pMVar9 == (MapEditor_EditorGizmoIcon_o *)0x0) goto label_0433c476;
      UnityEngine_Renderer__set_material
                ((UnityEngine_Renderer_o *)pMVar9,(UnityEngine_Material_o *)pMVar10,(MethodInfo *)0x0);
      __this_00 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pMVar9,(MethodInfo *)0x0);
      __this_01 = pMVar9;
      if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_0433c476;
      value.fields.b = 0.0;
      value.fields.a = 0.7;
      value.fields.r = 1.0;
      value.fields.g = 1.0;
      UnityEngine_Material__set_color(__this_00,value,(MethodInfo *)0x0);
    }
  }
  __this_01 = (MapEditor_EditorGizmoIcon_o *)0x0;
  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    __this_01 = __this;
    p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar8,p,(MethodInfo *)0x0);
      __this_01 = (MapEditor_EditorGizmoIcon_o *)*ppUVar1;
      if (__this_01 != (MapEditor_EditorGizmoIcon_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          __this_01 = (MapEditor_EditorGizmoIcon_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar8,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                     (MethodInfo *)0x0);
          __this_01 = (MapEditor_EditorGizmoIcon_o *)*ppUVar1;
          if (__this_01 != (MapEditor_EditorGizmoIcon_o *)0x0) {
            pUVar8 = UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
            if (g_data_057a6932 == '\0') {
              __this_01 = (MapEditor_EditorGizmoIcon_o *)&TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
            }
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar8,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                         (MethodInfo *)0x0);
              __this_01 = __this;
              pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar11 = (UnityEngine_SphereCollider_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_SphereCollider_GetComponent_SphereCollider);
                ppUVar2 = &(__this->fields)._collider;
                (__this->fields)._collider = pUVar11;
                il2cpp_runtime_helper_022b4080(ppUVar2);
                pUVar7 = (UnityEngine_Object_o *)(__this->fields)._collider;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar5 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  __this_01 = __this;
                  pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_0433c476;
                  pUVar11 = (UnityEngine_SphereCollider_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_SphereCollider_AddComponent_SphereCollider);
                  *ppUVar2 = pUVar11;
                  il2cpp_runtime_helper_022b4080(ppUVar2);
                }
                __this_01 = (MapEditor_EditorGizmoIcon_o *)0x0;
                if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pMVar9 = (MapEditor_EditorGizmoIcon_o *)
                           UnityEngine_GameObject__GetComponentInChildren_object_(*ppUVar1,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_01 = pMVar9;
                  bVar5 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  pUVar11 = *ppUVar2;
                  if ((char)bVar5 == '\0') {
                    if (g_data_057a65d5 == '\0') {
                      __this_01 = (MapEditor_EditorGizmoIcon_o *)&TypeInfo_Vector3;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a65d5 = '\x01';
                    }
                    if (pUVar11 == (UnityEngine_SphereCollider_o *)0x0) goto label_0433c476;
                    value_01 = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
                  }
                  else {
                    __this_01 = __this;
                    pMVar10 = (MapEditor_EditorGizmoIcon_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    if (((pMVar9 == (MapEditor_EditorGizmoIcon_o *)0x0) ||
                        (UnityEngine_Renderer__get_bounds
                                   (&local_48,(UnityEngine_Renderer_o *)pMVar9,(MethodInfo *)0x0),
                        __this_01 = pMVar12, pMVar10 == (MapEditor_EditorGizmoIcon_o *)0x0)) ||
                       (value_01 = (UnityEngine_Vector3_Fields)
                                   UnityEngine_Transform__InverseTransformPoint
                                             ((UnityEngine_Transform_o *)pMVar10,local_48.fields.m_Center,
                                              (MethodInfo *)0x0), __this_01 = pMVar10,
                       pUVar11 == (UnityEngine_SphereCollider_o *)0x0)) goto label_0433c476;
                  }
                  UnityEngine_SphereCollider__set_center
                            (pUVar11,(UnityEngine_Vector3_o)value_01,(MethodInfo *)0x0);
                  __this_01 = (MapEditor_EditorGizmoIcon_o *)0x0;
                  if (*ppUVar2 != (UnityEngine_SphereCollider_o *)0x0) {
                    UnityEngine_SphereCollider__set_radius(*ppUVar2,1.0,(MethodInfo *)0x0);
                    pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    __this_01 = TypeInfo_PhysicsLayer;
                    if (*(int *)((long)&TypeInfo_PhysicsLayer[4].fields._iconObject + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__set_layer
                                (pUVar6,(int32_t)TypeInfo_PhysicsLayer[3].fields._collider[2].fields.m_CachedPtr,
                                 (MethodInfo *)0x0);
                      return;
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
label_0433c476:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae0b6 = '\x01';
  }
  pUVar7 = (UnityEngine_Object_o *)(__this_01->fields)._iconObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar6 = (__this_01->fields)._iconObject;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) &&
           (pUVar8 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__LookAt(pUVar8,*(UnityEngine_Transform_o **)(lVar4 + 0x10),(MethodInfo *)0x0);
          pUVar6 = (__this_01->fields)._iconObject;
          if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__Rotate_4e0a530(pUVar8,0.0,180.0,0.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae0b7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae0b7 = '\x01';
      }
      pUVar7 = pUVar6[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      pUVar7 = pUVar6[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// MapEditor.EditorGizmoIcon$$LateUpdate
// il2cpp: void MapEditor_EditorGizmoIcon__LateUpdate (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x433c480

void MapEditor_EditorGizmoIcon__LateUpdate(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  
  if (g_data_057ae0b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae0b6 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_00 = (__this->fields)._iconObject;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
           (pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__LookAt(pUVar4,*(UnityEngine_Transform_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
          __this_00 = (__this->fields)._iconObject;
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__Rotate_4e0a530(pUVar4,0.0,180.0,0.0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae0b7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae0b7 = '\x01';
      }
      pUVar1 = __this_00[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar1 = __this_00[1].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  return;
}


// MapEditor.EditorGizmoIcon$$OnDestroy
// il2cpp: void MapEditor_EditorGizmoIcon__OnDestroy (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x433c5b0

void MapEditor_EditorGizmoIcon__OnDestroy(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae0b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0b7 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// MapEditor.EditorGizmoIcon$$.ctor
// il2cpp: void MapEditor_EditorGizmoIcon___ctor (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x433c630

void MapEditor_EditorGizmoIcon___ctor(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


