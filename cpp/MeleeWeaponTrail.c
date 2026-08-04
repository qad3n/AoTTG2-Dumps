// Type: MeleeWeaponTrail
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MeleeWeaponTrail.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs
// --------------------------------

// MeleeWeaponTrail.Point$$.ctor
// il2cpp: void MeleeWeaponTrail_Point___ctor (MeleeWeaponTrail_Point_o* __this, const MethodInfo* method);
// 0x4063ac0

void MeleeWeaponTrail_Point___ctor(MeleeWeaponTrail_Point_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$set_Emit
// il2cpp: void MeleeWeaponTrail__set_Emit (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x4061e40

void MeleeWeaponTrail__set_Emit(MeleeWeaponTrail_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._emit = (char)value;
  return;
}


// MeleeWeaponTrail$$set_Use
// il2cpp: void MeleeWeaponTrail__set_Use (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x4061e50

void MeleeWeaponTrail__set_Use(MeleeWeaponTrail_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._emit + 1) = (char)value;
  return;
}


// MeleeWeaponTrail$$Start
// il2cpp: void MeleeWeaponTrail__Start (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x4061e60

void MeleeWeaponTrail__Start(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o **ppSVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar5;
  System_Type_o *pSVar6;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Mesh_o *__this_02;
  System_String_o *value;
  UnityEngine_MeshFilter_o *__this_03;
  System_RuntimeTypeHandle_o handle;
  UnityEngine_Vector3_o UVar7;
  
  if (g_data_057ac2a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponent_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_MeshFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_MeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    il2cpp_runtime_helper_023445d0(&"TrailMesh");
    il2cpp_runtime_helper_023445d0(&"Trail");
    g_data_057ac2a8 = '\x01';
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    *(UnityEngine_Vector3_Fields *)&(__this->fields)._trailMesh = UVar7.fields;
    pSVar5 = (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pSVar5,"Trail",(MethodInfo *)0x0);
    ppSVar1 = &(__this->fields)._smoothedPoints;
    (__this->fields)._smoothedPoints = pSVar5;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    handle.fields.value = (System_RuntimeTypeHandle_Fields)(__this->fields)._smoothedPoints;
    if (handle.fields.value != 0) {
      pUVar4 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)handle.fields.value,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_parent(pUVar4,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
        handle.fields.value = (System_RuntimeTypeHandle_Fields)*ppSVar1;
        if (handle.fields.value != 0) {
          pUVar4 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)handle.fields.value,(MethodInfo *)0x0);
          if (g_data_057a65d5 == '\0') {
            handle.fields.value = (System_RuntimeTypeHandle_Fields)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a65d5 = '\x01';
          }
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position
                      (pUVar4,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                       (MethodInfo *)0x0);
            handle.fields.value = (System_RuntimeTypeHandle_Fields)*ppSVar1;
            if (handle.fields.value != 0) {
              pUVar4 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)handle.fields.value,(MethodInfo *)0x0);
              if (g_data_057a6843 == '\0') {
                handle.fields.value = (System_RuntimeTypeHandle_Fields)&TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
              }
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_rotation
                          (pUVar4,(UnityEngine_Quaternion_o)
                                  **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0)
                ;
                handle.fields.value = (System_RuntimeTypeHandle_Fields)*ppSVar1;
                if (handle.fields.value != 0) {
                  pUVar4 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)handle.fields.value,(MethodInfo *)0x0);
                  if (g_data_057a6932 == '\0') {
                    handle.fields.value = (System_RuntimeTypeHandle_Fields)&TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a6932 = '\x01';
                  }
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar4,(UnityEngine_Vector3_o)
                                      *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                               (MethodInfo *)0x0);
                    handle.fields.value = TypeRef_MeshFilter.fields.value;
                    pSVar5 = *ppSVar1;
                    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                    if (pSVar5 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
                      UnityEngine_GameObject__AddComponent
                                ((UnityEngine_GameObject_o *)pSVar5,pSVar6,(MethodInfo *)0x0);
                      pSVar5 = *ppSVar1;
                      handle.fields.value = TypeRef_MeshRenderer.fields.value;
                      pSVar6 = System_Type__GetTypeFromHandle(TypeRef_MeshRenderer,(MethodInfo *)0x0);
                      if (pSVar5 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
                        UnityEngine_GameObject__AddComponent
                                  ((UnityEngine_GameObject_o *)pSVar5,pSVar6,(MethodInfo *)0x0);
                        handle.fields.value = (System_RuntimeTypeHandle_Fields)*ppSVar1;
                        if (handle.fields.value != 0) {
                          __this_01 = (UnityEngine_Renderer_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                ((UnityEngine_GameObject_o *)handle.fields.value,MethodInfo_Renderer_GetComponent_Renderer)
                          ;
                          if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_material
                                      (__this_01,*(UnityEngine_Material_o **)&(__this->fields)._emitTime,
                                       (MethodInfo *)0x0);
                            __this_02 = (UnityEngine_Mesh_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
                            UnityEngine_Mesh___ctor(__this_02,(MethodInfo *)0x0);
                            (__this->fields)._trailObject = (UnityEngine_GameObject_o *)__this_02;
                            il2cpp_runtime_helper_022b4080(&(__this->fields)._trailObject);
                            __this_00 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
                            handle.fields.value =
                                 (System_RuntimeTypeHandle_Fields)
                                 UnityEngine_Object__get_name
                                           ((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
                            value = System_String__Concat_3ae5ba0
                                              ((System_String_o *)handle.fields.value,"TrailMesh",
                                               (MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_Object_o *)0x0) {
                              UnityEngine_Object__set_name(__this_00,value,(MethodInfo *)0x0);
                              handle.fields.value = (System_RuntimeTypeHandle_Fields)*ppSVar1;
                              if (handle.fields.value != 0) {
                                __this_03 = (UnityEngine_MeshFilter_o *)
                                            UnityEngine_GameObject__GetComponent_object_
                                                      ((UnityEngine_GameObject_o *)handle.fields.value,
                                                       MethodInfo_MeshFilter_GetComponent_MeshFilter);
                                if (__this_03 != (UnityEngine_MeshFilter_o *)0x0) {
                                  UnityEngine_MeshFilter__set_mesh
                                            (__this_03,(UnityEngine_Mesh_o *)(__this->fields)._trailObject,
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac2a9 = '\x01';
  }
  pSVar5 = (((MeleeWeaponTrail_o *)handle.fields.value)->fields)._smoothedPoints;
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar5,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$OnDestroy
// il2cpp: void MeleeWeaponTrail__OnDestroy (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x4062200

void MeleeWeaponTrail__OnDestroy(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *obj;
  
  if (g_data_057ac2a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac2a9 = '\x01';
  }
  obj = (__this->fields)._smoothedPoints;
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$SetMaterial
// il2cpp: void MeleeWeaponTrail__SetMaterial (MeleeWeaponTrail_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4062260

void MeleeWeaponTrail__SetMaterial
               (MeleeWeaponTrail_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  ulong uVar3;
  float *pfVar4;
  Il2CppObject **ppIVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int32_t iVar10;
  undefined4 uVar11;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar12;
  UnityEngine_Vector3_array *pUVar13;
  MethodInfo_362C220 *pMVar14;
  UnityEngine_Mesh_o *pUVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  UnityEngine_Vector2_o UVar17;
  undefined1 auVar18 [16];
  uint uVar19;
  bool_conflict bVar20;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Transform_o *pUVar21;
  Il2CppObject *pIVar22;
  UnityEngine_Object_o *pUVar23;
  MeleeWeaponTrail_o *pMVar24;
  System_Collections_IList_o *pSVar25;
  Interpolate_ToVector3_T__o *pIVar26;
  System_Collections_Generic_IEnumerable_Vector3__o *collection;
  System_Collections_Generic_IEnumerable_Vector3__o *collection_00;
  System_Collections_Generic_List_Vector3__o *__this_01;
  UnityEngine_Vector2_array *value;
  System_Int32_array *value_00;
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
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar28;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  long lVar29;
  int iVar30;
  long lVar31;
  MeleeWeaponTrail_o **ppMVar32;
  int iVar33;
  undefined8 unaff_RBP;
  long lVar34;
  MeleeWeaponTrail_o *__this_02;
  MeleeWeaponTrail_o *pMVar35;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar36;
  int iVar37;
  uint uVar38;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulong uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  UnityEngine_Vector2_o UVar44;
  undefined1 auVar45 [12];
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [12];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  Il2CppObject *pIVar55;
  undefined1 auVar56 [16];
  UnityEngine_Vector3_o UVar57;
  UnityEngine_Vector3_Fields UVar58;
  MeleeWeaponTrail_o *pMStack_20;
  
  if (g_data_057ac2aa == '\0') {
    pMStack_20 = (MeleeWeaponTrail_o *)0x4062280;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    pMStack_20 = (MeleeWeaponTrail_o *)0x406228c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac2aa = '\x01';
    method = extraout_RDX;
  }
  *(UnityEngine_Material_o **)&(__this->fields)._emitTime = material;
  pMStack_20 = (MeleeWeaponTrail_o *)0x40622a3;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._emitTime,material,method);
  pSVar36 = (__this->fields)._smoothedPoints;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStack_20 = (MeleeWeaponTrail_o *)0x40622c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_20 = (MeleeWeaponTrail_o *)0x40622ce;
  bVar20 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar20 == '\0') {
    return;
  }
  __this_02 = (MeleeWeaponTrail_o *)(__this->fields)._smoothedPoints;
  if (__this_02 != (MeleeWeaponTrail_o *)0x0) {
    pMStack_20 = (MeleeWeaponTrail_o *)0x40622ed;
    __this_00 = (UnityEngine_Renderer_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Renderer_GetComponent_Renderer);
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_material(__this_00,material,(MethodInfo *)0x0);
      return;
    }
  }
  pMStack_20 = (MeleeWeaponTrail_o *)0x406230f;
  il2cpp_runtime_helper_022b2c90();
  pMVar35 = __this_02;
  pMStack_20 = __this;
  if (g_data_057ac2ab == '\0') {
    pMVar35 = (MeleeWeaponTrail_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2ab = '\x01';
  }
  *(undefined1 *)&(__this_02->fields)._emit = 0;
  pUVar21 = (__this_02->fields)._tip;
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) {
label_0406238d:
    il2cpp_runtime_helper_022b2c90();
    pMVar24 = __this_02;
    ppMVar32 = &pMStack_20;
    __this_02 = pMVar35;
  }
  else {
    piVar1 = (int *)((long)&pUVar21[1].klass + 4);
    *piVar1 = *piVar1 + 1;
    iVar10 = *(int32_t *)&pUVar21[1].klass;
    *(undefined4 *)&pUVar21[1].klass = 0;
    if (0 < iVar10) {
      pMVar35 = (MeleeWeaponTrail_o *)(pUVar21->fields).m_CachedPtr;
      System_Array__Clear((System_Array_o *)pMVar35,0,iVar10,(MethodInfo *)0x0);
    }
    pSVar12 = (__this_02->fields)._points;
    if (pSVar12 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0406238d;
    piVar2 = &(pSVar12->fields)._version;
    *piVar2 = *piVar2 + 1;
    iVar37 = (pSVar12->fields)._size;
    (pSVar12->fields)._size = 0;
    pMVar24 = pMStack_20;
    ppMVar32 = (MeleeWeaponTrail_o **)&stack0xffffffffffffffe8;
    if (0 < iVar37) {
      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar37,(MethodInfo *)0x0);
      pMVar24 = pMStack_20;
      ppMVar32 = (MeleeWeaponTrail_o **)&stack0xffffffffffffffe8;
    }
  }
  *(undefined8 *)((long)ppMVar32 + -8) = unaff_RBP;
  *(System_Collections_Generic_List_MeleeWeaponTrail_Point__o **)((long)ppMVar32 + -0x10) = pSVar36;
  *(UnityEngine_Material_o **)((long)ppMVar32 + -0x18) = material;
  *(undefined8 *)((long)ppMVar32 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppMVar32 + -0x28) = unaff_R12;
  *(MeleeWeaponTrail_o **)((long)ppMVar32 + -0x30) = pMVar24;
  if (g_data_057ac2ac == '\0') {
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40623cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40623d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40623e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40623f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Vector3);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40623fd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062409;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062415;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062421;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_Point_get_Item);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406242d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062439;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Vector3);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062445;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062451;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Point);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406245d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062469;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062475;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac2ac = '\x01';
  }
  pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40624aa;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40624b6;
  bVar20 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pMVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar20 != '\0') {
    return;
  }
  if (*(char *)((long)&(__this_02->fields)._emit + 1) == '\0') {
    return;
  }
  if (*(char *)&(__this_02->fields)._emit == '\0') {
label_04062557:
    pUVar21 = (__this_02->fields)._tip;
joined_r0x04062548:
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
    if ((*(int *)&pUVar21[1].klass == 0) && (*(char *)&(__this_02->fields)._maxVertexDistanceSqr != '\0')) {
      pSVar36 = (__this_02->fields)._smoothedPoints;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062954;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062960;
      bVar20 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar20 != '\0') {
        pSVar36 = (__this_02->fields)._smoothedPoints;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406297e;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062988;
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar36,(MethodInfo *)0x0);
      }
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062992;
      pUVar23 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40629a7;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40629b3;
      bVar20 = UnityEngine_Object__op_Inequality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar20 != '\0') {
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40629c5;
        pUVar23 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40629da;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40629e4;
        UnityEngine_Object__Destroy_4e01c60(pUVar23,(MethodInfo *)0x0);
      }
    }
  }
  else {
    fVar41 = (float)(__this_02->fields)._use;
    if ((fVar41 != 0.0) || (NAN(fVar41))) {
      pMVar35 = (MeleeWeaponTrail_o *)0x0;
      *(float *)((long)ppMVar32 + -0xe8) = fVar41;
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40624f8;
      fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar41 = *(float *)((long)ppMVar32 + -0xe8) - fVar41;
      (__this_02->fields)._use = (bool_conflict)fVar41;
      if ((fVar41 != 0.0) || (NAN(fVar41))) {
        if (0.0 <= fVar41) {
          if (*(char *)&(__this_02->fields)._emit == '\0') goto label_04062557;
          goto label_0406256f;
        }
        *(undefined1 *)&(__this_02->fields)._emit = 0;
        pUVar21 = (__this_02->fields)._tip;
      }
      else {
        (__this_02->fields)._use = -0x40800000;
        *(undefined1 *)&(__this_02->fields)._emit = 0;
        pUVar21 = (__this_02->fields)._tip;
      }
      goto joined_r0x04062548;
    }
  }
label_0406256f:
  *(UnityEngine_Mesh_o **)((long)ppMVar32 + -0xd8) = (__this_02->fields)._trailMesh;
  *(undefined8 *)((long)ppMVar32 + -0xd0) = 0;
  *(float *)((long)ppMVar32 + -0xe8) = (__this_02->fields)._lastPosition.fields.x;
  *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062598;
  pMVar35 = __this_02;
  pUVar21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
  *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40625ab;
  UVar57 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
  cVar9 = *(char *)&(__this_02->fields)._emit;
  *(MeleeWeaponTrail_o **)((long)ppMVar32 + -0xf0) = __this_02;
  pMVar28 = extraout_RDX_00;
  if (cVar9 != '\0') {
    pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._tip;
    if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
    fVar41 = (*(float *)((long)ppMVar32 + -0xe8) - UVar57.fields.z) *
             (*(float *)((long)ppMVar32 + -0xe8) - UVar57.fields.z) +
             (*(float *)((long)ppMVar32 + -0xd4) - UVar57.fields.y) *
             (*(float *)((long)ppMVar32 + -0xd4) - UVar57.fields.y) +
             (*(float *)((long)ppMVar32 + -0xd8) - UVar57.fields.x) *
             (*(float *)((long)ppMVar32 + -0xd8) - UVar57.fields.x);
    pfVar4 = &(__this_02->fields)._minVertexDistance;
    iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
    if (fVar41 < *pfVar4 || fVar41 == *pfVar4) {
      if (0 < iVar37) {
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062815;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar35 = *(MeleeWeaponTrail_o **)&(__this_02->fields).subdivisions;
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406282d;
        UVar58 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar35,(MethodInfo *)0x0);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar58;
        pSVar16 = (System_Collections_Generic_List_object__o *)(__this_02->fields)._tip;
        pMVar35 = (MeleeWeaponTrail_o *)0x0;
        if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
        iVar37 = (pSVar16->fields)._size;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406285c;
        pIVar22 = System_Collections_Generic_List_object___get_Item(pSVar16,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._base;
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062874;
        UVar57 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar35,(MethodInfo *)0x0);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar57.fields;
        pMVar28 = extraout_RDX_01;
      }
      pSVar36 = (__this_02->fields)._points;
      pMVar35 = (MeleeWeaponTrail_o *)0x0;
      if (pSVar36 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
      iVar37 = (pSVar36->fields)._size;
      if (0 < iVar37) {
label_040628ac:
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40628b5;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar36,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar35 = *(MeleeWeaponTrail_o **)&(__this_02->fields).subdivisions;
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40628cd;
        UVar58 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar35,(MethodInfo *)0x0);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar58;
        pSVar36 = (__this_02->fields)._points;
        pMVar35 = (MeleeWeaponTrail_o *)0x0;
        if (pSVar36 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
        iVar37 = (pSVar36->fields)._size;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40628ff;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar36,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._base;
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062917;
        UVar57 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar35,(MethodInfo *)0x0);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar57.fields;
        pMVar28 = extraout_RDX_02;
      }
    }
    else {
      if (2 < iVar37) {
        *(float *)((long)ppMVar32 + -0xe8) = fVar41;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062631;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._tip, pMVar35 == (MeleeWeaponTrail_o *)0x0))
        goto label_04063ab5;
        *(Il2CppClass **)((long)ppMVar32 + -200) = pIVar22[2].klass;
        *(undefined8 *)((long)ppMVar32 + -0xc0) = 0;
        *(undefined1 (*) [16])((long)ppMVar32 + -0xd8) = ZEXT416(*(uint *)&pIVar22[2].monitor);
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406266b;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._tip, pMVar35 == (MeleeWeaponTrail_o *)0x0))
        goto label_04063ab5;
        *(float *)((long)ppMVar32 + -0xd8) =
             *(float *)((long)ppMVar32 + -0xd8) - *(float *)&pIVar22[2].monitor;
        *(undefined4 *)((long)ppMVar32 + -0xd4) = *(undefined4 *)((long)ppMVar32 + -0xd4);
        *(undefined4 *)((long)ppMVar32 + -0xd0) = *(undefined4 *)((long)ppMVar32 + -0xd0);
        *(undefined4 *)((long)ppMVar32 + -0xcc) = *(undefined4 *)((long)ppMVar32 + -0xcc);
        *(Il2CppClass **)((long)ppMVar32 + -0x98) = pIVar22[2].klass;
        *(undefined8 *)((long)ppMVar32 + -0x90) = 0;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40626aa;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._tip, pMVar35 == (MeleeWeaponTrail_o *)0x0))
        goto label_04063ab5;
        *(Il2CppClass **)((long)ppMVar32 + -0xb8) = pIVar22[2].klass;
        *(undefined8 *)((long)ppMVar32 + -0xb0) = 0;
        *(undefined4 *)((long)ppMVar32 + -0xe0) = *(undefined4 *)&pIVar22[2].monitor;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40626e5;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        auVar47._0_8_ =
             CONCAT44(*(float *)((long)ppMVar32 + -0xc4) - *(float *)((long)ppMVar32 + -0x94),
                      *(float *)((long)ppMVar32 + -200) - *(float *)((long)ppMVar32 + -0x98));
        auVar47._8_4_ = *(float *)((long)ppMVar32 + -0xc0) - *(float *)((long)ppMVar32 + -0x90);
        auVar47._12_4_ = *(float *)((long)ppMVar32 + -0xbc) - *(float *)((long)ppMVar32 + -0x8c);
        fVar50 = *(float *)((long)ppMVar32 + -0xb8) - SUB84(pIVar22[2].klass,0);
        fVar52 = *(float *)((long)ppMVar32 + -0xb4) - (float)((ulong)pIVar22[2].klass >> 0x20);
        fVar41 = *(float *)((long)ppMVar32 + -0xe0) - *(float *)&pIVar22[2].monitor;
        *(undefined1 (*) [16])((long)ppMVar32 + -200) = auVar47;
        *(float *)((long)ppMVar32 + -0xe0) = fVar41;
        *(float *)((long)ppMVar32 + -0xb8) = fVar50;
        *(float *)((long)ppMVar32 + -0xb4) = fVar52;
        *(float *)((long)ppMVar32 + -0xb0) = *(float *)((long)ppMVar32 + -0xb0) - 0.0;
        *(float *)((long)ppMVar32 + -0xac) = *(float *)((long)ppMVar32 + -0xac) - 0.0;
        if (g_data_057ac31a == '\0') {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062735;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          fVar50 = *(float *)((long)ppMVar32 + -0xb8);
          fVar52 = *(float *)((long)ppMVar32 + -0xb4);
          fVar41 = *(float *)((long)ppMVar32 + -0xe0);
          auVar47._0_8_ = SUB168(*(undefined1 (*) [16])((long)ppMVar32 + -200),0);
          g_data_057ac31a = '\x01';
        }
        fVar54 = (float)((ulong)auVar47._0_8_ >> 0x20);
        fVar42 = SUB164(*(undefined1 (*) [16])((long)ppMVar32 + -0xd8),0) *
                 SUB164(*(undefined1 (*) [16])((long)ppMVar32 + -0xd8),0) +
                 fVar54 * fVar54 + (float)auVar47._0_8_ * (float)auVar47._0_8_;
        fVar54 = fVar41 * fVar41 + fVar52 * fVar52 + fVar50 * fVar50;
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          *(float *)((long)ppMVar32 + -0x98) = fVar42;
          *(float *)((long)ppMVar32 + -0xa0) = fVar54;
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40627b4;
          il2cpp_runtime_helper_02337ed0();
          fVar54 = *(float *)((long)ppMVar32 + -0xa0);
          fVar42 = *(float *)((long)ppMVar32 + -0x98);
          fVar50 = *(float *)((long)ppMVar32 + -0xb8);
          fVar52 = *(float *)((long)ppMVar32 + -0xb4);
          fVar41 = *(float *)((long)ppMVar32 + -0xe0);
          auVar47._0_8_ = SUB168(*(undefined1 (*) [16])((long)ppMVar32 + -200),0);
        }
        fVar42 = fVar42 * fVar54;
        if (fVar42 < 0.0) {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40629ee;
          fVar42 = sqrtf(fVar42);
          fVar50 = *(float *)((long)ppMVar32 + -0xb8);
          fVar52 = *(float *)((long)ppMVar32 + -0xb4);
          fVar41 = *(float *)((long)ppMVar32 + -0xe0);
          auVar47._0_8_ = SUB168(*(undefined1 (*) [16])((long)ppMVar32 + -200),0);
          pMVar28 = TypeInfo_Math;
        }
        else {
          fVar42 = SQRT(fVar42);
          pMVar28 = TypeInfo_Math;
        }
        fVar54 = 0.0;
        TypeInfo_Math = pMVar28;
        if (1e-15 <= fVar42) {
          fVar42 = (*(float *)((long)ppMVar32 + -0xd8) * fVar41 +
                   (float)((ulong)auVar47._0_8_ >> 0x20) * fVar52 + (float)auVar47._0_8_ * fVar50) / fVar42;
          auVar45 = ZEXT812(0x3f800000);
          if (fVar42 <= 1.0) {
            auVar45._4_8_ = 0;
            auVar45._0_4_ = fVar42;
          }
          auVar48._0_4_ = auVar45._0_4_ & -(uint)(-1.0 <= fVar42);
          auVar48._4_4_ = 0;
          auVar48._8_4_ = auVar45._8_4_ & *(uint *)((long)ppMVar32 + -0xd0);
          auVar48._12_4_ = 0;
          auVar48 = ZEXT416(~-(uint)(-1.0 <= fVar42) & 0xbf800000) | auVar48;
          if (*(int *)((long)&pMVar28[2].parameters + 4) == 0) {
            *(undefined1 (*) [16])((long)ppMVar32 + -0xd8) = auVar48;
            *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062a68;
            il2cpp_runtime_helper_02337ed0();
            auVar48 = *(undefined1 (*) [16])((long)ppMVar32 + -0xd8);
          }
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062a76;
          dVar43 = acos((double)auVar48._0_4_,pMVar28);
          fVar54 = (float)dVar43 * 57.29578;
        }
        pfVar4 = &(__this_02->fields)._minVertexDistanceSqr;
        if ((fVar54 < *pfVar4 || fVar54 == *pfVar4) &&
           (pfVar4 = &(__this_02->fields)._maxVertexDistance,
           *(float *)((long)ppMVar32 + -0xe8) < *pfVar4 || *(float *)((long)ppMVar32 + -0xe8) == *pfVar4)) {
          pSVar16 = (System_Collections_Generic_List_object__o *)(__this_02->fields)._tip;
          pMVar35 = (MeleeWeaponTrail_o *)0x0;
          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
          iVar37 = (pSVar16->fields)._size;
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063a40;
          pIVar22 = System_Collections_Generic_List_object___get_Item(pSVar16,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pMVar35 = *(MeleeWeaponTrail_o **)&(__this_02->fields).subdivisions;
          if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063a54;
          UVar58 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar35,(MethodInfo *)0x0);
          if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
          *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar58;
          pSVar16 = (System_Collections_Generic_List_object__o *)(__this_02->fields)._tip;
          pMVar35 = (MeleeWeaponTrail_o *)0x0;
          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
          iVar37 = (pSVar16->fields)._size;
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063a7b;
          pIVar22 = System_Collections_Generic_List_object___get_Item(pSVar16,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._base;
          if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063a8f;
          UVar57 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar35,(MethodInfo *)0x0);
          if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
          *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar57.fields;
          pSVar36 = (__this_02->fields)._points;
          pMVar35 = (MeleeWeaponTrail_o *)0x0;
          if (pSVar36 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
          iVar37 = (pSVar36->fields)._size;
          goto label_040628ac;
        }
      }
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062aae;
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062abb;
      System_Object___ctor(pIVar22,(MethodInfo *)0x0);
      pMVar35 = *(MeleeWeaponTrail_o **)&(__this_02->fields).subdivisions;
      if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062ad0;
      UVar58 = (UnityEngine_Vector3_Fields)
               UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar35,(MethodInfo *)0x0);
      if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
      *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar58;
      pUVar21 = (__this_02->fields)._base;
      pMVar35 = (MeleeWeaponTrail_o *)0x0;
      if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062af7;
      UVar57 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar57.fields;
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062b07;
      fVar41 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      *(float *)&pIVar22[1].klass = fVar41;
      lVar31 = MethodInfo_Void_Add;
      pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._tip;
      if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
      piVar2 = (int32_t *)((long)&(pMVar35->fields).m_CancellationTokenSource + 4);
      *piVar2 = *piVar2 + 1;
      pUVar13 = (UnityEngine_Vector3_array *)(pMVar35->fields).m_CachedPtr;
      if (pUVar13 == (UnityEngine_Vector3_array *)0x0) goto label_04063ab5;
      uVar38 = *(uint *)&(pMVar35->fields).m_CancellationTokenSource;
      if (uVar38 < (uint)pUVar13->max_length) {
        *(uint *)&(pMVar35->fields).m_CancellationTokenSource = uVar38 + 1;
        *(Il2CppObject **)((long)&pUVar13->m_Items[0].fields.x + (long)(int)uVar38 * 8) = pIVar22;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062b59;
        il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)&pUVar13->m_Items[0].fields.x + (long)(int)uVar38 * 8));
      }
      else {
        pMVar14 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062b72;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pMVar35,pIVar22,pMVar14);
      }
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062b7c;
      pMVar35 = __this_02;
      pMVar24 = (MeleeWeaponTrail_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pMVar24 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062b8f;
      UVar57 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar24,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)&(__this_02->fields)._trailMesh = UVar57.fields;
      lVar31 = MethodInfo_Void_Add;
      pUVar21 = (__this_02->fields)._tip;
      pMVar35 = pMVar24;
      if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      iVar37 = *(int *)&pUVar21[1].klass;
      if (iVar37 == 1) {
        pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._points;
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        piVar2 = (int32_t *)((long)&(pMVar35->fields).m_CancellationTokenSource + 4);
        *piVar2 = *piVar2 + 1;
        pUVar13 = (UnityEngine_Vector3_array *)(pMVar35->fields).m_CachedPtr;
        if (pUVar13 == (UnityEngine_Vector3_array *)0x0) goto label_04063ab5;
        uVar38 = *(uint *)&(pMVar35->fields).m_CancellationTokenSource;
        if ((uint)pUVar13->max_length <= uVar38) {
          pMVar14 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062cd8;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pMVar35,pIVar22,pMVar14);
          pMVar28 = extraout_RDX_07;
          goto label_04062cd8;
        }
        *(uint *)&(pMVar35->fields).m_CancellationTokenSource = uVar38 + 1;
        pMVar35 = (MeleeWeaponTrail_o *)((long)&pUVar13->m_Items[0].fields.x + (long)(int)uVar38 * 8);
        *(Il2CppObject **)((long)&pUVar13->m_Items[0].fields.x + (long)(int)uVar38 * 8) = pIVar22;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062c05;
        il2cpp_runtime_helper_022b4080();
        pUVar21 = (__this_02->fields)._tip;
        pMVar28 = extraout_RDX_04;
      }
      else {
        pMVar28 = extraout_RDX_03;
        if ((1 < iVar37) && (0 < (int)(__this_02->fields)._maxAngle + 1)) {
          iVar37 = 0;
          pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._points;
          while (MethodInfo_Void_Add = lVar31, pMVar35 != (MeleeWeaponTrail_o *)0x0) {
            piVar2 = (int32_t *)((long)&(pMVar35->fields).m_CancellationTokenSource + 4);
            *piVar2 = *piVar2 + 1;
            pUVar13 = (UnityEngine_Vector3_array *)(pMVar35->fields).m_CachedPtr;
            if (pUVar13 == (UnityEngine_Vector3_array *)0x0) break;
            uVar38 = *(uint *)&(pMVar35->fields).m_CancellationTokenSource;
            if (uVar38 < (uint)pUVar13->max_length) {
              *(uint *)&(pMVar35->fields).m_CancellationTokenSource = uVar38 + 1;
              pMVar35 = (MeleeWeaponTrail_o *)((long)&pUVar13->m_Items[0].fields.x + (long)(int)uVar38 * 8);
              *(Il2CppObject **)((long)&pUVar13->m_Items[0].fields.x + (long)(int)uVar38 * 8) = pIVar22;
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062cbf;
              il2cpp_runtime_helper_022b4080();
              pMVar28 = extraout_RDX_06;
            }
            else {
              pMVar14 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062c67;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pMVar35,pIVar22,pMVar14);
              pMVar28 = extraout_RDX_05;
            }
            iVar37 = iVar37 + 1;
            if ((int)(__this_02->fields)._maxAngle + 1 <= iVar37) goto label_04062cd8;
            lVar31 = MethodInfo_Void_Add;
            pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._points;
          }
          goto label_04063ab5;
        }
label_04062cd8:
        pUVar21 = (__this_02->fields)._tip;
      }
      if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      if (3 < *(int *)&pUVar21[1].klass) {
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062d04;
        pSVar25 = (System_Collections_IList_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3);
        pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._tip;
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062d2b;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) || (pSVar25 == (System_Collections_IList_o *)0x0))
        goto label_04063ab5;
        if (*(int *)&pSVar25[1].monitor == 0) {
label_04063973:
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063978;
          il2cpp_runtime_helper_022b2ca0();
          return;
        }
        uVar11 = *(undefined4 *)&pIVar22[2].monitor;
        pSVar25[2].klass = (System_Collections_IList_c *)pIVar22[2].klass;
        *(undefined4 *)&pSVar25[2].monitor = uVar11;
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062d76;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar25[1].monitor < 2) goto label_04063973;
        uVar11 = *(undefined4 *)&pIVar22[2].monitor;
        *(Il2CppClass **)((long)&pSVar25[2].monitor + 4) = pIVar22[2].klass;
        *(undefined4 *)((long)&pSVar25[3].klass + 4) = uVar11;
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062db8;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar25[1].monitor < 3) goto label_04063973;
        uVar11 = *(undefined4 *)&pIVar22[2].monitor;
        pSVar25[3].monitor = pIVar22[2].klass;
        *(undefined4 *)&pSVar25[4].klass = uVar11;
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062dfa;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar25[1].monitor < 4) goto label_04063973;
        uVar11 = *(undefined4 *)&pIVar22[2].monitor;
        *(Il2CppClass **)((long)&pSVar25[4].klass + 4) = pIVar22[2].klass;
        *(undefined4 *)((long)&pSVar25[4].monitor + 4) = uVar11;
        iVar10 = *(int32_t *)(*(long *)((long)ppMVar32 + -0xf0) + 0x60);
        if (g_data_057ac2a3 == '\0') {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062e39;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062e45;
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062e51;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a3 = '\x01';
        }
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062e68;
        pIVar26 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062e81;
        Interpolate_ToVector3_Vector3____ctor();
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062e9b;
        collection = Interpolate__NewCatmullRom_Vector3_(pSVar25,pIVar26,iVar10,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062eab;
        pSVar25 = (System_Collections_IList_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3);
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062ecf;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) || (pSVar25 == (System_Collections_IList_o *)0x0))
        goto label_04063ab5;
        if (*(int *)&pSVar25[1].monitor == 0) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        pSVar25[2].klass = *(System_Collections_IList_c **)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)&pSVar25[2].monitor = uVar11;
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062f1a;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar25[1].monitor < 2) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        *(undefined8 *)((long)&pSVar25[2].monitor + 4) = *(undefined8 *)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)((long)&pSVar25[3].klass + 4) = uVar11;
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062f5c;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar25[1].monitor < 3) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        pSVar25[3].monitor = *(void **)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)&pSVar25[4].klass = uVar11;
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062f9e;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar25[1].monitor < 4) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar22[1].monitor + 4);
        *(undefined8 *)((long)&pSVar25[4].klass + 4) = *(undefined8 *)((long)&pIVar22[1].klass + 4);
        *(undefined4 *)((long)&pSVar25[4].monitor + 4) = uVar11;
        iVar10 = *(int32_t *)(*(long *)((long)ppMVar32 + -0xf0) + 0x60);
        if (g_data_057ac2a3 == '\0') {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062fdd;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062fe9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4062ff5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a3 = '\x01';
        }
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063005;
        pIVar26 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406301e;
        Interpolate_ToVector3_Vector3____ctor();
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063038;
        collection_00 = Interpolate__NewCatmullRom_Vector3_(pSVar25,pIVar26,iVar10,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406304b;
        __this_01 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063064;
        System_Collections_Generic_List_Vector3____ctor_36a2470
                  (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_UnityEngine_Vector3);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406306d;
        pMVar24 = (MeleeWeaponTrail_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406307f;
        System_Collections_Generic_List_Vector3____ctor_36a2470
                  ((System_Collections_Generic_List_Vector3__o *)pMVar24,
                   (System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_List_1_UnityEngine_Vector3);
        pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78);
        if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40630a0;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x78),
           pMVar35 == (MeleeWeaponTrail_o *)0x0)) goto label_04063ab5;
        *(undefined4 *)((long)ppMVar32 + -0xe8) = *(undefined4 *)&pIVar22[1].klass;
        iVar37 = *(int *)&(pMVar35->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40630d5;
        pIVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar35,iVar37 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar22 == (Il2CppObject *)0x0) ||
           (__this_02 = *(MeleeWeaponTrail_o **)((long)ppMVar32 + -0xf0),
           __this_01 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto label_04063ab5;
        iVar37 = (__this_01->fields)._size;
        pMVar28 = extraout_RDX_08;
        if (pMVar24 == (MeleeWeaponTrail_o *)0x0) {
          if (0 < iVar37) {
            pSVar36 = (__this_02->fields)._points;
            pMVar28 = (MethodInfo *)(ulong)(uint)-iVar37;
            iVar30 = 0;
            do {
              if (pSVar36 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              goto label_04063ab5;
              uVar38 = (pSVar36->fields)._size;
              pMVar35 = (MeleeWeaponTrail_o *)(ulong)uVar38;
              iVar33 = -iVar37 + iVar30 + uVar38;
              if ((-1 < iVar33) && (iVar33 < (int)uVar38)) {
                *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406327d;
                pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
                *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063287;
                System_Object___ctor(pIVar22,(MethodInfo *)0x0);
                *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406328c;
                il2cpp_runtime_helper_022b2c90();
                pMVar28 = extraout_RDX_10;
                break;
              }
              iVar30 = iVar30 + 1;
            } while (iVar30 < iVar37);
          }
        }
        else if (0 < iVar37) {
          *(float *)((long)ppMVar32 + -0xd8) =
               *(float *)&pIVar22[1].klass - *(float *)((long)ppMVar32 + -0xe8);
          iVar30 = 0;
          pSVar36 = (__this_02->fields)._points;
          while (pSVar36 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            iVar33 = (pSVar36->fields)._size;
            iVar37 = (iVar33 - iVar37) + iVar30;
            if ((-1 < iVar37) && (iVar37 < iVar33)) {
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063177;
              pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063184;
              System_Object___ctor(pIVar22,(MethodInfo *)0x0);
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063192;
              pMVar35 = pMVar24;
              UVar58 = (UnityEngine_Vector3_Fields)
                       System_Collections_Generic_List_Vector3___get_Item
                                 ((System_Collections_Generic_List_Vector3__o *)pMVar24,iVar30,MethodInfo_Vector3_get_Item);
              if (pIVar22 == (Il2CppObject *)0x0) break;
              *(UnityEngine_Vector3_Fields *)((long)&pIVar22[1].klass + 4) = UVar58;
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40631b2;
              UVar57 = System_Collections_Generic_List_Vector3___get_Item(__this_01,iVar30,MethodInfo_Vector3_get_Item);
              *(UnityEngine_Vector3_Fields *)(pIVar22 + 2) = UVar57.fields;
              fVar50 = (float)iVar30 / (float)(__this_01->fields)._size;
              fVar41 = 1.0;
              if (fVar50 <= 1.0) {
                fVar41 = fVar50;
              }
              *(float *)&pIVar22[1].klass =
                   (float)(-(uint)(0.0 <= fVar50) & (uint)fVar41) * *(float *)((long)ppMVar32 + -0xd8) +
                   *(float *)((long)ppMVar32 + -0xe8);
              pMVar35 = *(MeleeWeaponTrail_o **)(*(long *)((long)ppMVar32 + -0xf0) + 0x80);
              if (pMVar35 == (MeleeWeaponTrail_o *)0x0) break;
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063222;
              System_Collections_Generic_List_object___set_Item
                        ((System_Collections_Generic_List_object__o *)pMVar35,iVar37,pIVar22,MethodInfo_Void_set_Item);
              pMVar28 = extraout_RDX_09;
            }
            iVar30 = iVar30 + 1;
            iVar37 = (__this_01->fields)._size;
            __this_02 = *(MeleeWeaponTrail_o **)((long)ppMVar32 + -0xf0);
            if (iVar37 <= iVar30) goto label_0406328c;
            pSVar36 = (__this_02->fields)._points;
          }
          goto label_04063ab5;
        }
      }
    }
  }
label_0406328c:
  pSVar36 = (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)(__this_02->fields)._tip;
  *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063299;
  pMVar35 = __this_02;
  MeleeWeaponTrail__RemoveOldPoints(__this_02,pSVar36,pMVar28);
  pUVar21 = (__this_02->fields)._tip;
  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
    pMVar28 = extraout_RDX_11;
    if (*(int *)&pUVar21[1].klass == 0) {
      pUVar23 = (UnityEngine_Object_o *)(__this_02->fields)._trailObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40632ce;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40632da;
      bVar20 = UnityEngine_Object__op_Inequality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar28 = extraout_RDX_12;
      if ((char)bVar20 != '\0') {
        pUVar15 = (UnityEngine_Mesh_o *)(__this_02->fields)._trailObject;
        pMVar35 = (MeleeWeaponTrail_o *)0x0;
        if (pUVar15 == (UnityEngine_Mesh_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40632f6;
        UnityEngine_Mesh__Clear(pUVar15,(MethodInfo *)0x0);
        pMVar28 = extraout_RDX_13;
      }
    }
    pSVar36 = (__this_02->fields)._points;
    *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063306;
    pMVar35 = __this_02;
    MeleeWeaponTrail__RemoveOldPoints(__this_02,pSVar36,pMVar28);
    pSVar36 = (__this_02->fields)._points;
    if (pSVar36 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      if ((pSVar36->fields)._size == 0) {
        pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._trailObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063337;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063343;
        bVar20 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pMVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 != '\0') {
          pMVar35 = (MeleeWeaponTrail_o *)(__this_02->fields)._trailObject;
          if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406335f;
          UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)pMVar35,(MethodInfo *)0x0);
        }
      }
      pSVar36 = (__this_02->fields)._points;
      if (pSVar36 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        iVar37 = (pSVar36->fields)._size;
        if (iVar37 < 2) {
          return;
        }
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406338e;
        auVar47._0_8_ = il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar37 * 2);
        *(undefined8 *)((long)ppMVar32 + -0xe0) = auVar47._0_8_;
        iVar37 = (pSVar36->fields)._size;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40633a8;
        value = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar37 * 2);
        iVar37 = (pSVar36->fields)._size;
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40633c7;
        value_00 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int,iVar37 * 6 + -6);
        *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40633df;
        auVar47._0_8_ = il2cpp_runtime_helper_022b2a40(TypeInfo_Color);
        *(undefined8 *)((long)ppMVar32 + -0xb8) = auVar47._0_8_;
        if (0 < (pSVar36->fields)._size) {
          uVar39 = 1;
          uVar38 = 0xfffffffd;
          lVar31 = 0;
          lVar34 = 0;
          *(UnityEngine_Vector2_array **)((long)ppMVar32 + -0x98) = value;
          *(System_Int32_array **)((long)ppMVar32 + -0xa0) = value_00;
          *(System_Collections_Generic_List_MeleeWeaponTrail_Point__o **)((long)ppMVar32 + -0x50) = pSVar36;
          do {
            *(long *)((long)ppMVar32 + -0xe8) = lVar31;
            *(long *)((long)ppMVar32 + -0xd8) = lVar34;
            *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406346e;
            pIVar22 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar36,(int32_t)lVar34,
                                 MethodInfo_MeleeWeaponTrail_Point_get_Item);
            pMVar35 = (MeleeWeaponTrail_o *)0x0;
            *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063478;
            fVar41 = UnityEngine_Time__get_time((MethodInfo *)0x0);
            if (pIVar22 == (Il2CppObject *)0x0) goto label_04063ab5;
            fVar41 = (fVar41 - *(float *)&pIVar22[1].klass) /
                     *(float *)(*(long *)((long)ppMVar32 + -0xf0) + 0x30);
            fVar50 = 1.0;
            if (fVar41 <= 1.0) {
              fVar50 = fVar41;
            }
            fVar50 = (float)(~-(uint)(0.0 <= fVar41) & 0x3f800000 |
                            (uint)(1.0 - fVar50) & -(uint)(0.0 <= fVar41));
            auVar56._4_4_ = fVar50;
            auVar56._0_4_ = fVar50;
            auVar56._8_8_ = 0;
            lVar34 = *(long *)(*(long *)((long)ppMVar32 + -0xf0) + 0x38);
            fVar54 = 0.0;
            fVar52 = fVar50;
            if (lVar34 == 0) {
              lVar31 = *(long *)((long)ppMVar32 + -0xe8);
            }
            else {
              lVar31 = *(long *)((long)ppMVar32 + -0xe8);
              fVar54 = 0.0;
              if (*(long *)(lVar34 + 0x18) != 0) {
                uVar19 = (uint)*(long *)(lVar34 + 0x18);
                *(undefined1 (*) [16])((long)ppMVar32 + -0x68) = ZEXT416((uint)(float)(int)(uVar19 - 1));
                *(float *)((long)ppMVar32 + -200) = fVar41;
                fVar41 = fVar41 * (float)(int)(uVar19 - 1);
                *(float *)((long)ppMVar32 + -0x88) = fVar41;
                *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406350b;
                fVar41 = floorf(fVar41);
                *(float *)((long)ppMVar32 + -0x78) = fVar41;
                *(undefined4 *)((long)ppMVar32 + -0x74) = extraout_XMM0_Db;
                *(undefined4 *)((long)ppMVar32 + -0x70) = extraout_XMM0_Dc;
                *(undefined4 *)((long)ppMVar32 + -0x6c) = extraout_XMM0_Dd;
                *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406351e;
                fVar54 = ceilf(*(float *)((long)ppMVar32 + -0x88));
                fVar41 = *(float *)((long)ppMVar32 + -0x78);
                fVar50 = *(float *)((long)ppMVar32 + -0x68);
                fVar52 = fVar50;
                if (fVar54 <= fVar50) {
                  fVar52 = fVar54;
                }
                fVar52 = (float)(~-(uint)(1.0 <= fVar54) & 0x3f800000 | (uint)fVar52 & -(uint)(1.0 <= fVar54))
                ;
                if ((fVar41 != fVar52) || (NAN(fVar41) || NAN(fVar52))) {
                  fVar42 = (*(float *)((long)ppMVar32 + -0x88) - fVar41) / (fVar52 - fVar41);
                  fVar54 = 0.0;
                  if ((0.0 <= fVar42) && (fVar54 = 1.0, fVar42 <= 1.0)) {
                    fVar54 = fVar42;
                  }
                }
                else {
                  fVar54 = 0.0;
                }
                uVar40 = -(uint)(fVar41 < (float)(int)uVar19);
                fVar42 = (float)(~uVar40 & (uint)fVar50 | uVar40 & (uint)fVar41);
                fVar41 = 0.0;
                if (0.0 <= fVar42) {
                  fVar41 = fVar42;
                }
                lVar31 = *(long *)((long)ppMVar32 + -0xe8);
                if (uVar19 <= (uint)(int)fVar41) goto label_04063973;
                uVar40 = -(uint)(fVar52 < (float)(int)uVar19);
                fVar52 = (float)(~uVar40 & (uint)fVar50 | uVar40 & (uint)fVar52);
                fVar50 = 0.0;
                if (0.0 <= fVar52) {
                  fVar50 = fVar52;
                }
                if (uVar19 <= (uint)(int)fVar50) goto label_04063973;
                lVar27 = (long)(int)fVar41 * 0x10;
                auVar47._0_8_ = *(undefined8 *)(lVar34 + 0x20 + lVar27);
                uVar6 = *(undefined8 *)(lVar34 + 0x28 + lVar27);
                lVar27 = (long)(int)fVar50 * 0x10;
                uVar7 = *(undefined8 *)(lVar34 + 0x20 + lVar27);
                uVar8 = *(undefined8 *)(lVar34 + 0x28 + lVar27);
                auVar49 = ZEXT812(0);
                if (0.0 <= fVar54) {
                  auVar49._4_8_ = 0;
                  auVar49._0_4_ = fVar54;
                }
                fVar41 = (float)auVar47._0_8_;
                fVar50 = (float)((ulong)auVar47._0_8_ >> 0x20);
                fVar42 = auVar49._0_4_;
                auVar56._0_4_ = ((float)uVar7 - fVar41) * fVar42 + fVar41;
                auVar56._4_4_ = ((float)((ulong)uVar7 >> 0x20) - fVar50) * fVar42 + fVar50;
                auVar56._8_4_ = auVar49._8_4_ * 0.0 + 0.0;
                auVar56._12_4_ = 0;
                fVar50 = (float)uVar6;
                fVar52 = (float)((ulong)uVar6 >> 0x20);
                fVar50 = ((float)uVar8 - fVar50) * fVar42 + fVar50;
                fVar54 = auVar49._8_4_ * 0.0 + 0.0;
                fVar41 = *(float *)((long)ppMVar32 + -200);
                fVar52 = ((float)((ulong)uVar8 >> 0x20) - fVar52) * fVar42 + fVar52;
              }
            }
            pIVar55 = auVar56._0_8_;
            lVar34 = *(long *)(*(long *)((long)ppMVar32 + -0xf0) + 0x40);
            fVar42 = 0.0;
            if ((lVar34 != 0) && (lVar27 = *(long *)(lVar34 + 0x18), lVar27 != 0)) {
              auVar18._4_4_ = fVar52;
              auVar18._0_4_ = fVar50;
              auVar18._8_4_ = fVar54;
              auVar18._12_4_ = 0;
              *(undefined1 (*) [16])((long)ppMVar32 + -0x68) = auVar18;
              *(undefined1 (*) [16])((long)ppMVar32 + -0x88) = auVar56;
              uVar19 = (uint)lVar27;
              *(undefined1 (*) [16])((long)ppMVar32 + -0x78) = ZEXT416((uint)(float)(int)(uVar19 - 1));
              fVar41 = fVar41 * (float)(int)(uVar19 - 1);
              *(float *)((long)ppMVar32 + -200) = fVar41;
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063689;
              fVar41 = floorf(fVar41);
              *(float *)((long)ppMVar32 + -0x48) = fVar41;
              *(undefined4 *)((long)ppMVar32 + -0x44) = extraout_XMM0_Db_00;
              *(undefined4 *)((long)ppMVar32 + -0x40) = extraout_XMM0_Dc_00;
              *(undefined4 *)((long)ppMVar32 + -0x3c) = extraout_XMM0_Dd_00;
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x406369c;
              fVar52 = ceilf(*(float *)((long)ppMVar32 + -200));
              fVar41 = *(float *)((long)ppMVar32 + -0x48);
              fVar54 = *(float *)((long)ppMVar32 + -0x78);
              fVar50 = fVar54;
              if (fVar52 <= fVar54) {
                fVar50 = fVar52;
              }
              fVar42 = (float)(~-(uint)(1.0 <= fVar52) & 0x3f800000 | (uint)fVar50 & -(uint)(1.0 <= fVar52));
              if ((fVar41 != fVar42) || (NAN(fVar41) || NAN(fVar42))) {
                fVar50 = (*(float *)((long)ppMVar32 + -200) - fVar41) / (fVar42 - fVar41);
                fVar46 = 0.0;
                if ((0.0 <= fVar50) && (fVar46 = 1.0, fVar50 <= 1.0)) {
                  fVar46 = fVar50;
                }
              }
              else {
                fVar46 = 0.0;
              }
              uVar40 = -(uint)(fVar41 < (float)(int)uVar19);
              fVar50 = (float)(~uVar40 & (uint)fVar54 | uVar40 & (uint)fVar41);
              fVar41 = 0.0;
              if (0.0 <= fVar50) {
                fVar41 = fVar50;
              }
              lVar31 = *(long *)((long)ppMVar32 + -0xe8);
              pIVar55 = *(Il2CppObject **)((long)ppMVar32 + -0x88);
              fVar50 = *(float *)((long)ppMVar32 + -0x68);
              fVar52 = *(float *)((long)ppMVar32 + -100);
              if (uVar19 <= (uint)(int)fVar41) goto label_04063973;
              uVar40 = -(uint)(fVar42 < (float)(int)uVar19);
              fVar42 = (float)(~uVar40 & (uint)fVar54 | uVar40 & (uint)fVar42);
              fVar54 = 0.0;
              if (0.0 <= fVar42) {
                fVar54 = fVar42;
              }
              if (uVar19 <= (uint)(int)fVar54) goto label_04063973;
              fVar42 = *(float *)(lVar34 + 0x20 + (long)(int)fVar41 * 4);
              fVar41 = 0.0;
              if (0.0 <= fVar46) {
                fVar41 = fVar46;
              }
              fVar42 = (*(float *)(lVar34 + 0x20 + (long)(int)fVar54 * 4) - fVar42) * fVar41 + fVar42;
            }
            lVar34 = *(long *)((long)ppMVar32 + -0xe0);
            pMVar35 = (MeleeWeaponTrail_o *)0x0;
            if (lVar34 == 0) goto label_04063ab5;
            uVar3 = uVar39 - 1;
            if (*(uint *)(lVar34 + 0x18) <= uVar3) goto label_04063973;
            auVar47._0_8_ = *(undefined8 *)((long)&pIVar22[1].klass + 4);
            fVar51 = (float)auVar47._0_8_;
            fVar53 = (float)((ulong)auVar47._0_8_ >> 0x20);
            fVar41 = *(float *)((long)&pIVar22[1].monitor + 4);
            fVar42 = fVar42 * 0.5;
            fVar54 = fVar42 * (SUB84(pIVar22[2].klass,0) - fVar51);
            fVar46 = fVar42 * ((float)((ulong)pIVar22[2].klass >> 0x20) - fVar53);
            fVar42 = fVar42 * (*(float *)&pIVar22[2].monitor - fVar41);
            lVar27 = lVar31 >> 0x20;
            *(ulong *)(lVar34 + 0x20 + lVar27 * 0xc) = CONCAT44(fVar53 - fVar46,fVar51 - fVar54);
            *(float *)(lVar34 + 0x28 + lVar27 * 0xc) = fVar41 - fVar42;
            if (*(uint *)(lVar34 + 0x18) <= uVar39) goto label_04063973;
            lVar29 = lVar31 + 0x100000000 >> 0x20;
            fVar41 = *(float *)&pIVar22[2].monitor;
            *(ulong *)(lVar34 + 0x20 + lVar29 * 0xc) =
                 CONCAT44(fVar46 + (float)((ulong)pIVar22[2].klass >> 0x20),fVar54 + SUB84(pIVar22[2].klass,0)
                         );
            *(float *)(lVar34 + 0x28 + lVar29 * 0xc) = fVar42 + fVar41;
            pMVar35 = *(MeleeWeaponTrail_o **)((long)ppMVar32 + -0xb8);
            if (pMVar35 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
            value = *(UnityEngine_Vector2_array **)((long)ppMVar32 + -0x98);
            value_00 = *(System_Int32_array **)((long)ppMVar32 + -0xa0);
            pSVar36 = *(System_Collections_Generic_List_MeleeWeaponTrail_Point__o **)((long)ppMVar32 + -0x50);
            if (*(uint *)&(pMVar35->fields).m_CancellationTokenSource <= uVar39) goto label_04063973;
            ppIVar5 = (Il2CppObject **)((long)&(pMVar35->fields)._emit + lVar29 * 2 * 8);
            *ppIVar5 = pIVar55;
            ppIVar5[1] = (Il2CppObject *)CONCAT44(fVar52,fVar50);
            if (*(uint *)&(pMVar35->fields).m_CancellationTokenSource <= uVar3) goto label_04063973;
            ppIVar5 = (Il2CppObject **)((long)&(pMVar35->fields)._emit + lVar27 * 2 * 8);
            *ppIVar5 = pIVar55;
            ppIVar5[1] = (Il2CppObject *)CONCAT44(fVar52,fVar50);
            if (value == (UnityEngine_Vector2_array *)0x0) goto label_04063ab5;
            if ((uint)value->max_length <= uVar3) goto label_04063973;
            lVar34 = *(long *)((long)ppMVar32 + -0xd8);
            fVar41 = (float)(int)lVar34 / (float)(pSVar36->fields)._size;
            UVar44.fields.y = 0.0;
            UVar44.fields.x = fVar41;
            value->m_Items[lVar27].fields = UVar44.fields;
            if ((uint)value->max_length <= uVar39) goto label_04063973;
            UVar17.fields.y = 1.0;
            UVar17.fields.x = fVar41;
            value->m_Items[lVar29].fields = UVar17.fields;
            if (uVar39 != 1) {
              if (value_00 == (System_Int32_array *)0x0) goto label_04063ab5;
              uVar19 = (uint)value_00->max_length;
              if (uVar19 <= uVar38 - 3) goto label_04063973;
              iVar37 = (int)uVar39;
              value_00->m_Items[(int)(uVar38 - 3)] = iVar37 + -3;
              if (uVar19 <= uVar38 - 2) goto label_04063973;
              value_00->m_Items[(int)(uVar38 - 2)] = iVar37 + -2;
              if (uVar19 <= uVar38 - 1) goto label_04063973;
              value_00->m_Items[(int)(uVar38 - 1)] = (int32_t)uVar3;
              if (uVar19 <= uVar38) goto label_04063973;
              value_00->m_Items[(int)uVar38] = iVar37;
              if (uVar19 <= uVar38 + 1) goto label_04063973;
              value_00->m_Items[(int)(uVar38 + 1)] = (int32_t)uVar3;
              if (uVar19 <= uVar38 + 2) goto label_04063973;
              value_00->m_Items[(int)(uVar38 + 2)] = iVar37 + -2;
              lVar34 = *(long *)((long)ppMVar32 + -0xd8);
            }
            lVar34 = lVar34 + 1;
            uVar39 = uVar39 + 2;
            lVar31 = lVar31 + 0x200000000;
            uVar38 = uVar38 + 6;
          } while (lVar34 < (pSVar36->fields)._size);
        }
        lVar31 = *(long *)((long)ppMVar32 + -0xf0);
        pUVar15 = *(UnityEngine_Mesh_o **)(lVar31 + 0x90);
        pMVar35 = (MeleeWeaponTrail_o *)0x0;
        if (pUVar15 != (UnityEngine_Mesh_o *)0x0) {
          *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40639a6;
          UnityEngine_Mesh__Clear(pUVar15,(MethodInfo *)0x0);
          pUVar15 = *(UnityEngine_Mesh_o **)(lVar31 + 0x90);
          pMVar35 = (MeleeWeaponTrail_o *)0x0;
          if (pUVar15 != (UnityEngine_Mesh_o *)0x0) {
            *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40639c2;
            UnityEngine_Mesh__set_vertices
                      (pUVar15,*(UnityEngine_Vector3_array **)((long)ppMVar32 + -0xe0),(MethodInfo *)0x0);
            pUVar15 = *(UnityEngine_Mesh_o **)(lVar31 + 0x90);
            pMVar35 = (MeleeWeaponTrail_o *)0x0;
            if (pUVar15 != (UnityEngine_Mesh_o *)0x0) {
              *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40639de;
              UnityEngine_Mesh__set_colors
                        (pUVar15,*(UnityEngine_Color_array **)((long)ppMVar32 + -0xb8),(MethodInfo *)0x0);
              pUVar15 = *(UnityEngine_Mesh_o **)(lVar31 + 0x90);
              pMVar35 = (MeleeWeaponTrail_o *)0x0;
              if (pUVar15 != (UnityEngine_Mesh_o *)0x0) {
                *(undefined8 *)((long)ppMVar32 + -0x100) = 0x40639f8;
                UnityEngine_Mesh__set_uv(pUVar15,value,(MethodInfo *)0x0);
                pMVar35 = (MeleeWeaponTrail_o *)0x0;
                if (*(UnityEngine_Mesh_o **)(lVar31 + 0x90) != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__set_triangles
                            (*(UnityEngine_Mesh_o **)(lVar31 + 0x90),value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04063ab5:
  *(undefined8 *)((long)ppMVar32 + -0x100) = 0x4063aba;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pMVar35,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$StopImmediate
// il2cpp: void MeleeWeaponTrail__StopImmediate (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x4062310

void MeleeWeaponTrail__StopImmediate(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  ulong uVar3;
  float *pfVar4;
  Il2CppObject **ppIVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int32_t iVar10;
  undefined4 uVar11;
  UnityEngine_Vector3_array *pUVar12;
  MethodInfo_362C220 *pMVar13;
  UnityEngine_Mesh_o *pUVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  UnityEngine_Vector2_o UVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  bool_conflict bVar19;
  UnityEngine_Transform_o *pUVar20;
  Il2CppObject *pIVar21;
  UnityEngine_Object_o *pUVar22;
  MeleeWeaponTrail_o *pMVar23;
  System_Collections_IList_o *pSVar24;
  Interpolate_ToVector3_T__o *pIVar25;
  System_Collections_Generic_IEnumerable_Vector3__o *collection;
  System_Collections_Generic_IEnumerable_Vector3__o *collection_00;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_Vector2_array *value;
  System_Int32_array *value_00;
  long lVar26;
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
  MethodInfo *pMVar27;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  long lVar28;
  int iVar29;
  MeleeWeaponTrail_o *unaff_RBX;
  long lVar30;
  int iVar31;
  undefined8 unaff_RBP;
  long lVar32;
  MeleeWeaponTrail_o *pMVar33;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar34;
  int iVar35;
  uint uVar36;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulong uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  UnityEngine_Vector2_o UVar42;
  undefined1 auVar43 [12];
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [12];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  Il2CppObject *pIVar53;
  undefined1 auVar54 [16];
  UnityEngine_Vector3_o UVar55;
  UnityEngine_Vector3_Fields UVar56;
  
  pMVar33 = __this;
  if (g_data_057ac2ab == '\0') {
    pMVar33 = (MeleeWeaponTrail_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2ab = '\x01';
  }
  *(undefined1 *)&(__this->fields)._emit = 0;
  pUVar20 = (__this->fields)._tip;
  if (pUVar20 == (UnityEngine_Transform_o *)0x0) {
label_0406238d:
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    __this = pMVar33;
  }
  else {
    piVar1 = (int *)((long)&pUVar20[1].klass + 4);
    *piVar1 = *piVar1 + 1;
    iVar10 = *(int32_t *)&pUVar20[1].klass;
    *(undefined4 *)&pUVar20[1].klass = 0;
    if (0 < iVar10) {
      pMVar33 = (MeleeWeaponTrail_o *)(pUVar20->fields).m_CachedPtr;
      System_Array__Clear((System_Array_o *)pMVar33,0,iVar10,(MethodInfo *)0x0);
    }
    pSVar34 = (__this->fields)._points;
    if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0406238d;
    piVar2 = &(pSVar34->fields)._version;
    *piVar2 = *piVar2 + 1;
    iVar35 = (pSVar34->fields)._size;
    (pSVar34->fields)._size = 0;
    if (0 < iVar35) {
      System_Array__Clear((System_Array_o *)(pSVar34->fields)._items,0,iVar35,(MethodInfo *)0x0);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(MeleeWeaponTrail_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057ac2ac == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40623cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40623d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40623e5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40623f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Vector3);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40623fd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062409;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062415;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062421;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_Point_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406242d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062439;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Vector3);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062445;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062451;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Point);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406245d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062469;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062475;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac2ac = '\x01';
  }
  pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40624aa;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40624b6;
  bVar19 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pMVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar19 != '\0') {
    return;
  }
  if (*(char *)((long)&(__this->fields)._emit + 1) == '\0') {
    return;
  }
  if (*(char *)&(__this->fields)._emit == '\0') {
label_04062557:
    pUVar20 = (__this->fields)._tip;
joined_r0x04062548:
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
    if ((*(int *)&pUVar20[1].klass == 0) && (*(char *)&(__this->fields)._maxVertexDistanceSqr != '\0')) {
      pSVar34 = (__this->fields)._smoothedPoints;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062954;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062960;
      bVar19 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar19 != '\0') {
        pSVar34 = (__this->fields)._smoothedPoints;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406297e;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062988;
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar34,(MethodInfo *)0x0);
      }
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062992;
      pUVar22 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40629a7;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40629b3;
      bVar19 = UnityEngine_Object__op_Inequality(pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar19 != '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40629c5;
        pUVar22 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40629da;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40629e4;
        UnityEngine_Object__Destroy_4e01c60(pUVar22,(MethodInfo *)0x0);
      }
    }
  }
  else {
    fVar39 = (float)(__this->fields)._use;
    if ((fVar39 != 0.0) || (NAN(fVar39))) {
      pMVar33 = (MeleeWeaponTrail_o *)0x0;
      *(float *)((long)register0x00000020 + -0xe8) = fVar39;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40624f8;
      fVar39 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar39 = *(float *)((long)register0x00000020 + -0xe8) - fVar39;
      (__this->fields)._use = (bool_conflict)fVar39;
      if ((fVar39 != 0.0) || (NAN(fVar39))) {
        if (0.0 <= fVar39) {
          if (*(char *)&(__this->fields)._emit == '\0') goto label_04062557;
          goto label_0406256f;
        }
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar20 = (__this->fields)._tip;
      }
      else {
        (__this->fields)._use = -0x40800000;
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar20 = (__this->fields)._tip;
      }
      goto joined_r0x04062548;
    }
  }
label_0406256f:
  *(UnityEngine_Mesh_o **)((long)register0x00000020 + -0xd8) = (__this->fields)._trailMesh;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
  *(float *)((long)register0x00000020 + -0xe8) = (__this->fields)._lastPosition.fields.x;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062598;
  pMVar33 = __this;
  pUVar20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40625ab;
  UVar55 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
  cVar9 = *(char *)&(__this->fields)._emit;
  *(MeleeWeaponTrail_o **)((long)register0x00000020 + -0xf0) = __this;
  pMVar27 = extraout_RDX;
  if (cVar9 != '\0') {
    pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._tip;
    if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
    fVar39 = (*(float *)((long)register0x00000020 + -0xe8) - UVar55.fields.z) *
             (*(float *)((long)register0x00000020 + -0xe8) - UVar55.fields.z) +
             (*(float *)((long)register0x00000020 + -0xd4) - UVar55.fields.y) *
             (*(float *)((long)register0x00000020 + -0xd4) - UVar55.fields.y) +
             (*(float *)((long)register0x00000020 + -0xd8) - UVar55.fields.x) *
             (*(float *)((long)register0x00000020 + -0xd8) - UVar55.fields.x);
    pfVar4 = &(__this->fields)._minVertexDistance;
    iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
    if (fVar39 < *pfVar4 || fVar39 == *pfVar4) {
      if (0 < iVar35) {
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062815;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar33 = *(MeleeWeaponTrail_o **)&(__this->fields).subdivisions;
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406282d;
        UVar56 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar33,(MethodInfo *)0x0);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar21[1].klass + 4) = UVar56;
        pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        pMVar33 = (MeleeWeaponTrail_o *)0x0;
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
        iVar35 = (pSVar15->fields)._size;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406285c;
        pIVar21 = System_Collections_Generic_List_object___get_Item(pSVar15,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._base;
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062874;
        UVar55 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar33,(MethodInfo *)0x0);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)(pIVar21 + 2) = UVar55.fields;
        pMVar27 = extraout_RDX_00;
      }
      pSVar34 = (__this->fields)._points;
      pMVar33 = (MeleeWeaponTrail_o *)0x0;
      if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
      iVar35 = (pSVar34->fields)._size;
      if (0 < iVar35) {
label_040628ac:
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40628b5;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar34,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar33 = *(MeleeWeaponTrail_o **)&(__this->fields).subdivisions;
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40628cd;
        UVar56 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar33,(MethodInfo *)0x0);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar21[1].klass + 4) = UVar56;
        pSVar34 = (__this->fields)._points;
        pMVar33 = (MeleeWeaponTrail_o *)0x0;
        if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
        iVar35 = (pSVar34->fields)._size;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40628ff;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar34,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._base;
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062917;
        UVar55 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar33,(MethodInfo *)0x0);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)(pIVar21 + 2) = UVar55.fields;
        pMVar27 = extraout_RDX_01;
      }
    }
    else {
      if (2 < iVar35) {
        *(float *)((long)register0x00000020 + -0xe8) = fVar39;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062631;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar21 == (Il2CppObject *)0x0) ||
           (pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._tip, pMVar33 == (MeleeWeaponTrail_o *)0x0))
        goto label_04063ab5;
        *(Il2CppClass **)((long)register0x00000020 + -200) = pIVar21[2].klass;
        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
        *(undefined1 (*) [16])((long)register0x00000020 + -0xd8) = ZEXT416(*(uint *)&pIVar21[2].monitor);
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406266b;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar21 == (Il2CppObject *)0x0) ||
           (pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._tip, pMVar33 == (MeleeWeaponTrail_o *)0x0))
        goto label_04063ab5;
        *(float *)((long)register0x00000020 + -0xd8) =
             *(float *)((long)register0x00000020 + -0xd8) - *(float *)&pIVar21[2].monitor;
        *(undefined4 *)((long)register0x00000020 + -0xd4) = *(undefined4 *)((long)register0x00000020 + -0xd4);
        *(undefined4 *)((long)register0x00000020 + -0xd0) = *(undefined4 *)((long)register0x00000020 + -0xd0);
        *(undefined4 *)((long)register0x00000020 + -0xcc) = *(undefined4 *)((long)register0x00000020 + -0xcc);
        *(Il2CppClass **)((long)register0x00000020 + -0x98) = pIVar21[2].klass;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40626aa;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar21 == (Il2CppObject *)0x0) ||
           (pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._tip, pMVar33 == (MeleeWeaponTrail_o *)0x0))
        goto label_04063ab5;
        *(Il2CppClass **)((long)register0x00000020 + -0xb8) = pIVar21[2].klass;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
        *(undefined4 *)((long)register0x00000020 + -0xe0) = *(undefined4 *)&pIVar21[2].monitor;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40626e5;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        auVar45._0_8_ =
             CONCAT44(*(float *)((long)register0x00000020 + -0xc4) -
                      *(float *)((long)register0x00000020 + -0x94),
                      *(float *)((long)register0x00000020 + -200) -
                      *(float *)((long)register0x00000020 + -0x98));
        auVar45._8_4_ =
             *(float *)((long)register0x00000020 + -0xc0) - *(float *)((long)register0x00000020 + -0x90);
        auVar45._12_4_ =
             *(float *)((long)register0x00000020 + -0xbc) - *(float *)((long)register0x00000020 + -0x8c);
        fVar48 = *(float *)((long)register0x00000020 + -0xb8) - SUB84(pIVar21[2].klass,0);
        fVar50 = *(float *)((long)register0x00000020 + -0xb4) - (float)((ulong)pIVar21[2].klass >> 0x20);
        fVar39 = *(float *)((long)register0x00000020 + -0xe0) - *(float *)&pIVar21[2].monitor;
        *(undefined1 (*) [16])((long)register0x00000020 + -200) = auVar45;
        *(float *)((long)register0x00000020 + -0xe0) = fVar39;
        *(float *)((long)register0x00000020 + -0xb8) = fVar48;
        *(float *)((long)register0x00000020 + -0xb4) = fVar50;
        *(float *)((long)register0x00000020 + -0xb0) = *(float *)((long)register0x00000020 + -0xb0) - 0.0;
        *(float *)((long)register0x00000020 + -0xac) = *(float *)((long)register0x00000020 + -0xac) - 0.0;
        if (g_data_057ac31a == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062735;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          fVar48 = *(float *)((long)register0x00000020 + -0xb8);
          fVar50 = *(float *)((long)register0x00000020 + -0xb4);
          fVar39 = *(float *)((long)register0x00000020 + -0xe0);
          auVar45._0_8_ = SUB168(*(undefined1 (*) [16])((long)register0x00000020 + -200),0);
          g_data_057ac31a = '\x01';
        }
        fVar52 = (float)((ulong)auVar45._0_8_ >> 0x20);
        fVar40 = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xd8),0) *
                 SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xd8),0) +
                 fVar52 * fVar52 + (float)auVar45._0_8_ * (float)auVar45._0_8_;
        fVar52 = fVar39 * fVar39 + fVar50 * fVar50 + fVar48 * fVar48;
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          *(float *)((long)register0x00000020 + -0x98) = fVar40;
          *(float *)((long)register0x00000020 + -0xa0) = fVar52;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40627b4;
          il2cpp_runtime_helper_02337ed0();
          fVar52 = *(float *)((long)register0x00000020 + -0xa0);
          fVar40 = *(float *)((long)register0x00000020 + -0x98);
          fVar48 = *(float *)((long)register0x00000020 + -0xb8);
          fVar50 = *(float *)((long)register0x00000020 + -0xb4);
          fVar39 = *(float *)((long)register0x00000020 + -0xe0);
          auVar45._0_8_ = SUB168(*(undefined1 (*) [16])((long)register0x00000020 + -200),0);
        }
        fVar40 = fVar40 * fVar52;
        if (fVar40 < 0.0) {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40629ee;
          fVar40 = sqrtf(fVar40);
          fVar48 = *(float *)((long)register0x00000020 + -0xb8);
          fVar50 = *(float *)((long)register0x00000020 + -0xb4);
          fVar39 = *(float *)((long)register0x00000020 + -0xe0);
          auVar45._0_8_ = SUB168(*(undefined1 (*) [16])((long)register0x00000020 + -200),0);
          pMVar27 = TypeInfo_Math;
        }
        else {
          fVar40 = SQRT(fVar40);
          pMVar27 = TypeInfo_Math;
        }
        fVar52 = 0.0;
        TypeInfo_Math = pMVar27;
        if (1e-15 <= fVar40) {
          fVar40 = (*(float *)((long)register0x00000020 + -0xd8) * fVar39 +
                   (float)((ulong)auVar45._0_8_ >> 0x20) * fVar50 + (float)auVar45._0_8_ * fVar48) / fVar40;
          auVar43 = ZEXT812(0x3f800000);
          if (fVar40 <= 1.0) {
            auVar43._4_8_ = 0;
            auVar43._0_4_ = fVar40;
          }
          auVar46._0_4_ = auVar43._0_4_ & -(uint)(-1.0 <= fVar40);
          auVar46._4_4_ = 0;
          auVar46._8_4_ = auVar43._8_4_ & *(uint *)((long)register0x00000020 + -0xd0);
          auVar46._12_4_ = 0;
          auVar46 = ZEXT416(~-(uint)(-1.0 <= fVar40) & 0xbf800000) | auVar46;
          if (*(int *)((long)&pMVar27[2].parameters + 4) == 0) {
            *(undefined1 (*) [16])((long)register0x00000020 + -0xd8) = auVar46;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062a68;
            il2cpp_runtime_helper_02337ed0();
            auVar46 = *(undefined1 (*) [16])((long)register0x00000020 + -0xd8);
          }
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062a76;
          dVar41 = acos((double)auVar46._0_4_,pMVar27);
          fVar52 = (float)dVar41 * 57.29578;
        }
        pfVar4 = &(__this->fields)._minVertexDistanceSqr;
        if ((fVar52 < *pfVar4 || fVar52 == *pfVar4) &&
           (pfVar4 = &(__this->fields)._maxVertexDistance,
           *(float *)((long)register0x00000020 + -0xe8) < *pfVar4 ||
           *(float *)((long)register0x00000020 + -0xe8) == *pfVar4)) {
          pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          pMVar33 = (MeleeWeaponTrail_o *)0x0;
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
          iVar35 = (pSVar15->fields)._size;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063a40;
          pIVar21 = System_Collections_Generic_List_object___get_Item(pSVar15,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pMVar33 = *(MeleeWeaponTrail_o **)&(__this->fields).subdivisions;
          if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063a54;
          UVar56 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar33,(MethodInfo *)0x0);
          if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
          *(UnityEngine_Vector3_Fields *)((long)&pIVar21[1].klass + 4) = UVar56;
          pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          pMVar33 = (MeleeWeaponTrail_o *)0x0;
          if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
          iVar35 = (pSVar15->fields)._size;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063a7b;
          pIVar21 = System_Collections_Generic_List_object___get_Item(pSVar15,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._base;
          if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063a8f;
          UVar55 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar33,(MethodInfo *)0x0);
          if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
          *(UnityEngine_Vector3_Fields *)(pIVar21 + 2) = UVar55.fields;
          pSVar34 = (__this->fields)._points;
          pMVar33 = (MeleeWeaponTrail_o *)0x0;
          if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
          iVar35 = (pSVar34->fields)._size;
          goto label_040628ac;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062aae;
      pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062abb;
      System_Object___ctor(pIVar21,(MethodInfo *)0x0);
      pMVar33 = *(MeleeWeaponTrail_o **)&(__this->fields).subdivisions;
      if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062ad0;
      UVar56 = (UnityEngine_Vector3_Fields)
               UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar33,(MethodInfo *)0x0);
      if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
      *(UnityEngine_Vector3_Fields *)((long)&pIVar21[1].klass + 4) = UVar56;
      pUVar20 = (__this->fields)._base;
      pMVar33 = (MeleeWeaponTrail_o *)0x0;
      if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062af7;
      UVar55 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)(pIVar21 + 2) = UVar55.fields;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062b07;
      fVar39 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      *(float *)&pIVar21[1].klass = fVar39;
      lVar30 = MethodInfo_Void_Add;
      pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._tip;
      if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
      piVar2 = (int32_t *)((long)&(pMVar33->fields).m_CancellationTokenSource + 4);
      *piVar2 = *piVar2 + 1;
      pUVar12 = (UnityEngine_Vector3_array *)(pMVar33->fields).m_CachedPtr;
      if (pUVar12 == (UnityEngine_Vector3_array *)0x0) goto label_04063ab5;
      uVar36 = *(uint *)&(pMVar33->fields).m_CancellationTokenSource;
      if (uVar36 < (uint)pUVar12->max_length) {
        *(uint *)&(pMVar33->fields).m_CancellationTokenSource = uVar36 + 1;
        *(Il2CppObject **)((long)&pUVar12->m_Items[0].fields.x + (long)(int)uVar36 * 8) = pIVar21;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062b59;
        il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)&pUVar12->m_Items[0].fields.x + (long)(int)uVar36 * 8));
      }
      else {
        pMVar13 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062b72;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pMVar33,pIVar21,pMVar13);
      }
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062b7c;
      pMVar33 = __this;
      pMVar23 = (MeleeWeaponTrail_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pMVar23 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062b8f;
      UVar55 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pMVar23,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)&(__this->fields)._trailMesh = UVar55.fields;
      lVar30 = MethodInfo_Void_Add;
      pUVar20 = (__this->fields)._tip;
      pMVar33 = pMVar23;
      if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      iVar35 = *(int *)&pUVar20[1].klass;
      if (iVar35 == 1) {
        pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._points;
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        piVar2 = (int32_t *)((long)&(pMVar33->fields).m_CancellationTokenSource + 4);
        *piVar2 = *piVar2 + 1;
        pUVar12 = (UnityEngine_Vector3_array *)(pMVar33->fields).m_CachedPtr;
        if (pUVar12 == (UnityEngine_Vector3_array *)0x0) goto label_04063ab5;
        uVar36 = *(uint *)&(pMVar33->fields).m_CancellationTokenSource;
        if ((uint)pUVar12->max_length <= uVar36) {
          pMVar13 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062cd8;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pMVar33,pIVar21,pMVar13);
          pMVar27 = extraout_RDX_06;
          goto label_04062cd8;
        }
        *(uint *)&(pMVar33->fields).m_CancellationTokenSource = uVar36 + 1;
        pMVar33 = (MeleeWeaponTrail_o *)((long)&pUVar12->m_Items[0].fields.x + (long)(int)uVar36 * 8);
        *(Il2CppObject **)((long)&pUVar12->m_Items[0].fields.x + (long)(int)uVar36 * 8) = pIVar21;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062c05;
        il2cpp_runtime_helper_022b4080();
        pUVar20 = (__this->fields)._tip;
        pMVar27 = extraout_RDX_03;
      }
      else {
        pMVar27 = extraout_RDX_02;
        if ((1 < iVar35) && (0 < (int)(__this->fields)._maxAngle + 1)) {
          iVar35 = 0;
          pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._points;
          while (MethodInfo_Void_Add = lVar30, pMVar33 != (MeleeWeaponTrail_o *)0x0) {
            piVar2 = (int32_t *)((long)&(pMVar33->fields).m_CancellationTokenSource + 4);
            *piVar2 = *piVar2 + 1;
            pUVar12 = (UnityEngine_Vector3_array *)(pMVar33->fields).m_CachedPtr;
            if (pUVar12 == (UnityEngine_Vector3_array *)0x0) break;
            uVar36 = *(uint *)&(pMVar33->fields).m_CancellationTokenSource;
            if (uVar36 < (uint)pUVar12->max_length) {
              *(uint *)&(pMVar33->fields).m_CancellationTokenSource = uVar36 + 1;
              pMVar33 = (MeleeWeaponTrail_o *)((long)&pUVar12->m_Items[0].fields.x + (long)(int)uVar36 * 8);
              *(Il2CppObject **)((long)&pUVar12->m_Items[0].fields.x + (long)(int)uVar36 * 8) = pIVar21;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062cbf;
              il2cpp_runtime_helper_022b4080();
              pMVar27 = extraout_RDX_05;
            }
            else {
              pMVar13 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062c67;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pMVar33,pIVar21,pMVar13);
              pMVar27 = extraout_RDX_04;
            }
            iVar35 = iVar35 + 1;
            if ((int)(__this->fields)._maxAngle + 1 <= iVar35) goto label_04062cd8;
            lVar30 = MethodInfo_Void_Add;
            pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._points;
          }
          goto label_04063ab5;
        }
label_04062cd8:
        pUVar20 = (__this->fields)._tip;
      }
      if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      if (3 < *(int *)&pUVar20[1].klass) {
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062d04;
        pSVar24 = (System_Collections_IList_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3);
        pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._tip;
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062d2b;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar21 == (Il2CppObject *)0x0) || (pSVar24 == (System_Collections_IList_o *)0x0))
        goto label_04063ab5;
        if (*(int *)&pSVar24[1].monitor == 0) {
label_04063973:
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063978;
          il2cpp_runtime_helper_022b2ca0();
          return;
        }
        uVar11 = *(undefined4 *)&pIVar21[2].monitor;
        pSVar24[2].klass = (System_Collections_IList_c *)pIVar21[2].klass;
        *(undefined4 *)&pSVar24[2].monitor = uVar11;
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062d76;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar24[1].monitor < 2) goto label_04063973;
        uVar11 = *(undefined4 *)&pIVar21[2].monitor;
        *(Il2CppClass **)((long)&pSVar24[2].monitor + 4) = pIVar21[2].klass;
        *(undefined4 *)((long)&pSVar24[3].klass + 4) = uVar11;
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062db8;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar24[1].monitor < 3) goto label_04063973;
        uVar11 = *(undefined4 *)&pIVar21[2].monitor;
        pSVar24[3].monitor = pIVar21[2].klass;
        *(undefined4 *)&pSVar24[4].klass = uVar11;
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062dfa;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar24[1].monitor < 4) goto label_04063973;
        uVar11 = *(undefined4 *)&pIVar21[2].monitor;
        *(Il2CppClass **)((long)&pSVar24[4].klass + 4) = pIVar21[2].klass;
        *(undefined4 *)((long)&pSVar24[4].monitor + 4) = uVar11;
        iVar10 = *(int32_t *)(*(long *)((long)register0x00000020 + -0xf0) + 0x60);
        if (g_data_057ac2a3 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062e39;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062e45;
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062e51;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a3 = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062e68;
        pIVar25 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062e81;
        Interpolate_ToVector3_Vector3____ctor();
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062e9b;
        collection = Interpolate__NewCatmullRom_Vector3_(pSVar24,pIVar25,iVar10,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062eab;
        pSVar24 = (System_Collections_IList_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3);
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062ecf;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar21 == (Il2CppObject *)0x0) || (pSVar24 == (System_Collections_IList_o *)0x0))
        goto label_04063ab5;
        if (*(int *)&pSVar24[1].monitor == 0) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar21[1].monitor + 4);
        pSVar24[2].klass = *(System_Collections_IList_c **)((long)&pIVar21[1].klass + 4);
        *(undefined4 *)&pSVar24[2].monitor = uVar11;
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062f1a;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar24[1].monitor < 2) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar21[1].monitor + 4);
        *(undefined8 *)((long)&pSVar24[2].monitor + 4) = *(undefined8 *)((long)&pIVar21[1].klass + 4);
        *(undefined4 *)((long)&pSVar24[3].klass + 4) = uVar11;
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062f5c;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar24[1].monitor < 3) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar21[1].monitor + 4);
        pSVar24[3].monitor = *(void **)((long)&pIVar21[1].klass + 4);
        *(undefined4 *)&pSVar24[4].klass = uVar11;
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062f9e;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
        if (*(uint *)&pSVar24[1].monitor < 4) goto label_04063973;
        uVar11 = *(undefined4 *)((long)&pIVar21[1].monitor + 4);
        *(undefined8 *)((long)&pSVar24[4].klass + 4) = *(undefined8 *)((long)&pIVar21[1].klass + 4);
        *(undefined4 *)((long)&pSVar24[4].monitor + 4) = uVar11;
        iVar10 = *(int32_t *)(*(long *)((long)register0x00000020 + -0xf0) + 0x60);
        if (g_data_057ac2a3 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062fdd;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062fe9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4062ff5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a3 = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063005;
        pIVar25 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406301e;
        Interpolate_ToVector3_Vector3____ctor();
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063038;
        collection_00 = Interpolate__NewCatmullRom_Vector3_(pSVar24,pIVar25,iVar10,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406304b;
        __this_00 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063064;
        System_Collections_Generic_List_Vector3____ctor_36a2470
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_UnityEngine_Vector3);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406306d;
        pMVar23 = (MeleeWeaponTrail_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406307f;
        System_Collections_Generic_List_Vector3____ctor_36a2470
                  ((System_Collections_Generic_List_Vector3__o *)pMVar23,
                   (System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_List_1_UnityEngine_Vector3);
        pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78);
        if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40630a0;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar21 == (Il2CppObject *)0x0) ||
           (pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x78),
           pMVar33 == (MeleeWeaponTrail_o *)0x0)) goto label_04063ab5;
        *(undefined4 *)((long)register0x00000020 + -0xe8) = *(undefined4 *)&pIVar21[1].klass;
        iVar35 = *(int *)&(pMVar33->fields).m_CancellationTokenSource;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40630d5;
        pIVar21 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar33,iVar35 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar21 == (Il2CppObject *)0x0) ||
           (__this = *(MeleeWeaponTrail_o **)((long)register0x00000020 + -0xf0),
           __this_00 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto label_04063ab5;
        iVar35 = (__this_00->fields)._size;
        pMVar27 = extraout_RDX_07;
        if (pMVar23 == (MeleeWeaponTrail_o *)0x0) {
          if (0 < iVar35) {
            pSVar34 = (__this->fields)._points;
            pMVar27 = (MethodInfo *)(ulong)(uint)-iVar35;
            iVar29 = 0;
            do {
              if (pSVar34 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              goto label_04063ab5;
              uVar36 = (pSVar34->fields)._size;
              pMVar33 = (MeleeWeaponTrail_o *)(ulong)uVar36;
              iVar31 = -iVar35 + iVar29 + uVar36;
              if ((-1 < iVar31) && (iVar31 < (int)uVar36)) {
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406327d;
                pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063287;
                System_Object___ctor(pIVar21,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406328c;
                il2cpp_runtime_helper_022b2c90();
                pMVar27 = extraout_RDX_09;
                break;
              }
              iVar29 = iVar29 + 1;
            } while (iVar29 < iVar35);
          }
        }
        else if (0 < iVar35) {
          *(float *)((long)register0x00000020 + -0xd8) =
               *(float *)&pIVar21[1].klass - *(float *)((long)register0x00000020 + -0xe8);
          iVar29 = 0;
          pSVar34 = (__this->fields)._points;
          while (pSVar34 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            iVar31 = (pSVar34->fields)._size;
            iVar35 = (iVar31 - iVar35) + iVar29;
            if ((-1 < iVar35) && (iVar35 < iVar31)) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063177;
              pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063184;
              System_Object___ctor(pIVar21,(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063192;
              pMVar33 = pMVar23;
              UVar56 = (UnityEngine_Vector3_Fields)
                       System_Collections_Generic_List_Vector3___get_Item
                                 ((System_Collections_Generic_List_Vector3__o *)pMVar23,iVar29,MethodInfo_Vector3_get_Item);
              if (pIVar21 == (Il2CppObject *)0x0) break;
              *(UnityEngine_Vector3_Fields *)((long)&pIVar21[1].klass + 4) = UVar56;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40631b2;
              UVar55 = System_Collections_Generic_List_Vector3___get_Item(__this_00,iVar29,MethodInfo_Vector3_get_Item);
              *(UnityEngine_Vector3_Fields *)(pIVar21 + 2) = UVar55.fields;
              fVar48 = (float)iVar29 / (float)(__this_00->fields)._size;
              fVar39 = 1.0;
              if (fVar48 <= 1.0) {
                fVar39 = fVar48;
              }
              *(float *)&pIVar21[1].klass =
                   (float)(-(uint)(0.0 <= fVar48) & (uint)fVar39) *
                   *(float *)((long)register0x00000020 + -0xd8) + *(float *)((long)register0x00000020 + -0xe8)
              ;
              pMVar33 = *(MeleeWeaponTrail_o **)(*(long *)((long)register0x00000020 + -0xf0) + 0x80);
              if (pMVar33 == (MeleeWeaponTrail_o *)0x0) break;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063222;
              System_Collections_Generic_List_object___set_Item
                        ((System_Collections_Generic_List_object__o *)pMVar33,iVar35,pIVar21,MethodInfo_Void_set_Item);
              pMVar27 = extraout_RDX_08;
            }
            iVar29 = iVar29 + 1;
            iVar35 = (__this_00->fields)._size;
            __this = *(MeleeWeaponTrail_o **)((long)register0x00000020 + -0xf0);
            if (iVar35 <= iVar29) goto label_0406328c;
            pSVar34 = (__this->fields)._points;
          }
          goto label_04063ab5;
        }
      }
    }
  }
label_0406328c:
  pSVar34 = (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)(__this->fields)._tip;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063299;
  pMVar33 = __this;
  MeleeWeaponTrail__RemoveOldPoints(__this,pSVar34,pMVar27);
  pUVar20 = (__this->fields)._tip;
  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
    pMVar27 = extraout_RDX_10;
    if (*(int *)&pUVar20[1].klass == 0) {
      pUVar22 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40632ce;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40632da;
      bVar19 = UnityEngine_Object__op_Inequality(pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar27 = extraout_RDX_11;
      if ((char)bVar19 != '\0') {
        pUVar14 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
        pMVar33 = (MeleeWeaponTrail_o *)0x0;
        if (pUVar14 == (UnityEngine_Mesh_o *)0x0) goto label_04063ab5;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40632f6;
        UnityEngine_Mesh__Clear(pUVar14,(MethodInfo *)0x0);
        pMVar27 = extraout_RDX_12;
      }
    }
    pSVar34 = (__this->fields)._points;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063306;
    pMVar33 = __this;
    MeleeWeaponTrail__RemoveOldPoints(__this,pSVar34,pMVar27);
    pSVar34 = (__this->fields)._points;
    if (pSVar34 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      if ((pSVar34->fields)._size == 0) {
        pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._trailObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063337;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063343;
        bVar19 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pMVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar19 != '\0') {
          pMVar33 = (MeleeWeaponTrail_o *)(__this->fields)._trailObject;
          if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406335f;
          UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)pMVar33,(MethodInfo *)0x0);
        }
      }
      pSVar34 = (__this->fields)._points;
      if (pSVar34 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        iVar35 = (pSVar34->fields)._size;
        if (iVar35 < 2) {
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406338e;
        auVar45._0_8_ = il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar35 * 2);
        *(undefined8 *)((long)register0x00000020 + -0xe0) = auVar45._0_8_;
        iVar35 = (pSVar34->fields)._size;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40633a8;
        value = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar35 * 2);
        iVar35 = (pSVar34->fields)._size;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40633c7;
        value_00 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int,iVar35 * 6 + -6);
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40633df;
        auVar45._0_8_ = il2cpp_runtime_helper_022b2a40(TypeInfo_Color);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = auVar45._0_8_;
        if (0 < (pSVar34->fields)._size) {
          uVar37 = 1;
          uVar36 = 0xfffffffd;
          lVar30 = 0;
          lVar32 = 0;
          *(UnityEngine_Vector2_array **)((long)register0x00000020 + -0x98) = value;
          *(System_Int32_array **)((long)register0x00000020 + -0xa0) = value_00;
          *(System_Collections_Generic_List_MeleeWeaponTrail_Point__o **)((long)register0x00000020 + -0x50) =
               pSVar34;
          do {
            *(long *)((long)register0x00000020 + -0xe8) = lVar30;
            *(long *)((long)register0x00000020 + -0xd8) = lVar32;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406346e;
            pIVar21 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar34,(int32_t)lVar32,
                                 MethodInfo_MeleeWeaponTrail_Point_get_Item);
            pMVar33 = (MeleeWeaponTrail_o *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063478;
            fVar39 = UnityEngine_Time__get_time((MethodInfo *)0x0);
            if (pIVar21 == (Il2CppObject *)0x0) goto label_04063ab5;
            fVar39 = (fVar39 - *(float *)&pIVar21[1].klass) /
                     *(float *)(*(long *)((long)register0x00000020 + -0xf0) + 0x30);
            fVar48 = 1.0;
            if (fVar39 <= 1.0) {
              fVar48 = fVar39;
            }
            fVar48 = (float)(~-(uint)(0.0 <= fVar39) & 0x3f800000 |
                            (uint)(1.0 - fVar48) & -(uint)(0.0 <= fVar39));
            auVar54._4_4_ = fVar48;
            auVar54._0_4_ = fVar48;
            auVar54._8_8_ = 0;
            lVar32 = *(long *)(*(long *)((long)register0x00000020 + -0xf0) + 0x38);
            fVar52 = 0.0;
            fVar50 = fVar48;
            if (lVar32 == 0) {
              lVar30 = *(long *)((long)register0x00000020 + -0xe8);
            }
            else {
              lVar30 = *(long *)((long)register0x00000020 + -0xe8);
              fVar52 = 0.0;
              if (*(long *)(lVar32 + 0x18) != 0) {
                uVar18 = (uint)*(long *)(lVar32 + 0x18);
                *(undefined1 (*) [16])((long)register0x00000020 + -0x68) =
                     ZEXT416((uint)(float)(int)(uVar18 - 1));
                *(float *)((long)register0x00000020 + -200) = fVar39;
                fVar39 = fVar39 * (float)(int)(uVar18 - 1);
                *(float *)((long)register0x00000020 + -0x88) = fVar39;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406350b;
                fVar39 = floorf(fVar39);
                *(float *)((long)register0x00000020 + -0x78) = fVar39;
                *(undefined4 *)((long)register0x00000020 + -0x74) = extraout_XMM0_Db;
                *(undefined4 *)((long)register0x00000020 + -0x70) = extraout_XMM0_Dc;
                *(undefined4 *)((long)register0x00000020 + -0x6c) = extraout_XMM0_Dd;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406351e;
                fVar52 = ceilf(*(float *)((long)register0x00000020 + -0x88));
                fVar39 = *(float *)((long)register0x00000020 + -0x78);
                fVar48 = *(float *)((long)register0x00000020 + -0x68);
                fVar50 = fVar48;
                if (fVar52 <= fVar48) {
                  fVar50 = fVar52;
                }
                fVar50 = (float)(~-(uint)(1.0 <= fVar52) & 0x3f800000 | (uint)fVar50 & -(uint)(1.0 <= fVar52))
                ;
                if ((fVar39 != fVar50) || (NAN(fVar39) || NAN(fVar50))) {
                  fVar40 = (*(float *)((long)register0x00000020 + -0x88) - fVar39) / (fVar50 - fVar39);
                  fVar52 = 0.0;
                  if ((0.0 <= fVar40) && (fVar52 = 1.0, fVar40 <= 1.0)) {
                    fVar52 = fVar40;
                  }
                }
                else {
                  fVar52 = 0.0;
                }
                uVar38 = -(uint)(fVar39 < (float)(int)uVar18);
                fVar40 = (float)(~uVar38 & (uint)fVar48 | uVar38 & (uint)fVar39);
                fVar39 = 0.0;
                if (0.0 <= fVar40) {
                  fVar39 = fVar40;
                }
                lVar30 = *(long *)((long)register0x00000020 + -0xe8);
                if (uVar18 <= (uint)(int)fVar39) goto label_04063973;
                uVar38 = -(uint)(fVar50 < (float)(int)uVar18);
                fVar50 = (float)(~uVar38 & (uint)fVar48 | uVar38 & (uint)fVar50);
                fVar48 = 0.0;
                if (0.0 <= fVar50) {
                  fVar48 = fVar50;
                }
                if (uVar18 <= (uint)(int)fVar48) goto label_04063973;
                lVar26 = (long)(int)fVar39 * 0x10;
                auVar45._0_8_ = *(undefined8 *)(lVar32 + 0x20 + lVar26);
                uVar6 = *(undefined8 *)(lVar32 + 0x28 + lVar26);
                lVar26 = (long)(int)fVar48 * 0x10;
                uVar7 = *(undefined8 *)(lVar32 + 0x20 + lVar26);
                uVar8 = *(undefined8 *)(lVar32 + 0x28 + lVar26);
                auVar47 = ZEXT812(0);
                if (0.0 <= fVar52) {
                  auVar47._4_8_ = 0;
                  auVar47._0_4_ = fVar52;
                }
                fVar39 = (float)auVar45._0_8_;
                fVar48 = (float)((ulong)auVar45._0_8_ >> 0x20);
                fVar40 = auVar47._0_4_;
                auVar54._0_4_ = ((float)uVar7 - fVar39) * fVar40 + fVar39;
                auVar54._4_4_ = ((float)((ulong)uVar7 >> 0x20) - fVar48) * fVar40 + fVar48;
                auVar54._8_4_ = auVar47._8_4_ * 0.0 + 0.0;
                auVar54._12_4_ = 0;
                fVar48 = (float)uVar6;
                fVar50 = (float)((ulong)uVar6 >> 0x20);
                fVar48 = ((float)uVar8 - fVar48) * fVar40 + fVar48;
                fVar52 = auVar47._8_4_ * 0.0 + 0.0;
                fVar39 = *(float *)((long)register0x00000020 + -200);
                fVar50 = ((float)((ulong)uVar8 >> 0x20) - fVar50) * fVar40 + fVar50;
              }
            }
            pIVar53 = auVar54._0_8_;
            lVar32 = *(long *)(*(long *)((long)register0x00000020 + -0xf0) + 0x40);
            fVar40 = 0.0;
            if ((lVar32 != 0) && (lVar26 = *(long *)(lVar32 + 0x18), lVar26 != 0)) {
              auVar17._4_4_ = fVar50;
              auVar17._0_4_ = fVar48;
              auVar17._8_4_ = fVar52;
              auVar17._12_4_ = 0;
              *(undefined1 (*) [16])((long)register0x00000020 + -0x68) = auVar17;
              *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = auVar54;
              uVar18 = (uint)lVar26;
              *(undefined1 (*) [16])((long)register0x00000020 + -0x78) =
                   ZEXT416((uint)(float)(int)(uVar18 - 1));
              fVar39 = fVar39 * (float)(int)(uVar18 - 1);
              *(float *)((long)register0x00000020 + -200) = fVar39;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063689;
              fVar39 = floorf(fVar39);
              *(float *)((long)register0x00000020 + -0x48) = fVar39;
              *(undefined4 *)((long)register0x00000020 + -0x44) = extraout_XMM0_Db_00;
              *(undefined4 *)((long)register0x00000020 + -0x40) = extraout_XMM0_Dc_00;
              *(undefined4 *)((long)register0x00000020 + -0x3c) = extraout_XMM0_Dd_00;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x406369c;
              fVar50 = ceilf(*(float *)((long)register0x00000020 + -200));
              fVar39 = *(float *)((long)register0x00000020 + -0x48);
              fVar52 = *(float *)((long)register0x00000020 + -0x78);
              fVar48 = fVar52;
              if (fVar50 <= fVar52) {
                fVar48 = fVar50;
              }
              fVar40 = (float)(~-(uint)(1.0 <= fVar50) & 0x3f800000 | (uint)fVar48 & -(uint)(1.0 <= fVar50));
              if ((fVar39 != fVar40) || (NAN(fVar39) || NAN(fVar40))) {
                fVar48 = (*(float *)((long)register0x00000020 + -200) - fVar39) / (fVar40 - fVar39);
                fVar44 = 0.0;
                if ((0.0 <= fVar48) && (fVar44 = 1.0, fVar48 <= 1.0)) {
                  fVar44 = fVar48;
                }
              }
              else {
                fVar44 = 0.0;
              }
              uVar38 = -(uint)(fVar39 < (float)(int)uVar18);
              fVar48 = (float)(~uVar38 & (uint)fVar52 | uVar38 & (uint)fVar39);
              fVar39 = 0.0;
              if (0.0 <= fVar48) {
                fVar39 = fVar48;
              }
              lVar30 = *(long *)((long)register0x00000020 + -0xe8);
              pIVar53 = *(Il2CppObject **)((long)register0x00000020 + -0x88);
              fVar48 = *(float *)((long)register0x00000020 + -0x68);
              fVar50 = *(float *)((long)register0x00000020 + -100);
              if (uVar18 <= (uint)(int)fVar39) goto label_04063973;
              uVar38 = -(uint)(fVar40 < (float)(int)uVar18);
              fVar40 = (float)(~uVar38 & (uint)fVar52 | uVar38 & (uint)fVar40);
              fVar52 = 0.0;
              if (0.0 <= fVar40) {
                fVar52 = fVar40;
              }
              if (uVar18 <= (uint)(int)fVar52) goto label_04063973;
              fVar40 = *(float *)(lVar32 + 0x20 + (long)(int)fVar39 * 4);
              fVar39 = 0.0;
              if (0.0 <= fVar44) {
                fVar39 = fVar44;
              }
              fVar40 = (*(float *)(lVar32 + 0x20 + (long)(int)fVar52 * 4) - fVar40) * fVar39 + fVar40;
            }
            lVar32 = *(long *)((long)register0x00000020 + -0xe0);
            pMVar33 = (MeleeWeaponTrail_o *)0x0;
            if (lVar32 == 0) goto label_04063ab5;
            uVar3 = uVar37 - 1;
            if (*(uint *)(lVar32 + 0x18) <= uVar3) goto label_04063973;
            auVar45._0_8_ = *(undefined8 *)((long)&pIVar21[1].klass + 4);
            fVar49 = (float)auVar45._0_8_;
            fVar51 = (float)((ulong)auVar45._0_8_ >> 0x20);
            fVar39 = *(float *)((long)&pIVar21[1].monitor + 4);
            fVar40 = fVar40 * 0.5;
            fVar52 = fVar40 * (SUB84(pIVar21[2].klass,0) - fVar49);
            fVar44 = fVar40 * ((float)((ulong)pIVar21[2].klass >> 0x20) - fVar51);
            fVar40 = fVar40 * (*(float *)&pIVar21[2].monitor - fVar39);
            lVar26 = lVar30 >> 0x20;
            *(ulong *)(lVar32 + 0x20 + lVar26 * 0xc) = CONCAT44(fVar51 - fVar44,fVar49 - fVar52);
            *(float *)(lVar32 + 0x28 + lVar26 * 0xc) = fVar39 - fVar40;
            if (*(uint *)(lVar32 + 0x18) <= uVar37) goto label_04063973;
            lVar28 = lVar30 + 0x100000000 >> 0x20;
            fVar39 = *(float *)&pIVar21[2].monitor;
            *(ulong *)(lVar32 + 0x20 + lVar28 * 0xc) =
                 CONCAT44(fVar44 + (float)((ulong)pIVar21[2].klass >> 0x20),fVar52 + SUB84(pIVar21[2].klass,0)
                         );
            *(float *)(lVar32 + 0x28 + lVar28 * 0xc) = fVar40 + fVar39;
            pMVar33 = *(MeleeWeaponTrail_o **)((long)register0x00000020 + -0xb8);
            if (pMVar33 == (MeleeWeaponTrail_o *)0x0) goto label_04063ab5;
            value = *(UnityEngine_Vector2_array **)((long)register0x00000020 + -0x98);
            value_00 = *(System_Int32_array **)((long)register0x00000020 + -0xa0);
            pSVar34 = *(System_Collections_Generic_List_MeleeWeaponTrail_Point__o **)
                       ((long)register0x00000020 + -0x50);
            if (*(uint *)&(pMVar33->fields).m_CancellationTokenSource <= uVar37) goto label_04063973;
            ppIVar5 = (Il2CppObject **)((long)&(pMVar33->fields)._emit + lVar28 * 2 * 8);
            *ppIVar5 = pIVar53;
            ppIVar5[1] = (Il2CppObject *)CONCAT44(fVar50,fVar48);
            if (*(uint *)&(pMVar33->fields).m_CancellationTokenSource <= uVar3) goto label_04063973;
            ppIVar5 = (Il2CppObject **)((long)&(pMVar33->fields)._emit + lVar26 * 2 * 8);
            *ppIVar5 = pIVar53;
            ppIVar5[1] = (Il2CppObject *)CONCAT44(fVar50,fVar48);
            if (value == (UnityEngine_Vector2_array *)0x0) goto label_04063ab5;
            if ((uint)value->max_length <= uVar3) goto label_04063973;
            lVar32 = *(long *)((long)register0x00000020 + -0xd8);
            fVar39 = (float)(int)lVar32 / (float)(pSVar34->fields)._size;
            UVar42.fields.y = 0.0;
            UVar42.fields.x = fVar39;
            value->m_Items[lVar26].fields = UVar42.fields;
            if ((uint)value->max_length <= uVar37) goto label_04063973;
            UVar16.fields.y = 1.0;
            UVar16.fields.x = fVar39;
            value->m_Items[lVar28].fields = UVar16.fields;
            if (uVar37 != 1) {
              if (value_00 == (System_Int32_array *)0x0) goto label_04063ab5;
              uVar18 = (uint)value_00->max_length;
              if (uVar18 <= uVar36 - 3) goto label_04063973;
              iVar35 = (int)uVar37;
              value_00->m_Items[(int)(uVar36 - 3)] = iVar35 + -3;
              if (uVar18 <= uVar36 - 2) goto label_04063973;
              value_00->m_Items[(int)(uVar36 - 2)] = iVar35 + -2;
              if (uVar18 <= uVar36 - 1) goto label_04063973;
              value_00->m_Items[(int)(uVar36 - 1)] = (int32_t)uVar3;
              if (uVar18 <= uVar36) goto label_04063973;
              value_00->m_Items[(int)uVar36] = iVar35;
              if (uVar18 <= uVar36 + 1) goto label_04063973;
              value_00->m_Items[(int)(uVar36 + 1)] = (int32_t)uVar3;
              if (uVar18 <= uVar36 + 2) goto label_04063973;
              value_00->m_Items[(int)(uVar36 + 2)] = iVar35 + -2;
              lVar32 = *(long *)((long)register0x00000020 + -0xd8);
            }
            lVar32 = lVar32 + 1;
            uVar37 = uVar37 + 2;
            lVar30 = lVar30 + 0x200000000;
            uVar36 = uVar36 + 6;
          } while (lVar32 < (pSVar34->fields)._size);
        }
        lVar30 = *(long *)((long)register0x00000020 + -0xf0);
        pUVar14 = *(UnityEngine_Mesh_o **)(lVar30 + 0x90);
        pMVar33 = (MeleeWeaponTrail_o *)0x0;
        if (pUVar14 != (UnityEngine_Mesh_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40639a6;
          UnityEngine_Mesh__Clear(pUVar14,(MethodInfo *)0x0);
          pUVar14 = *(UnityEngine_Mesh_o **)(lVar30 + 0x90);
          pMVar33 = (MeleeWeaponTrail_o *)0x0;
          if (pUVar14 != (UnityEngine_Mesh_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40639c2;
            UnityEngine_Mesh__set_vertices
                      (pUVar14,*(UnityEngine_Vector3_array **)((long)register0x00000020 + -0xe0),
                       (MethodInfo *)0x0);
            pUVar14 = *(UnityEngine_Mesh_o **)(lVar30 + 0x90);
            pMVar33 = (MeleeWeaponTrail_o *)0x0;
            if (pUVar14 != (UnityEngine_Mesh_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40639de;
              UnityEngine_Mesh__set_colors
                        (pUVar14,*(UnityEngine_Color_array **)((long)register0x00000020 + -0xb8),
                         (MethodInfo *)0x0);
              pUVar14 = *(UnityEngine_Mesh_o **)(lVar30 + 0x90);
              pMVar33 = (MeleeWeaponTrail_o *)0x0;
              if (pUVar14 != (UnityEngine_Mesh_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x40639f8;
                UnityEngine_Mesh__set_uv(pUVar14,value,(MethodInfo *)0x0);
                pMVar33 = (MeleeWeaponTrail_o *)0x0;
                if (*(UnityEngine_Mesh_o **)(lVar30 + 0x90) != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__set_triangles
                            (*(UnityEngine_Mesh_o **)(lVar30 + 0x90),value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04063ab5:
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x4063aba;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pMVar33,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$Update
// il2cpp: void MeleeWeaponTrail__Update (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x40623a0

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
  System_Collections_Generic_List_object__o *pSVar13;
  UnityEngine_Vector2_o UVar14;
  uint uVar15;
  bool_conflict bVar16;
  UnityEngine_Transform_o *pUVar17;
  Il2CppObject *pIVar18;
  UnityEngine_Object_o *pUVar19;
  UnityEngine_Color_array *pUVar20;
  System_Collections_IList_o *pSVar21;
  Interpolate_ToVector3_T__o *pIVar22;
  System_Collections_Generic_IEnumerable_Vector3__o *collection;
  System_Collections_Generic_IEnumerable_Vector3__o *collection_00;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_Vector3_array *pUVar23;
  UnityEngine_Vector2_array *value;
  System_Int32_array *value_00;
  long lVar24;
  long lVar25;
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
  MethodInfo *pMVar26;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  int iVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  UnityEngine_Color_array *pUVar31;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar32;
  int iVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  UnityEngine_Vector2_o UVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_Fields UVar49;
  float fStack_d8;
  float fStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_98;
  float fStack_94;
  
  if (g_data_057ac2ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_Point_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Point);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac2ac = '\x01';
  }
  pUVar31 = *(UnityEngine_Color_array **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar16 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 != '\0') {
    return;
  }
  if (*(char *)((long)&(__this->fields)._emit + 1) == '\0') {
    return;
  }
  if ((char)(__this->fields)._emit == '\0') {
label_04062557:
    pUVar17 = (__this->fields)._tip;
joined_r0x04062548:
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
    if ((*(int *)&pUVar17[1].klass == 0) && (*(char *)&(__this->fields)._maxVertexDistanceSqr != '\0')) {
      pSVar32 = (__this->fields)._smoothedPoints;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        pSVar32 = (__this->fields)._smoothedPoints;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar32,(MethodInfo *)0x0);
      }
      pUVar19 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar16 = UnityEngine_Object__op_Inequality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        pUVar19 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60(pUVar19,(MethodInfo *)0x0);
      }
    }
  }
  else {
    fVar42 = (float)(__this->fields)._use;
    if ((fVar42 != 0.0) || (NAN(fVar42))) {
      pUVar31 = (UnityEngine_Color_array *)0x0;
      fVar37 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar42 = fVar42 - fVar37;
      (__this->fields)._use = (bool_conflict)fVar42;
      if ((fVar42 != 0.0) || (NAN(fVar42))) {
        if (0.0 <= fVar42) {
          if ((char)(__this->fields)._emit == '\0') goto label_04062557;
          goto label_0406256f;
        }
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar17 = (__this->fields)._tip;
      }
      else {
        (__this->fields)._use = -0x40800000;
        *(undefined1 *)&(__this->fields)._emit = 0;
        pUVar17 = (__this->fields)._tip;
      }
      goto joined_r0x04062548;
    }
  }
label_0406256f:
  pUVar5 = (__this->fields)._trailMesh;
  fVar42 = (__this->fields)._lastPosition.fields.x;
  pUVar31 = (UnityEngine_Color_array *)__this;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
  UVar48 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
  pMVar26 = extraout_RDX;
  if ((char)(__this->fields)._emit != '\0') {
    pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
    if (pUVar31 == (UnityEngine_Color_array *)0x0) goto label_04063ab5;
    fStack_d8 = SUB84(pUVar5,0);
    fStack_d4 = (float)((ulong)pUVar5 >> 0x20);
    fStack_d8 = fStack_d8 - UVar48.fields.x;
    fStack_d4 = fStack_d4 - UVar48.fields.y;
    fVar42 = fVar42 - UVar48.fields.z;
    fVar42 = fVar42 * fVar42 + fStack_d4 * fStack_d4 + fStack_d8 * fStack_d8;
    pfVar3 = &(__this->fields)._minVertexDistance;
    iVar33 = (int)pUVar31->max_length;
    if (fVar42 < *pfVar3 || fVar42 == *pfVar3) {
      if (0 < iVar33) {
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pUVar31,iVar33 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar31 = *(UnityEngine_Color_array **)&(__this->fields).subdivisions;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (UVar49 = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar31,(MethodInfo *)0x0)
           , pIVar18 == (Il2CppObject *)0x0)) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar18[1].klass + 4) = UVar49;
        pSVar13 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
        pUVar31 = (UnityEngine_Color_array *)0x0;
        if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            (pSVar13,(pSVar13->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._base;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (UVar48 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar31,(MethodInfo *)0x0)
           , pIVar18 == (Il2CppObject *)0x0)) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)(pIVar18 + 2) = UVar48.fields;
        pMVar26 = extraout_RDX_00;
      }
      pSVar32 = (__this->fields)._points;
      pUVar31 = (UnityEngine_Color_array *)0x0;
      if (pSVar32 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
      iVar33 = (pSVar32->fields)._size;
      if (0 < iVar33) {
label_040628ac:
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar32,iVar33 + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar31 = *(UnityEngine_Color_array **)&(__this->fields).subdivisions;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (UVar49 = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar31,(MethodInfo *)0x0)
           , pIVar18 == (Il2CppObject *)0x0)) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)((long)&pIVar18[1].klass + 4) = UVar49;
        pSVar32 = (__this->fields)._points;
        pUVar31 = (UnityEngine_Color_array *)0x0;
        if (pSVar32 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar32,(pSVar32->fields)._size + -1
                             ,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._base;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (UVar48 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar31,(MethodInfo *)0x0)
           , pIVar18 == (Il2CppObject *)0x0)) goto label_04063ab5;
        *(UnityEngine_Vector3_Fields *)(pIVar18 + 2) = UVar48.fields;
        pMVar26 = extraout_RDX_01;
      }
    }
    else {
      if (2 < iVar33) {
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pUVar31,iVar33 + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar18 == (Il2CppObject *)0x0) ||
           (pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip,
           pUVar31 == (UnityEngine_Color_array *)0x0)) goto label_04063ab5;
        pIVar6 = pIVar18[2].klass;
        fVar37 = *(float *)&pIVar18[2].monitor;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pUVar31,
                             (int)pUVar31->max_length + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar18 == (Il2CppObject *)0x0) ||
           (pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip,
           pUVar31 == (UnityEngine_Color_array *)0x0)) goto label_04063ab5;
        fVar37 = fVar37 - *(float *)&pIVar18[2].monitor;
        pIVar7 = pIVar18[2].klass;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pUVar31,
                             (int)pUVar31->max_length + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar18 == (Il2CppObject *)0x0) ||
           (pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip,
           pUVar31 == (UnityEngine_Color_array *)0x0)) goto label_04063ab5;
        pIVar8 = pIVar18[2].klass;
        fVar45 = *(float *)&pIVar18[2].monitor;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pUVar31,
                             (int)pUVar31->max_length + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if (pIVar18 == (Il2CppObject *)0x0) goto label_04063ab5;
        fStack_c8 = SUB84(pIVar6,0);
        fStack_c4 = (float)((ulong)pIVar6 >> 0x20);
        fStack_98 = SUB84(pIVar7,0);
        fStack_94 = (float)((ulong)pIVar7 >> 0x20);
        fStack_c8 = fStack_c8 - fStack_98;
        fStack_c4 = fStack_c4 - fStack_94;
        fStack_b8 = SUB84(pIVar8,0);
        fStack_b4 = (float)((ulong)pIVar8 >> 0x20);
        fStack_b8 = fStack_b8 - SUB84(pIVar18[2].klass,0);
        fStack_b4 = fStack_b4 - (float)((ulong)pIVar18[2].klass >> 0x20);
        fVar45 = fVar45 - *(float *)&pIVar18[2].monitor;
        if (g_data_057ac31a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057ac31a = '\x01';
        }
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar38 = (fVar37 * fVar37 + fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8) *
                 (fVar45 * fVar45 + fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8);
        if (fVar38 < 0.0) {
          fVar38 = sqrtf(fVar38);
          pMVar26 = TypeInfo_Math;
        }
        else {
          fVar38 = SQRT(fVar38);
          pMVar26 = TypeInfo_Math;
        }
        fVar39 = 0.0;
        TypeInfo_Math = pMVar26;
        if (1e-15 <= fVar38) {
          fVar38 = (fVar37 * fVar45 + fStack_c4 * fStack_b4 + fStack_c8 * fStack_b8) / fVar38;
          fVar37 = 1.0;
          if (fVar38 <= 1.0) {
            fVar37 = fVar38;
          }
          if (*(int *)((long)&pMVar26[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          dVar40 = acos((double)(float)(~-(uint)(-1.0 <= fVar38) & 0xbf800000 |
                                       (uint)fVar37 & -(uint)(-1.0 <= fVar38)),pMVar26);
          fVar39 = (float)dVar40 * 57.29578;
        }
        pfVar3 = &(__this->fields)._minVertexDistanceSqr;
        if ((fVar39 < *pfVar3 || fVar39 == *pfVar3) &&
           (pfVar3 = &(__this->fields)._maxVertexDistance, fVar42 < *pfVar3 || fVar42 == *pfVar3)) {
          pSVar13 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          pUVar31 = (UnityEngine_Color_array *)0x0;
          if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
          pIVar18 = System_Collections_Generic_List_object___get_Item
                              (pSVar13,(pSVar13->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pUVar31 = *(UnityEngine_Color_array **)&(__this->fields).subdivisions;
          if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
             (UVar49 = (UnityEngine_Vector3_Fields)
                       UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pUVar31,(MethodInfo *)0x0),
             pIVar18 == (Il2CppObject *)0x0)) goto label_04063ab5;
          *(UnityEngine_Vector3_Fields *)((long)&pIVar18[1].klass + 4) = UVar49;
          pSVar13 = (System_Collections_Generic_List_object__o *)(__this->fields)._tip;
          pUVar31 = (UnityEngine_Color_array *)0x0;
          if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_04063ab5;
          pIVar18 = System_Collections_Generic_List_object___get_Item
                              (pSVar13,(pSVar13->fields)._size + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
          pUVar31 = (UnityEngine_Color_array *)(__this->fields)._base;
          if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
             (UVar48 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pUVar31,(MethodInfo *)0x0),
             pIVar18 == (Il2CppObject *)0x0)) goto label_04063ab5;
          *(UnityEngine_Vector3_Fields *)(pIVar18 + 2) = UVar48.fields;
          pSVar32 = (__this->fields)._points;
          pUVar31 = (UnityEngine_Color_array *)0x0;
          if (pSVar32 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_04063ab5;
          iVar33 = (pSVar32->fields)._size;
          goto label_040628ac;
        }
      }
      pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
      System_Object___ctor(pIVar18,(MethodInfo *)0x0);
      pUVar31 = *(UnityEngine_Color_array **)&(__this->fields).subdivisions;
      if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
         (UVar49 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar31,(MethodInfo *)0x0),
         pIVar18 == (Il2CppObject *)0x0)) goto label_04063ab5;
      *(UnityEngine_Vector3_Fields *)((long)&pIVar18[1].klass + 4) = UVar49;
      pUVar17 = (__this->fields)._base;
      pUVar31 = (UnityEngine_Color_array *)0x0;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      UVar48 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)(pIVar18 + 2) = UVar48.fields;
      fVar42 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      *(float *)&pIVar18[1].klass = fVar42;
      lVar28 = MethodInfo_Void_Add;
      pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
      if (pUVar31 == (UnityEngine_Color_array *)0x0) goto label_04063ab5;
      piVar1 = (int32_t *)((long)&pUVar31->max_length + 4);
      *piVar1 = *piVar1 + 1;
      pUVar23 = ((System_Collections_Generic_List_Vector3__Fields *)&pUVar31->bounds)->_items;
      if (pUVar23 == (UnityEngine_Vector3_array *)0x0) goto label_04063ab5;
      uVar34 = (uint)pUVar31->max_length;
      if (uVar34 < (uint)pUVar23->max_length) {
        *(uint *)&pUVar31->max_length = uVar34 + 1;
        *(Il2CppObject **)((long)&pUVar23->m_Items[0].fields.x + (long)(int)uVar34 * 8) = pIVar18;
        il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)&pUVar23->m_Items[0].fields.x + (long)(int)uVar34 * 8));
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pUVar31,pIVar18,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
      }
      pUVar31 = (UnityEngine_Color_array *)__this;
      pUVar20 = (UnityEngine_Color_array *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar20 == (UnityEngine_Color_array *)0x0) goto label_04063ab5;
      UVar48 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar20,(MethodInfo *)0x0);
      *(UnityEngine_Vector3_Fields *)&(__this->fields)._trailMesh = UVar48.fields;
      lVar28 = MethodInfo_Void_Add;
      pUVar17 = (__this->fields)._tip;
      pUVar31 = pUVar20;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      iVar33 = *(int *)&pUVar17[1].klass;
      if (iVar33 == 1) {
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._points;
        if (pUVar31 == (UnityEngine_Color_array *)0x0) goto label_04063ab5;
        piVar1 = (int32_t *)((long)&pUVar31->max_length + 4);
        *piVar1 = *piVar1 + 1;
        pUVar23 = ((System_Collections_Generic_List_Vector3__Fields *)&pUVar31->bounds)->_items;
        if (pUVar23 == (UnityEngine_Vector3_array *)0x0) goto label_04063ab5;
        uVar34 = (uint)pUVar31->max_length;
        if ((uint)pUVar23->max_length <= uVar34) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pUVar31,pIVar18,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
          pMVar26 = extraout_RDX_06;
          goto label_04062cd8;
        }
        *(uint *)&pUVar31->max_length = uVar34 + 1;
        pUVar31 = (UnityEngine_Color_array *)((long)&pUVar23->m_Items[0].fields.x + (long)(int)uVar34 * 8);
        *(Il2CppObject **)((long)&pUVar23->m_Items[0].fields.x + (long)(int)uVar34 * 8) = pIVar18;
        il2cpp_runtime_helper_022b4080();
        pUVar17 = (__this->fields)._tip;
        pMVar26 = extraout_RDX_03;
      }
      else {
        pMVar26 = extraout_RDX_02;
        if ((1 < iVar33) && (0 < (int)(__this->fields)._maxAngle + 1)) {
          iVar33 = 0;
          pUVar31 = (UnityEngine_Color_array *)(__this->fields)._points;
          while (MethodInfo_Void_Add = lVar28, pUVar31 != (UnityEngine_Color_array *)0x0) {
            piVar1 = (int32_t *)((long)&pUVar31->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pUVar23 = ((System_Collections_Generic_List_Vector3__Fields *)&pUVar31->bounds)->_items;
            if (pUVar23 == (UnityEngine_Vector3_array *)0x0) break;
            uVar34 = (uint)pUVar31->max_length;
            if (uVar34 < (uint)pUVar23->max_length) {
              *(uint *)&pUVar31->max_length = uVar34 + 1;
              pUVar31 = (UnityEngine_Color_array *)
                        ((long)&pUVar23->m_Items[0].fields.x + (long)(int)uVar34 * 8);
              *(Il2CppObject **)((long)&pUVar23->m_Items[0].fields.x + (long)(int)uVar34 * 8) = pIVar18;
              il2cpp_runtime_helper_022b4080();
              pMVar26 = extraout_RDX_05;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pUVar31,pIVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
              pMVar26 = extraout_RDX_04;
            }
            iVar33 = iVar33 + 1;
            if ((int)(__this->fields)._maxAngle + 1 <= iVar33) goto label_04062cd8;
            lVar28 = MethodInfo_Void_Add;
            pUVar31 = (UnityEngine_Color_array *)(__this->fields)._points;
          }
          goto label_04063ab5;
        }
label_04062cd8:
        pUVar17 = (__this->fields)._tip;
      }
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_04063ab5;
      if (3 < *(int *)&pUVar17[1].klass) {
        pSVar21 = (System_Collections_IList_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3);
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if (((pUVar31 == (UnityEngine_Color_array *)0x0) ||
            (pIVar18 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pUVar31,
                                  (int)pUVar31->max_length + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0)
            ) || (pSVar21 == (System_Collections_IList_o *)0x0)) goto label_04063ab5;
        if (*(int *)&pSVar21[1].monitor == 0) {
label_04063973:
          il2cpp_runtime_helper_022b2ca0();
          return;
        }
        uVar12 = *(undefined4 *)&pIVar18[2].monitor;
        pSVar21[2].klass = (System_Collections_IList_c *)pIVar18[2].klass;
        *(undefined4 *)&pSVar21[2].monitor = uVar12;
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pUVar31,
                                 (int)pUVar31->max_length + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0))
        goto label_04063ab5;
        if (*(uint *)&pSVar21[1].monitor < 2) goto label_04063973;
        uVar12 = *(undefined4 *)&pIVar18[2].monitor;
        *(Il2CppClass **)((long)&pSVar21[2].monitor + 4) = pIVar18[2].klass;
        *(undefined4 *)((long)&pSVar21[3].klass + 4) = uVar12;
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pUVar31,
                                 (int)pUVar31->max_length + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0))
        goto label_04063ab5;
        if (*(uint *)&pSVar21[1].monitor < 3) goto label_04063973;
        uVar12 = *(undefined4 *)&pIVar18[2].monitor;
        pSVar21[3].monitor = pIVar18[2].klass;
        *(undefined4 *)&pSVar21[4].klass = uVar12;
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pUVar31,
                                 (int)pUVar31->max_length + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0))
        goto label_04063ab5;
        if (*(uint *)&pSVar21[1].monitor < 4) goto label_04063973;
        uVar12 = *(undefined4 *)&pIVar18[2].monitor;
        *(Il2CppClass **)((long)&pSVar21[4].klass + 4) = pIVar18[2].klass;
        *(undefined4 *)((long)&pSVar21[4].monitor + 4) = uVar12;
        fVar42 = (__this->fields)._maxAngle;
        if (g_data_057ac2a3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a3 = '\x01';
        }
        pIVar22 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        collection = Interpolate__NewCatmullRom_Vector3_(pSVar21,pIVar22,(int32_t)fVar42,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
        pSVar21 = (System_Collections_IList_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3);
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if (((pUVar31 == (UnityEngine_Color_array *)0x0) ||
            (pIVar18 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pUVar31,
                                  (int)pUVar31->max_length + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0)
            ) || (pSVar21 == (System_Collections_IList_o *)0x0)) goto label_04063ab5;
        if (*(int *)&pSVar21[1].monitor == 0) goto label_04063973;
        uVar12 = *(undefined4 *)((long)&pIVar18[1].monitor + 4);
        pSVar21[2].klass = *(System_Collections_IList_c **)((long)&pIVar18[1].klass + 4);
        *(undefined4 *)&pSVar21[2].monitor = uVar12;
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pUVar31,
                                 (int)pUVar31->max_length + -3,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0))
        goto label_04063ab5;
        if (*(uint *)&pSVar21[1].monitor < 2) goto label_04063973;
        uVar12 = *(undefined4 *)((long)&pIVar18[1].monitor + 4);
        *(undefined8 *)((long)&pSVar21[2].monitor + 4) = *(undefined8 *)((long)&pIVar18[1].klass + 4);
        *(undefined4 *)((long)&pSVar21[3].klass + 4) = uVar12;
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pUVar31,
                                 (int)pUVar31->max_length + -2,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0))
        goto label_04063ab5;
        if (*(uint *)&pSVar21[1].monitor < 3) goto label_04063973;
        uVar12 = *(undefined4 *)((long)&pIVar18[1].monitor + 4);
        pSVar21[3].monitor = *(void **)((long)&pIVar18[1].klass + 4);
        *(undefined4 *)&pSVar21[4].klass = uVar12;
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if ((pUVar31 == (UnityEngine_Color_array *)0x0) ||
           (pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pUVar31,
                                 (int)pUVar31->max_length + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0))
        goto label_04063ab5;
        if (*(uint *)&pSVar21[1].monitor < 4) goto label_04063973;
        uVar12 = *(undefined4 *)((long)&pIVar18[1].monitor + 4);
        *(undefined8 *)((long)&pSVar21[4].klass + 4) = *(undefined8 *)((long)&pIVar18[1].klass + 4);
        *(undefined4 *)((long)&pSVar21[4].monitor + 4) = uVar12;
        fVar42 = (__this->fields)._maxAngle;
        if (g_data_057ac2a3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_Identity);
          il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ToVector3_Vector3);
          g_data_057ac2a3 = '\x01';
        }
        pIVar22 = (Interpolate_ToVector3_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToVector3_Vector3);
        Interpolate_ToVector3_Vector3____ctor();
        collection_00 = Interpolate__NewCatmullRom_Vector3_(pSVar21,pIVar22,(int32_t)fVar42,0,MethodInfo_IEnumerable_1_UnityEngine_Vector3_NewCatmullRom_Vector3);
        __this_00 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
        System_Collections_Generic_List_Vector3____ctor_36a2470
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_UnityEngine_Vector3);
        pUVar20 = (UnityEngine_Color_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
        System_Collections_Generic_List_Vector3____ctor_36a2470
                  ((System_Collections_Generic_List_Vector3__o *)pUVar20,
                   (System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_List_1_UnityEngine_Vector3);
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip;
        if (((pUVar31 == (UnityEngine_Color_array *)0x0) ||
            (pIVar18 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pUVar31,
                                  (int)pUVar31->max_length + -4,MethodInfo_MeleeWeaponTrail_Point_get_Item), pIVar18 == (Il2CppObject *)0x0)
            ) || (pUVar31 = (UnityEngine_Color_array *)(__this->fields)._tip,
                 pUVar31 == (UnityEngine_Color_array *)0x0)) goto label_04063ab5;
        fVar42 = *(float *)&pIVar18[1].klass;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pUVar31,
                             (int)pUVar31->max_length + -1,MethodInfo_MeleeWeaponTrail_Point_get_Item);
        if ((pIVar18 == (Il2CppObject *)0x0) ||
           (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto label_04063ab5;
        iVar33 = (__this_00->fields)._size;
        pMVar26 = extraout_RDX_07;
        if (pUVar20 == (UnityEngine_Color_array *)0x0) {
          if (0 < iVar33) {
            pSVar32 = (__this->fields)._points;
            pMVar26 = (MethodInfo *)(ulong)(uint)-iVar33;
            iVar27 = 0;
            do {
              if (pSVar32 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              goto label_04063ab5;
              uVar34 = (pSVar32->fields)._size;
              pUVar31 = (UnityEngine_Color_array *)(ulong)uVar34;
              iVar29 = -iVar33 + iVar27 + uVar34;
              if ((-1 < iVar29) && (iVar29 < (int)uVar34)) {
                pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
                System_Object___ctor(pIVar18,(MethodInfo *)0x0);
                il2cpp_runtime_helper_022b2c90();
                pMVar26 = extraout_RDX_09;
                break;
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 < iVar33);
          }
        }
        else if (0 < iVar33) {
          fVar37 = *(float *)&pIVar18[1].klass;
          iVar27 = 0;
          pSVar32 = (__this->fields)._points;
          while (pSVar32 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            iVar29 = (pSVar32->fields)._size;
            iVar33 = (iVar29 - iVar33) + iVar27;
            if ((-1 < iVar33) && (iVar33 < iVar29)) {
              pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Point);
              System_Object___ctor(pIVar18,(MethodInfo *)0x0);
              pUVar31 = pUVar20;
              UVar49 = (UnityEngine_Vector3_Fields)
                       System_Collections_Generic_List_Vector3___get_Item
                                 ((System_Collections_Generic_List_Vector3__o *)pUVar20,iVar27,MethodInfo_Vector3_get_Item);
              if (pIVar18 == (Il2CppObject *)0x0) break;
              *(UnityEngine_Vector3_Fields *)((long)&pIVar18[1].klass + 4) = UVar49;
              UVar48 = System_Collections_Generic_List_Vector3___get_Item(__this_00,iVar27,MethodInfo_Vector3_get_Item);
              *(UnityEngine_Vector3_Fields *)(pIVar18 + 2) = UVar48.fields;
              fVar38 = (float)iVar27 / (float)(__this_00->fields)._size;
              fVar45 = 1.0;
              if (fVar38 <= 1.0) {
                fVar45 = fVar38;
              }
              *(float *)&pIVar18[1].klass =
                   (float)(-(uint)(0.0 <= fVar38) & (uint)fVar45) * (fVar37 - fVar42) + fVar42;
              pUVar31 = (UnityEngine_Color_array *)(__this->fields)._points;
              if (pUVar31 == (UnityEngine_Color_array *)0x0) break;
              System_Collections_Generic_List_object___set_Item
                        ((System_Collections_Generic_List_object__o *)pUVar31,iVar33,pIVar18,MethodInfo_Void_set_Item);
              pMVar26 = extraout_RDX_08;
            }
            iVar27 = iVar27 + 1;
            iVar33 = (__this_00->fields)._size;
            if (iVar33 <= iVar27) goto label_0406328c;
            pSVar32 = (__this->fields)._points;
          }
          goto label_04063ab5;
        }
      }
    }
  }
label_0406328c:
  pUVar31 = (UnityEngine_Color_array *)__this;
  MeleeWeaponTrail__RemoveOldPoints
            (__this,(System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)(__this->fields)._tip,pMVar26
            );
  pUVar17 = (__this->fields)._tip;
  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
    pMVar26 = extraout_RDX_10;
    if (*(int *)&pUVar17[1].klass == 0) {
      pUVar19 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar16 = UnityEngine_Object__op_Inequality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar26 = extraout_RDX_11;
      if ((char)bVar16 != '\0') {
        pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
        pUVar31 = (UnityEngine_Color_array *)0x0;
        if (pUVar5 == (UnityEngine_Mesh_o *)0x0) goto label_04063ab5;
        UnityEngine_Mesh__Clear(pUVar5,(MethodInfo *)0x0);
        pMVar26 = extraout_RDX_12;
      }
    }
    pUVar31 = (UnityEngine_Color_array *)__this;
    MeleeWeaponTrail__RemoveOldPoints(__this,(__this->fields)._points,pMVar26);
    pSVar32 = (__this->fields)._points;
    if (pSVar32 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      if ((pSVar32->fields)._size == 0) {
        pUVar31 = (UnityEngine_Color_array *)(__this->fields)._trailObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar16 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar16 != '\0') {
          pUVar31 = (UnityEngine_Color_array *)(__this->fields)._trailObject;
          if (pUVar31 == (UnityEngine_Color_array *)0x0) goto label_04063ab5;
          UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)pUVar31,(MethodInfo *)0x0);
        }
      }
      pSVar32 = (__this->fields)._points;
      if (pSVar32 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        iVar33 = (pSVar32->fields)._size;
        if (iVar33 < 2) {
          return;
        }
        pUVar23 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar33 * 2);
        value = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,(pSVar32->fields)._size * 2);
        value_00 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int,(pSVar32->fields)._size * 6 + -6);
        pUVar20 = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color);
        if (0 < (pSVar32->fields)._size) {
          uVar35 = 1;
          uVar34 = 0xfffffffd;
          lVar28 = 0;
          lVar30 = 0;
          do {
            pIVar18 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar32,(int32_t)lVar30,
                                 MethodInfo_MeleeWeaponTrail_Point_get_Item);
            pUVar31 = (UnityEngine_Color_array *)0x0;
            fVar42 = UnityEngine_Time__get_time((MethodInfo *)0x0);
            if (pIVar18 == (Il2CppObject *)0x0) goto label_04063ab5;
            fVar37 = (fVar42 - *(float *)&pIVar18[1].klass) / *(float *)&(__this->fields)._material;
            fVar42 = 1.0;
            if (fVar37 <= 1.0) {
              fVar42 = fVar37;
            }
            fVar42 = (float)(~-(uint)(0.0 <= fVar37) & 0x3f800000 |
                            (uint)(1.0 - fVar42) & -(uint)(0.0 <= fVar37));
            uVar47 = CONCAT44(fVar42,fVar42);
            lVar25 = *(long *)&(__this->fields)._lifeTime;
            fVar45 = fVar42;
            if ((lVar25 != 0) && (*(long *)(lVar25 + 0x18) != 0)) {
              uVar15 = (uint)*(long *)(lVar25 + 0x18);
              fVar43 = (float)(int)(uVar15 - 1);
              fVar45 = fVar37 * fVar43;
              fVar38 = floorf(fVar45);
              fVar39 = ceilf(fVar45);
              fVar42 = fVar43;
              if (fVar39 <= fVar43) {
                fVar42 = fVar39;
              }
              fVar42 = (float)(~-(uint)(1.0 <= fVar39) & 0x3f800000 | (uint)fVar42 & -(uint)(1.0 <= fVar39));
              if ((fVar38 != fVar42) || (NAN(fVar38) || NAN(fVar42))) {
                fVar39 = (fVar45 - fVar38) / (fVar42 - fVar38);
                fVar45 = 0.0;
                if ((0.0 <= fVar39) && (fVar45 = 1.0, fVar39 <= 1.0)) {
                  fVar45 = fVar39;
                }
              }
              else {
                fVar45 = 0.0;
              }
              uVar36 = -(uint)(fVar38 < (float)(int)uVar15);
              fVar39 = (float)(~uVar36 & (uint)fVar43 | uVar36 & (uint)fVar38);
              fVar38 = 0.0;
              if (0.0 <= fVar39) {
                fVar38 = fVar39;
              }
              if (uVar15 <= (uint)(int)fVar38) goto label_04063973;
              uVar36 = -(uint)(fVar42 < (float)(int)uVar15);
              fVar39 = (float)(~uVar36 & (uint)fVar43 | uVar36 & (uint)fVar42);
              fVar42 = 0.0;
              if (0.0 <= fVar39) {
                fVar42 = fVar39;
              }
              if (uVar15 <= (uint)(int)fVar42) goto label_04063973;
              lVar24 = (long)(int)fVar38 * 0x10;
              uVar47 = *(undefined8 *)(lVar25 + 0x20 + lVar24);
              uVar9 = *(undefined8 *)(lVar25 + 0x28 + lVar24);
              lVar24 = (long)(int)fVar42 * 0x10;
              uVar10 = *(undefined8 *)(lVar25 + 0x20 + lVar24);
              uVar11 = *(undefined8 *)(lVar25 + 0x28 + lVar24);
              fVar38 = 0.0;
              if (0.0 <= fVar45) {
                fVar38 = fVar45;
              }
              fVar42 = (float)uVar47;
              fVar45 = (float)((ulong)uVar47 >> 0x20);
              uVar47 = CONCAT44(((float)((ulong)uVar10 >> 0x20) - fVar45) * fVar38 + fVar45,
                                ((float)uVar10 - fVar42) * fVar38 + fVar42);
              fVar42 = (float)uVar9;
              fVar45 = (float)((ulong)uVar9 >> 0x20);
              fVar42 = ((float)uVar11 - fVar42) * fVar38 + fVar42;
              fVar45 = ((float)((ulong)uVar11 >> 0x20) - fVar45) * fVar38 + fVar45;
            }
            pUVar31 = (__this->fields)._colors;
            fVar38 = 0.0;
            if ((pUVar31 != (UnityEngine_Color_array *)0x0) && (pUVar31->max_length != 0)) {
              uVar15 = (uint)pUVar31->max_length;
              fVar44 = (float)(int)(uVar15 - 1);
              fVar37 = fVar37 * fVar44;
              fVar39 = floorf(fVar37);
              fVar43 = ceilf(fVar37);
              fVar38 = fVar44;
              if (fVar43 <= fVar44) {
                fVar38 = fVar43;
              }
              fVar38 = (float)(~-(uint)(1.0 <= fVar43) & 0x3f800000 | (uint)fVar38 & -(uint)(1.0 <= fVar43));
              if ((fVar39 != fVar38) || (NAN(fVar39) || NAN(fVar38))) {
                fVar43 = (fVar37 - fVar39) / (fVar38 - fVar39);
                fVar37 = 0.0;
                if ((0.0 <= fVar43) && (fVar37 = 1.0, fVar43 <= 1.0)) {
                  fVar37 = fVar43;
                }
              }
              else {
                fVar37 = 0.0;
              }
              uVar36 = -(uint)(fVar39 < (float)(int)uVar15);
              fVar43 = (float)(~uVar36 & (uint)fVar44 | uVar36 & (uint)fVar39);
              fVar39 = 0.0;
              if (0.0 <= fVar43) {
                fVar39 = fVar43;
              }
              if (uVar15 <= (uint)(int)fVar39) goto label_04063973;
              uVar36 = -(uint)(fVar38 < (float)(int)uVar15);
              fVar38 = (float)(~uVar36 & (uint)fVar44 | uVar36 & (uint)fVar38);
              fVar43 = 0.0;
              if (0.0 <= fVar38) {
                fVar43 = fVar38;
              }
              if (uVar15 <= (uint)(int)fVar43) goto label_04063973;
              fVar38 = (&pUVar31->m_Items[0].fields.r)[(int)fVar39];
              fVar39 = 0.0;
              if (0.0 <= fVar37) {
                fVar39 = fVar37;
              }
              fVar38 = ((&pUVar31->m_Items[0].fields.r)[(int)fVar43] - fVar38) * fVar39 + fVar38;
            }
            pUVar31 = (UnityEngine_Color_array *)0x0;
            if (pUVar23 == (UnityEngine_Vector3_array *)0x0) goto label_04063ab5;
            uVar2 = uVar35 - 1;
            if ((uint)pUVar23->max_length <= uVar2) goto label_04063973;
            uVar9 = *(undefined8 *)((long)&pIVar18[1].klass + 4);
            fVar44 = (float)uVar9;
            fVar46 = (float)((ulong)uVar9 >> 0x20);
            fVar37 = *(float *)((long)&pIVar18[1].monitor + 4);
            fVar38 = fVar38 * 0.5;
            fVar39 = fVar38 * (SUB84(pIVar18[2].klass,0) - fVar44);
            fVar43 = fVar38 * ((float)((ulong)pIVar18[2].klass >> 0x20) - fVar46);
            fVar38 = fVar38 * (*(float *)&pIVar18[2].monitor - fVar37);
            lVar25 = lVar28 >> 0x20;
            pUVar23->m_Items[lVar25].fields.x = fVar44 - fVar39;
            pUVar23->m_Items[lVar25].fields.y = fVar46 - fVar43;
            pUVar23->m_Items[lVar25].fields.z = fVar37 - fVar38;
            if ((uint)pUVar23->max_length <= uVar35) goto label_04063973;
            lVar24 = lVar28 + 0x100000000 >> 0x20;
            pIVar6 = pIVar18[2].klass;
            fVar37 = *(float *)&pIVar18[2].monitor;
            pUVar23->m_Items[lVar24].fields.x = fVar39 + SUB84(pIVar6,0);
            pUVar23->m_Items[lVar24].fields.y = fVar43 + (float)((ulong)pIVar6 >> 0x20);
            pUVar23->m_Items[lVar24].fields.z = fVar38 + fVar37;
            pUVar31 = pUVar20;
            if (pUVar20 == (UnityEngine_Color_array *)0x0) goto label_04063ab5;
            if ((uint)pUVar20->max_length <= uVar35) goto label_04063973;
            pUVar4 = pUVar20->m_Items + lVar24;
            (pUVar4->fields).r = (float)(int)uVar47;
            (pUVar4->fields).g = (float)(int)((ulong)uVar47 >> 0x20);
            (pUVar4->fields).b = fVar42;
            (pUVar4->fields).a = fVar45;
            if ((uint)pUVar20->max_length <= uVar2) goto label_04063973;
            pUVar4 = pUVar20->m_Items + lVar25;
            (pUVar4->fields).r = (float)(int)uVar47;
            (pUVar4->fields).g = (float)(int)((ulong)uVar47 >> 0x20);
            (pUVar4->fields).b = fVar42;
            (pUVar4->fields).a = fVar45;
            if (value == (UnityEngine_Vector2_array *)0x0) goto label_04063ab5;
            if ((uint)value->max_length <= uVar2) goto label_04063973;
            fVar42 = (float)(int32_t)lVar30 / (float)(pSVar32->fields)._size;
            UVar41.fields.y = 0.0;
            UVar41.fields.x = fVar42;
            value->m_Items[lVar25].fields = UVar41.fields;
            if ((uint)value->max_length <= uVar35) goto label_04063973;
            UVar14.fields.y = 1.0;
            UVar14.fields.x = fVar42;
            value->m_Items[lVar24].fields = UVar14.fields;
            if (uVar35 != 1) {
              if (value_00 == (System_Int32_array *)0x0) goto label_04063ab5;
              uVar15 = (uint)value_00->max_length;
              if (uVar15 <= uVar34 - 3) goto label_04063973;
              iVar33 = (int)uVar35;
              value_00->m_Items[(int)(uVar34 - 3)] = iVar33 + -3;
              if (uVar15 <= uVar34 - 2) goto label_04063973;
              value_00->m_Items[(int)(uVar34 - 2)] = iVar33 + -2;
              if (uVar15 <= uVar34 - 1) goto label_04063973;
              value_00->m_Items[(int)(uVar34 - 1)] = (int32_t)uVar2;
              if (uVar15 <= uVar34) goto label_04063973;
              value_00->m_Items[(int)uVar34] = iVar33;
              if (uVar15 <= uVar34 + 1) goto label_04063973;
              value_00->m_Items[(int)(uVar34 + 1)] = (int32_t)uVar2;
              if (uVar15 <= uVar34 + 2) goto label_04063973;
              value_00->m_Items[(int)(uVar34 + 2)] = iVar33 + -2;
            }
            lVar30 = lVar30 + 1;
            uVar35 = uVar35 + 2;
            lVar28 = lVar28 + 0x200000000;
            uVar34 = uVar34 + 6;
          } while (lVar30 < (pSVar32->fields)._size);
        }
        pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
        pUVar31 = (UnityEngine_Color_array *)0x0;
        if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
          UnityEngine_Mesh__Clear(pUVar5,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
          pUVar31 = (UnityEngine_Color_array *)0x0;
          if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
            UnityEngine_Mesh__set_vertices(pUVar5,pUVar23,(MethodInfo *)0x0);
            pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
            pUVar31 = (UnityEngine_Color_array *)0x0;
            if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__set_colors(pUVar5,pUVar20,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
              pUVar31 = (UnityEngine_Color_array *)0x0;
              if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
                UnityEngine_Mesh__set_uv(pUVar5,value,(MethodInfo *)0x0);
                pUVar5 = (UnityEngine_Mesh_o *)(__this->fields)._trailObject;
                pUVar31 = (UnityEngine_Color_array *)0x0;
                if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__set_triangles(pUVar5,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04063ab5:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pUVar31->obj,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$RemoveOldPoints
// il2cpp: void MeleeWeaponTrail__RemoveOldPoints (MeleeWeaponTrail_o* __this, System_Collections_Generic_List_MeleeWeaponTrail_Point__o* pointList, const MethodInfo* method);
// 0x4063ad0

void MeleeWeaponTrail__RemoveOldPoints
               (MeleeWeaponTrail_o *__this,
               System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pointList,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  int index;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *__this_01;
  MeleeWeaponTrail_o *__this_02;
  float fVar3;
  
  __this_02 = __this;
  if (g_data_057ac2ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_02 = (MeleeWeaponTrail_o *)&MethodInfo_MeleeWeaponTrail_Point_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2ad = '\x01';
  }
  if (pointList != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    index = (pointList->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      __this_02 = (MeleeWeaponTrail_o *)pointList;
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pointList,index,MethodInfo_MeleeWeaponTrail_Point_get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      fVar3 = fVar3 - *(float *)&pIVar2[1].klass;
      ppUVar1 = &(__this->fields)._material;
      if (*(float *)ppUVar1 <= fVar3 && fVar3 != *(float *)ppUVar1) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pointList,index,MethodInfo_Void_RemoveAt);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_MeleeWeaponTrail_Point);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Point);
    g_data_057ac2ae = '\x01';
  }
  *(undefined2 *)&(__this_02->fields)._emit = 0x101;
  *(undefined4 *)&(__this_02->fields)._material = 0x3f800000;
  (__this_02->fields)._sizes = (System_Single_array *)0x412000003dcccccd;
  (__this_02->fields)._minVertexDistanceSqr = 3.0;
  (__this_02->fields)._maxAngle = 5.60519e-45;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Point);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_MeleeWeaponTrail_Point);
  (__this_02->fields)._tip = (UnityEngine_Transform_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._tip,__this_00);
  __this_01 = (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Point);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_MeleeWeaponTrail_Point);
  (__this_02->fields)._points = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._points);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$.ctor
// il2cpp: void MeleeWeaponTrail___ctor (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x4063ba0

void MeleeWeaponTrail___ctor(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *__this_01;
  
  if (g_data_057ac2ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_MeleeWeaponTrail_Point);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Point);
    g_data_057ac2ae = '\x01';
  }
  *(undefined2 *)&(__this->fields)._emit = 0x101;
  *(undefined4 *)&(__this->fields)._material = 0x3f800000;
  (__this->fields)._sizes = (System_Single_array *)0x412000003dcccccd;
  (__this->fields)._minVertexDistanceSqr = 3.0;
  (__this->fields)._maxAngle = 5.60519e-45;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Point);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_MeleeWeaponTrail_Point);
  (__this->fields)._tip = (UnityEngine_Transform_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tip,__this_00);
  __this_01 = (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Point);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_MeleeWeaponTrail_Point);
  (__this->fields)._points = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._points);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


