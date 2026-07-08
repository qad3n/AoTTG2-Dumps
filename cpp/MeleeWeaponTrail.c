// Type: MeleeWeaponTrail
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MeleeWeaponTrail.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs  [CHANGED since prior version]
// --------------------------------

// MeleeWeaponTrail.Point$$.ctor
// il2cpp: void MeleeWeaponTrail_Point___ctor (MeleeWeaponTrail_Point_o* __this, const MethodInfo* method);
// 0x3d6e170

void MeleeWeaponTrail_Point___ctor(MeleeWeaponTrail_Point_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$set_Emit
// il2cpp: void MeleeWeaponTrail__set_Emit (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x3d6c4f0

void MeleeWeaponTrail__set_Emit(MeleeWeaponTrail_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._emit = (char)value;
  return;
}


// MeleeWeaponTrail$$set_Use
// il2cpp: void MeleeWeaponTrail__set_Use (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x3d6c500

void MeleeWeaponTrail__set_Use(MeleeWeaponTrail_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._emit + 1) = (char)value;
  return;
}


// MeleeWeaponTrail$$Start
// il2cpp: void MeleeWeaponTrail__Start (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x3d6c510

void MeleeWeaponTrail__Start(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o **ppSVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Object_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar5;
  System_Type_o *pSVar6;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Mesh_o *__this_02;
  System_String_o *pSVar7;
  UnityEngine_MeshFilter_o *__this_03;
  UnityEngine_Vector3_o UVar8;
  
  if (DAT_057025f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_GetComponent_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_MeshFilter);
    il2cpp_init_method_metadata(&TypeRef_MeshRenderer);
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    il2cpp_init_method_metadata(&"TrailMesh");
    il2cpp_init_method_metadata(&"Trail");
    DAT_057025f8 = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UVar8 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    *(UnityEngine_Vector3_Fields *)&(__this->fields)._trailMesh = UVar8.fields;
    pSVar5 = (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)
             il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pSVar5,"Trail",(MethodInfo *)0x0)
    ;
    ppSVar1 = &(__this->fields)._smoothedPoints;
    (__this->fields)._smoothedPoints = pSVar5;
    il2cpp_runtime_glue(ppSVar1);
    pSVar5 = (__this->fields)._smoothedPoints;
    if (pSVar5 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_parent(pUVar4,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
        if (*ppSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)*ppSVar1,(MethodInfo *)0x0);
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position
                      (pUVar4,(UnityEngine_Vector3_o)
                              **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                       (MethodInfo *)0x0);
            if (*ppSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)*ppSVar1,(MethodInfo *)0x0);
              if (DAT_056fde1e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Quaternion);
                DAT_056fde1e = '\x01';
              }
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_rotation
                          (pUVar4,(UnityEngine_Quaternion_o)
                                  **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                           (MethodInfo *)0x0);
                if (*ppSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
                  pUVar4 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)*ppSVar1,(MethodInfo *)0x0);
                  if (DAT_056fe077 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Vector3);
                    DAT_056fe077 = '\x01';
                  }
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar4,(UnityEngine_Vector3_o)
                                      *(UnityEngine_Vector3_Fields *)
                                       (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
                    handle.fields.value = TypeRef_MeshFilter.fields.value;
                    pSVar5 = *ppSVar1;
                    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                    if (pSVar5 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
                    {
                      UnityEngine_GameObject__AddComponent
                                ((UnityEngine_GameObject_o *)pSVar5,pSVar6,(MethodInfo *)0x0);
                      pSVar5 = *ppSVar1;
                      pSVar6 = System_Type__GetTypeFromHandle(TypeRef_MeshRenderer,(MethodInfo *)0x0);
                      if (pSVar5 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0
                         ) {
                        UnityEngine_GameObject__AddComponent
                                  ((UnityEngine_GameObject_o *)pSVar5,pSVar6,(MethodInfo *)0x0);
                        if (*ppSVar1 !=
                            (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
                          __this_01 = (UnityEngine_Renderer_o *)
                                      UnityEngine_GameObject__GetComponent<object>
                                                ((UnityEngine_GameObject_o *)*ppSVar1,MethodInfo_Renderer_GetComponent_Renderer);
                          if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_material
                                      (__this_01,
                                       *(UnityEngine_Material_o **)&(__this->fields)._emitTime,
                                       (MethodInfo *)0x0);
                            __this_02 = (UnityEngine_Mesh_o *)il2cpp_runtime_glue(TypeInfo_Mesh);
                            UnityEngine_Mesh___ctor(__this_02,(MethodInfo *)0x0);
                            (__this->fields)._trailObject = (UnityEngine_GameObject_o *)__this_02;
                            il2cpp_runtime_glue(&(__this->fields)._trailObject);
                            __this_00 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
                            pSVar7 = UnityEngine_Object__get_name
                                               ((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
                            pSVar7 = System_String__Concat(pSVar7,"TrailMesh",(MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_Object_o *)0x0) {
                              UnityEngine_Object__set_name(__this_00,pSVar7,(MethodInfo *)0x0);
                              if (*ppSVar1 !=
                                  (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
                              {
                                __this_03 = (UnityEngine_MeshFilter_o *)
                                            UnityEngine_GameObject__GetComponent<object>
                                                      ((UnityEngine_GameObject_o *)*ppSVar1,
                                                       MethodInfo_MeshFilter_GetComponent_MeshFilter);
                                if (__this_03 != (UnityEngine_MeshFilter_o *)0x0) {
                                  UnityEngine_MeshFilter__set_mesh
                                            (__this_03,
                                             (UnityEngine_Mesh_o *)(__this->fields)._trailObject,
                                             (MethodInfo *)0x0);
                                  fVar2 = *(float *)&(__this->fields)._sizes;
                                  fVar3 = *(float *)((long)&(__this->fields)._sizes + 4);
                                  (__this->fields)._minVertexDistance = fVar2 * fVar2;
                                  (__this->fields)._maxVertexDistance = fVar3 * fVar3;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MeleeWeaponTrail$$OnDestroy
// il2cpp: void MeleeWeaponTrail__OnDestroy (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x3d6c8b0

void MeleeWeaponTrail__OnDestroy(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *obj;
  
  if (DAT_057025f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025f9 = '\x01';
  }
  obj = (__this->fields)._smoothedPoints;
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Object__Destroy((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$SetMaterial
// il2cpp: void MeleeWeaponTrail__SetMaterial (MeleeWeaponTrail_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3d6c910

void MeleeWeaponTrail__SetMaterial
               (MeleeWeaponTrail_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Renderer_o *__this_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_057025fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057025fa = '\x01';
    method = extraout_RDX;
  }
  *(UnityEngine_Material_o **)&(__this->fields)._emitTime = material;
  il2cpp_runtime_glue(&(__this->fields)._emitTime,material,method);
  pSVar1 = (__this->fields)._smoothedPoints;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar1 = (__this->fields)._smoothedPoints;
    if (pSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      __this_00 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            ((UnityEngine_GameObject_o *)pSVar1,MethodInfo_Renderer_GetComponent_Renderer);
      if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_material(__this_00,material,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// MeleeWeaponTrail$$StopImmediate
// il2cpp: void MeleeWeaponTrail__StopImmediate (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x3d6c9c0

/* WARNING: Type propagation algorithm not settling */

void MeleeWeaponTrail__StopImmediate(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  ulong uVar3;
  float *pfVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Mesh_o *pUVar6;
  Il2CppClass *pIVar7;
  Il2CppClass *pIVar8;
  Il2CppClass *pIVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int32_t length;
  undefined4 uVar13;
  int iVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  System_Object_array *pSVar16;
  MeleeWeaponTrail_Point_array *pMVar17;
  UnityEngine_Color_array *pUVar18;
  UnityEngine_Vector2_o UVar19;
  uint uVar20;
  bool_conflict bVar21;
  UnityEngine_Transform_o *pUVar22;
  Il2CppObject *pIVar23;
  UnityEngine_Object_o *pUVar24;
  MeleeWeaponTrail_Point_o *__this_00;
  System_Collections_IList_o *pSVar25;
  Interpolate_ToVector3_T__o *pIVar26;
  System_Collections_Generic_IEnumerable_Vector3__o *collection;
  System_Collections_Generic_IEnumerable_Vector3__o *collection_00;
  System_Collections_Generic_List_Vector3__o *__this_01;
  System_Collections_Generic_List_Vector3__o *__this_02;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  System_Int32_array *value_01;
  UnityEngine_Color_array *value_02;
  long lVar27;
  long lVar28;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *pMVar29;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  int iVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  UnityEngine_Vector2_o UVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_Fields UVar51;
  float local_d8;
  float fStack_d4;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  float local_98;
  float fStack_94;
  
  if (DAT_057025fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057025fb = '\x01';
  }
  *(undefined1 *)&(__this->fields)._emit = 0;
  pUVar22 = (__this->fields)._tip;
  if (pUVar22 == (UnityEngine_Transform_o *)0x0) {
LAB_03d6ca3d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  piVar1 = (int *)((long)&pUVar22[1].klass + 4);
  *piVar1 = *piVar1 + 1;
  length = *(int32_t *)&pUVar22[1].klass;
  *(undefined4 *)&pUVar22[1].klass = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pUVar22->fields).m_CachedPtr,0,length,(MethodInfo *)0x0);
  }
  pSVar34 = (__this->fields)._points;
  if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
  goto LAB_03d6ca3d;
  piVar2 = &(pSVar34->fields)._version;
  *piVar2 = *piVar2 + 1;
  iVar35 = (pSVar34->fields)._size;
  (pSVar34->fields)._size = 0;
  if (0 < iVar35) {
    System_Array__Clear((System_Array_o *)(pSVar34->fields)._items,0,iVar35,(MethodInfo *)0x0);
  }
  if (DAT_057025fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MeleeWeaponTrail_Point_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Point);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057025fc = '\x01';
  }
  pUVar24 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar21 = UnityEngine_Object__op_Equality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar21 != '\0') {
    return;
  }
  if (*(char *)((long)&(__this->fields)._emit + 1) == '\0') {
    return;
  }
  if ((char)(__this->fields)._emit == '\0') {
LAB_03d6cc07:
    pUVar22 = (__this->fields)._tip;
joined_r0x03d6cbf8:
    if (pUVar22 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
    if ((*(int *)&pUVar22[1].klass == 0) &&
       (*(char *)&(__this->fields)._maxVertexDistanceSqr != '\0')) {
      pSVar34 = (__this->fields)._smoothedPoints;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar21 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar34,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar21 != '\0') {
        pSVar34 = (__this->fields)._smoothedPoints;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy((UnityEngine_Object_o *)pSVar34,(MethodInfo *)0x0);
      }
      pUVar24 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar21 = UnityEngine_Object__op_Inequality
                         (pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar21 != '\0') {
        pUVar24 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(pUVar24,(MethodInfo *)0x0);
      }
    }
  }
  else {
    fVar44 = (float)(__this->fields)._use;
    if ((fVar44 != 0.0) || (NAN(fVar44))) {
      fVar39 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar44 = fVar44 - fVar39;
      (__this->fields)._use = (bool_conflict)fVar44;
      if ((fVar44 != 0.0) || (NAN(fVar44))) {
        if (0.0 <= fVar44) {
          if ((char)(__this->fields)._emit == '\0') goto LAB_03d6cc07;
          goto LAB_03d6cc1f;
        }
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar22 = (__this->fields)._tip;
      }
      else {
        (__this->fields)._use = -0x40800000;
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar22 = (__this->fields)._tip;
      }
      goto joined_r0x03d6cbf8;
    }
  }
LAB_03d6cc1f:
  pUVar6 = (__this->fields)._trailMesh;
  fVar44 = (__this->fields)._lastPosition.fields.x;
  pUVar22 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar22 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
  UVar50 = UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0);
  pMVar29 = extraout_RDX;
  if ((char)(__this->fields)._emit != '\0') {
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
    local_d8 = SUB84(pUVar6,0);
    fStack_d4 = (float)((ulong)pUVar6 >> 0x20);
    local_d8 = local_d8 - UVar50.fields.x;
    fStack_d4 = fStack_d4 - UVar50.fields.y;
    fVar44 = fVar44 - UVar50.fields.z;
    fVar44 = fVar44 * fVar44 + fStack_d4 * fStack_d4 + local_d8 * local_d8;
    pfVar4 = &(__this->fields)._minVertexDistance;
    iVar35 = (pSVar15->fields)._size;
    if (fVar44 < *pfVar4 || fVar44 == *pfVar4) {
      if (0 < iVar35) {
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            (pSVar15,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar22 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
        if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
           (UVar51 = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar23[1].klass + 4) = UVar51;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar22 = (__this->fields)._base;
        if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
           (UVar50 = UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)(pIVar23 + 2) = UVar50.fields;
        pMVar29 = extraout_RDX_00;
      }
      pSVar34 = (__this->fields)._points;
      if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
      goto LAB_03d6e165;
      iVar35 = (pSVar34->fields)._size;
      if (0 < iVar35) {
LAB_03d6cf5c:
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar34,iVar35 + -1,
                             MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar22 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
        if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
           (UVar51 = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar23[1].klass + 4) = UVar51;
        pSVar34 = (__this->fields)._points;
        if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
        goto LAB_03d6e165;
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar34,
                             (pSVar34->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar22 = (__this->fields)._base;
        if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
           (UVar50 = UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)(pIVar23 + 2) = UVar50.fields;
        pMVar29 = extraout_RDX_01;
      }
    }
    else {
      if (2 < iVar35) {
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            (pSVar15,iVar35 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar23 == (Il2CppObject *)0x0) ||
           (pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar15 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        pIVar7 = pIVar23[2].klass;
        fVar39 = *(float *)&pIVar23[2].monitor;
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            (pSVar15,(pSVar15->fields)._size + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar23 == (Il2CppObject *)0x0) ||
           (pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar15 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        fVar39 = fVar39 - *(float *)&pIVar23[2].monitor;
        pIVar8 = pIVar23[2].klass;
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar23 == (Il2CppObject *)0x0) ||
           (pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar15 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        pIVar9 = pIVar23[2].klass;
        fVar47 = *(float *)&pIVar23[2].monitor;
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            (pSVar15,(pSVar15->fields)._size + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar23 == (Il2CppObject *)0x0) goto LAB_03d6e165;
        local_c8 = SUB84(pIVar7,0);
        fStack_c4 = (float)((ulong)pIVar7 >> 0x20);
        local_98 = SUB84(pIVar8,0);
        fStack_94 = (float)((ulong)pIVar8 >> 0x20);
        local_c8 = local_c8 - local_98;
        fStack_c4 = fStack_c4 - fStack_94;
        local_b8 = SUB84(pIVar9,0);
        fStack_b4 = (float)((ulong)pIVar9 >> 0x20);
        local_b8 = local_b8 - SUB84(pIVar23[2].klass,0);
        fStack_b4 = fStack_b4 - (float)((ulong)pIVar23[2].klass >> 0x20);
        fVar47 = fVar47 - *(float *)&pIVar23[2].monitor;
        if (DAT_0570266a == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_0570266a = '\x01';
        }
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        fVar40 = (fVar39 * fVar39 + fStack_c4 * fStack_c4 + local_c8 * local_c8) *
                 (fVar47 * fVar47 + fStack_b4 * fStack_b4 + local_b8 * local_b8);
        if (fVar40 < 0.0) {
          fVar40 = sqrtf(fVar40);
          pMVar29 = TypeInfo_Math;
        }
        else {
          fVar40 = SQRT(fVar40);
          pMVar29 = TypeInfo_Math;
        }
        fVar41 = 0.0;
        TypeInfo_Math = pMVar29;
        if (1e-15 <= fVar40) {
          fVar40 = (fVar39 * fVar47 + fStack_c4 * fStack_b4 + local_c8 * local_b8) / fVar40;
          fVar39 = 1.0;
          if (fVar40 <= 1.0) {
            fVar39 = fVar40;
          }
          if (*(int *)((long)&pMVar29[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          dVar42 = acos((double)(float)(~-(uint)(-1.0 <= fVar40) & 0xbf800000 |
                                       (uint)fVar39 & -(uint)(-1.0 <= fVar40)),pMVar29);
          fVar41 = (float)dVar42 * 57.29578;
        }
        pfVar4 = &(__this->fields)._minVertexDistanceSqr;
        if ((fVar41 < *pfVar4 || fVar41 == *pfVar4) &&
           (pfVar4 = &(__this->fields)._maxVertexDistance, fVar44 < *pfVar4 || fVar44 == *pfVar4)) {
          pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
          pIVar23 = System_Collections_Generic_List<object>__get_Item
                              (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pUVar22 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
          if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
             (UVar51 = (UnityEngine_Vector3_Fields)
                       UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0),
             pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
          *(UnityEngine_Vector3_Fields *)((long)&pIVar23[1].klass + 4) = UVar51;
          pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
          pIVar23 = System_Collections_Generic_List<object>__get_Item
                              (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pUVar22 = (__this->fields)._base;
          if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
             (UVar50 = UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0),
             pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
          *(UnityEngine_Vector3_Fields *)(pIVar23 + 2) = UVar50.fields;
          pSVar34 = (__this->fields)._points;
          if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
          goto LAB_03d6e165;
          iVar35 = (pSVar34->fields)._size;
          goto LAB_03d6cf5c;
        }
      }
      __this_00 = (MeleeWeaponTrail_Point_o *)il2cpp_runtime_glue(TypeInfo_Point);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pUVar22 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
      if ((pUVar22 == (UnityEngine_Transform_o *)0x0) ||
         (UVar51 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0),
         __this_00 == (MeleeWeaponTrail_Point_o *)0x0)) goto LAB_03d6e165;
      (__this_00->fields).basePosition.fields = UVar51;
      pUVar22 = (__this->fields)._base;
      if (pUVar22 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      UVar51 = (UnityEngine_Vector3_Fields)
               UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0);
      (__this_00->fields).tipPosition.fields = UVar51;
      fVar44 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_00->fields).timeCreated = fVar44;
      lVar31 = MethodInfo_Void_Add;
      pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
      if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
      piVar2 = &(pSVar15->fields)._version;
      *piVar2 = *piVar2 + 1;
      pSVar16 = (pSVar15->fields)._items;
      if (pSVar16 == (System_Object_array *)0x0) goto LAB_03d6e165;
      uVar36 = (pSVar15->fields)._size;
      if (uVar36 < (uint)pSVar16->max_length) {
        (pSVar15->fields)._size = uVar36 + 1;
        pSVar16->m_Items[(int)uVar36] = (Il2CppObject *)__this_00;
        il2cpp_runtime_glue(pSVar16->m_Items + (int)uVar36);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar15,(Il2CppObject *)__this_00,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
      }
      pUVar22 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar22 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      UVar50 = UnityEngine_Transform__get_position(pUVar22,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)&(__this->fields)._trailMesh = UVar50.fields;
      lVar31 = MethodInfo_Void_Add;
      pUVar22 = (__this->fields)._tip;
      if (pUVar22 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      iVar35 = *(int *)&pUVar22[1].klass;
      if (iVar35 == 1) {
        pSVar34 = (__this->fields)._points;
        if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
        goto LAB_03d6e165;
        piVar2 = &(pSVar34->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar17 = (pSVar34->fields)._items;
        if (pMVar17 == (MeleeWeaponTrail_Point_array *)0x0) goto LAB_03d6e165;
        uVar36 = (pSVar34->fields)._size;
        if ((uint)pMVar17->max_length <= uVar36) {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar34,(Il2CppObject *)__this_00,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
          pMVar29 = extraout_RDX_06;
          goto LAB_03d6d388;
        }
        (pSVar34->fields)._size = uVar36 + 1;
        pMVar17->m_Items[(int)uVar36] = __this_00;
        il2cpp_runtime_glue(pMVar17->m_Items + (int)uVar36,__this_00);
        pUVar22 = (__this->fields)._tip;
        pMVar29 = extraout_RDX_03;
      }
      else {
        pMVar29 = extraout_RDX_02;
        if ((1 < iVar35) && (0 < (int)(__this->fields)._maxAngle + 1)) {
          iVar35 = 0;
          pSVar34 = (__this->fields)._points;
          while (MethodInfo_Void_Add = lVar31,
                pSVar34 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            piVar2 = &(pSVar34->fields)._version;
            *piVar2 = *piVar2 + 1;
            pMVar17 = (pSVar34->fields)._items;
            if (pMVar17 == (MeleeWeaponTrail_Point_array *)0x0) break;
            uVar36 = (pSVar34->fields)._size;
            if (uVar36 < (uint)pMVar17->max_length) {
              (pSVar34->fields)._size = uVar36 + 1;
              pMVar17->m_Items[(int)uVar36] = __this_00;
              il2cpp_runtime_glue(pMVar17->m_Items + (int)uVar36,__this_00);
              pMVar29 = extraout_RDX_05;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar34,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70)
                        );
              pMVar29 = extraout_RDX_04;
            }
            iVar35 = iVar35 + 1;
            if ((int)(__this->fields)._maxAngle + 1 <= iVar35) goto LAB_03d6d388;
            lVar31 = MethodInfo_Void_Add;
            pSVar34 = (__this->fields)._points;
          }
          goto LAB_03d6e165;
        }
LAB_03d6d388:
        pUVar22 = (__this->fields)._tip;
      }
      if (pUVar22 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      if (3 < *(int *)&pUVar22[1].klass) {
        pSVar25 = (System_Collections_IList_o *)il2cpp_glue_02274930(TypeInfo_Vector3,4);
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
            (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar15,(pSVar15->fields)._size + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item),
            pIVar23 == (Il2CppObject *)0x0)) || (pSVar25 == (System_Collections_IList_o *)0x0))
        goto LAB_03d6e165;
        if (*(int *)&pSVar25[1].monitor == 0) {
LAB_03d6e023:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar13 = *(undefined4 *)&pIVar23[2].monitor;
        pSVar25[2].klass = (System_Collections_IList_c *)pIVar23[2].klass;
        *(undefined4 *)&pSVar25[2].monitor = uVar13;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                (pSVar15,(pSVar15->fields)._size + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar25[1].monitor < 2) goto LAB_03d6e023;
        uVar13 = *(undefined4 *)&pIVar23[2].monitor;
        *(Il2CppClass **)((long)&pSVar25[2].monitor + 4) = pIVar23[2].klass;
        *(undefined4 *)((long)&pSVar25[3].klass + 4) = uVar13;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                (pSVar15,(pSVar15->fields)._size + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar25[1].monitor < 3) goto LAB_03d6e023;
        uVar13 = *(undefined4 *)&pIVar23[2].monitor;
        pSVar25[3].monitor = pIVar23[2].klass;
        *(undefined4 *)&pSVar25[4].klass = uVar13;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar25[1].monitor < 4) goto LAB_03d6e023;
        uVar13 = *(undefined4 *)&pIVar23[2].monitor;
        *(Il2CppClass **)((long)&pSVar25[4].klass + 4) = pIVar23[2].klass;
        *(undefined4 *)((long)&pSVar25[4].monitor + 4) = uVar13;
        fVar44 = (__this->fields)._maxAngle;
        if (DAT_057025f3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Vector3_Identity);
          il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
          il2cpp_init_method_metadata(&TypeInfo_ToVector3_Vector3);
          DAT_057025f3 = '\x01';
        }
        pIVar26 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_glue(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3<Vector3>___ctor();
        collection = Interpolate__NewCatmullRom<Vector3>
                               (pSVar25,pIVar26,(int32_t)fVar44,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
        pSVar25 = (System_Collections_IList_o *)il2cpp_glue_02274930(TypeInfo_Vector3,4);
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
            (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar15,(pSVar15->fields)._size + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item),
            pIVar23 == (Il2CppObject *)0x0)) || (pSVar25 == (System_Collections_IList_o *)0x0))
        goto LAB_03d6e165;
        if (*(int *)&pSVar25[1].monitor == 0) goto LAB_03d6e023;
        uVar13 = *(undefined4 *)((long)&pIVar23[1].monitor + 4);
        pSVar25[2].klass = *(System_Collections_IList_c **)((long)&pIVar23[1].klass + 4);
        *(undefined4 *)&pSVar25[2].monitor = uVar13;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                (pSVar15,(pSVar15->fields)._size + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar25[1].monitor < 2) goto LAB_03d6e023;
        uVar13 = *(undefined4 *)((long)&pIVar23[1].monitor + 4);
        *(undefined8 *)((long)&pSVar25[2].monitor + 4) =
             *(undefined8 *)((long)&pIVar23[1].klass + 4);
        *(undefined4 *)((long)&pSVar25[3].klass + 4) = uVar13;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                (pSVar15,(pSVar15->fields)._size + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar25[1].monitor < 3) goto LAB_03d6e023;
        uVar13 = *(undefined4 *)((long)&pIVar23[1].monitor + 4);
        pSVar25[3].monitor = *(void **)((long)&pIVar23[1].klass + 4);
        *(undefined4 *)&pSVar25[4].klass = uVar13;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar23 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar25[1].monitor < 4) goto LAB_03d6e023;
        uVar13 = *(undefined4 *)((long)&pIVar23[1].monitor + 4);
        *(undefined8 *)((long)&pSVar25[4].klass + 4) = *(undefined8 *)((long)&pIVar23[1].klass + 4);
        *(undefined4 *)((long)&pSVar25[4].monitor + 4) = uVar13;
        fVar44 = (__this->fields)._maxAngle;
        if (DAT_057025f3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Vector3_Identity);
          il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
          il2cpp_init_method_metadata(&TypeInfo_ToVector3_Vector3);
          DAT_057025f3 = '\x01';
        }
        pIVar26 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_glue(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3<Vector3>___ctor();
        collection_00 =
             Interpolate__NewCatmullRom<Vector3>(pSVar25,pIVar26,(int32_t)fVar44,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
        __this_01 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
        System_Collections_Generic_List<Vector3>___ctor
                  (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_UnityEngine_Vector3)
        ;
        __this_02 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
        System_Collections_Generic_List<Vector3>___ctor
                  (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
                   MethodInfo_List_1_UnityEngine_Vector3);
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (((pSVar15 == (System_Collections_Generic_List_object__o *)0x0) ||
            (pIVar23 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar15,(pSVar15->fields)._size + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item),
            pIVar23 == (Il2CppObject *)0x0)) ||
           (pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar15 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        fVar44 = *(float *)&pIVar23[1].klass;
        pIVar23 = System_Collections_Generic_List<object>__get_Item
                            (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar23 == (Il2CppObject *)0x0) ||
           (__this_01 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_03d6e165;
        iVar35 = (__this_01->fields)._size;
        pMVar29 = extraout_RDX_07;
        if (__this_02 == (System_Collections_Generic_List_Vector3__o *)0x0) {
          if (0 < iVar35) {
            pSVar34 = (__this->fields)._points;
            pMVar29 = (MethodInfo *)(ulong)(uint)-iVar35;
            iVar30 = 0;
            do {
              if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              goto LAB_03d6e165;
              iVar14 = (pSVar34->fields)._size;
              iVar32 = -iVar35 + iVar30 + iVar14;
              if ((-1 < iVar32) && (iVar32 < iVar14)) {
                pIVar23 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Point);
                System_Object___ctor(pIVar23,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              iVar30 = iVar30 + 1;
            } while (iVar30 < iVar35);
          }
        }
        else if (0 < iVar35) {
          fVar39 = *(float *)&pIVar23[1].klass;
          iVar30 = 0;
          pSVar34 = (__this->fields)._points;
          while (pSVar34 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            iVar14 = (pSVar34->fields)._size;
            iVar35 = (iVar14 - iVar35) + iVar30;
            if ((-1 < iVar35) && (iVar35 < iVar14)) {
              pIVar23 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Point);
              System_Object___ctor(pIVar23,(MethodInfo *)0x0);
              UVar51 = (UnityEngine_Vector3_Fields)
                       System_Collections_Generic_List<Vector3>__get_Item
                                 (__this_02,iVar30,MethodInfo_Vector3_get_Item);
              if (pIVar23 == (Il2CppObject *)0x0) break;
              *(UnityEngine_Vector3_Fields *)((long)&pIVar23[1].klass + 4) = UVar51;
              UVar50 = System_Collections_Generic_List<Vector3>__get_Item
                                 (__this_01,iVar30,MethodInfo_Vector3_get_Item);
              *(UnityEngine_Vector3_Fields *)(pIVar23 + 2) = UVar50.fields;
              fVar40 = (float)iVar30 / (float)(__this_01->fields)._size;
              fVar47 = 1.0;
              if (fVar40 <= 1.0) {
                fVar47 = fVar40;
              }
              *(float *)&pIVar23[1].klass =
                   (float)(-(uint)(0.0 <= fVar40) & (uint)fVar47) * (fVar39 - fVar44) + fVar44;
              pSVar34 = (__this->fields)._points;
              if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              break;
              System_Collections_Generic_List<object>__set_Item
                        ((System_Collections_Generic_List_object__o *)pSVar34,iVar35,pIVar23,
                         MethodInfo_Void_set_Item);
              pMVar29 = extraout_RDX_08;
            }
            iVar30 = iVar30 + 1;
            iVar35 = (__this_01->fields)._size;
            if (iVar35 <= iVar30) goto LAB_03d6d93c;
            pSVar34 = (__this->fields)._points;
          }
          goto LAB_03d6e165;
        }
      }
    }
  }
LAB_03d6d93c:
  MeleeWeaponTrail__RemoveOldPoints
            (__this,(System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)
                    (__this->fields)._tip,pMVar29);
  pUVar22 = (__this->fields)._tip;
  if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
    pMVar29 = extraout_RDX_09;
    if (*(int *)&pUVar22[1].klass == 0) {
      pUVar24 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar21 = UnityEngine_Object__op_Inequality
                         (pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar29 = extraout_RDX_10;
      if ((char)bVar21 != '\0') {
        pUVar6 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
        if (pUVar6 == (UnityEngine_Mesh_o *)0x0) goto LAB_03d6e165;
        UnityEngine_Mesh__Clear(pUVar6,(MethodInfo *)0x0);
        pMVar29 = extraout_RDX_11;
      }
    }
    MeleeWeaponTrail__RemoveOldPoints(__this,(__this->fields)._points,pMVar29);
    pSVar34 = (__this->fields)._points;
    if (pSVar34 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      if ((pSVar34->fields)._size == 0) {
        pUVar24 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar21 = UnityEngine_Object__op_Inequality
                           (pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar21 != '\0') {
          pUVar6 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
          if (pUVar6 == (UnityEngine_Mesh_o *)0x0) goto LAB_03d6e165;
          UnityEngine_Mesh__Clear(pUVar6,(MethodInfo *)0x0);
        }
      }
      pSVar34 = (__this->fields)._points;
      if (pSVar34 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        iVar35 = (pSVar34->fields)._size;
        if (iVar35 < 2) {
          return;
        }
        value = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,iVar35 * 2);
        value_00 = (UnityEngine_Vector2_array *)
                   il2cpp_glue_02274930(TypeInfo_Vector2,(pSVar34->fields)._size * 2);
        value_01 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,(pSVar34->fields)._size * 6 + -6)
        ;
        value_02 = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color);
        if (0 < (pSVar34->fields)._size) {
          uVar37 = 1;
          uVar36 = 0xfffffffd;
          lVar31 = 0;
          lVar33 = 0;
          do {
            pIVar23 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar34,
                                 (int32_t)lVar33,MethodInfo_MeleeWeaponTrail_Point_get_Item);
            fVar44 = UnityEngine_Time__get_time((MethodInfo *)0x0);
            if (pIVar23 == (Il2CppObject *)0x0) goto LAB_03d6e165;
            fVar39 = (fVar44 - *(float *)&pIVar23[1].klass) / *(float *)&(__this->fields)._material;
            fVar44 = 1.0;
            if (fVar39 <= 1.0) {
              fVar44 = fVar39;
            }
            fVar44 = (float)(~-(uint)(0.0 <= fVar39) & 0x3f800000 |
                            (uint)(1.0 - fVar44) & -(uint)(0.0 <= fVar39));
            uVar49 = CONCAT44(fVar44,fVar44);
            lVar28 = *(long *)&(__this->fields)._lifeTime;
            fVar47 = fVar44;
            if ((lVar28 != 0) && (*(long *)(lVar28 + 0x18) != 0)) {
              uVar20 = (uint)*(long *)(lVar28 + 0x18);
              fVar45 = (float)(int)(uVar20 - 1);
              fVar47 = fVar39 * fVar45;
              fVar40 = floorf(fVar47);
              fVar41 = ceilf(fVar47);
              fVar44 = fVar45;
              if (fVar41 <= fVar45) {
                fVar44 = fVar41;
              }
              fVar44 = (float)(~-(uint)(1.0 <= fVar41) & 0x3f800000 |
                              (uint)fVar44 & -(uint)(1.0 <= fVar41));
              if ((fVar40 != fVar44) || (NAN(fVar40) || NAN(fVar44))) {
                fVar41 = (fVar47 - fVar40) / (fVar44 - fVar40);
                fVar47 = 0.0;
                if ((0.0 <= fVar41) && (fVar47 = 1.0, fVar41 <= 1.0)) {
                  fVar47 = fVar41;
                }
              }
              else {
                fVar47 = 0.0;
              }
              uVar38 = -(uint)(fVar40 < (float)(int)uVar20);
              fVar41 = (float)(~uVar38 & (uint)fVar45 | uVar38 & (uint)fVar40);
              fVar40 = 0.0;
              if (0.0 <= fVar41) {
                fVar40 = fVar41;
              }
              if (uVar20 <= (uint)(int)fVar40) goto LAB_03d6e023;
              uVar38 = -(uint)(fVar44 < (float)(int)uVar20);
              fVar41 = (float)(~uVar38 & (uint)fVar45 | uVar38 & (uint)fVar44);
              fVar44 = 0.0;
              if (0.0 <= fVar41) {
                fVar44 = fVar41;
              }
              if (uVar20 <= (uint)(int)fVar44) goto LAB_03d6e023;
              lVar27 = (long)(int)fVar40 * 0x10;
              uVar49 = *(undefined8 *)(lVar28 + 0x20 + lVar27);
              uVar10 = *(undefined8 *)(lVar28 + 0x28 + lVar27);
              lVar27 = (long)(int)fVar44 * 0x10;
              uVar11 = *(undefined8 *)(lVar28 + 0x20 + lVar27);
              uVar12 = *(undefined8 *)(lVar28 + 0x28 + lVar27);
              fVar40 = 0.0;
              if (0.0 <= fVar47) {
                fVar40 = fVar47;
              }
              fVar44 = (float)uVar49;
              fVar47 = (float)((ulong)uVar49 >> 0x20);
              uVar49 = CONCAT44(((float)((ulong)uVar11 >> 0x20) - fVar47) * fVar40 + fVar47,
                                ((float)uVar11 - fVar44) * fVar40 + fVar44);
              fVar44 = (float)uVar10;
              fVar47 = (float)((ulong)uVar10 >> 0x20);
              fVar44 = ((float)uVar12 - fVar44) * fVar40 + fVar44;
              fVar47 = ((float)((ulong)uVar12 >> 0x20) - fVar47) * fVar40 + fVar47;
            }
            pUVar18 = (__this->fields)._colors;
            fVar40 = 0.0;
            if ((pUVar18 != (UnityEngine_Color_array *)0x0) && (pUVar18->max_length != 0)) {
              uVar20 = (uint)pUVar18->max_length;
              fVar46 = (float)(int)(uVar20 - 1);
              fVar39 = fVar39 * fVar46;
              fVar41 = floorf(fVar39);
              fVar45 = ceilf(fVar39);
              fVar40 = fVar46;
              if (fVar45 <= fVar46) {
                fVar40 = fVar45;
              }
              fVar40 = (float)(~-(uint)(1.0 <= fVar45) & 0x3f800000 |
                              (uint)fVar40 & -(uint)(1.0 <= fVar45));
              if ((fVar41 != fVar40) || (NAN(fVar41) || NAN(fVar40))) {
                fVar45 = (fVar39 - fVar41) / (fVar40 - fVar41);
                fVar39 = 0.0;
                if ((0.0 <= fVar45) && (fVar39 = 1.0, fVar45 <= 1.0)) {
                  fVar39 = fVar45;
                }
              }
              else {
                fVar39 = 0.0;
              }
              uVar38 = -(uint)(fVar41 < (float)(int)uVar20);
              fVar45 = (float)(~uVar38 & (uint)fVar46 | uVar38 & (uint)fVar41);
              fVar41 = 0.0;
              if (0.0 <= fVar45) {
                fVar41 = fVar45;
              }
              if (uVar20 <= (uint)(int)fVar41) goto LAB_03d6e023;
              uVar38 = -(uint)(fVar40 < (float)(int)uVar20);
              fVar40 = (float)(~uVar38 & (uint)fVar46 | uVar38 & (uint)fVar40);
              fVar45 = 0.0;
              if (0.0 <= fVar40) {
                fVar45 = fVar40;
              }
              if (uVar20 <= (uint)(int)fVar45) goto LAB_03d6e023;
              fVar40 = (&pUVar18->m_Items[0].fields.r)[(int)fVar41];
              fVar41 = 0.0;
              if (0.0 <= fVar39) {
                fVar41 = fVar39;
              }
              fVar40 = ((&pUVar18->m_Items[0].fields.r)[(int)fVar45] - fVar40) * fVar41 + fVar40;
            }
            if (value == (UnityEngine_Vector3_array *)0x0) goto LAB_03d6e165;
            uVar3 = uVar37 - 1;
            if ((uint)value->max_length <= uVar3) goto LAB_03d6e023;
            uVar10 = *(undefined8 *)((long)&pIVar23[1].klass + 4);
            fVar46 = (float)uVar10;
            fVar48 = (float)((ulong)uVar10 >> 0x20);
            fVar39 = *(float *)((long)&pIVar23[1].monitor + 4);
            fVar40 = fVar40 * 0.5;
            fVar41 = fVar40 * (SUB84(pIVar23[2].klass,0) - fVar46);
            fVar45 = fVar40 * ((float)((ulong)pIVar23[2].klass >> 0x20) - fVar48);
            fVar40 = fVar40 * (*(float *)&pIVar23[2].monitor - fVar39);
            lVar28 = lVar31 >> 0x20;
            value->m_Items[lVar28].fields.x = fVar46 - fVar41;
            value->m_Items[lVar28].fields.y = fVar48 - fVar45;
            value->m_Items[lVar28].fields.z = fVar39 - fVar40;
            if ((uint)value->max_length <= uVar37) goto LAB_03d6e023;
            lVar27 = lVar31 + 0x100000000 >> 0x20;
            pIVar7 = pIVar23[2].klass;
            fVar39 = *(float *)&pIVar23[2].monitor;
            value->m_Items[lVar27].fields.x = fVar41 + SUB84(pIVar7,0);
            value->m_Items[lVar27].fields.y = fVar45 + (float)((ulong)pIVar7 >> 0x20);
            value->m_Items[lVar27].fields.z = fVar40 + fVar39;
            if (value_02 == (UnityEngine_Color_array *)0x0) goto LAB_03d6e165;
            if ((uint)value_02->max_length <= uVar37) goto LAB_03d6e023;
            pUVar5 = value_02->m_Items + lVar27;
            (pUVar5->fields).r = (float)(int)uVar49;
            (pUVar5->fields).g = (float)(int)((ulong)uVar49 >> 0x20);
            (pUVar5->fields).b = fVar44;
            (pUVar5->fields).a = fVar47;
            if ((uint)value_02->max_length <= uVar3) goto LAB_03d6e023;
            pUVar5 = value_02->m_Items + lVar28;
            (pUVar5->fields).r = (float)(int)uVar49;
            (pUVar5->fields).g = (float)(int)((ulong)uVar49 >> 0x20);
            (pUVar5->fields).b = fVar44;
            (pUVar5->fields).a = fVar47;
            if (value_00 == (UnityEngine_Vector2_array *)0x0) goto LAB_03d6e165;
            if ((uint)value_00->max_length <= uVar3) goto LAB_03d6e023;
            fVar44 = (float)(int32_t)lVar33 / (float)(pSVar34->fields)._size;
            UVar43.fields.y = 0.0;
            UVar43.fields.x = fVar44;
            value_00->m_Items[lVar28].fields = UVar43.fields;
            if ((uint)value_00->max_length <= uVar37) goto LAB_03d6e023;
            UVar19.fields.y = 1.0;
            UVar19.fields.x = fVar44;
            value_00->m_Items[lVar27].fields = UVar19.fields;
            if (uVar37 != 1) {
              if (value_01 == (System_Int32_array *)0x0) goto LAB_03d6e165;
              uVar20 = (uint)value_01->max_length;
              if (uVar20 <= uVar36 - 3) goto LAB_03d6e023;
              iVar35 = (int)uVar37;
              value_01->m_Items[(int)(uVar36 - 3)] = iVar35 + -3;
              if (uVar20 <= uVar36 - 2) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar36 - 2)] = iVar35 + -2;
              if (uVar20 <= uVar36 - 1) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar36 - 1)] = (int32_t)uVar3;
              if (uVar20 <= uVar36) goto LAB_03d6e023;
              value_01->m_Items[(int)uVar36] = iVar35;
              if (uVar20 <= uVar36 + 1) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar36 + 1)] = (int32_t)uVar3;
              if (uVar20 <= uVar36 + 2) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar36 + 2)] = iVar35 + -2;
            }
            lVar33 = lVar33 + 1;
            uVar37 = uVar37 + 2;
            lVar31 = lVar31 + 0x200000000;
            uVar36 = uVar36 + 6;
          } while (lVar33 < (pSVar34->fields)._size);
        }
        pUVar6 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
        if (pUVar6 != (UnityEngine_Mesh_o *)0x0) {
          UnityEngine_Mesh__Clear(pUVar6,(MethodInfo *)0x0);
          pUVar6 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
          if (pUVar6 != (UnityEngine_Mesh_o *)0x0) {
            UnityEngine_Mesh__set_vertices(pUVar6,value,(MethodInfo *)0x0);
            pUVar6 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
            if (pUVar6 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__set_colors(pUVar6,value_02,(MethodInfo *)0x0);
              pUVar6 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
              if (pUVar6 != (UnityEngine_Mesh_o *)0x0) {
                UnityEngine_Mesh__set_uv(pUVar6,value_00,(MethodInfo *)0x0);
                pUVar6 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
                if (pUVar6 != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__set_triangles(pUVar6,value_01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03d6e165:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MeleeWeaponTrail$$Update
// il2cpp: void MeleeWeaponTrail__Update (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x3d6ca50

/* WARNING: Type propagation algorithm not settling */

void MeleeWeaponTrail__Update(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  ulong uVar2;
  float *pfVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Mesh_o *pUVar5;
  Il2CppClass *pIVar6;
  Il2CppClass *pIVar7;
  Il2CppClass *pIVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  System_Object_array *pSVar15;
  MeleeWeaponTrail_Point_array *pMVar16;
  UnityEngine_Color_array *pUVar17;
  UnityEngine_Vector2_o UVar18;
  uint uVar19;
  bool_conflict bVar20;
  UnityEngine_Transform_o *pUVar21;
  Il2CppObject *pIVar22;
  UnityEngine_Object_o *pUVar23;
  MeleeWeaponTrail_Point_o *__this_00;
  System_Collections_IList_o *pSVar24;
  Interpolate_ToVector3_T__o *pIVar25;
  System_Collections_Generic_IEnumerable_Vector3__o *collection;
  System_Collections_Generic_IEnumerable_Vector3__o *collection_00;
  System_Collections_Generic_List_Vector3__o *__this_01;
  System_Collections_Generic_List_Vector3__o *__this_02;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  System_Int32_array *value_01;
  UnityEngine_Color_array *value_02;
  long lVar26;
  long lVar27;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *pMVar28;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  int iVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar33;
  int iVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  UnityEngine_Vector2_o UVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_Fields UVar50;
  float fStack_d8;
  float fStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_98;
  float fStack_94;
  
  if (DAT_057025fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MeleeWeaponTrail_Point_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Point);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057025fc = '\x01';
  }
  pUVar23 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar20 = UnityEngine_Object__op_Equality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar20 != '\0') {
    return;
  }
  if (*(char *)((long)&(__this->fields)._emit + 1) == '\0') {
    return;
  }
  if ((char)(__this->fields)._emit == '\0') {
LAB_03d6cc07:
    pUVar21 = (__this->fields)._tip;
joined_r0x03d6cbf8:
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
    if ((*(int *)&pUVar21[1].klass == 0) &&
       (*(char *)&(__this->fields)._maxVertexDistanceSqr != '\0')) {
      pSVar33 = (__this->fields)._smoothedPoints;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar20 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar33,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar20 != '\0') {
        pSVar33 = (__this->fields)._smoothedPoints;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy((UnityEngine_Object_o *)pSVar33,(MethodInfo *)0x0);
      }
      pUVar23 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar20 = UnityEngine_Object__op_Inequality
                         (pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar20 != '\0') {
        pUVar23 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(pUVar23,(MethodInfo *)0x0);
      }
    }
  }
  else {
    fVar43 = (float)(__this->fields)._use;
    if ((fVar43 != 0.0) || (NAN(fVar43))) {
      fVar38 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar43 = fVar43 - fVar38;
      (__this->fields)._use = (bool_conflict)fVar43;
      if ((fVar43 != 0.0) || (NAN(fVar43))) {
        if (0.0 <= fVar43) {
          if ((char)(__this->fields)._emit == '\0') goto LAB_03d6cc07;
          goto LAB_03d6cc1f;
        }
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar21 = (__this->fields)._tip;
      }
      else {
        (__this->fields)._use = -0x40800000;
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar21 = (__this->fields)._tip;
      }
      goto joined_r0x03d6cbf8;
    }
  }
LAB_03d6cc1f:
  pUVar5 = (__this->fields)._trailMesh;
  fVar43 = (__this->fields)._lastPosition.fields.x;
  pUVar21 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
  UVar49 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
  pMVar28 = extraout_RDX;
  if ((char)(__this->fields)._emit != '\0') {
    pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
    fStack_d8 = SUB84(pUVar5,0);
    fStack_d4 = (float)((ulong)pUVar5 >> 0x20);
    fStack_d8 = fStack_d8 - UVar49.fields.x;
    fStack_d4 = fStack_d4 - UVar49.fields.y;
    fVar43 = fVar43 - UVar49.fields.z;
    fVar43 = fVar43 * fVar43 + fStack_d4 * fStack_d4 + fStack_d8 * fStack_d8;
    pfVar3 = &(__this->fields)._minVertexDistance;
    iVar34 = (pSVar14->fields)._size;
    if (fVar43 < *pfVar3 || fVar43 == *pfVar3) {
      if (0 < iVar34) {
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            (pSVar14,iVar34 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar21 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (UVar50 = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar50;
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            (pSVar14,(pSVar14->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar21 = (__this->fields)._base;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (UVar49 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar49.fields;
        pMVar28 = extraout_RDX_00;
      }
      pSVar33 = (__this->fields)._points;
      if (pSVar33 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
      goto LAB_03d6e165;
      iVar34 = (pSVar33->fields)._size;
      if (0 < iVar34) {
LAB_03d6cf5c:
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar33,iVar34 + -1,
                             MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar21 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (UVar50 = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar50;
        pSVar33 = (__this->fields)._points;
        if (pSVar33 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
        goto LAB_03d6e165;
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar33,
                             (pSVar33->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar21 = (__this->fields)._base;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (UVar49 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar49.fields;
        pMVar28 = extraout_RDX_01;
      }
    }
    else {
      if (2 < iVar34) {
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            (pSVar14,iVar34 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar14 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        pIVar6 = pIVar22[2].klass;
        fVar38 = *(float *)&pIVar22[2].monitor;
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            (pSVar14,(pSVar14->fields)._size + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar14 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        fVar38 = fVar38 - *(float *)&pIVar22[2].monitor;
        pIVar7 = pIVar22[2].klass;
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            (pSVar14,(pSVar14->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar14 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        pIVar8 = pIVar22[2].klass;
        fVar46 = *(float *)&pIVar22[2].monitor;
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            (pSVar14,(pSVar14->fields)._size + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto LAB_03d6e165;
        fStack_c8 = SUB84(pIVar6,0);
        fStack_c4 = (float)((ulong)pIVar6 >> 0x20);
        fStack_98 = SUB84(pIVar7,0);
        fStack_94 = (float)((ulong)pIVar7 >> 0x20);
        fStack_c8 = fStack_c8 - fStack_98;
        fStack_c4 = fStack_c4 - fStack_94;
        fStack_b8 = SUB84(pIVar8,0);
        fStack_b4 = (float)((ulong)pIVar8 >> 0x20);
        fStack_b8 = fStack_b8 - SUB84(pIVar22[2].klass,0);
        fStack_b4 = fStack_b4 - (float)((ulong)pIVar22[2].klass >> 0x20);
        fVar46 = fVar46 - *(float *)&pIVar22[2].monitor;
        if (DAT_0570266a == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_0570266a = '\x01';
        }
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        fVar39 = (fVar38 * fVar38 + fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8) *
                 (fVar46 * fVar46 + fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8);
        if (fVar39 < 0.0) {
          fVar39 = sqrtf(fVar39);
          pMVar28 = TypeInfo_Math;
        }
        else {
          fVar39 = SQRT(fVar39);
          pMVar28 = TypeInfo_Math;
        }
        fVar40 = 0.0;
        TypeInfo_Math = pMVar28;
        if (1e-15 <= fVar39) {
          fVar39 = (fVar38 * fVar46 + fStack_c4 * fStack_b4 + fStack_c8 * fStack_b8) / fVar39;
          fVar38 = 1.0;
          if (fVar39 <= 1.0) {
            fVar38 = fVar39;
          }
          if (*(int *)((long)&pMVar28[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          dVar41 = acos((double)(float)(~-(uint)(-1.0 <= fVar39) & 0xbf800000 |
                                       (uint)fVar38 & -(uint)(-1.0 <= fVar39)),pMVar28);
          fVar40 = (float)dVar41 * 57.29578;
        }
        pfVar3 = &(__this->fields)._minVertexDistanceSqr;
        if ((fVar40 < *pfVar3 || fVar40 == *pfVar3) &&
           (pfVar3 = &(__this->fields)._maxVertexDistance, fVar43 < *pfVar3 || fVar43 == *pfVar3)) {
          pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
          pIVar22 = System_Collections_Generic_List<object>__get_Item
                              (pSVar14,(pSVar14->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pUVar21 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
          if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
             (UVar50 = (UnityEngine_Vector3_Fields)
                       UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0),
             pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
          *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar50;
          pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
          pIVar22 = System_Collections_Generic_List<object>__get_Item
                              (pSVar14,(pSVar14->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pUVar21 = (__this->fields)._base;
          if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
             (UVar49 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0),
             pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
          *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar49.fields;
          pSVar33 = (__this->fields)._points;
          if (pSVar33 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
          goto LAB_03d6e165;
          iVar34 = (pSVar33->fields)._size;
          goto LAB_03d6cf5c;
        }
      }
      __this_00 = (MeleeWeaponTrail_Point_o *)il2cpp_runtime_glue(TypeInfo_Point);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pUVar21 = *(UnityEngine_Transform_o **)&(__this->fields).subdivisions;
      if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
         (UVar50 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0),
         __this_00 == (MeleeWeaponTrail_Point_o *)0x0)) goto LAB_03d6e165;
      (__this_00->fields).basePosition.fields = UVar50;
      pUVar21 = (__this->fields)._base;
      if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      UVar50 = (UnityEngine_Vector3_Fields)
               UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
      (__this_00->fields).tipPosition.fields = UVar50;
      fVar43 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_00->fields).timeCreated = fVar43;
      lVar30 = MethodInfo_Void_Add;
      pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
      if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d6e165;
      piVar1 = &(pSVar14->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar15 = (pSVar14->fields)._items;
      if (pSVar15 == (System_Object_array *)0x0) goto LAB_03d6e165;
      uVar35 = (pSVar14->fields)._size;
      if (uVar35 < (uint)pSVar15->max_length) {
        (pSVar14->fields)._size = uVar35 + 1;
        pSVar15->m_Items[(int)uVar35] = (Il2CppObject *)__this_00;
        il2cpp_runtime_glue(pSVar15->m_Items + (int)uVar35);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar14,(Il2CppObject *)__this_00,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
      }
      pUVar21 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      UVar49 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)&(__this->fields)._trailMesh = UVar49.fields;
      lVar30 = MethodInfo_Void_Add;
      pUVar21 = (__this->fields)._tip;
      if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      iVar34 = *(int *)&pUVar21[1].klass;
      if (iVar34 == 1) {
        pSVar33 = (__this->fields)._points;
        if (pSVar33 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
        goto LAB_03d6e165;
        piVar1 = &(pSVar33->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar16 = (pSVar33->fields)._items;
        if (pMVar16 == (MeleeWeaponTrail_Point_array *)0x0) goto LAB_03d6e165;
        uVar35 = (pSVar33->fields)._size;
        if ((uint)pMVar16->max_length <= uVar35) {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar33,(Il2CppObject *)__this_00,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
          pMVar28 = extraout_RDX_06;
          goto LAB_03d6d388;
        }
        (pSVar33->fields)._size = uVar35 + 1;
        pMVar16->m_Items[(int)uVar35] = __this_00;
        il2cpp_runtime_glue(pMVar16->m_Items + (int)uVar35,__this_00);
        pUVar21 = (__this->fields)._tip;
        pMVar28 = extraout_RDX_03;
      }
      else {
        pMVar28 = extraout_RDX_02;
        if ((1 < iVar34) && (0 < (int)(__this->fields)._maxAngle + 1)) {
          iVar34 = 0;
          pSVar33 = (__this->fields)._points;
          while (MethodInfo_Void_Add = lVar30,
                pSVar33 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            piVar1 = &(pSVar33->fields)._version;
            *piVar1 = *piVar1 + 1;
            pMVar16 = (pSVar33->fields)._items;
            if (pMVar16 == (MeleeWeaponTrail_Point_array *)0x0) break;
            uVar35 = (pSVar33->fields)._size;
            if (uVar35 < (uint)pMVar16->max_length) {
              (pSVar33->fields)._size = uVar35 + 1;
              pMVar16->m_Items[(int)uVar35] = __this_00;
              il2cpp_runtime_glue(pMVar16->m_Items + (int)uVar35,__this_00);
              pMVar28 = extraout_RDX_05;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar33,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70)
                        );
              pMVar28 = extraout_RDX_04;
            }
            iVar34 = iVar34 + 1;
            if ((int)(__this->fields)._maxAngle + 1 <= iVar34) goto LAB_03d6d388;
            lVar30 = MethodInfo_Void_Add;
            pSVar33 = (__this->fields)._points;
          }
          goto LAB_03d6e165;
        }
LAB_03d6d388:
        pUVar21 = (__this->fields)._tip;
      }
      if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_03d6e165;
      if (3 < *(int *)&pUVar21[1].klass) {
        pSVar24 = (System_Collections_IList_o *)il2cpp_glue_02274930(TypeInfo_Vector3,4);
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
            (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar14,(pSVar14->fields)._size + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item),
            pIVar22 == (Il2CppObject *)0x0)) || (pSVar24 == (System_Collections_IList_o *)0x0))
        goto LAB_03d6e165;
        if (*(int *)&pSVar24[1].monitor == 0) {
LAB_03d6e023:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar12 = *(undefined4 *)&pIVar22[2].monitor;
        pSVar24[2].klass = (System_Collections_IList_c *)pIVar22[2].klass;
        *(undefined4 *)&pSVar24[2].monitor = uVar12;
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                (pSVar14,(pSVar14->fields)._size + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar24[1].monitor < 2) goto LAB_03d6e023;
        uVar12 = *(undefined4 *)&pIVar22[2].monitor;
        *(Il2CppClass **)((long)&pSVar24[2].monitor + 4) = pIVar22[2].klass;
        *(undefined4 *)((long)&pSVar24[3].klass + 4) = uVar12;
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                (pSVar14,(pSVar14->fields)._size + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar24[1].monitor < 3) goto LAB_03d6e023;
        uVar12 = *(undefined4 *)&pIVar22[2].monitor;
        pSVar24[3].monitor = pIVar22[2].klass;
        *(undefined4 *)&pSVar24[4].klass = uVar12;
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                (pSVar14,(pSVar14->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar24[1].monitor < 4) goto LAB_03d6e023;
        uVar12 = *(undefined4 *)&pIVar22[2].monitor;
        *(Il2CppClass **)((long)&pSVar24[4].klass + 4) = pIVar22[2].klass;
        *(undefined4 *)((long)&pSVar24[4].monitor + 4) = uVar12;
        fVar43 = (__this->fields)._maxAngle;
        if (DAT_057025f3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Vector3_Identity);
          il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
          il2cpp_init_method_metadata(&TypeInfo_ToVector3_Vector3);
          DAT_057025f3 = '\x01';
        }
        pIVar25 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_glue(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3<Vector3>___ctor();
        collection = Interpolate__NewCatmullRom<Vector3>
                               (pSVar24,pIVar25,(int32_t)fVar43,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
        pSVar24 = (System_Collections_IList_o *)il2cpp_glue_02274930(TypeInfo_Vector3,4);
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
            (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar14,(pSVar14->fields)._size + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item),
            pIVar22 == (Il2CppObject *)0x0)) || (pSVar24 == (System_Collections_IList_o *)0x0))
        goto LAB_03d6e165;
        if (*(int *)&pSVar24[1].monitor == 0) goto LAB_03d6e023;
        uVar12 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        pSVar24[2].klass = *(System_Collections_IList_c **)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)&pSVar24[2].monitor = uVar12;
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                (pSVar14,(pSVar14->fields)._size + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar24[1].monitor < 2) goto LAB_03d6e023;
        uVar12 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        *(undefined8 *)((long)&pSVar24[2].monitor + 4) =
             *(undefined8 *)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)((long)&pSVar24[3].klass + 4) = uVar12;
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                (pSVar14,(pSVar14->fields)._size + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar24[1].monitor < 3) goto LAB_03d6e023;
        uVar12 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        pSVar24[3].monitor = *(void **)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)&pSVar24[4].klass = uVar12;
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if ((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
           (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                (pSVar14,(pSVar14->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item),
           pIVar22 == (Il2CppObject *)0x0)) goto LAB_03d6e165;
        if (*(uint *)&pSVar24[1].monitor < 4) goto LAB_03d6e023;
        uVar12 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        *(undefined8 *)((long)&pSVar24[4].klass + 4) = *(undefined8 *)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)((long)&pSVar24[4].monitor + 4) = uVar12;
        fVar43 = (__this->fields)._maxAngle;
        if (DAT_057025f3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Vector3_Identity);
          il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
          il2cpp_init_method_metadata(&TypeInfo_ToVector3_Vector3);
          DAT_057025f3 = '\x01';
        }
        pIVar25 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_glue(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3<Vector3>___ctor();
        collection_00 =
             Interpolate__NewCatmullRom<Vector3>(pSVar24,pIVar25,(int32_t)fVar43,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3__NewCatmullRom);
        __this_01 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
        System_Collections_Generic_List<Vector3>___ctor
                  (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_UnityEngine_Vector3)
        ;
        __this_02 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
        System_Collections_Generic_List<Vector3>___ctor
                  (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
                   MethodInfo_List_1_UnityEngine_Vector3);
        pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        if (((pSVar14 == (System_Collections_Generic_List_object__o *)0x0) ||
            (pIVar22 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar14,(pSVar14->fields)._size + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item),
            pIVar22 == (Il2CppObject *)0x0)) ||
           (pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip,
           pSVar14 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03d6e165;
        fVar43 = *(float *)&pIVar22[1].klass;
        pIVar22 = System_Collections_Generic_List<object>__get_Item
                            (pSVar14,(pSVar14->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (__this_01 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_03d6e165;
        iVar34 = (__this_01->fields)._size;
        pMVar28 = extraout_RDX_07;
        if (__this_02 == (System_Collections_Generic_List_Vector3__o *)0x0) {
          if (0 < iVar34) {
            pSVar33 = (__this->fields)._points;
            pMVar28 = (MethodInfo *)(ulong)(uint)-iVar34;
            iVar29 = 0;
            do {
              if (pSVar33 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              goto LAB_03d6e165;
              iVar13 = (pSVar33->fields)._size;
              iVar31 = -iVar34 + iVar29 + iVar13;
              if ((-1 < iVar31) && (iVar31 < iVar13)) {
                pIVar22 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Point);
                System_Object___ctor(pIVar22,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              iVar29 = iVar29 + 1;
            } while (iVar29 < iVar34);
          }
        }
        else if (0 < iVar34) {
          fVar38 = *(float *)&pIVar22[1].klass;
          iVar29 = 0;
          pSVar33 = (__this->fields)._points;
          while (pSVar33 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            iVar13 = (pSVar33->fields)._size;
            iVar34 = (iVar13 - iVar34) + iVar29;
            if ((-1 < iVar34) && (iVar34 < iVar13)) {
              pIVar22 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Point);
              System_Object___ctor(pIVar22,(MethodInfo *)0x0);
              UVar50 = (UnityEngine_Vector3_Fields)
                       System_Collections_Generic_List<Vector3>__get_Item
                                 (__this_02,iVar29,MethodInfo_Vector3_get_Item);
              if (pIVar22 == (Il2CppObject *)0x0) break;
              *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar50;
              UVar49 = System_Collections_Generic_List<Vector3>__get_Item
                                 (__this_01,iVar29,MethodInfo_Vector3_get_Item);
              *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar49.fields;
              fVar39 = (float)iVar29 / (float)(__this_01->fields)._size;
              fVar46 = 1.0;
              if (fVar39 <= 1.0) {
                fVar46 = fVar39;
              }
              *(float *)&pIVar22[1].klass =
                   (float)(-(uint)(0.0 <= fVar39) & (uint)fVar46) * (fVar38 - fVar43) + fVar43;
              pSVar33 = (__this->fields)._points;
              if (pSVar33 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              break;
              System_Collections_Generic_List<object>__set_Item
                        ((System_Collections_Generic_List_object__o *)pSVar33,iVar34,pIVar22,
                         MethodInfo_Void_set_Item);
              pMVar28 = extraout_RDX_08;
            }
            iVar29 = iVar29 + 1;
            iVar34 = (__this_01->fields)._size;
            if (iVar34 <= iVar29) goto LAB_03d6d93c;
            pSVar33 = (__this->fields)._points;
          }
          goto LAB_03d6e165;
        }
      }
    }
  }
LAB_03d6d93c:
  MeleeWeaponTrail__RemoveOldPoints
            (__this,(System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)
                    (__this->fields)._tip,pMVar28);
  pUVar21 = (__this->fields)._tip;
  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
    pMVar28 = extraout_RDX_09;
    if (*(int *)&pUVar21[1].klass == 0) {
      pUVar23 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar20 = UnityEngine_Object__op_Inequality
                         (pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar28 = extraout_RDX_10;
      if ((char)bVar20 != '\0') {
        pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
        if (pUVar5 == (UnityEngine_Mesh_o *)0x0) goto LAB_03d6e165;
        UnityEngine_Mesh__Clear(pUVar5,(MethodInfo *)0x0);
        pMVar28 = extraout_RDX_11;
      }
    }
    MeleeWeaponTrail__RemoveOldPoints(__this,(__this->fields)._points,pMVar28);
    pSVar33 = (__this->fields)._points;
    if (pSVar33 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      if ((pSVar33->fields)._size == 0) {
        pUVar23 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar20 = UnityEngine_Object__op_Inequality
                           (pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 != '\0') {
          pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
          if (pUVar5 == (UnityEngine_Mesh_o *)0x0) goto LAB_03d6e165;
          UnityEngine_Mesh__Clear(pUVar5,(MethodInfo *)0x0);
        }
      }
      pSVar33 = (__this->fields)._points;
      if (pSVar33 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        iVar34 = (pSVar33->fields)._size;
        if (iVar34 < 2) {
          return;
        }
        value = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,iVar34 * 2);
        value_00 = (UnityEngine_Vector2_array *)
                   il2cpp_glue_02274930(TypeInfo_Vector2,(pSVar33->fields)._size * 2);
        value_01 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,(pSVar33->fields)._size * 6 + -6)
        ;
        value_02 = (UnityEngine_Color_array *)il2cpp_glue_02274930(TypeInfo_Color);
        if (0 < (pSVar33->fields)._size) {
          uVar36 = 1;
          uVar35 = 0xfffffffd;
          lVar30 = 0;
          lVar32 = 0;
          do {
            pIVar22 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar33,
                                 (int32_t)lVar32,MethodInfo_MeleeWeaponTrail_Point_get_Item);
            fVar43 = UnityEngine_Time__get_time((MethodInfo *)0x0);
            if (pIVar22 == (Il2CppObject *)0x0) goto LAB_03d6e165;
            fVar38 = (fVar43 - *(float *)&pIVar22[1].klass) / *(float *)&(__this->fields)._material;
            fVar43 = 1.0;
            if (fVar38 <= 1.0) {
              fVar43 = fVar38;
            }
            fVar43 = (float)(~-(uint)(0.0 <= fVar38) & 0x3f800000 |
                            (uint)(1.0 - fVar43) & -(uint)(0.0 <= fVar38));
            uVar48 = CONCAT44(fVar43,fVar43);
            lVar27 = *(long *)&(__this->fields)._lifeTime;
            fVar46 = fVar43;
            if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
              uVar19 = (uint)*(long *)(lVar27 + 0x18);
              fVar44 = (float)(int)(uVar19 - 1);
              fVar46 = fVar38 * fVar44;
              fVar39 = floorf(fVar46);
              fVar40 = ceilf(fVar46);
              fVar43 = fVar44;
              if (fVar40 <= fVar44) {
                fVar43 = fVar40;
              }
              fVar43 = (float)(~-(uint)(1.0 <= fVar40) & 0x3f800000 |
                              (uint)fVar43 & -(uint)(1.0 <= fVar40));
              if ((fVar39 != fVar43) || (NAN(fVar39) || NAN(fVar43))) {
                fVar40 = (fVar46 - fVar39) / (fVar43 - fVar39);
                fVar46 = 0.0;
                if ((0.0 <= fVar40) && (fVar46 = 1.0, fVar40 <= 1.0)) {
                  fVar46 = fVar40;
                }
              }
              else {
                fVar46 = 0.0;
              }
              uVar37 = -(uint)(fVar39 < (float)(int)uVar19);
              fVar40 = (float)(~uVar37 & (uint)fVar44 | uVar37 & (uint)fVar39);
              fVar39 = 0.0;
              if (0.0 <= fVar40) {
                fVar39 = fVar40;
              }
              if (uVar19 <= (uint)(int)fVar39) goto LAB_03d6e023;
              uVar37 = -(uint)(fVar43 < (float)(int)uVar19);
              fVar40 = (float)(~uVar37 & (uint)fVar44 | uVar37 & (uint)fVar43);
              fVar43 = 0.0;
              if (0.0 <= fVar40) {
                fVar43 = fVar40;
              }
              if (uVar19 <= (uint)(int)fVar43) goto LAB_03d6e023;
              lVar26 = (long)(int)fVar39 * 0x10;
              uVar48 = *(undefined8 *)(lVar27 + 0x20 + lVar26);
              uVar9 = *(undefined8 *)(lVar27 + 0x28 + lVar26);
              lVar26 = (long)(int)fVar43 * 0x10;
              uVar10 = *(undefined8 *)(lVar27 + 0x20 + lVar26);
              uVar11 = *(undefined8 *)(lVar27 + 0x28 + lVar26);
              fVar39 = 0.0;
              if (0.0 <= fVar46) {
                fVar39 = fVar46;
              }
              fVar43 = (float)uVar48;
              fVar46 = (float)((ulong)uVar48 >> 0x20);
              uVar48 = CONCAT44(((float)((ulong)uVar10 >> 0x20) - fVar46) * fVar39 + fVar46,
                                ((float)uVar10 - fVar43) * fVar39 + fVar43);
              fVar43 = (float)uVar9;
              fVar46 = (float)((ulong)uVar9 >> 0x20);
              fVar43 = ((float)uVar11 - fVar43) * fVar39 + fVar43;
              fVar46 = ((float)((ulong)uVar11 >> 0x20) - fVar46) * fVar39 + fVar46;
            }
            pUVar17 = (__this->fields)._colors;
            fVar39 = 0.0;
            if ((pUVar17 != (UnityEngine_Color_array *)0x0) && (pUVar17->max_length != 0)) {
              uVar19 = (uint)pUVar17->max_length;
              fVar45 = (float)(int)(uVar19 - 1);
              fVar38 = fVar38 * fVar45;
              fVar40 = floorf(fVar38);
              fVar44 = ceilf(fVar38);
              fVar39 = fVar45;
              if (fVar44 <= fVar45) {
                fVar39 = fVar44;
              }
              fVar39 = (float)(~-(uint)(1.0 <= fVar44) & 0x3f800000 |
                              (uint)fVar39 & -(uint)(1.0 <= fVar44));
              if ((fVar40 != fVar39) || (NAN(fVar40) || NAN(fVar39))) {
                fVar44 = (fVar38 - fVar40) / (fVar39 - fVar40);
                fVar38 = 0.0;
                if ((0.0 <= fVar44) && (fVar38 = 1.0, fVar44 <= 1.0)) {
                  fVar38 = fVar44;
                }
              }
              else {
                fVar38 = 0.0;
              }
              uVar37 = -(uint)(fVar40 < (float)(int)uVar19);
              fVar44 = (float)(~uVar37 & (uint)fVar45 | uVar37 & (uint)fVar40);
              fVar40 = 0.0;
              if (0.0 <= fVar44) {
                fVar40 = fVar44;
              }
              if (uVar19 <= (uint)(int)fVar40) goto LAB_03d6e023;
              uVar37 = -(uint)(fVar39 < (float)(int)uVar19);
              fVar39 = (float)(~uVar37 & (uint)fVar45 | uVar37 & (uint)fVar39);
              fVar44 = 0.0;
              if (0.0 <= fVar39) {
                fVar44 = fVar39;
              }
              if (uVar19 <= (uint)(int)fVar44) goto LAB_03d6e023;
              fVar39 = (&pUVar17->m_Items[0].fields.r)[(int)fVar40];
              fVar40 = 0.0;
              if (0.0 <= fVar38) {
                fVar40 = fVar38;
              }
              fVar39 = ((&pUVar17->m_Items[0].fields.r)[(int)fVar44] - fVar39) * fVar40 + fVar39;
            }
            if (value == (UnityEngine_Vector3_array *)0x0) goto LAB_03d6e165;
            uVar2 = uVar36 - 1;
            if ((uint)value->max_length <= uVar2) goto LAB_03d6e023;
            uVar9 = *(undefined8 *)((long)&pIVar22[1].klass + 4);
            fVar45 = (float)uVar9;
            fVar47 = (float)((ulong)uVar9 >> 0x20);
            fVar38 = *(float *)((long)&pIVar22[1].monitor + 4);
            fVar39 = fVar39 * 0.5;
            fVar40 = fVar39 * (SUB84(pIVar22[2].klass,0) - fVar45);
            fVar44 = fVar39 * ((float)((ulong)pIVar22[2].klass >> 0x20) - fVar47);
            fVar39 = fVar39 * (*(float *)&pIVar22[2].monitor - fVar38);
            lVar27 = lVar30 >> 0x20;
            value->m_Items[lVar27].fields.x = fVar45 - fVar40;
            value->m_Items[lVar27].fields.y = fVar47 - fVar44;
            value->m_Items[lVar27].fields.z = fVar38 - fVar39;
            if ((uint)value->max_length <= uVar36) goto LAB_03d6e023;
            lVar26 = lVar30 + 0x100000000 >> 0x20;
            pIVar6 = pIVar22[2].klass;
            fVar38 = *(float *)&pIVar22[2].monitor;
            value->m_Items[lVar26].fields.x = fVar40 + SUB84(pIVar6,0);
            value->m_Items[lVar26].fields.y = fVar44 + (float)((ulong)pIVar6 >> 0x20);
            value->m_Items[lVar26].fields.z = fVar39 + fVar38;
            if (value_02 == (UnityEngine_Color_array *)0x0) goto LAB_03d6e165;
            if ((uint)value_02->max_length <= uVar36) goto LAB_03d6e023;
            pUVar4 = value_02->m_Items + lVar26;
            (pUVar4->fields).r = (float)(int)uVar48;
            (pUVar4->fields).g = (float)(int)((ulong)uVar48 >> 0x20);
            (pUVar4->fields).b = fVar43;
            (pUVar4->fields).a = fVar46;
            if ((uint)value_02->max_length <= uVar2) goto LAB_03d6e023;
            pUVar4 = value_02->m_Items + lVar27;
            (pUVar4->fields).r = (float)(int)uVar48;
            (pUVar4->fields).g = (float)(int)((ulong)uVar48 >> 0x20);
            (pUVar4->fields).b = fVar43;
            (pUVar4->fields).a = fVar46;
            if (value_00 == (UnityEngine_Vector2_array *)0x0) goto LAB_03d6e165;
            if ((uint)value_00->max_length <= uVar2) goto LAB_03d6e023;
            fVar43 = (float)(int32_t)lVar32 / (float)(pSVar33->fields)._size;
            UVar42.fields.y = 0.0;
            UVar42.fields.x = fVar43;
            value_00->m_Items[lVar27].fields = UVar42.fields;
            if ((uint)value_00->max_length <= uVar36) goto LAB_03d6e023;
            UVar18.fields.y = 1.0;
            UVar18.fields.x = fVar43;
            value_00->m_Items[lVar26].fields = UVar18.fields;
            if (uVar36 != 1) {
              if (value_01 == (System_Int32_array *)0x0) goto LAB_03d6e165;
              uVar19 = (uint)value_01->max_length;
              if (uVar19 <= uVar35 - 3) goto LAB_03d6e023;
              iVar34 = (int)uVar36;
              value_01->m_Items[(int)(uVar35 - 3)] = iVar34 + -3;
              if (uVar19 <= uVar35 - 2) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar35 - 2)] = iVar34 + -2;
              if (uVar19 <= uVar35 - 1) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar35 - 1)] = (int32_t)uVar2;
              if (uVar19 <= uVar35) goto LAB_03d6e023;
              value_01->m_Items[(int)uVar35] = iVar34;
              if (uVar19 <= uVar35 + 1) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar35 + 1)] = (int32_t)uVar2;
              if (uVar19 <= uVar35 + 2) goto LAB_03d6e023;
              value_01->m_Items[(int)(uVar35 + 2)] = iVar34 + -2;
            }
            lVar32 = lVar32 + 1;
            uVar36 = uVar36 + 2;
            lVar30 = lVar30 + 0x200000000;
            uVar35 = uVar35 + 6;
          } while (lVar32 < (pSVar33->fields)._size);
        }
        pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
        if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
          UnityEngine_Mesh__Clear(pUVar5,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
          if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
            UnityEngine_Mesh__set_vertices(pUVar5,value,(MethodInfo *)0x0);
            pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
            if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__set_colors(pUVar5,value_02,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
              if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
                UnityEngine_Mesh__set_uv(pUVar5,value_00,(MethodInfo *)0x0);
                pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
                if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__set_triangles(pUVar5,value_01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03d6e165:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MeleeWeaponTrail$$RemoveOldPoints
// il2cpp: void MeleeWeaponTrail__RemoveOldPoints (MeleeWeaponTrail_o* __this, System_Collections_Generic_List_MeleeWeaponTrail_Point__o* pointList, const MethodInfo* method);
// 0x3d6e180

void MeleeWeaponTrail__RemoveOldPoints
               (MeleeWeaponTrail_o *__this,
               System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pointList,
               MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  int index;
  Il2CppObject *pIVar2;
  float fVar3;
  
  if (DAT_057025fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata();
    DAT_057025fd = '\x01';
  }
  if (pointList != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    index = (pointList->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pointList,index,MethodInfo_MeleeWeaponTrail_Point_get_Item)
      ;
      if (pIVar2 == (Il2CppObject *)0x0) break;
      fVar3 = fVar3 - *(float *)&pIVar2[1].klass;
      ppUVar1 = &(__this->fields)._material;
      if (*(float *)ppUVar1 <= fVar3 && fVar3 != *(float *)ppUVar1) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pointList,index,MethodInfo_Void_RemoveAt);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MeleeWeaponTrail$$.ctor
// il2cpp: void MeleeWeaponTrail___ctor (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x3d6e250

void MeleeWeaponTrail___ctor(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *__this_01;
  
  if (DAT_057025fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_MeleeWeaponTrail_Point);
    il2cpp_init_method_metadata(&TypeInfo_List_Point);
    DAT_057025fe = '\x01';
  }
  *(undefined2 *)&(__this->fields)._emit = 0x101;
  *(undefined4 *)&(__this->fields)._material = 0x3f800000;
  (__this->fields)._sizes = (System_Single_array *)0x412000003dcccccd;
  (__this->fields)._minVertexDistanceSqr = 3.0;
  (__this->fields)._maxAngle = 5.60519e-45;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Point);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_MeleeWeaponTrail_Point);
  (__this->fields)._tip = (UnityEngine_Transform_o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._tip,__this_00);
  __this_01 = (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)
              il2cpp_runtime_glue(TypeInfo_List_Point);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_MeleeWeaponTrail_Point);
  (__this->fields)._points = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._points);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


