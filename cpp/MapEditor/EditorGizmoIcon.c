// Type: MapEditor.EditorGizmoIcon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/EditorGizmoIcon.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.EditorGizmoIcon$$Setup
// il2cpp: void MapEditor_EditorGizmoIcon__Setup (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x5c92460

void MapEditor_EditorGizmoIcon__Setup(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_SphereCollider_o **targetAddress;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  System_String_o *path;
  bool bVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_SphereCollider_o *pUVar14;
  UnityEngine_Vector3_StaticFields *extraout_RAX;
  UnityEngine_Vector3_StaticFields *pUVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o local_48;
  
  if (Il2CppMethodInitialized_075479e2 == '\0') {
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
    Il2CppMethodInitialized_075479e2 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar9 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/MissingRenderer",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  ppUVar1 = &(__this->fields)._iconObject;
  (__this->fields)._iconObject = pUVar9;
  Il2CppCodeGenWriteBarrier(ppUVar1);
  pUVar10 = (UnityEngine_Object_o *)(__this->fields)._iconObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)"EditorGizmoIcon: Could not load Gizmos/MissingRenderer prefab - creating fallback",(MethodInfo *)0x0);
    pUVar9 = UnityEngine_GameObject__CreatePrimitive(0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar9;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c92acf;
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_GameObject__GetComponent_object_
                        (*ppUVar1,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_SphereCollider);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_6921750(pUVar10,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c92acf;
    pUVar11 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05c92acf;
    pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
    UVar20.fields.z = (pUVar15->oneVector).fields.z * 0.3;
    uVar2 = (pUVar15->oneVector).fields.x;
    uVar5 = (pUVar15->oneVector).fields.y;
    UVar20.fields.x = (float)uVar2 * 0.3;
    UVar20.fields.y = (float)uVar5 * 0.3;
    UnityEngine_Transform__set_localScale(pUVar11,UVar20,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c92acf;
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_GameObject__GetComponent_object_
                        (*ppUVar1,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    bVar8 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      shader = UnityEngine_Shader__Find("Unlit/Color",(MethodInfo *)0x0);
      pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(pUVar12,shader,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Object_o *)0x0) goto label_05c92acf;
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar10,pUVar12,(MethodInfo *)0x0);
      pUVar12 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar10,(MethodInfo *)0x0);
      if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_05c92acf;
      value.fields.b = 0.0;
      value.fields.a = 0.7;
      value.fields.r = 1.0;
      value.fields.g = 1.0;
      UnityEngine_Material__set_color(pUVar12,value,(MethodInfo *)0x0);
    }
  }
  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar11 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
    pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar11,pUVar13,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar11 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e4b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b6 = '\x01';
        }
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar11,(UnityEngine_Vector3_o)
                             (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar11 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
            }
            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar11,(UnityEngine_Vector3_o)
                                 (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                         (MethodInfo *)0x0);
              pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor(pUVar9,"EditorSelectionCollider",(MethodInfo *)0x0);
              ppUVar1 = &(__this->fields)._colliderObject;
              (__this->fields)._colliderObject = pUVar9;
              Il2CppCodeGenWriteBarrier(ppUVar1);
              pUVar9 = (__this->fields)._colliderObject;
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                pUVar11 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                pUVar13 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_692d510(pUVar11,pUVar13,false,(MethodInfo *)0x0);
                  pUVar9 = *ppUVar1;
                  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                  }
                  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__set_layer
                              (pUVar9,TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject,
                               (MethodInfo *)0x0);
                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar14 = UnityEngine_GameObject__AddComponent_object_
                                          (*ppUVar1,(MethodInfo_353B6A0 *)
                                                    MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider
                                          );
                      targetAddress = &(__this->fields)._collider;
                      (__this->fields)._collider = pUVar14;
                      Il2CppCodeGenWriteBarrier(targetAddress);
                      pUVar9 = (__this->fields)._iconObject;
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar10 = (UnityEngine_Object_o *)
                                  UnityEngine_GameObject__GetComponentInChildren_object_
                                            (pUVar9,(MethodInfo_353B8D0 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer
                                            );
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar8 = UnityEngine_Object__op_Inequality
                                          (pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (bVar8) {
                          pUVar11 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          if (pUVar10 == (UnityEngine_Object_o *)0x0) goto label_05c92acf;
                          UnityEngine_Renderer__get_bounds
                                    (&local_48,(UnityEngine_Renderer_o *)pUVar10,(MethodInfo *)0x0);
                          if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05c92acf;
                          UVar20 = UnityEngine_Transform__InverseTransformPoint
                                             (pUVar11,local_48.fields.m_Center,(MethodInfo *)0x0);
                          UVar20.fields.z = UVar20.fields.z;
                          auVar16._0_8_ = UVar20.fields._0_8_;
                          auVar16._8_8_ = extraout_XMM0_Qb;
                          pUVar15 = extraout_RAX;
                        }
                        else {
                          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_0753e4b6 = '\x01';
                          }
                          pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
                          uVar3 = (pUVar15->zeroVector).fields.x;
                          uVar6 = (pUVar15->zeroVector).fields.y;
                          auVar16._4_4_ = uVar6;
                          auVar16._0_4_ = uVar3;
                          auVar16._8_8_ = 0;
                          UVar20.fields.z = (pUVar15->zeroVector).fields.z;
                        }
                        pUVar14 = *targetAddress;
                        iVar18 = -(uint)(SUB164(auVar16 & _DAT_01008860,0) == (int)g_data_01008860);
                        iVar19 = -(uint)(SUB164(auVar16 & _DAT_01008860,4) == g_data_01008860._4_4_);
                        auVar17._4_4_ = iVar18;
                        auVar17._0_4_ = iVar18;
                        auVar17._8_4_ = iVar19;
                        auVar17._12_4_ = iVar19;
                        iVar18 = movmskpd((int)pUVar15,auVar17);
                        if ((iVar18 != 0) || ((~(uint)UVar20.fields.z & 0x7f800000) == 0)) {
                          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_0753e4b6 = '\x01';
                          }
                          pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
                          uVar4 = (pUVar15->zeroVector).fields.x;
                          uVar7 = (pUVar15->zeroVector).fields.y;
                          auVar16._4_4_ = uVar7;
                          auVar16._0_4_ = uVar4;
                          auVar16._8_8_ = 0;
                          UVar20.fields.z = (pUVar15->zeroVector).fields.z;
                        }
                        if (pUVar14 != (UnityEngine_SphereCollider_o *)0x0) {
                          value_00.fields._0_8_ = auVar16._0_8_;
                          value_00.fields.z = UVar20.fields.z;
                          UnityEngine_SphereCollider__set_center(pUVar14,value_00,(MethodInfo *)0x0);
                          if (*targetAddress != (UnityEngine_SphereCollider_o *)0x0) {
                            UnityEngine_SphereCollider__set_radius(*targetAddress,1.0,(MethodInfo *)0x0);
                            pUVar9 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                            }
                            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__set_layer
                                        (pUVar9,TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject,
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
label_05c92acf:
  ThrowNullReferenceException();
}


// MapEditor.EditorGizmoIcon$$LateUpdate
// il2cpp: void MapEditor_EditorGizmoIcon__LateUpdate (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x5c92b10

void MapEditor_EditorGizmoIcon__LateUpdate(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  Utility_BaseComponentCache_o *pUVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  
  if (Il2CppMethodInitialized_075479e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075479e3 = '\x01';
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
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__Rotate_692dd90(pUVar5,0.0,180.0,0.0,(MethodInfo *)0x0);
              return;
            }
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
// 0x5c92c40

void MapEditor_EditorGizmoIcon__OnDestroy(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075479e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479e4 = '\x01';
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
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
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
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// MapEditor.EditorGizmoIcon$$IsFinite
// il2cpp: bool MapEditor_EditorGizmoIcon__IsFinite (UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5c92ae0

bool MapEditor_EditorGizmoIcon__IsFinite(UnityEngine_Vector3_o value,MethodInfo *method)

{
  undefined4 in_EAX;
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  int iVar3;
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = value.fields._0_8_;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar2._0_4_ = -(uint)(SUB164(auVar1 & _DAT_01008860,0) == (int)g_data_01008860);
  iVar3 = -(uint)(SUB164(auVar1 & _DAT_01008860,4) == g_data_01008860._4_4_);
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_4_ = iVar3;
  auVar2._12_4_ = iVar3;
  iVar3 = movmskpd(in_EAX,auVar2);
  if (iVar3 == 0) {
    return (~(uint)value.fields.z & 0x7f800000) != 0;
  }
  return false;
}


// MapEditor.EditorGizmoIcon$$IsFinite
// il2cpp: bool MapEditor_EditorGizmoIcon__IsFinite (float value, const MethodInfo* method);
// 0x5c92d00

bool MapEditor_EditorGizmoIcon__IsFinite_5b92d00(float value,MethodInfo *method)

{
  return (~(uint)value & 0x7f800000) != 0;
}


// MapEditor.EditorGizmoIcon$$.ctor
// il2cpp: void MapEditor_EditorGizmoIcon___ctor (MapEditor_EditorGizmoIcon_o* __this, const MethodInfo* method);
// 0x5c92d10

void MapEditor_EditorGizmoIcon___ctor(MapEditor_EditorGizmoIcon_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


