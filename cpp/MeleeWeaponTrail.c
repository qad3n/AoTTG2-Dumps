// Type: MeleeWeaponTrail
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MeleeWeaponTrail.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs
// --------------------------------

// MeleeWeaponTrail.Point$$.ctor
// il2cpp: void MeleeWeaponTrail_Point___ctor (MeleeWeaponTrail_Point_o* __this, const MethodInfo* method);
// 0x18054c890

void
MeleeWeaponTrail_Point___ctor(MeleeWeaponTrail_Point_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$set_Emit
// il2cpp: void MeleeWeaponTrail__set_Emit (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x18138baa0

void
MeleeWeaponTrail__set_Emit(MeleeWeaponTrail_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._emit = value;
  return;
}


// MeleeWeaponTrail$$set_Use
// il2cpp: void MeleeWeaponTrail__set_Use (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x181991eb0

void
MeleeWeaponTrail__set_Use(MeleeWeaponTrail_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._use = value;
  return;
}


// MeleeWeaponTrail$$Start
// il2cpp: void MeleeWeaponTrail__Start (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x181da4200

void MeleeWeaponTrail__Start(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  UnityEngine_Object_o *__this_00;
  float fVar6;
  Il2CppType *handle;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  System_Type_o *pSVar10;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Mesh_o *__this_02;
  System_String_o *pSVar11;
  UnityEngine_MeshFilter_o *__this_03;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_1843448d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&"TrailMesh");
    il2cpp_codegen_initialize_runtime_metadata(&"Trail");
    Il2CppMethodInitialized_1843448d7 = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_18,pUVar7,(MethodInfo *)0x0);
    fVar3 = (pUVar8->fields).z;
    fVar6 = (pUVar8->fields).y;
    (__this->fields)._lastPosition.fields.x = (pUVar8->fields).x;
    (__this->fields)._lastPosition.fields.y = fVar6;
    (__this->fields)._lastPosition.fields.z = fVar3;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(pUVar9,"Trail",(MethodInfo *)0x0);
    (__this->fields)._trailObject = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._trailObject,pUVar9);
    pUVar9 = (__this->fields)._trailObject;
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_parent(pUVar7,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
        pUVar9 = (__this->fields)._trailObject;
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
            local_18.x = (pUVar4->zeroVector).fields.x;
            local_18.y = (pUVar4->zeroVector).fields.y;
            local_18.z = (pUVar4->zeroVector).fields.z;
            UnityEngine_Transform__set_position(pUVar7,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
            pUVar9 = (__this->fields)._trailObject;
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433de5b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                Il2CppMethodInitialized_18433de5b = '\x01';
              }
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
                local_18.x = (pUVar5->identityQuaternion).fields.x;
                local_18.y = (pUVar5->identityQuaternion).fields.y;
                local_18.z = (pUVar5->identityQuaternion).fields.z;
                local_18.w = (pUVar5->identityQuaternion).fields.w;
                UnityEngine_Transform__set_rotation
                          (pUVar7,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
                pUVar9 = (__this->fields)._trailObject;
                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar7 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_18433dbeb == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_18433dbeb = '\x01';
                  }
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                    local_18.x = (pUVar4->oneVector).fields.x;
                    local_18.y = (pUVar4->oneVector).fields.y;
                    local_18.z = (pUVar4->oneVector).fields.z;
                    UnityEngine_Transform__set_localScale
                              (pUVar7,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
                    handle = TypeRef_UnityEngine_MeshFilter;
                    pUVar9 = (__this->fields)._trailObject;
                    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
                    }
                    pSVar10 = System_Type__GetTypeFromHandle
                                        ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__AddComponent(pUVar9,pSVar10,(MethodInfo *)0x0);
                      pUVar9 = (__this->fields)._trailObject;
                      pSVar10 = System_Type__GetTypeFromHandle
                                          ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_MeshRenderer,
                                           (MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__AddComponent(pUVar9,pSVar10,(MethodInfo *)0x0);
                        pUVar9 = (__this->fields)._trailObject;
                        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                                (pUVar9,(MethodInfo_6F5650 *)
                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Renderer
                                                );
                          if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_sharedMaterial
                                      (__this_01,(__this->fields)._material,(MethodInfo *)0x0);
                            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
                            UnityEngine_Mesh___ctor(__this_02,(MethodInfo *)0x0);
                            (__this->fields)._trailMesh = __this_02;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._trailMesh,__this_02);
                            __this_00 = (UnityEngine_Object_o *)(__this->fields)._trailMesh;
                            pSVar11 = UnityEngine_Object__get_name
                                                ((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
                            pSVar11 = System_String__Concat_1969e50
                                                (pSVar11,"TrailMesh",(MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_Object_o *)0x0) {
                              UnityEngine_Object__set_name(__this_00,pSVar11,(MethodInfo *)0x0);
                              pUVar9 = (__this->fields)._trailObject;
                              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                __this_03 = UnityEngine_GameObject__GetComponent_object_
                                                      (pUVar9,(MethodInfo_6F5650 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter
                                                      );
                                if (__this_03 != (UnityEngine_MeshFilter_o *)0x0) {
                                  UnityEngine_MeshFilter__set_mesh
                                            (__this_03,(__this->fields)._trailMesh,(MethodInfo *)0x0);
                                  uVar1 = (__this->fields)._minVertexDistance;
                                  uVar2 = (__this->fields)._maxVertexDistance;
                                  (__this->fields)._minVertexDistanceSqr = (float)uVar1 * (float)uVar1;
                                  (__this->fields)._maxVertexDistanceSqr = (float)uVar2 * (float)uVar2;
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
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$OnDestroy
// il2cpp: void MeleeWeaponTrail__OnDestroy (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x181da4030

void MeleeWeaponTrail__OnDestroy(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_1843448d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448d8 = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields)._trailObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$SetMaterial
// il2cpp: void MeleeWeaponTrail__SetMaterial (MeleeWeaponTrail_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181da4140

void MeleeWeaponTrail__SetMaterial
               (MeleeWeaponTrail_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_Renderer_o *__this_01;
  
  if (Il2CppMethodInitialized_1843448d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843448d9 = '\x01';
  }
  (__this->fields)._material = material;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._material,material);
  x = (UnityEngine_Object_o *)(__this->fields)._trailObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields)._trailObject;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
     __this_01 != (UnityEngine_Renderer_o *)0x0)) {
    UnityEngine_Renderer__set_sharedMaterial(__this_01,material,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$StopImmediate
// il2cpp: void MeleeWeaponTrail__StopImmediate (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x181da45c0

void MeleeWeaponTrail__StopImmediate(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar3;
  
  if (Il2CppMethodInitialized_1843448da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_Clear);
    Il2CppMethodInitialized_1843448da = '\x01';
  }
  pSVar3 = (__this->fields)._points;
  (__this->fields)._emit = false;
  if (pSVar3 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    iVar2 = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields)._smoothedPoints;
    if (pSVar3 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      iVar2 = (pSVar3->fields)._size;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      MeleeWeaponTrail__Update(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$Update
// il2cpp: void MeleeWeaponTrail__Update (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x181da4660
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da4b93: sub ebx, 1
// asm:   0x181da4b96: jns 0x181da4b53
// asm:   0x181da4c3b: nop dword ptr [rax + rax]
// asm:   0x181da4c80: sub ebx, 1
// asm:   0x181da4c83: jns 0x181da4c40
// asm:   0x181da4db6: movaps xmm11, xmm12
// asm:   0x181da4dba: jmp 0x181da55d8
// asm:   0x181da50bb: nop dword ptr [rax + rax]
// asm:   0x181da513b: jmp 0x181da515c

void MeleeWeaponTrail__Update(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  UnityEngine_Color_o *pUVar3;
  float fVar4;
  Il2CppClass *pIVar5;
  Cameras_BaseCamera_o *x;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar6;
  UnityEngine_Mesh_o *pUVar7;
  MeleeWeaponTrail_Point_array *pMVar8;
  UnityEngine_Color_array *pUVar9;
  UnityEngine_Color_array *pUVar10;
  System_Single_array *pSVar11;
  System_Single_array *pSVar12;
  il2cpp_array_size_t iVar13;
  MethodInfo *pMVar14;
  bool bVar15;
  UnityEngine_Object_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Vector3_o *pUVar18;
  Il2CppObject *pIVar19;
  UnityEngine_Vector3_array *pUVar20;
  UnityEngine_Vector2_array *value;
  System_Int32_array *value_00;
  UnityEngine_Color_array *value_01;
  MeleeWeaponTrail_Point_o *pMVar21;
  System_Collections_Generic_IEnumerable_Vector3__o *collection;
  System_Collections_Generic_IEnumerable_Vector3__o *collection_00;
  System_Collections_Generic_List_Vector3__o *__this_00;
  System_Collections_Generic_List_Vector3__o *__this_01;
  uint uVar22;
  int32_t iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8 [14];
  
  if (Il2CppMethodInitialized_1843448db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MeleeWeaponTrail_Point);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_1843448db = '\x01';
  }
  x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    return;
  }
  if ((__this->fields)._use == false) {
    return;
  }
  if (((__this->fields)._emit != false) && ((__this->fields)._emitTime != 0.0)) {
    fVar30 = (__this->fields)._emitTime;
    fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar30 = fVar30 - fVar27;
    (__this->fields)._emitTime = fVar30;
    if (fVar30 == 0.0) {
      (__this->fields)._emitTime = -1.0;
    }
    pfVar1 = &(__this->fields)._emitTime;
    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
      (__this->fields)._emit = false;
    }
  }
  if ((__this->fields)._emit == false) {
    pSVar6 = (__this->fields)._points;
    if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
    if (((pSVar6->fields)._size == 0) && ((__this->fields)._autoDestruct != false)) {
      pUVar16 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar15 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar15) {
        pUVar16 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar16,(MethodInfo *)0x0);
      }
      pUVar16 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar15 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar15) {
        pUVar16 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar16,(MethodInfo *)0x0);
      }
    }
  }
  fVar30 = (__this->fields)._lastPosition.fields.x;
  fVar27 = (__this->fields)._lastPosition.fields.y;
  fVar33 = (__this->fields)._lastPosition.fields.z;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_181da5c56;
  pUVar18 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0);
  fVar27 = fVar27 - (pUVar18->fields).y;
  fVar30 = fVar30 - (pUVar18->fields).x;
  fVar33 = fVar33 - (pUVar18->fields).z;
  fVar30 = fVar27 * fVar27 + fVar30 * fVar30 + fVar33 * fVar33;
  if ((__this->fields)._emit != false) {
    pSVar6 = (__this->fields)._points;
    if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
    pfVar1 = &(__this->fields)._minVertexDistanceSqr;
    if (*pfVar1 <= fVar30 && fVar30 != *pfVar1) {
      if (2 < (pSVar6->fields)._size) {
        pSVar6 = (__this->fields)._points;
        if (((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
            (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                  (pSVar6->fields)._size + -2,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
            pIVar19 == (Il2CppObject *)0x0)) ||
           (pSVar6 = (__this->fields)._points,
           pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)) goto label_181da5c56;
        pIVar5 = pIVar19[2].klass;
        fVar27 = *(float *)&pIVar19[2].monitor;
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                             (pSVar6->fields)._size + -3,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        if (pIVar19 == (Il2CppObject *)0x0) goto label_181da5c56;
        pSVar6 = (__this->fields)._points;
        uVar32._0_4_ = SUB84(pIVar5,0) - SUB84(pIVar19[2].klass,0);
        uVar32._4_4_ = (float)((ulonglong)pIVar5 >> 0x20) - (float)((ulonglong)pIVar19[2].klass >> 0x20);
        if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
        fVar33 = *(float *)&pIVar19[2].monitor;
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                             (pSVar6->fields)._size + -1,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar19 == (Il2CppObject *)0x0) ||
           (pSVar6 = (__this->fields)._points,
           pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)) goto label_181da5c56;
        pIVar5 = pIVar19[2].klass;
        fVar35 = *(float *)&pIVar19[2].monitor;
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                             (pSVar6->fields)._size + -2,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        if (pIVar19 == (Il2CppObject *)0x0) goto label_181da5c56;
        local_d8[0].z = fVar27 - fVar33;
        local_e8.z = (int32_t)(fVar35 - *(float *)&pIVar19[2].monitor);
        local_e8.x = (int32_t)(SUB84(pIVar5,0) - SUB84(pIVar19[2].klass,0));
        local_e8.y = (int32_t)((float)((ulonglong)pIVar5 >> 0x20) -
                              (float)((ulonglong)pIVar19[2].klass >> 0x20));
        local_d8[0]._0_8_ = uVar32;
        fVar27 = (float)il2cpp_runtime_helper_181d9e200(local_d8);
        pfVar1 = &(__this->fields)._maxAngle;
        if ((fVar27 < *pfVar1 || fVar27 == *pfVar1) &&
           (pfVar1 = &(__this->fields)._maxVertexDistanceSqr, fVar30 < *pfVar1 || fVar30 == *pfVar1)) {
          pSVar6 = (__this->fields)._points;
          if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
          pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                               (pSVar6->fields)._size + -1,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
          pUVar17 = (__this->fields)._base;
          if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar18 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0),
             pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
          fVar30 = (pUVar18->fields).z;
          *(undefined8 *)((longlong)&pIVar19[1].klass + 4) = *(undefined8 *)&pUVar18->fields;
          *(float *)((longlong)&pIVar19[1].monitor + 4) = fVar30;
          pSVar6 = (__this->fields)._points;
          if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
          pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                               (pSVar6->fields)._size + -1,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
          pUVar17 = (__this->fields)._tip;
          if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar18 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0),
             pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
          fVar30 = (pUVar18->fields).z;
          pIVar19[2].klass = *(Il2CppClass **)&pUVar18->fields;
          *(float *)&pIVar19[2].monitor = fVar30;
          pSVar6 = (__this->fields)._smoothedPoints;
          if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
          iVar23 = (pSVar6->fields)._size;
          goto label_181da4a65;
        }
      }
      pMVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MeleeWeaponTrail_Point);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pMVar21,(MethodInfo *)0x0);
      pUVar17 = (__this->fields)._base;
      if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar18 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0),
         pMVar21 == (MeleeWeaponTrail_Point_o *)0x0)) goto label_181da5c56;
      fVar27 = (pUVar18->fields).y;
      fVar30 = (pUVar18->fields).z;
      (pMVar21->fields).basePosition.fields.x = (pUVar18->fields).x;
      (pMVar21->fields).basePosition.fields.y = fVar27;
      (pMVar21->fields).basePosition.fields.z = fVar30;
      pUVar17 = (__this->fields)._tip;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_181da5c56;
      pUVar18 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0);
      fVar30 = (pUVar18->fields).z;
      fVar27 = (pUVar18->fields).y;
      (pMVar21->fields).tipPosition.fields.x = (pUVar18->fields).x;
      (pMVar21->fields).tipPosition.fields.y = fVar27;
      (pMVar21->fields).tipPosition.fields.z = fVar30;
      fVar30 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (pMVar21->fields).timeCreated = fVar30;
      if ((__this->fields)._points == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
      goto label_181da5c56;
      il2cpp_runtime_helper_180012890();
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_181da5c56;
      pUVar18 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0);
      fVar30 = (pUVar18->fields).z;
      fVar27 = (pUVar18->fields).y;
      pSVar6 = (__this->fields)._points;
      (__this->fields)._lastPosition.fields.x = (pUVar18->fields).x;
      (__this->fields)._lastPosition.fields.y = fVar27;
      (__this->fields)._lastPosition.fields.z = fVar30;
      if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
      if ((pSVar6->fields)._size == 1) {
        if ((__this->fields)._smoothedPoints ==
            (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
        il2cpp_runtime_helper_180012890();
      }
      else if ((1 < (pSVar6->fields)._size) && (iVar24 = 0, 0 < (__this->fields).subdivisions + 1)) {
        do {
          pMVar14 = MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_Add;
          pSVar6 = (__this->fields)._smoothedPoints;
          if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
          piVar2 = &(pSVar6->fields)._version;
          *piVar2 = *piVar2 + 1;
          pMVar8 = (pSVar6->fields)._items;
          if (pMVar8 == (MeleeWeaponTrail_Point_array *)0x0) goto label_181da5c56;
          uVar22 = (pSVar6->fields)._size;
          if (uVar22 < (uint)pMVar8->max_length) {
            (pSVar6->fields)._size = uVar22 + 1;
            if ((uint)pMVar8->max_length <= uVar22) goto label_181da5c5c;
            pMVar8->m_Items[(int)uVar22] = pMVar21;
            Il2CppCodeGenWriteBarrier(pMVar8->m_Items + (int)uVar22,pMVar21);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pMVar21,
                       (MethodInfo_93DD50 *)pMVar14->klass->rgctx_data[0xe].method);
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < (__this->fields).subdivisions + 1);
      }
      pSVar6 = (__this->fields)._points;
      if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
      if (3 < (pSVar6->fields)._size) {
        pUVar20 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
        pSVar6 = (__this->fields)._points;
        if (((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
            (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                  (pSVar6->fields)._size + -4,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
            pIVar19 == (Il2CppObject *)0x0)) || (pUVar20 == (UnityEngine_Vector3_array *)0x0))
        goto label_181da5c56;
        if ((int)pUVar20->max_length == 0) {
label_181da5c5c:
          ThrowIndexOutOfRangeException();
        }
        fVar30 = *(float *)&pIVar19[2].monitor;
        *(Il2CppClass **)&pUVar20->m_Items[0].fields = pIVar19[2].klass;
        pUVar20->m_Items[0].fields.z = fVar30;
        pSVar6 = (__this->fields)._points;
        if ((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
           (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                 (pSVar6->fields)._size + -3,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        if ((uint)pUVar20->max_length < 2) goto label_181da5c5c;
        fVar30 = *(float *)&pIVar19[2].monitor;
        *(Il2CppClass **)&pUVar20->m_Items[1].fields = pIVar19[2].klass;
        pUVar20->m_Items[1].fields.z = fVar30;
        pSVar6 = (__this->fields)._points;
        if ((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
           (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                 (pSVar6->fields)._size + -2,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        if ((uint)pUVar20->max_length < 3) goto label_181da5c5c;
        fVar30 = *(float *)&pIVar19[2].monitor;
        *(Il2CppClass **)&pUVar20->m_Items[2].fields = pIVar19[2].klass;
        pUVar20->m_Items[2].fields.z = fVar30;
        pSVar6 = (__this->fields)._points;
        if ((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
           (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                 (pSVar6->fields)._size + -1,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        if ((uint)pUVar20->max_length < 4) goto label_181da5c5c;
        fVar30 = *(float *)&pIVar19[2].monitor;
        *(Il2CppClass **)&pUVar20->m_Items[3].fields = pIVar19[2].klass;
        pUVar20->m_Items[3].fields.z = fVar30;
        collection = Interpolate__NewCatmullRom_1da26e0
                               (pUVar20,(__this->fields).subdivisions,false,(MethodInfo *)0x0);
        pUVar20 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
        pSVar6 = (__this->fields)._points;
        if (((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
            (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                  (pSVar6->fields)._size + -4,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
            pIVar19 == (Il2CppObject *)0x0)) || (pUVar20 == (UnityEngine_Vector3_array *)0x0))
        goto label_181da5c56;
        if ((int)pUVar20->max_length == 0) goto label_181da5c5c;
        uVar32 = *(undefined8 *)((longlong)&pIVar19[1].klass + 4);
        fVar30 = *(float *)((longlong)&pIVar19[1].monitor + 4);
        pUVar20->m_Items[0].fields.x = (float)(int)uVar32;
        pUVar20->m_Items[0].fields.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        pUVar20->m_Items[0].fields.z = fVar30;
        pSVar6 = (__this->fields)._points;
        if ((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
           (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                 (pSVar6->fields)._size + -3,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        if ((uint)pUVar20->max_length < 2) goto label_181da5c5c;
        uVar32 = *(undefined8 *)((longlong)&pIVar19[1].klass + 4);
        fVar30 = *(float *)((longlong)&pIVar19[1].monitor + 4);
        pUVar20->m_Items[1].fields.x = (float)(int)uVar32;
        pUVar20->m_Items[1].fields.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        pUVar20->m_Items[1].fields.z = fVar30;
        pSVar6 = (__this->fields)._points;
        if ((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
           (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                 (pSVar6->fields)._size + -2,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        if ((uint)pUVar20->max_length < 3) goto label_181da5c5c;
        uVar32 = *(undefined8 *)((longlong)&pIVar19[1].klass + 4);
        fVar30 = *(float *)((longlong)&pIVar19[1].monitor + 4);
        pUVar20->m_Items[2].fields.x = (float)(int)uVar32;
        pUVar20->m_Items[2].fields.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        pUVar20->m_Items[2].fields.z = fVar30;
        pSVar6 = (__this->fields)._points;
        if ((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
           (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                 (pSVar6->fields)._size + -1,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        if ((uint)pUVar20->max_length < 4) goto label_181da5c5c;
        fVar30 = *(float *)((longlong)&pIVar19[1].monitor + 4);
        uVar32 = *(undefined8 *)((longlong)&pIVar19[1].klass + 4);
        pUVar20->m_Items[3].fields.x = (float)(int)uVar32;
        pUVar20->m_Items[3].fields.y = (float)(int)((ulonglong)uVar32 >> 0x20);
        pUVar20->m_Items[3].fields.z = fVar30;
        collection_00 =
             Interpolate__NewCatmullRom_1da26e0(pUVar20,(__this->fields).subdivisions,false,(MethodInfo *)0x0)
        ;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3)
        ;
        System_Collections_Generic_List_Vector3____ctor_9aad40
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_9AAD40 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3)
        ;
        System_Collections_Generic_List_Vector3____ctor_9aad40
                  (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
                   (MethodInfo_9AAD40 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
        pSVar6 = (__this->fields)._points;
        if (((pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) ||
            (pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                                  (pSVar6->fields)._size + -4,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item),
            pIVar19 == (Il2CppObject *)0x0)) ||
           (pSVar6 = (__this->fields)._points,
           pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)) goto label_181da5c56;
        fVar30 = *(float *)&pIVar19[1].klass;
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                             (pSVar6->fields)._size + -1,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar19 == (Il2CppObject *)0x0) ||
           (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto label_181da5c56;
        fVar27 = *(float *)&pIVar19[1].klass;
        for (iVar24 = 0; iVar24 < (__this_00->fields)._size; iVar24 = iVar24 + 1) {
          pSVar6 = (__this->fields)._smoothedPoints;
          if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
          iVar26 = ((pSVar6->fields)._size - (__this_00->fields)._size) + iVar24;
          if ((-1 < iVar26) && (iVar26 < (pSVar6->fields)._size)) {
            pMVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MeleeWeaponTrail_Point);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pMVar21,(MethodInfo *)0x0
                      );
            if ((__this_01 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
               (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                          ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_d8,
                           (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_01,
                           iVar24,(MethodInfo_93BF30 *)
                                  MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
               pMVar21 == (MeleeWeaponTrail_Point_o *)0x0)) goto label_181da5c56;
            (pMVar21->fields).basePosition.fields.x = local_d8[0].x;
            (pMVar21->fields).basePosition.fields.y = local_d8[0].y;
            (pMVar21->fields).basePosition.fields.z = local_d8[0].z;
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_e8,
                       (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_00,iVar24,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            (pMVar21->fields).tipPosition.fields.x = (float)local_e8.x;
            (pMVar21->fields).tipPosition.fields.y = (float)local_e8.y;
            (pMVar21->fields).tipPosition.fields.z = (float)local_e8.z;
            fVar33 = (float)iVar24 / (float)(__this_00->fields)._size;
            if (fVar33 < 0.0) {
              fVar33 = 0.0;
            }
            else if (1.0 < fVar33) {
              fVar33 = 1.0;
            }
            (pMVar21->fields).timeCreated = (fVar27 - fVar30) * fVar33 + fVar30;
            pSVar6 = (__this->fields)._smoothedPoints;
            if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
            goto label_181da5c56;
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar6,iVar26,(Il2CppObject *)pMVar21,
                       (MethodInfo_950000 *)
                       MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
          }
        }
      }
    }
    else {
      if (0 < (pSVar6->fields)._size) {
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,(pSVar6->fields)._size + -1,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        pUVar17 = (__this->fields)._base;
        if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar18 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        fVar30 = (pUVar18->fields).z;
        *(undefined8 *)((longlong)&pIVar19[1].klass + 4) = *(undefined8 *)&pUVar18->fields;
        *(float *)((longlong)&pIVar19[1].monitor + 4) = fVar30;
        pSVar6 = (__this->fields)._points;
        if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(__this->fields)._points,
                             (pSVar6->fields)._size + -1,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        pUVar17 = (__this->fields)._tip;
        if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar18 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        fVar30 = (pUVar18->fields).z;
        pIVar19[2].klass = *(Il2CppClass **)&pUVar18->fields;
        *(float *)&pIVar19[2].monitor = fVar30;
      }
      pSVar6 = (__this->fields)._smoothedPoints;
      if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
      if (0 < (pSVar6->fields)._size) {
        iVar23 = (pSVar6->fields)._size;
label_181da4a65:
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(__this->fields)._smoothedPoints,
                             iVar23 + -1,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        pUVar17 = (__this->fields)._base;
        if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar18 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        fVar30 = (pUVar18->fields).z;
        *(undefined8 *)((longlong)&pIVar19[1].klass + 4) = *(undefined8 *)&pUVar18->fields;
        *(float *)((longlong)&pIVar19[1].monitor + 4) = fVar30;
        pSVar6 = (__this->fields)._smoothedPoints;
        if (pSVar6 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_181da5c56;
        pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(__this->fields)._smoothedPoints,
                             (pSVar6->fields)._size + -1,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        pUVar17 = (__this->fields)._tip;
        if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar18 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_d8,pUVar17,(MethodInfo *)0x0),
           pIVar19 == (Il2CppObject *)0x0)) goto label_181da5c56;
        fVar30 = (pUVar18->fields).z;
        pIVar19[2].klass = *(Il2CppClass **)&pUVar18->fields;
        *(float *)&pIVar19[2].monitor = fVar30;
      }
    }
  }
  pSVar6 = (__this->fields)._points;
  if (Il2CppMethodInitialized_1843448dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    Il2CppMethodInitialized_1843448dc = '\x01';
  }
  if (pSVar6 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    iVar23 = (pSVar6->fields)._size;
    while (iVar23 = iVar23 + -1, -1 < iVar23) {
      fVar30 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar6,iVar23,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
      if (pIVar19 == (Il2CppObject *)0x0) goto label_181da5c56;
      fVar30 = fVar30 - *(float *)&pIVar19[1].klass;
      pfVar1 = &(__this->fields)._lifeTime;
      if (*pfVar1 <= fVar30 && fVar30 != *pfVar1) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar6,iVar23,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveAt);
      }
    }
    pSVar6 = (__this->fields)._points;
    if (pSVar6 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      if ((pSVar6->fields)._size == 0) {
        pUVar16 = (UnityEngine_Object_o *)(__this->fields)._trailMesh;
        if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar15 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar15) {
          pUVar7 = (__this->fields)._trailMesh;
          if (pUVar7 == (UnityEngine_Mesh_o *)0x0) goto label_181da5c56;
          UnityEngine_Mesh__Clear(pUVar7,(MethodInfo *)0x0);
        }
      }
      pSVar6 = (__this->fields)._smoothedPoints;
      if (Il2CppMethodInitialized_1843448dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveAt);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        Il2CppMethodInitialized_1843448dc = '\x01';
      }
      if (pSVar6 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        iVar23 = (pSVar6->fields)._size;
        while (iVar23 = iVar23 + -1, -1 < iVar23) {
          fVar30 = UnityEngine_Time__get_time((MethodInfo *)0x0);
          pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar6,iVar23,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
          if (pIVar19 == (Il2CppObject *)0x0) goto label_181da5c56;
          fVar30 = fVar30 - *(float *)&pIVar19[1].klass;
          pfVar1 = &(__this->fields)._lifeTime;
          if (*pfVar1 <= fVar30 && fVar30 != *pfVar1) {
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)pSVar6,iVar23,
                       (MethodInfo_947010 *)
                       MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveAt);
          }
        }
        pSVar6 = (__this->fields)._smoothedPoints;
        if (pSVar6 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
          if ((pSVar6->fields)._size == 0) {
            pUVar16 = (UnityEngine_Object_o *)(__this->fields)._trailMesh;
            if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar15 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar15) {
              pUVar7 = (__this->fields)._trailMesh;
              if (pUVar7 == (UnityEngine_Mesh_o *)0x0) goto label_181da5c56;
              UnityEngine_Mesh__Clear(pUVar7,(MethodInfo *)0x0);
            }
          }
          pSVar6 = (__this->fields)._smoothedPoints;
          if (pSVar6 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            if ((pSVar6->fields)._size < 2) {
              return;
            }
            pUVar20 = (UnityEngine_Vector3_array *)
                      SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(pSVar6->fields)._size * 2);
            value = (UnityEngine_Vector2_array *)
                    SZArrayNew(TypeInfo_UnityEngine_Vector2_array,(pSVar6->fields)._size * 2);
            value_00 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,(pSVar6->fields)._size * 6 - 6);
            value_01 = (UnityEngine_Color_array *)
                       SZArrayNew(TypeInfo_UnityEngine_Color_array,(pSVar6->fields)._size * 2);
            for (iVar24 = 0; iVar24 < (pSVar6->fields)._size; iVar24 = iVar24 + 1) {
              pIVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,iVar24,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item)
              ;
              fVar30 = UnityEngine_Time__get_time((MethodInfo *)0x0);
              if (pIVar19 == (Il2CppObject *)0x0) goto label_181da5c56;
              fVar30 = (fVar30 - *(float *)&pIVar19[1].klass) / (__this->fields)._lifeTime;
              if (fVar30 < 0.0) {
                fVar27 = 0.0;
              }
              else {
                fVar27 = fVar30;
                if (1.0 < fVar30) {
                  fVar27 = 1.0;
                }
              }
              fVar33 = fVar27 * -1.0 + 1.0;
              fVar35 = fVar27 * -1.0 + 1.0;
              fVar36 = fVar27 * -1.0 + 1.0;
              fVar27 = fVar27 * -1.0 + 1.0;
              if (((__this->fields)._colors != (UnityEngine_Color_array *)0x0) &&
                 (pUVar9 = (__this->fields)._colors, pUVar9->max_length != 0)) {
                iVar13 = pUVar9->max_length;
                fVar33 = (float)il2cpp_runtime_helper_1804f4110();
                fVar27 = (float)((int)((__this->fields)._colors)->max_length + -1);
                fVar35 = (float)il2cpp_runtime_helper_1804f4070();
                if (fVar35 < 1.0) {
                  fVar27 = 1.0;
                }
                else if (fVar35 <= fVar27) {
                  fVar27 = fVar35;
                }
                if ((fVar33 == fVar27) ||
                   (fVar31 = ((float)((int)iVar13 + -1) * fVar30 - fVar33) / (fVar27 - fVar33), fVar31 < 0.0))
                {
                  fVar31 = 0.0;
                }
                else if (1.0 < fVar31) {
                  fVar31 = 1.0;
                }
                pUVar9 = (__this->fields)._colors;
                if ((float)(int)pUVar9->max_length <= fVar33) {
                  fVar33 = (float)((int)pUVar9->max_length + -1);
                }
                if (fVar33 < 0.0) {
                  fVar33 = 0.0;
                }
                if ((float)(int)((__this->fields)._colors)->max_length <= fVar27) {
                  fVar27 = (float)((int)((__this->fields)._colors)->max_length + -1);
                }
                pUVar9 = (__this->fields)._colors;
                if (fVar27 < 0.0) {
                  fVar27 = 0.0;
                }
                uVar22 = (uint)fVar33;
                if ((uint)pUVar9->max_length <= uVar22) goto label_181da5c5c;
                pUVar10 = (__this->fields)._colors;
                uVar25 = (uint)fVar27;
                if ((uint)pUVar10->max_length <= uVar25) goto label_181da5c5c;
                fVar33 = pUVar9->m_Items[(int)uVar22].fields.r;
                fVar35 = pUVar9->m_Items[(int)uVar22].fields.g;
                fVar36 = pUVar9->m_Items[(int)uVar22].fields.b;
                fVar27 = pUVar9->m_Items[(int)uVar22].fields.a;
                if (fVar31 < 0.0) {
                  fVar31 = 0.0;
                }
                else if (1.0 < fVar31) {
                  fVar31 = 1.0;
                }
                fVar33 = (pUVar10->m_Items[(int)uVar25].fields.r - fVar33) * fVar31 + fVar33;
                fVar35 = (pUVar10->m_Items[(int)uVar25].fields.g - fVar35) * fVar31 + fVar35;
                fVar36 = (pUVar10->m_Items[(int)uVar25].fields.b - fVar36) * fVar31 + fVar36;
                fVar27 = (pUVar10->m_Items[(int)uVar25].fields.a - fVar27) * fVar31 + fVar27;
              }
              fVar31 = 0.0;
              if (((__this->fields)._sizes != (System_Single_array *)0x0) &&
                 (pSVar11 = (__this->fields)._sizes, pSVar11->max_length != 0)) {
                iVar13 = pSVar11->max_length;
                fVar31 = (float)il2cpp_runtime_helper_1804f4110();
                fVar34 = (float)((int)((__this->fields)._sizes)->max_length + -1);
                fVar28 = (float)il2cpp_runtime_helper_1804f4070();
                if (fVar28 < 1.0) {
                  fVar34 = 1.0;
                }
                else if (fVar28 <= fVar34) {
                  fVar34 = fVar28;
                }
                if ((fVar31 == fVar34) ||
                   (fVar30 = ((float)((int)iVar13 + -1) * fVar30 - fVar31) / (fVar34 - fVar31), fVar30 < 0.0))
                {
                  fVar30 = 0.0;
                }
                else if (1.0 < fVar30) {
                  fVar30 = 1.0;
                }
                pSVar11 = (__this->fields)._sizes;
                if ((float)(int)pSVar11->max_length <= fVar31) {
                  fVar31 = (float)((int)pSVar11->max_length + -1);
                }
                if (fVar31 < 0.0) {
                  fVar31 = 0.0;
                }
                if ((float)(int)((__this->fields)._sizes)->max_length <= fVar34) {
                  fVar34 = (float)((int)((__this->fields)._sizes)->max_length + -1);
                }
                pSVar11 = (__this->fields)._sizes;
                if (fVar34 < 0.0) {
                  fVar34 = 0.0;
                }
                if ((uint)pSVar11->max_length <= (uint)(int)fVar31) goto label_181da5c5c;
                pSVar12 = (__this->fields)._sizes;
                if ((uint)pSVar12->max_length <= (uint)(int)fVar34) goto label_181da5c5c;
                fVar31 = pSVar11->m_Items[(int)fVar31];
                if (fVar30 < 0.0) {
                  fVar30 = 0.0;
                }
                else if (1.0 < fVar30) {
                  fVar30 = 1.0;
                }
                fVar31 = (pSVar12->m_Items[(int)fVar34] - fVar31) * fVar30 + fVar31;
              }
              uVar32 = *(undefined8 *)((longlong)&pIVar19[1].klass + 4);
              fVar30 = SUB84(pIVar19[2].klass,0) - (float)uVar32;
              fVar34 = (float)((ulonglong)pIVar19[2].klass >> 0x20) - (float)((ulonglong)uVar32 >> 0x20);
              uVar32 = *(undefined8 *)((longlong)&pIVar19[1].klass + 4);
              fVar28 = fVar31 * 0.5;
              if (pUVar20 == (UnityEngine_Vector3_array *)0x0) goto label_181da5c56;
              uVar22 = iVar24 * 2;
              if ((uint)pUVar20->max_length <= uVar22) goto label_181da5c5c;
              fVar4 = *(float *)((longlong)&pIVar19[1].monitor + 4);
              fVar29 = *(float *)&pIVar19[2].monitor - *(float *)((longlong)&pIVar19[1].monitor + 4);
              fVar31 = fVar31 * 0.5;
              iVar26 = iVar24 * 2;
              pUVar20->m_Items[(int)uVar22].fields.x = (float)uVar32 - fVar30 * fVar28;
              pUVar20->m_Items[(int)uVar22].fields.y = (float)((ulonglong)uVar32 >> 0x20) - fVar34 * fVar28;
              pUVar20->m_Items[(int)uVar22].fields.z = fVar4 - fVar29 * fVar28;
              pIVar5 = pIVar19[2].klass;
              if ((uint)pUVar20->max_length <= iVar26 + 1U) goto label_181da5c5c;
              fVar28 = *(float *)&pIVar19[2].monitor;
              pUVar20->m_Items[(longlong)iVar26 + 1].fields.x = fVar30 * fVar31 + SUB84(pIVar5,0);
              pUVar20->m_Items[(longlong)iVar26 + 1].fields.y =
                   fVar34 * fVar31 + (float)((ulonglong)pIVar5 >> 0x20);
              pUVar20->m_Items[(longlong)iVar26 + 1].fields.z = fVar29 * fVar31 + fVar28;
              if (value_01 == (UnityEngine_Color_array *)0x0) goto label_181da5c56;
              if ((uint)value_01->max_length <= iVar24 * 2 + 1U) goto label_181da5c5c;
              pUVar3 = value_01->m_Items + (longlong)(iVar24 * 2) + 1;
              (pUVar3->fields).r = fVar33;
              (pUVar3->fields).g = fVar35;
              (pUVar3->fields).b = fVar36;
              (pUVar3->fields).a = fVar27;
              if ((uint)value_01->max_length <= (uint)(iVar24 * 2)) goto label_181da5c5c;
              pUVar3 = value_01->m_Items + iVar24 * 2;
              (pUVar3->fields).r = fVar33;
              (pUVar3->fields).g = fVar35;
              (pUVar3->fields).b = fVar36;
              (pUVar3->fields).a = fVar27;
              fVar30 = (float)iVar24 / (float)(pSVar6->fields)._size;
              if (value == (UnityEngine_Vector2_array *)0x0) goto label_181da5c56;
              uVar22 = iVar24 * 2;
              if ((uint)value->max_length <= uVar22) goto label_181da5c5c;
              value->m_Items[(int)uVar22].fields.x = fVar30;
              value->m_Items[(int)uVar22].fields.y = 0.0;
              iVar26 = iVar24 * 2;
              if ((uint)value->max_length <= iVar26 + 1U) goto label_181da5c5c;
              value->m_Items[(longlong)iVar26 + 1].fields.x = fVar30;
              value->m_Items[(longlong)iVar26 + 1].fields.y = 1.0;
              if (0 < iVar24) {
                if (value_00 == (System_Int32_array *)0x0) goto label_181da5c56;
                if ((uint)value_00->max_length <= iVar24 * 6 - 6U) goto label_181da5c5c;
                value_00->m_Items[(longlong)(iVar24 * 6) + -6] = iVar24 * 2 + -2;
                if ((uint)value_00->max_length <= iVar24 * 6 - 5U) goto label_181da5c5c;
                value_00->m_Items[(longlong)(iVar24 * 6) + -5] = iVar24 * 2 + -1;
                if ((uint)value_00->max_length <= iVar24 * 6 - 4U) goto label_181da5c5c;
                value_00->m_Items[(longlong)(iVar24 * 6) + -4] = iVar24 * 2;
                if ((uint)value_00->max_length <= iVar24 * 6 - 3U) goto label_181da5c5c;
                value_00->m_Items[(longlong)(iVar24 * 6) + -3] = iVar24 * 2 | 1;
                if ((uint)value_00->max_length <= iVar24 * 6 - 2U) goto label_181da5c5c;
                value_00->m_Items[(longlong)(iVar24 * 6) + -2] = iVar24 * 2;
                if ((uint)value_00->max_length <= iVar24 * 6 - 1U) goto label_181da5c5c;
                value_00->m_Items[(longlong)(iVar24 * 6) + -1] = iVar24 * 2 + -1;
              }
            }
            pUVar7 = (__this->fields)._trailMesh;
            if (pUVar7 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__Clear(pUVar7,(MethodInfo *)0x0);
              pUVar7 = (__this->fields)._trailMesh;
              if (pUVar7 != (UnityEngine_Mesh_o *)0x0) {
                UnityEngine_Mesh__set_vertices(pUVar7,pUVar20,(MethodInfo *)0x0);
                pUVar7 = (__this->fields)._trailMesh;
                if (pUVar7 != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__set_colors(pUVar7,value_01,(MethodInfo *)0x0);
                  pUVar7 = (__this->fields)._trailMesh;
                  if (pUVar7 != (UnityEngine_Mesh_o *)0x0) {
                    UnityEngine_Mesh__set_uv(pUVar7,value,(MethodInfo *)0x0);
                    pUVar7 = (__this->fields)._trailMesh;
                    if (pUVar7 != (UnityEngine_Mesh_o *)0x0) {
                      UnityEngine_Mesh__set_triangles(pUVar7,value_00,(MethodInfo *)0x0);
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
label_181da5c56:
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$RemoveOldPoints
// il2cpp: void MeleeWeaponTrail__RemoveOldPoints (MeleeWeaponTrail_o* __this, System_Collections_Generic_List_MeleeWeaponTrail_Point__o* pointList, const MethodInfo* method);
// 0x181da4080
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da40db: nop dword ptr [rax + rax]
// asm:   0x181da411c: sub ebx, 1
// asm:   0x181da411f: jns 0x181da40e0

void MeleeWeaponTrail__RemoveOldPoints
               (MeleeWeaponTrail_o *__this,
               System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pointList,MethodInfo *method)

{
  float *pfVar1;
  int index;
  Il2CppObject *pIVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843448dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    Il2CppMethodInitialized_1843448dc = '\x01';
  }
  if (pointList != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    index = (pointList->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pointList,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      fVar3 = fVar3 - *(float *)&pIVar2[1].klass;
      pfVar1 = &(__this->fields)._lifeTime;
      if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pointList,index,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveAt);
      }
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$.ctor
// il2cpp: void MeleeWeaponTrail___ctor (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x181da5c70

void MeleeWeaponTrail___ctor(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843448dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point);
    Il2CppMethodInitialized_1843448dd = '\x01';
  }
  (__this->fields)._emit = true;
  (__this->fields)._use = true;
  (__this->fields)._lifeTime = 1.0;
  (__this->fields)._minVertexDistance = 0.1;
  (__this->fields)._maxVertexDistance = 10.0;
  (__this->fields)._maxAngle = 3.0;
  (__this->fields).subdivisions = 4;
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_ctor);
  (__this->fields)._points = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._points,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_ctor);
  (__this->fields)._smoothedPoints = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._smoothedPoints,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


