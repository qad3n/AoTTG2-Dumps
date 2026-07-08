// Type: MapEditor.EditorGizmoIcon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/EditorGizmoIcon.cs
// Prior source: NEW in this update
// --------------------------------

// MapEditor.EditorGizmoIcon$$Setup
// il2cpp: void MapEditor_EditorGizmoIcon__Setup (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x4047080

void MapEditor_EditorGizmoIcon__Setup(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  undefined8 uVar2;
  System_String_o *path;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Transform_o *p;
  UnityEngine_SphereCollider_o *pUVar8;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o value_00;
  
  if (DAT_057043ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Unlit/Color");
    il2cpp_init_method_metadata(&"EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback");
    il2cpp_init_method_metadata(&"Gizmos/MissingRenderer");
    DAT_057043ef = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,"Gizmos/MissingRenderer",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  ppUVar1 = &(__this->fields)._iconObject;
  (__this->fields)._iconObject = pUVar4;
  il2cpp_runtime_glue(ppUVar1);
  pUVar5 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning("EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback",(MethodInfo *)0x0);
    pUVar4 = UnityEngine_GameObject__CreatePrimitive(0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar4;
    il2cpp_runtime_glue(ppUVar1,pUVar4);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_040474f1;
    pUVar5 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_SphereCollider_GetComponent_SphereCollider);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar5,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_040474f1;
    pUVar6 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040474f1;
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    value.fields.x = (float)uVar2 * 0.3;
    value.fields.y = (float)((ulong)uVar2 >> 0x20) * 0.3;
    value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.3;
    UnityEngine_Transform__set_localScale(pUVar6,value,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_040474f1;
    pUVar5 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_Renderer_GetComponent_Renderer);
    bVar3 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      shader = UnityEngine_Shader__Find("Unlit/Color",(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor(pUVar7,shader,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Object_o *)0x0) goto LAB_040474f1;
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar5,pUVar7,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Renderer__get_material
                         ((UnityEngine_Renderer_o *)pUVar5,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Material_o *)0x0) goto LAB_040474f1;
      value_00.fields.b = 0.0;
      value_00.fields.a = 0.7;
      value_00.fields.r = 1.0;
      value_00.fields.g = 1.0;
      UnityEngine_Material__set_color(pUVar7,value_00,(MethodInfo *)0x0);
    }
  }
  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar6,p,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar6,(UnityEngine_Vector3_o)
                            **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                    );
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
            }
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar6,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)
                                 (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pUVar8 = (UnityEngine_SphereCollider_o *)
                         UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_SphereCollider_AddComponent_SphereCollider);
                (__this->fields)._collider = pUVar8;
                il2cpp_runtime_glue(&(__this->fields)._collider);
                pUVar8 = (__this->fields)._collider;
                if (pUVar8 != (UnityEngine_SphereCollider_o *)0x0) {
                  UnityEngine_SphereCollider__set_radius(pUVar8,0.5,(MethodInfo *)0x0);
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__set_layer
                              (pUVar4,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40),
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
LAB_040474f1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.EditorGizmoIcon$$LateUpdate
// il2cpp: void MapEditor_EditorGizmoIcon__LateUpdate (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x4047500

void MapEditor_EditorGizmoIcon__LateUpdate(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  long lVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  
  if (DAT_057043f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057043f0 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar2 = (__this->fields)._iconObject;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) &&
           (pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__LookAt
                    (pUVar5,*(UnityEngine_Transform_o **)(lVar3 + 0x10),(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._iconObject;
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__Rotate(pUVar5,0.0,180.0,0.0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// MapEditor.EditorGizmoIcon$$OnDestroy
// il2cpp: void MapEditor_EditorGizmoIcon__OnDestroy (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x4047630

void MapEditor_EditorGizmoIcon__OnDestroy(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057043f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043f1 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// MapEditor.EditorGizmoIcon$$.ctor
// il2cpp: void MapEditor_EditorGizmoIcon___ctor (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x40476b0

void MapEditor_EditorGizmoIcon___ctor(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


