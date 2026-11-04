// Type: MapEditor.EditorGizmoIcon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/EditorGizmoIcon.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.EditorGizmoIcon$$Setup
// il2cpp: void MapEditor_EditorGizmoIcon__Setup (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x1821ef390
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ef9e4: mov eax, ecx
// asm:   0x1821ef9e6: unpcklps xmm0, xmm1
// asm:   0x1821ef9e9: jmp 0x1821efa17

void MapEditor_EditorGizmoIcon__Setup(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar3;
  undefined8 uVar4;
  bool bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_SphereCollider_o *pUVar11;
  UnityEngine_Bounds_o *pUVar12;
  UnityEngine_Vector3_o *pUVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Bounds_o local_28;
  
  if (Il2CppMethodInitialized_18434701d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Unlit/Color");
    il2cpp_codegen_initialize_runtime_metadata(&"EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback");
    il2cpp_codegen_initialize_runtime_metadata(&"EditorSelectionCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmos/MissingRenderer");
    Il2CppMethodInitialized_18434701d = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/MissingRenderer",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  (__this->fields)._iconObject = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._iconObject,pUVar6);
  pUVar7 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)"EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback",(MethodInfo *)0x0);
    pUVar6 = UnityEngine_GameObject__CreatePrimitive(0,(MethodInfo *)0x0);
    (__this->fields)._iconObject = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._iconObject,pUVar6);
    pUVar6 = (__this->fields)._iconObject;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1821efaad;
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_SphereCollider);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar7,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._iconObject;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1821efaad;
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1 = (pUVar3->oneVector).fields.x;
    uVar2 = (pUVar3->oneVector).fields.y;
    uVar16._0_4_ = (float)uVar1 * 0.3;
    uVar16._4_4_ = (float)uVar2 * 0.3;
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1821efaad;
    local_38.z = (pUVar3->oneVector).fields.z * 0.3;
    local_38._0_8_ = uVar16;
    UnityEngine_Transform__set_localScale(pUVar8,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._iconObject;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_1821efaad;
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      shader = UnityEngine_Shader__Find("Unlit/Color",(MethodInfo *)0x0);
      pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(pUVar9,shader,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_1821efaad;
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)pUVar7,pUVar9,(MethodInfo *)0x0);
      pUVar9 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar7,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Material_o *)0x0) goto label_1821efaad;
      local_28.fields.m_Center.fields.x = 1.0;
      local_28.fields.m_Center.fields.y = 1.0;
      local_28.fields.m_Center.fields.z = 0.0;
      local_28.fields.m_Extents.fields.x = 0.7;
      UnityEngine_Material__set_color(pUVar9,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    }
  }
  pUVar6 = (__this->fields)._iconObject;
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar8,pUVar10,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._iconObject;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_38.x = (pUVar3->zeroVector).fields.x;
          local_38.y = (pUVar3->zeroVector).fields.y;
          local_38.z = (pUVar3->zeroVector).fields.z;
          UnityEngine_Transform__set_localPosition
                    (pUVar8,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
          pUVar6 = (__this->fields)._iconObject;
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_38.x = (pUVar3->oneVector).fields.x;
              local_38.y = (pUVar3->oneVector).fields.y;
              local_38.z = (pUVar3->oneVector).fields.z;
              UnityEngine_Transform__set_localScale
                        (pUVar8,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
              pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor(pUVar6,"EditorSelectionCollider",(MethodInfo *)0x0);
              (__this->fields)._colliderObject = pUVar6;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._colliderObject,pUVar6);
              pUVar6 = (__this->fields)._colliderObject;
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_2f5a7e0(pUVar8,pUVar10,false,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._colliderObject;
                  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                  }
                  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__set_layer
                              (pUVar6,TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject,
                               (MethodInfo *)0x0);
                    pUVar6 = (__this->fields)._colliderObject;
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                          (pUVar6,(MethodInfo_6F4D60 *)
                                                  MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider
                                          );
                      (__this->fields)._collider = pUVar11;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._collider,pUVar11);
                      pUVar6 = (__this->fields)._iconObject;
                      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar7 = (UnityEngine_Object_o *)
                                 UnityEngine_GameObject__GetComponentInChildren_object_
                                           (pUVar6,(MethodInfo_6F5040 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer
                                           );
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar5 = UnityEngine_Object__op_Inequality
                                          (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (bVar5) {
                          pUVar8 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_1821efaad;
                          pUVar12 = UnityEngine_Renderer__get_bounds
                                              (&local_28,(UnityEngine_Renderer_o *)pUVar7,(MethodInfo *)0x0);
                          local_28.fields.m_Extents.fields.y = (pUVar12->fields).m_Extents.fields.y;
                          local_28.fields.m_Extents.fields.z = (pUVar12->fields).m_Extents.fields.z;
                          uVar4._0_4_ = (pUVar12->fields).m_Center.fields.x;
                          uVar4._4_4_ = (pUVar12->fields).m_Center.fields.y;
                          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1821efaad;
                          local_38._0_8_ = uVar4;
                          local_38.z = (pUVar12->fields).m_Center.fields.z;
                          pUVar13 = UnityEngine_Transform__InverseTransformPoint
                                              ((UnityEngine_Vector3_o *)&local_28,pUVar8,
                                               (UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                          uVar15._0_4_ = (pUVar13->fields).x;
                          uVar15._4_4_ = (pUVar13->fields).y;
                          fVar14 = (pUVar13->fields).z;
                        }
                        else {
                          if (Il2CppMethodInitialized_18433dbea == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433dbea = '\x01';
                          }
                          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
                          uVar15._0_4_ = (pUVar3->zeroVector).fields.x;
                          uVar15._4_4_ = (pUVar3->zeroVector).fields.y;
                          fVar14 = (pUVar3->zeroVector).fields.z;
                        }
                        pUVar11 = (__this->fields)._collider;
                        local_38._0_8_ = uVar15;
                        if ((((0x7f800000 < (uint)ABS((float)uVar15)) || (ABS((float)uVar15) == INFINITY)) ||
                            (local_38.y = SUB84(uVar15,4), 0x7f800000 < (uint)ABS(local_38.y))) ||
                           (((ABS(local_38.y) == INFINITY || (0x7f800000 < (uint)ABS(fVar14))) ||
                            (ABS(fVar14) == INFINITY)))) {
                          if (Il2CppMethodInitialized_18433dbea == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433dbea = '\x01';
                          }
                          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
                          uVar15._0_4_ = (pUVar3->zeroVector).fields.x;
                          uVar15._4_4_ = (pUVar3->zeroVector).fields.y;
                          fVar14 = (pUVar3->zeroVector).fields.z;
                        }
                        if (pUVar11 != (UnityEngine_SphereCollider_o *)0x0) {
                          local_38._0_8_ = uVar15;
                          local_38.z = fVar14;
                          UnityEngine_SphereCollider__set_center
                                    (pUVar11,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                          pUVar11 = (__this->fields)._collider;
                          if (pUVar11 != (UnityEngine_SphereCollider_o *)0x0) {
                            UnityEngine_SphereCollider__set_radius(pUVar11,1.0,(MethodInfo *)0x0);
                            pUVar6 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                            }
                            if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__set_layer
                                        (pUVar6,TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject,
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
        }
      }
    }
  }
label_1821efaad:
  ThrowNullReferenceException();
}


// MapEditor.EditorGizmoIcon$$LateUpdate
// il2cpp: void MapEditor_EditorGizmoIcon__LateUpdate (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x1821ef190

void MapEditor_EditorGizmoIcon__LateUpdate(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  Utility_BaseComponentCache_o *pUVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  
  if (Il2CppMethodInitialized_18434701e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_18434701e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._iconObject;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if (((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
            (pUVar3 = (pCVar1->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
           (pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__LookAt(pUVar5,(pUVar3->fields).Transform,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._iconObject;
          if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__Rotate_2f59e60(pUVar5,0.0,180.0,0.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// MapEditor.EditorGizmoIcon$$OnDestroy
// il2cpp: void MapEditor_EditorGizmoIcon__OnDestroy (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x1821ef2c0

void MapEditor_EditorGizmoIcon__OnDestroy(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434701f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434701f = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._colliderObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._colliderObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// MapEditor.EditorGizmoIcon$$IsFinite
// il2cpp: bool MapEditor_EditorGizmoIcon__IsFinite (UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x1820fdce0

bool
MapEditor_EditorGizmoIcon__IsFinite_20fdce0(UnityEngine_Vector3_o value, MethodInfo* method)

{
  float fVar1;
  
  fVar1 = (value->fields).x;
  if (((((uint)ABS(fVar1) < 0x7f800001) && (ABS(fVar1) != INFINITY)) &&
      (fVar1 = (value->fields).y, (uint)ABS(fVar1) < 0x7f800001)) &&
     ((ABS(fVar1) != INFINITY && (fVar1 = (value->fields).z, (uint)ABS(fVar1) < 0x7f800001)))) {
    return ABS(fVar1) != INFINITY;
  }
  return false;
}


// MapEditor.EditorGizmoIcon$$IsFinite
// il2cpp: bool MapEditor_EditorGizmoIcon__IsFinite (float value, const MethodInfo* method);
// 0x181eac170

bool
MapEditor_EditorGizmoIcon__IsFinite(float value, MethodInfo* method)

{
  if (0x7f800000 < (uint)ABS(value)) {
    return false;
  }
  return ABS(value) != INFINITY;
}


// MapEditor.EditorGizmoIcon$$.ctor
// il2cpp: void MapEditor_EditorGizmoIcon___ctor (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x180528540

void
MapEditor_EditorGizmoIcon___ctor(MapEditor_EditorGizmoIcon_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


