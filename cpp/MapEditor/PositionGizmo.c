// Type: MapEditor.PositionGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/PositionGizmo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.PositionGizmo$$Create
// il2cpp: MapEditor_PositionGizmo_o* MapEditor_PositionGizmo__Create (const MethodInfo* method);
// 0x40483f0

MapEditor_PositionGizmo_o * MapEditor_PositionGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_PositionGizmo_o *pMVar1;
  
  if (DAT_057043f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_PositionGizmo_AddComponent_PositionGizmo);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Gizmos/PositionGizmo");
    DAT_057043f9 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,"Gizmos/PositionGizmo",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = (MapEditor_PositionGizmo_o *)
             UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_PositionGizmo_AddComponent_PositionGizmo);
    UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$IsActive
// il2cpp: bool MapEditor_PositionGizmo__IsActive (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x40484e0

bool_conflict
MapEditor_PositionGizmo__IsActive(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool_conflict bVar1;
  
  if (DAT_057043fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043fa = '\x01';
  }
  x = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.PositionGizmo$$Awake
// il2cpp: void MapEditor_PositionGizmo__Awake (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x4048530

void MapEditor_PositionGizmo__Awake(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *method_00;
  
  if (DAT_057043fb == '\0') {
    il2cpp_init_method_metadata(&"LineZ");
    il2cpp_init_method_metadata(&"LineY");
    il2cpp_init_method_metadata(&"LineX");
    DAT_057043fb = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,method);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar1;
    il2cpp_runtime_glue(&(__this->fields)._lineX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar1;
      il2cpp_runtime_glue(&(__this->fields)._lineY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)UnityEngine_Transform__Find(pUVar1,"LineZ",(MethodInfo *)0x0)
        ;
        (__this->fields)._lineZ = (UnityEngine_Transform_o *)method_00;
        il2cpp_runtime_glue(&(__this->fields)._lineZ);
        MapEditor_PositionGizmo__CreatePlaneHandles(__this,method_00);
        MapEditor_PositionGizmo__ResetColors(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$CreatePlaneHandles
// il2cpp: void MapEditor_PositionGizmo__CreatePlaneHandles (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x4048610

void MapEditor_PositionGizmo__CreatePlaneHandles
               (MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Vector3_o axisMask;
  UnityEngine_Vector3_o axisMask_00;
  
  if (DAT_057043fc == '\0') {
    il2cpp_init_method_metadata(&"PlaneXZ");
    il2cpp_init_method_metadata(&"PlaneXY");
    il2cpp_init_method_metadata(&"PlaneYZ");
    DAT_057043fc = '\x01';
    in_RDX = extraout_RDX;
  }
  pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneXY",(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),
                      (UnityEngine_Color_o)(__this->fields).LineZColor.fields,in_RDX);
  (__this->fields)._planeXY = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._planeXY,pUVar1);
  axisMask.fields.z = 1.0;
  axisMask.fields.x = 0.0;
  axisMask.fields.y = 1.0;
  pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneYZ",axisMask,
                      (UnityEngine_Color_o)(__this->fields).LineXColor.fields,method_01);
  (__this->fields)._planeYZ = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._planeYZ,pUVar1);
  axisMask_00.fields.z = 1.0;
  axisMask_00.fields.x = 1.0;
  axisMask_00.fields.y = 0.0;
  method_00 = (MethodInfo *)
              MapEditor_PositionGizmo__CreatePlaneHandle
                        (__this,"PlaneXZ",axisMask_00,
                         (UnityEngine_Color_o)(__this->fields).LineYColor.fields,method_02);
  (__this->fields)._planeXZ = (UnityEngine_Transform_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._planeXZ);
  pUVar1 = MapEditor_PositionGizmo__CreateCenterSquare(__this,method_00);
  (__this->fields)._centerSquare = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._centerSquare);
  pUVar1 = (__this->fields)._centerSquare;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$CreateCenterSquare
// il2cpp: UnityEngine_Transform_o* MapEditor_PositionGizmo__CreateCenterSquare (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x4048be0

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreateCenterSquare(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  MapEditor_PositionGizmo_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_Renderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_03;
  UnityEngine_BoxCollider_o *__this_04;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *__this_05;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Color_o value_01;
  
  if (DAT_057043fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&"CenterSquare");
    il2cpp_init_method_metadata(&"MapEditor/Gizmo");
    DAT_057043fd = '\x01';
  }
  __this_00 = (MapEditor_PositionGizmo_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor
            ((UnityEngine_GameObject_o *)__this_00,"CenterSquare",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (MapEditor_PositionGizmo_o *)0x0) {
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)__this_00,
               *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x44),(MethodInfo *)0x0);
    pUVar1 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar1,(__this->fields)._transform,0,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar1,(UnityEngine_Vector3_o)
                          **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
        __this_01 = (UnityEngine_MeshFilter_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              ((UnityEngine_GameObject_o *)__this_00,MethodInfo_MeshFilter_AddComponent_MeshFilter);
        method_00 = MethodInfo_MeshRenderer_AddComponent_MeshRenderer;
        __this_05 = __this_00;
        __this_02 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              ((UnityEngine_GameObject_o *)__this_00,
                               (MethodInfo_24F0EB0 *)MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
        value = MapEditor_PositionGizmo__BuildQuadMesh
                          (__this_05,(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),6.0,
                           method_00);
        if (__this_01 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_sharedMesh(__this_01,value,(MethodInfo *)0x0);
          shader = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          __this_03 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
          UnityEngine_Material___ctor(__this_03,shader,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            value_01.fields.b = 1.0;
            value_01.fields.a = 0.5;
            value_01.fields.r = 1.0;
            value_01.fields.g = 1.0;
            UnityEngine_Material__set_color(__this_03,value_01,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(__this_03,0xc28,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial(__this_02,__this_03,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode(__this_02,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows(__this_02,0,(MethodInfo *)0x0);
              __this_04 = (UnityEngine_BoxCollider_o *)
                          UnityEngine_GameObject__AddComponent<object>
                                    ((UnityEngine_GameObject_o *)__this_00,MethodInfo_BoxCollider_AddComponent_BoxCollider);
              if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
                value_00.fields.z = 0.5;
                value_00.fields.x = 6.0;
                value_00.fields.y = 6.0;
                UnityEngine_BoxCollider__set_size(__this_04,value_00,(MethodInfo *)0x0);
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                }
                UnityEngine_BoxCollider__set_center
                          (__this_04,
                           (UnityEngine_Vector3_o)
                           **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0)
                ;
                pUVar1 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
                return pUVar1;
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


// MapEditor.PositionGizmo$$CreatePlaneHandle
// il2cpp: UnityEngine_Transform_o* MapEditor_PositionGizmo__CreatePlaneHandle (MapEditor_PositionGizmo_o* __this, System_String_o* name, UnityEngine_Vector3_o axisMask, UnityEngine_Color_o color, const MethodInfo* method);
// 0x40488b0

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreatePlaneHandle
          (MapEditor_PositionGizmo_o *__this,System_String_o *name,UnityEngine_Vector3_o axisMask,
          UnityEngine_Color_o color,MethodInfo *method)

{
  MapEditor_PositionGizmo_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_Renderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_03;
  UnityEngine_BoxCollider_o *__this_04;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *__this_05;
  uint uVar2;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Color_o value_02;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  float local_38;
  
  if (DAT_057043fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&"MapEditor/Gizmo");
    DAT_057043fe = '\x01';
  }
  __this_00 = (MapEditor_PositionGizmo_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (MapEditor_PositionGizmo_o *)0x0) {
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)__this_00,
               *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x44),(MethodInfo *)0x0);
    pUVar1 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar1,(__this->fields)._transform,0,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        local_58 = axisMask.fields.x;
        fStack_54 = axisMask.fields.y;
        value_00.fields.x = local_58 * 8.0;
        value_00.fields.y = fStack_54 * 8.0;
        value_00.fields.z = axisMask.fields.z * 8.0;
        UnityEngine_Transform__set_localPosition(pUVar1,value_00,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_MeshFilter_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              ((UnityEngine_GameObject_o *)__this_00,MethodInfo_MeshFilter_AddComponent_MeshFilter);
        method_00 = MethodInfo_MeshRenderer_AddComponent_MeshRenderer;
        __this_05 = __this_00;
        __this_02 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              ((UnityEngine_GameObject_o *)__this_00,
                               (MethodInfo_24F0EB0 *)MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
        value = MapEditor_PositionGizmo__BuildQuadMesh(__this_05,axisMask,6.0,method_00);
        if (__this_01 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_sharedMesh(__this_01,value,(MethodInfo *)0x0);
          shader = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          __this_03 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
          UnityEngine_Material___ctor(__this_03,shader,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            local_38 = color.fields.b;
            value_02.fields.a = 0.4;
            value_02.fields.b = local_38;
            value_02.fields.r = (float)(int)color.fields._0_8_;
            value_02.fields.g = (float)(int)((ulong)color.fields._0_8_ >> 0x20);
            UnityEngine_Material__set_color(__this_03,value_02,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(__this_03,0xc27,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial(__this_02,__this_03,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode(__this_02,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows(__this_02,0,(MethodInfo *)0x0);
              __this_04 = (UnityEngine_BoxCollider_o *)
                          UnityEngine_GameObject__AddComponent<object>
                                    ((UnityEngine_GameObject_o *)__this_00,MethodInfo_BoxCollider_AddComponent_BoxCollider);
              uVar2 = -(uint)(0.0 < axisMask.fields.z);
              if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
                value_01.fields.z = (float)(~uVar2 & 0x3f000000 | uVar2 & 0x40c00000);
                value_01.fields.x =
                     (float)(~-(uint)(0.0 < local_58) & 0x3f000000 |
                            -(uint)(0.0 < local_58) & 0x40c00000);
                value_01.fields.y =
                     (float)(~-(uint)(0.0 < fStack_54) & 0x3f000000 |
                            -(uint)(0.0 < fStack_54) & 0x40c00000);
                UnityEngine_BoxCollider__set_size(__this_04,value_01,(MethodInfo *)0x0);
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                }
                UnityEngine_BoxCollider__set_center
                          (__this_04,
                           (UnityEngine_Vector3_o)
                           **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0)
                ;
                pUVar1 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
                return pUVar1;
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


// MapEditor.PositionGizmo$$BuildQuadMesh
// il2cpp: UnityEngine_Mesh_o* MapEditor_PositionGizmo__BuildQuadMesh (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o axisMask, float size, const MethodInfo* method);
// 0x4048eb0

UnityEngine_Mesh_o *
MapEditor_PositionGizmo__BuildQuadMesh
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o axisMask,float size,
          MethodInfo *method)

{
  uint uVar1;
  undefined1 auVar2 [16];
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector3_array *value_00;
  UnityEngine_Mesh_o *__this_00;
  System_Int32_array *value_01;
  float fVar3;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  
  if (DAT_057043ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    il2cpp_init_method_metadata(&fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057043ff = '\x01';
  }
  fVar9 = 0.0;
  if ((axisMask.fields.x <= 0.0) || (axisMask.fields.y <= 0.0)) {
    fVar10 = 1.0;
    fVar12 = 0.0;
    if (0.0 < axisMask.fields.z) {
      fVar10 = 0.0;
      fVar12 = 1.0;
    }
    if (axisMask.fields.y <= 0.0) {
      fVar10 = 1.0;
      fVar12 = 0.0;
    }
    fVar4 = 0.0;
    fVar9 = 1.0;
  }
  else {
    fVar4 = 1.0;
    fVar10 = 1.0;
    fVar12 = 0.0;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar7._0_4_ = fVar9 * fVar12 - fVar4 * 0.0;
  auVar7._4_4_ = 0.0 - fVar9 * fVar10;
  auVar7._8_8_ = 0;
  fVar8 = fVar4 * fVar10 - fVar12 * 0.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar6 = 0;
  uVar5 = 0;
  fVar3 = fVar8 * fVar8 + auVar7._4_4_ * auVar7._4_4_ + auVar7._0_4_ * auVar7._0_4_;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
    uVar5 = extraout_XMM0_Dc;
    uVar6 = extraout_XMM0_Dd;
    if (fVar3 <= 1e-05) goto LAB_04049068;
LAB_040490c9:
    fVar8 = fVar8 / fVar3;
    auVar2._4_4_ = fVar3;
    auVar2._0_4_ = fVar3;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar6;
    auVar7 = divps(auVar7,auVar2);
    local_88 = auVar7._0_8_;
  }
  else {
    fVar3 = SQRT(fVar3);
    if (1e-05 < fVar3) goto LAB_040490c9;
LAB_04049068:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    local_88 = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar8 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  value = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,8);
  if (value == (UnityEngine_Vector3_array *)0x0) goto LAB_04049365;
  uVar1 = (uint)value->max_length;
  if (uVar1 != 0) {
    fVar13 = size * 0.5;
    fVar10 = fVar10 * fVar13;
    fVar12 = fVar12 * fVar13;
    fVar3 = fVar13 * 0.0;
    fVar4 = fVar13 * fVar4;
    fVar9 = fVar9 * fVar13;
    fVar15 = fVar13 * -0.0 - fVar9;
    value->m_Items[0].fields.x = -fVar10 - fVar3;
    value->m_Items[0].fields.y = -fVar12 - fVar4;
    value->m_Items[0].fields.z = fVar15;
    if (uVar1 != 1) {
      fVar11 = fVar13 * 0.0 - fVar9;
      value->m_Items[1].fields.x = fVar10 - fVar3;
      value->m_Items[1].fields.y = fVar12 - fVar4;
      value->m_Items[1].fields.z = fVar11;
      if (2 < uVar1) {
        fVar14 = fVar13 * 0.0 + fVar9;
        value->m_Items[2].fields.x = fVar10 + fVar3;
        value->m_Items[2].fields.y = fVar12 + fVar4;
        value->m_Items[2].fields.z = fVar14;
        if (uVar1 != 3) {
          fVar9 = fVar13 * -0.0 + fVar9;
          value->m_Items[3].fields.x = fVar3 - fVar10;
          value->m_Items[3].fields.y = fVar4 - fVar12;
          value->m_Items[3].fields.z = fVar9;
          if (4 < uVar1) {
            value->m_Items[4].fields.x = -fVar10 - fVar3;
            value->m_Items[4].fields.y = -fVar12 - fVar4;
            value->m_Items[4].fields.z = fVar15;
            if (uVar1 != 5) {
              value->m_Items[5].fields.x = fVar10 - fVar3;
              value->m_Items[5].fields.y = fVar12 - fVar4;
              value->m_Items[5].fields.z = fVar11;
              if (6 < uVar1) {
                value->m_Items[6].fields.x = fVar10 + fVar3;
                value->m_Items[6].fields.y = fVar12 + fVar4;
                value->m_Items[6].fields.z = fVar14;
                if (uVar1 != 7) {
                  value->m_Items[7].fields.x = fVar3 - fVar10;
                  value->m_Items[7].fields.y = fVar4 - fVar12;
                  value->m_Items[7].fields.z = fVar9;
                  value_00 = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3);
                  if (value_00 == (UnityEngine_Vector3_array *)0x0) {
LAB_04049365:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar1 = (uint)value_00->max_length;
                  if (uVar1 != 0) {
                    value_00->m_Items[0].fields.x = (float)local_88;
                    value_00->m_Items[0].fields.y = local_88._4_4_;
                    value_00->m_Items[0].fields.z = fVar8;
                    if (uVar1 != 1) {
                      value_00->m_Items[1].fields.x = (float)local_88;
                      value_00->m_Items[1].fields.y = local_88._4_4_;
                      value_00->m_Items[1].fields.z = fVar8;
                      if (2 < uVar1) {
                        value_00->m_Items[2].fields.x = (float)local_88;
                        value_00->m_Items[2].fields.y = local_88._4_4_;
                        value_00->m_Items[2].fields.z = fVar8;
                        if (uVar1 != 3) {
                          value_00->m_Items[3].fields.x = (float)local_88;
                          value_00->m_Items[3].fields.y = local_88._4_4_;
                          value_00->m_Items[3].fields.z = fVar8;
                          if (4 < uVar1) {
                            fVar8 = -fVar8;
                            value_00->m_Items[4].fields.x =
                                 (float)(int)(local_88 ^ 0x8000000080000000);
                            value_00->m_Items[4].fields.y =
                                 (float)(int)((local_88 ^ 0x8000000080000000) >> 0x20);
                            value_00->m_Items[4].fields.z = fVar8;
                            if (uVar1 != 5) {
                              value_00->m_Items[5].fields.x =
                                   (float)(int)(local_88 ^ 0x8000000080000000);
                              value_00->m_Items[5].fields.y =
                                   (float)(int)((local_88 ^ 0x8000000080000000) >> 0x20);
                              value_00->m_Items[5].fields.z = fVar8;
                              if (6 < uVar1) {
                                value_00->m_Items[6].fields.x =
                                     (float)(int)(local_88 ^ 0x8000000080000000);
                                value_00->m_Items[6].fields.y =
                                     (float)(int)((local_88 ^ 0x8000000080000000) >> 0x20);
                                value_00->m_Items[6].fields.z = fVar8;
                                if (uVar1 != 7) {
                                  value_00->m_Items[7].fields.x =
                                       (float)(int)(local_88 ^ 0x8000000080000000);
                                  value_00->m_Items[7].fields.y =
                                       (float)(int)((local_88 ^ 0x8000000080000000) >> 0x20);
                                  value_00->m_Items[7].fields.z = fVar8;
                                  __this_00 = (UnityEngine_Mesh_o *)il2cpp_runtime_glue(TypeInfo_Mesh)
                                  ;
                                  UnityEngine_Mesh___ctor(__this_00,(MethodInfo *)0x0);
                                  if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
                                    UnityEngine_Mesh__set_vertices
                                              (__this_00,value,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__set_normals
                                              (__this_00,value_00,(MethodInfo *)0x0);
                                    value_01 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,0xc);
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                              ((System_Array_o *)value_01,fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7,
                                               (MethodInfo *)0x0);
                                    UnityEngine_Mesh__set_triangles
                                              (__this_00,value_01,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__RecalculateBounds(__this_00,(MethodInfo *)0x0)
                                    ;
                                    return __this_00;
                                  }
                                  goto LAB_04049365;
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


// MapEditor.PositionGizmo$$OnSelectionChange
// il2cpp: void MapEditor_PositionGizmo__OnSelectionChange (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x4049370

void MapEditor_PositionGizmo__OnSelectionChange
               (MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  
  if (DAT_05704400 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704400 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar2->fields)._count) {
      x = (pGVar1->fields).CurrentGizmo;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 != '\0') {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          method_00 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
          MapEditor_PositionGizmo__ResetCenter(__this,method_00);
          MapEditor_PositionGizmo__ResetColors(__this,method_00);
          return;
        }
        goto LAB_04049443;
      }
    }
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04049443:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$Update
// il2cpp: void MapEditor_PositionGizmo__Update (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x40497c0

/* WARNING: Type propagation algorithm not settling */

void MapEditor_PositionGizmo__Update(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  Settings_KeybindSetting_o *__this_00;
  Settings_KeybindSetting_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  System_Collections_Generic_HashSet_MapObject__o *pSVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UI_MapEditorMenu_o *pUVar10;
  UnityEngine_Camera_o *pUVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [12];
  UnityEngine_Ray_o ray;
  UnityEngine_Ray_o ray_00;
  UnityEngine_Ray_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  UnityEngine_RaycastHit_o __this_04;
  Cameras_BaseCamera_o *camera;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  bool_conflict bVar18;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  UnityEngine_GameObject_o *pUVar19;
  System_Int32_array *layers;
  UnityEngine_Object_o *pUVar20;
  UnityEngine_Collider_o *__this_05;
  UnityEngine_Transform_o *pUVar21;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  GameManagers_MapEditorGameManager_o *pGVar22;
  UnityEngine_Transform_o **owner;
  MethodInfo *pMVar23;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_03;
  MethodInfo *pMVar25;
  MethodInfo *method_04;
  undefined1 uVar26;
  uint uVar27;
  MapEditor_PositionGizmo_o *__this_06;
  MethodInfo *in_R9;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 uVar35;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar36;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 uVar37;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  float fVar38;
  undefined1 auVar39 [8];
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o UVar51;
  UnityEngine_Vector3_o UVar52;
  UnityEngine_Vector3_o forward;
  UnityEngine_Quaternion_o value;
  undefined1 auVar53 [16];
  undefined8 in_stack_fffffffffffffdf8;
  Il2CppClass *pIVar54;
  undefined8 in_stack_fffffffffffffe00;
  undefined8 in_stack_fffffffffffffe08;
  undefined8 uVar55;
  undefined8 in_stack_fffffffffffffe10;
  int32_t in_stack_fffffffffffffe20;
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [8];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1b8 [32];
  undefined8 uStack_198;
  UnityEngine_Ray_o UStack_188;
  undefined1 auStack_168 [8];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [8];
  float fStack_140;
  undefined1 auStack_138 [16];
  Il2CppClass *pIStack_128;
  float fStack_120;
  UnityEngine_Transform_o *pUStack_118;
  _union_13 _Stack_110;
  _union_14 _Stack_108;
  float fStack_100;
  undefined1 auStack_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  UnityEngine_Transform_o *pUStack_e0;
  Il2CppClass *pIStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  _union_14 _Stack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  _union_14 _Stack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  UnityEngine_Ray_o UStack_48;
  undefined7 uVar24;
  undefined1 auVar42 [16];
  
  if (DAT_05704401 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TransformPositionCommand);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05704401 = '\x01';
  }
  fStack_100 = 0.0;
  _Stack_108.genericMethod = (void *)0x0;
  pUStack_e0 = (UnityEngine_Transform_o *)0x0;
  _Stack_110._0_4_ = 0.0;
  pUStack_118 = (UnityEngine_Transform_o *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a8._0_2_ = 0;
  uStack_a8._2_1_ = '\0';
  uStack_a8._3_1_ = '\0';
  uStack_a8._4_4_ = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  _Stack_b8.genericMethod = (void *)0x0;
  uStack_b0._0_4_ = 0;
  uStack_b0._4_2_ = 0;
  uStack_b0._6_2_ = 0;
  pIStack_d8 = (Il2CppClass *)0x0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_68._0_2_ = 0;
  uStack_68._2_1_ = '\0';
  uStack_68._3_1_ = '\0';
  uStack_68._4_4_ = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  _Stack_78.genericMethod = (void *)0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_2_ = 0;
  uStack_70._6_2_ = 0;
  auStack_f8 = (undefined1  [8])0x0;
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  fStack_120 = 0.0;
  pIStack_128 = (Il2CppClass *)0x0;
  fStack_140 = 0.0;
  auStack_148 = (undefined1  [8])0x0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,method);
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x50), lVar6 == 0)) goto LAB_0404b729;
  owner = *(UnityEngine_Transform_o ***)(TypeInfo_SceneLoader + 0xb8);
  pUVar21 = owner[3];
  __this_00 = *(Settings_KeybindSetting_o **)(lVar6 + 0x78);
  __this_01 = *(Settings_KeybindSetting_o **)(lVar6 + 0x110);
  pUVar7 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar18 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar29 = SUB84(pUVar21,0);
  uVar33 = (undefined4)((ulong)pUVar21 >> 0x20);
  if ((char)bVar18 != '\0') {
    pUVar21 = (__this->fields)._centerSquare;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar18 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto LAB_0404b729;
      uVar27 = 0;
      bVar18 = Settings_KeybindSetting__GetKey(__this_01,0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        pGVar22 = (__this->fields)._gameManager;
        if ((pGVar22 == (GameManagers_MapEditorGameManager_o *)0x0) ||
           (pSVar8 = (pGVar22->fields).SelectedObjects,
           pSVar8 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto LAB_0404b729;
        uVar27 = (uint)(0 < (pSVar8->fields)._count);
      }
      pUVar21 = (__this->fields)._centerSquare;
      if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar19 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0),
         pUVar19 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0404b729;
      UnityEngine_GameObject__SetActive(pUVar19,uVar27,(MethodInfo *)0x0);
      pUVar21 = (__this->fields)._planeXY;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar18 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        pUVar21 = (__this->fields)._planeXY;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0),
           pUVar19 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0404b729;
        UnityEngine_GameObject__SetActive(pUVar19,(uint)(uVar27 == 0),(MethodInfo *)0x0);
      }
      pUVar21 = (__this->fields)._planeYZ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar18 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        pUVar21 = (__this->fields)._planeYZ;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0),
           pUVar19 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0404b729;
        UnityEngine_GameObject__SetActive(pUVar19,(uint)(uVar27 == 0),(MethodInfo *)0x0);
      }
      pUVar21 = (__this->fields)._planeXZ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar18 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      camera = (Cameras_BaseCamera_o *)CONCAT44(uVar33,uVar29);
      if ((char)bVar18 != '\0') {
        pUVar21 = (__this->fields)._planeXZ;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0),
           pUVar19 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0404b729;
        UnityEngine_GameObject__SetActive(pUVar19,(uint)(uVar27 == 0),(MethodInfo *)0x0);
      }
      if (uVar27 == 0) {
        *(undefined1 *)&(__this->fields)._snapAnchorLocal.fields.y = 0;
        *(undefined8 *)&(__this->fields)._vertexSnapOrigin.fields.z = 0;
        pMVar23 = (MethodInfo *)0x0;
        il2cpp_runtime_glue(&(__this->fields)._vertexSnapOrigin.fields.z);
        MapEditor_PositionGizmo__ResetCenter(__this,pMVar23);
      }
      else {
        owner = &pUStack_e0;
        bVar18 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                           (__this,camera,(UnityEngine_Vector3_o *)&_Stack_108,owner,
                            (UnityEngine_Vector3_o *)&pUStack_118,in_R9);
        if ((char)bVar18 != '\0') {
          pUVar21 = (__this->fields)._transform;
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
          UVar50.fields.z = fStack_100;
          UVar50.fields._0_8_ = _Stack_108.genericMethod;
          UnityEngine_Transform__set_position(pUVar21,UVar50,(MethodInfo *)0x0);
          *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z = pUStack_e0;
          il2cpp_runtime_glue(&(__this->fields)._vertexSnapOrigin.fields.z);
          (__this->fields)._snapAnchorLocal.fields.x = (float)_Stack_110._0_4_;
          (__this->fields)._snapAnchorTransform = pUStack_118;
          *(undefined1 *)&(__this->fields)._snapAnchorLocal.fields.y = 1;
        }
        pUVar21 = (__this->fields)._centerSquare;
        if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
        UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
        if (((camera == (Cameras_BaseCamera_o *)0x0) ||
            (pUVar9 = (camera->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar7 = (pUVar9->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
        goto LAB_0404b729;
        UVar51 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        pUVar9 = (camera->fields).Cache;
        if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar7 = (pUVar9->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
        goto LAB_0404b729;
        uStack_198._0_4_ = UVar50.fields.x;
        uStack_198._4_4_ = UVar50.fields.y;
        UVar52 = UnityEngine_Transform__get_up(pUVar7,(MethodInfo *)0x0);
        forward.fields.z = UVar50.fields.z - UVar51.fields.z;
        forward.fields.x = (float)uStack_198 - UVar51.fields.x;
        forward.fields.y = uStack_198._4_4_ - UVar51.fields.y;
        value = UnityEngine_Quaternion__LookRotation(forward,UVar52,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar21,value,(MethodInfo *)0x0);
      }
    }
  }
  ppUVar1 = &(__this->fields)._activeLine;
  pUVar21 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar18 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar18 != '\0') {
    pUVar10 = (__this->fields)._menu;
    if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto LAB_0404b729;
    if ((char)(pUVar10->fields).IsMouseUI != '\0') {
      return;
    }
    if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto LAB_0404b729;
    bVar18 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') {
      return;
    }
    if (CONCAT44(uVar33,uVar29) == 0) goto LAB_0404b729;
    pUVar11 = *(UnityEngine_Camera_o **)(CONCAT44(uVar33,uVar29) + 0x20);
    UVar50 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto LAB_0404b729;
    UnityEngine_Camera__ScreenPointToRay(&UStack_48,pUVar11,UVar50,(MethodInfo *)0x0);
    UStack_188.fields.m_Direction.fields.y = UStack_48.fields.m_Direction.fields.y;
    UStack_188.fields.m_Direction.fields.z = UStack_48.fields.m_Direction.fields.z;
    UStack_188.fields.m_Origin.fields.y = UStack_48.fields.m_Origin.fields.y;
    UStack_188.fields.m_Origin.fields.x = UStack_48.fields.m_Origin.fields.x;
    UStack_188.fields.m_Origin.fields.z = UStack_48.fields.m_Origin.fields.z;
    UStack_188.fields.m_Direction.fields.x = UStack_48.fields.m_Direction.fields.x;
    layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (layers == (System_Int32_array *)0x0) goto LAB_0404b729;
    if ((int)layers->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x44);
    mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
    layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar55 = CONCAT44(UStack_188.fields.m_Direction.fields.z,UStack_188.fields.m_Direction.fields.y)
    ;
    uVar47 = CONCAT44(UStack_188.fields.m_Direction.fields.x,UStack_188.fields.m_Origin.fields.z);
    ray.fields.m_Origin.fields.z = UStack_188.fields.m_Origin.fields.z;
    ray.fields.m_Direction.fields.x = UStack_188.fields.m_Direction.fields.x;
    ray.fields.m_Origin.fields.x = UStack_188.fields.m_Origin.fields.x;
    ray.fields.m_Origin.fields.y = UStack_188.fields.m_Origin.fields.y;
    ray.fields.m_Direction.fields.y = UStack_188.fields.m_Direction.fields.y;
    ray.fields.m_Direction.fields.z = UStack_188.fields.m_Direction.fields.z;
    pIVar54 = (Il2CppClass *)UStack_188.fields.m_Origin.fields._0_8_;
    bVar18 = UnityEngine_Physics__Raycast
                       (ray,(UnityEngine_RaycastHit_o *)&_Stack_b8,100000.0,layerMask,
                        (MethodInfo *)0x0);
    if ((char)bVar18 == '\0') {
      return;
    }
    if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto LAB_0404b729;
    bVar18 = Settings_KeybindSetting__GetKey(__this_01,0,(MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      pUVar21 = (__this->fields)._centerSquare;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar18 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        pUVar21 = (__this->fields)._centerSquare;
        if ((pUVar21 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0),
           pUVar19 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0404b729;
        bVar18 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
        if ((char)bVar18 != '\0') {
          pUVar21 = (__this->fields)._centerSquare;
          if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
          pUVar20 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar21,MethodInfo_Collider_GetComponent_Collider);
          pUVar11 = *(UnityEngine_Camera_o **)(CONCAT44(uVar33,uVar29) + 0x20);
          UVar50 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto LAB_0404b729;
          UnityEngine_Camera__ScreenPointToRay(&UStack_188,pUVar11,UVar50,(MethodInfo *)0x0);
          fStack_c8 = UStack_188.fields.m_Direction.fields.y;
          fStack_c4 = UStack_188.fields.m_Direction.fields.z;
          pIStack_d8 = (Il2CppClass *)UStack_188.fields.m_Origin.fields._0_8_;
          fStack_d0 = UStack_188.fields.m_Origin.fields.z;
          fStack_cc = UStack_188.fields.m_Direction.fields.x;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar18 = UnityEngine_Object__op_Inequality
                             (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar18 != '\0') {
            UStack_188.fields.m_Direction.fields.y = fStack_c8;
            UStack_188.fields.m_Direction.fields.z = fStack_c4;
            UStack_188.fields.m_Origin.fields._0_8_ = pIStack_d8;
            UStack_188.fields.m_Origin.fields.z = fStack_d0;
            UStack_188.fields.m_Direction.fields.x = fStack_cc;
            if (pUVar20 == (UnityEngine_Object_o *)0x0) goto LAB_0404b729;
            uVar55 = CONCAT44(fStack_c4,fStack_c8);
            uVar47 = CONCAT44(fStack_cc,fStack_d0);
            ray_00.fields.m_Origin.fields.z = fStack_d0;
            ray_00.fields.m_Direction.fields.x = fStack_cc;
            ray_00.fields.m_Origin.fields._0_8_ = pIStack_d8;
            ray_00.fields.m_Direction.fields.y = fStack_c8;
            ray_00.fields.m_Direction.fields.z = fStack_c4;
            pIVar54 = pIStack_d8;
            bVar18 = UnityEngine_Collider__Raycast
                               ((UnityEngine_Collider_o *)pUVar20,ray_00,
                                (UnityEngine_RaycastHit_o *)&_Stack_78,100000.0,(MethodInfo *)0x0);
            if ((char)bVar18 != '\0') {
              uStack_98 = uStack_58;
              uStack_94 = uStack_54;
              uStack_a8._0_2_ = (uint16_t)uStack_68;
              uStack_a8._2_1_ = uStack_68._2_1_;
              uStack_a8._3_1_ = uStack_68._3_1_;
              uStack_a8._4_4_ = uStack_68._4_4_;
              uStack_a0 = uStack_60;
              uStack_9c = uStack_5c;
              _Stack_b8 = _Stack_78;
              uStack_b0._0_4_ = (uint32_t)uStack_70;
              uStack_b0._4_2_ = uStack_70._4_2_;
              uStack_b0._6_2_ = uStack_70._6_2_;
            }
          }
        }
      }
    }
    __this_03.fields.m_Point.fields.z = (float)(int)uVar47;
    __this_03.fields.m_Normal.fields.x = (float)(int)((ulong)uVar47 >> 0x20);
    __this_03.fields.m_Point.fields._0_8_ = pIVar54;
    __this_03.fields.m_Normal.fields.y = (float)(int)uVar55;
    __this_03.fields.m_Normal.fields.z = (float)(int)((ulong)uVar55 >> 0x20);
    __this_03.fields.m_FaceID = (int)in_stack_fffffffffffffe10;
    __this_03.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffe10 >> 0x20);
    __this_03.fields.m_UV.fields.x = (float)uVar29;
    __this_03.fields.m_UV.fields.y = (float)uVar33;
    __this_03.fields.m_Collider = in_stack_fffffffffffffe20;
    __this_05 = UnityEngine_RaycastHit__get_collider(__this_03,(MethodInfo *)&_Stack_b8);
    if (__this_05 == (UnityEngine_Collider_o *)0x0) goto LAB_0404b729;
    pUVar21 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
    (__this->fields)._activeLine = pUVar21;
    il2cpp_runtime_glue(ppUVar1,pUVar21);
    pUVar21 = (__this->fields)._planeXY;
    pUVar7 = (__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar18 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                        (MethodInfo *)0x0);
    uVar26 = 1;
    if ((char)bVar18 == '\0') {
      pUVar21 = (__this->fields)._planeYZ;
      pUVar7 = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar18 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                          (MethodInfo *)0x0);
      if ((char)bVar18 == '\0') {
        pUVar21 = (__this->fields)._planeXZ;
        pUVar7 = (__this->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar18 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                            (MethodInfo *)0x0);
        uVar26 = (undefined1)bVar18;
      }
    }
    *(undefined1 *)&(__this->fields)._activeIsPlane = uVar26;
    pMVar23 = (MethodInfo *)(__this->fields)._centerSquare;
    pUVar21 = (__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar18 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)pMVar23,
                        (MethodInfo *)0x0);
    *(char *)((long)&(__this->fields)._activeIsPlane + 1) = (char)bVar18;
    __this_06 = __this;
    MapEditor_PositionGizmo__ResetColors(__this,pMVar23);
    MapEditor_PositionGizmo__SetLineColor
              (__this_06,(__this->fields)._activeLine,
               (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,method_00);
    __this_04.fields.m_Point.fields.z = (float)(int)uVar47;
    __this_04.fields.m_Normal.fields.x = (float)(int)((ulong)uVar47 >> 0x20);
    __this_04.fields.m_Point.fields._0_8_ = pIVar54;
    __this_04.fields.m_Normal.fields.y = (float)(int)uVar55;
    __this_04.fields.m_Normal.fields.z = (float)(int)((ulong)uVar55 >> 0x20);
    __this_04.fields.m_FaceID = (int)in_stack_fffffffffffffe10;
    __this_04.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffe10 >> 0x20);
    __this_04.fields.m_UV.fields.x = (float)uVar29;
    __this_04.fields.m_UV.fields.y = (float)uVar33;
    __this_04.fields.m_Collider = in_stack_fffffffffffffe20;
    UVar50 = UnityEngine_RaycastHit__get_point(__this_04,(MethodInfo *)&_Stack_b8);
    *(long *)&(__this->fields)._dragPlane.fields.m_Distance = UVar50.fields._0_8_;
    (__this->fields)._previousMousePoint.fields.y = UVar50.fields.z;
    if ((char)(__this->fields)._activeIsPlane == '\0') goto LAB_0404a53b;
    UVar50 = MapEditor_PositionGizmo__GetPlaneNormal(__this,(__this->fields)._activeLine,method_01);
    auVar53._0_4_ = UVar50.fields.z;
    auVar53._4_4_ = UVar50.fields.x;
    auVar53._8_4_ = UVar50.fields.y;
    pUVar21 = (__this->fields)._transform;
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
    uVar29 = extraout_XMM0_Dc;
    UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
    auStack_138._8_4_ = extraout_XMM0_Dc_00;
    auStack_138._0_8_ = UVar50.fields._0_8_;
    auStack_138._12_4_ = extraout_XMM0_Dd_00;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    auVar16._4_4_ = auVar53._8_4_;
    auVar16._0_4_ = auVar53._4_4_;
    auVar16._8_4_ = uVar29;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
      auVar16._4_4_ = auVar53._8_4_;
      auVar16._0_4_ = auVar53._4_4_;
      auVar16._8_4_ = uVar29;
    }
    uVar33 = 0;
    uVar32 = 0;
    fVar28 = auVar53._0_4_ * auVar53._0_4_ +
             auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
    if (fVar28 < 0.0) {
      fVar28 = sqrtf(fVar28);
      auVar16._4_4_ = auVar53._8_4_;
      auVar16._0_4_ = auVar53._4_4_;
      auVar16._8_4_ = uVar29;
      uVar33 = extraout_XMM0_Dc_01;
      uVar32 = extraout_XMM0_Dd_01;
      if (1e-05 < fVar28) goto LAB_0404a1f9;
LAB_0404a4b5:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata();
        DAT_056fdd15 = '\x01';
      }
      uVar47 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      auVar53._0_4_ = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar28 = SQRT(fVar28);
      if (fVar28 <= 1e-05) goto LAB_0404a4b5;
LAB_0404a1f9:
      auVar44._12_4_ = extraout_XMM0_Dd;
      auVar44._0_12_ = auVar16;
      auVar53._0_4_ = auVar53._0_4_ / fVar28;
      auVar45._4_4_ = fVar28;
      auVar45._0_4_ = fVar28;
      auVar45._8_4_ = uVar33;
      auVar45._12_4_ = uVar32;
      auVar45 = divps(auVar44,auVar45);
      uVar47 = auVar45._0_8_;
    }
    (__this->fields)._activeIsCenter = (int)uVar47;
    (__this->fields)._dragPlane.fields.m_Normal.fields.x = (float)(int)((ulong)uVar47 >> 0x20);
    (__this->fields)._dragPlane.fields.m_Normal.fields.y = auVar53._0_4_;
    (__this->fields)._dragPlane.fields.m_Normal.fields.z =
         -(UVar50.fields.z * auVar53._0_4_ +
          (float)auStack_138._4_4_ * (float)((ulong)uVar47 >> 0x20) +
          (float)auStack_138._0_4_ * (float)uVar47);
LAB_0404a53b:
    (__this->fields)._snapAnchorLocal.fields.z = 0.0;
    UVar50 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    (__this->fields)._hasSnapAnchor = (int)UVar50.fields._0_8_;
    (__this->fields)._axisSnapDirection = (int)((ulong)UVar50.fields._0_8_ >> 0x20);
    return;
  }
  if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto LAB_0404b729;
  bVar18 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
  if ((char)bVar18 == '\0') {
    pGVar22 = (__this->fields)._gameManager;
    if (pGVar22 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0404b729;
    pSVar8 = (pGVar22->fields).SelectedObjects;
    mapObjects = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)mapObjects,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar8,MethodInfo_List_1_Map_MapObject);
    auVar53 = il2cpp_runtime_glue(TypeInfo_TransformPositionCommand);
    pMVar23 = auVar53._0_8_;
    MapEditor_TransformPositionCommand___ctor
              ((MapEditor_TransformPositionCommand_o *)pMVar23,mapObjects,auVar53._8_8_);
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar22,(MapEditor_BaseCommand_o *)pMVar23,1,(MethodInfo *)0x0);
    MapEditor_PositionGizmo__ResetColors(__this,pMVar23);
    (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
    il2cpp_runtime_glue(ppUVar1,0);
    *(undefined2 *)&(__this->fields)._activeIsPlane = 0;
    *(undefined1 *)&(__this->fields)._previousMousePoint.fields.z = 0;
    *(undefined1 *)&(__this->fields)._snapAnchorLocal.fields.y = 0;
    *(undefined8 *)&(__this->fields)._vertexSnapOrigin.fields.z = 0;
    il2cpp_runtime_glue(&(__this->fields)._vertexSnapOrigin.fields.z,0);
    (__this->fields)._snapAnchorLocal.fields.z = 0.0;
    pGVar22 = (__this->fields)._gameManager;
  }
  else {
    if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto LAB_0404b729;
    bVar18 = Settings_KeybindSetting__GetKey(__this_01,0,(MethodInfo *)0x0);
    uVar24 = (undefined7)((ulong)owner >> 8);
    pMVar23 = (MethodInfo *)CONCAT71(uVar24,1);
    if ((char)bVar18 == '\0') {
      pMVar23 = (MethodInfo *)
                CONCAT71(uVar24,*(undefined1 *)((long)&(__this->fields)._activeIsPlane + 1));
    }
    *(char *)&(__this->fields)._previousMousePoint.fields.z = (char)pMVar23;
    if (*(char *)((long)&(__this->fields)._activeIsPlane + 1) == '\0') {
      if ((char)pMVar23 == '\0') {
LAB_0404a58a:
        if (CONCAT44(uVar33,uVar29) == 0) goto LAB_0404b729;
        bVar18 = (__this->fields)._activeIsPlane;
        pUVar11 = *(UnityEngine_Camera_o **)(CONCAT44(uVar33,uVar29) + 0x20);
        UVar50 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto LAB_0404b729;
        if ((char)bVar18 == '\0') {
          UnityEngine_Camera__ScreenPointToRay(&UStack_188,pUVar11,UVar50,(MethodInfo *)0x0);
          fVar28 = UStack_188.fields.m_Direction.fields.z;
          auVar53._8_4_ = UStack_188.fields.m_Direction.fields.y;
          auVar53._4_4_ = UStack_188.fields.m_Direction.fields.x;
          uVar47 = *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance;
          fVar38 = UStack_188.fields.m_Origin.fields.x;
          auStack_168._0_4_ = (float)uVar47 - fVar38;
          fVar43 = UStack_188.fields.m_Origin.fields.y;
          auStack_168._4_4_ = (float)((ulong)uVar47 >> 0x20) - fVar43;
          auStack_138._0_4_ = UStack_188.fields.m_Origin.fields.z;
          auVar53._0_4_ =
               (__this->fields)._previousMousePoint.fields.y - UStack_188.fields.m_Origin.fields.z;
          _fStack_160 = 0;
          fVar46 = (float)auStack_168._0_4_;
          fVar31 = (float)auStack_168._4_4_;
          if (DAT_0570266a == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_0570266a = '\x01';
            fVar46 = (float)auStack_168._0_4_;
            fVar31 = (float)auStack_168._4_4_;
          }
          fVar30 = fVar28 * fVar28 + auVar53._8_4_ * auVar53._8_4_ + auVar53._4_4_ * auVar53._4_4_;
          fVar46 = auVar53._0_4_ * auVar53._0_4_ + fVar31 * fVar31 + fVar46 * fVar46;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            fStack_158 = fVar30;
            il2cpp_init_class();
            fVar30 = fStack_158;
          }
          fVar30 = fVar30 * fVar46;
          if (fVar30 < 0.0) {
            fVar30 = sqrtf(fVar30);
            pMVar23 = TypeInfo_Math;
            fVar31 = fStack_158;
          }
          else {
            fVar30 = SQRT(fVar30);
            pMVar23 = TypeInfo_Math;
            fVar31 = fStack_158;
          }
          fVar36 = 0.0;
          TypeInfo_Math = pMVar23;
          fStack_158 = fVar31;
          if (1e-15 <= fVar30) {
            fVar30 = (fVar28 * auVar53._0_4_ +
                     auVar53._8_4_ * (float)auStack_168._4_4_ +
                     auVar53._4_4_ * (float)auStack_168._0_4_) / fVar30;
            fVar36 = 1.0;
            if (fVar30 <= 1.0) {
              fVar36 = fVar30;
            }
            fStack_158 = (float)(~-(uint)(-1.0 <= fVar30) & 0xbf800000 |
                                (uint)fVar36 & -(uint)(-1.0 <= fVar30));
            fVar30 = fStack_158;
            if (*(int *)((long)&pMVar23[2].parameters + 4) == 0) {
              uStack_154 = 0;
              uStack_150 = 0;
              uStack_14c = 0;
              il2cpp_init_class();
              fVar30 = fStack_158;
              fVar31 = fStack_158;
            }
            fStack_158 = fVar31;
            dVar14 = acos((double)fVar30,pMVar23);
            fVar36 = (float)dVar14 * 57.29578;
          }
          if (DAT_056fde1c == '\0') {
            fStack_158 = fVar36;
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fde1c = '\x01';
            iVar5 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            fVar36 = fStack_158;
            fVar31 = fStack_158;
          }
          else {
            iVar5 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            fVar31 = fStack_158;
          }
          fStack_158 = fVar36;
          fVar30 = fStack_158;
          if (iVar5 == 0) {
            il2cpp_init_class();
            fVar30 = fStack_158;
            fVar31 = fStack_158;
          }
          fStack_158 = fVar31;
          uStack_84 = 0;
          fStack_80 = 0.0;
          fStack_7c = 0.0;
          if (fVar46 < 0.0) {
            fStack_158 = fVar30 * 0.017453292;
            fStack_88 = sqrtf(fVar46);
            uStack_84 = extraout_XMM0_Db;
            fStack_80 = extraout_XMM0_Dc_02;
            fStack_7c = extraout_XMM0_Dd_02;
            fVar31 = fStack_158;
          }
          else {
            fStack_88 = SQRT(fVar46);
            fVar31 = fVar30 * 0.017453292;
          }
          fVar31 = cosf(fVar31);
          fVar31 = fStack_88 / fVar31;
          fVar30 = fStack_80 * 0.0;
          fVar36 = fStack_7c * 0.0;
          fVar38 = fVar38 + auVar53._4_4_ * fVar31;
          fVar43 = fVar43 + auVar53._8_4_ * fVar31;
          auVar53._4_4_ = (float)auStack_138._0_4_ + fVar28 * fVar31;
          uVar47 = *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance;
          auStack_138._0_4_ = auVar53._4_4_;
          auVar53._4_4_ = auVar53._4_4_ - (__this->fields)._previousMousePoint.fields.y;
          pUVar21 = (__this->fields)._lineY;
          pUVar7 = (__this->fields)._activeLine;
          uStack_198 = CONCAT44(fVar43,fVar38);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          fVar38 = fVar38 - (float)uVar47;
          fVar43 = fVar43 - (float)((ulong)uVar47 >> 0x20);
          auVar40._0_8_ = CONCAT44(fVar43,fVar38);
          auVar40._8_4_ = (fVar30 + 0.0) - 0.0;
          auVar40._12_4_ = (fVar36 + 0.0) - 0.0;
          auVar41 = auVar40;
          bVar18 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                              (MethodInfo *)0x0);
          auStack_1b8._0_8_ = auVar40._0_8_;
          if ((char)bVar18 != '\0') {
            if (DAT_056fde20 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fde20 = '\x01';
            }
            if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            uVar32 = 0;
            uVar34 = 0;
            if (fVar46 < 0.0) {
              fVar46 = sqrtf(fVar46);
              uVar32 = extraout_XMM0_Dc_03;
              uVar34 = extraout_XMM0_Dd_03;
              if (1e-05 < fVar46) goto LAB_0404aacb;
LAB_0404ab61:
              if (DAT_056fdd15 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fdd15 = '\x01';
              }
              uVar47 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              uVar32 = (undefined4)uVar47;
              uVar34 = (undefined4)((ulong)uVar47 >> 0x20);
              uVar35 = 0;
              uVar37 = 0;
              auVar53._0_4_ = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              lVar6 = *(long *)(CONCAT44(uVar33,uVar29) + 0x28);
            }
            else {
              fVar46 = SQRT(fVar46);
              if (fVar46 <= 1e-05) goto LAB_0404ab61;
LAB_0404aacb:
              auVar53._0_4_ = auVar53._0_4_ / fVar46;
              auVar12._4_4_ = fVar46;
              auVar12._0_4_ = fVar46;
              auVar12._8_4_ = uVar32;
              auVar12._12_4_ = uVar34;
              auVar45 = divps(_auStack_168,auVar12);
              uVar32 = auVar45._0_4_;
              uVar34 = auVar45._4_4_;
              uVar35 = auVar45._8_4_;
              uVar37 = auVar45._12_4_;
              lVar6 = *(long *)(CONCAT44(uVar33,uVar29) + 0x28);
            }
            if (lVar6 == 0) goto LAB_0404b729;
            auStack_168._4_4_ = uVar34;
            auStack_168._0_4_ = uVar32;
            fStack_160 = (float)uVar35;
            fStack_15c = (float)uVar37;
            if (*(UnityEngine_Transform_o **)(lVar6 + 0x10) == (UnityEngine_Transform_o *)0x0)
            goto LAB_0404b729;
            auVar53._8_4_ = auVar40._8_4_;
            fVar28 = auVar40._12_4_;
            fVar46 = fVar43;
            UVar50 = UnityEngine_Transform__get_up
                               (*(UnityEngine_Transform_o **)(lVar6 + 0x10),(MethodInfo *)0x0);
            fVar46 = UVar50.fields.z * auVar53._4_4_ +
                     UVar50.fields.y * fVar46 + fVar38 * UVar50.fields.x;
            auVar41._0_8_ =
                 CONCAT44(fVar43 + (float)auStack_168._4_4_ * fVar46 +
                                   (float)auStack_168._4_4_ * fVar46,
                          fVar38 + (float)auStack_168._0_4_ * fVar46 +
                                   (float)auStack_168._0_4_ * fVar46);
            auVar41._8_4_ = auVar40._8_4_ + fStack_160 * auVar53._8_4_ + fStack_160 * auVar53._8_4_;
            auVar41._12_4_ = auVar40._12_4_ + fStack_15c * fVar28 + fStack_15c * fVar28;
            auVar53._4_4_ = auVar53._4_4_ + auVar53._0_4_ * fVar46 + auVar53._0_4_ * fVar46;
            auStack_1b8._0_8_ = auVar41._0_8_;
          }
          if (*ppUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
          UVar50 = UnityEngine_Transform__get_right(*ppUVar1,(MethodInfo *)0x0);
          auVar53._0_4_ = UVar50.fields.x;
          auVar53._8_4_ = UVar50.fields.y;
          if (*ppUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
          pMVar25 = (MethodInfo *)0x0;
          fVar31 = extraout_XMM0_Dc_04;
          UVar51 = UnityEngine_Transform__get_right(*ppUVar1,(MethodInfo *)0x0);
          fVar28 = UVar51.fields.x;
          fVar46 = UVar51.fields.y;
          if (DAT_056fdd15 == '\0') {
            fStack_160 = (float)extraout_XMM0_Dc_05;
            auStack_168 = (undefined1  [8])UVar51.fields._0_8_;
            fStack_15c = (float)extraout_XMM0_Dd_05;
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
            fVar28 = (float)auStack_168._0_4_;
            fVar46 = (float)auStack_168._4_4_;
          }
          pGVar22 = (__this->fields)._gameManager;
          if (pGVar22 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0404b729;
          auVar53._4_4_ =
               auVar53._4_4_ * UVar51.fields.z +
               fVar46 * (float)auStack_1b8._4_4_ + (float)auStack_1b8._0_4_ * fVar28;
          auStack_1d8._0_4_ = UVar50.fields.z * auVar53._4_4_;
          register0x00001284 = auVar41._4_12_;
          auVar53._0_4_ = auVar53._0_4_ * auVar53._4_4_;
          auVar53._4_4_ = auVar53._8_4_ * auVar53._4_4_;
          auVar53._8_4_ = fVar31 * 0.0;
          auVar53._12_4_ = extraout_XMM0_Dd_04 * 0.0;
          auStack_1b8._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
          uVar27 = (uint)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1];
          iVar5 = (pGVar22->fields).CurrentGizmoMode;
          if (iVar5 == 0) {
            auStack_1b8._8_8_ = 0;
            pMVar25 = (MethodInfo *)(__this->fields)._lineX;
            pUVar21 = (__this->fields)._activeLine;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar18 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)pMVar25,
                                (MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              pMVar25 = (MethodInfo *)(__this->fields)._lineY;
              pUVar21 = (__this->fields)._activeLine;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar18 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)pMVar25,
                                  (MethodInfo *)0x0);
              if ((char)bVar18 != '\0') {
                auVar53._0_4_ = (float)auStack_1b8._0_4_;
                auVar53._8_8_ = 0;
                goto LAB_0404adc1;
              }
              pMVar25 = (MethodInfo *)(__this->fields)._lineZ;
              pUVar21 = (__this->fields)._activeLine;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar18 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)pMVar25,
                                  (MethodInfo *)0x0);
              if ((char)bVar18 == '\0') {
                _auStack_1d8 = ZEXT416(uVar27);
              }
              pGVar22 = (__this->fields)._gameManager;
              auVar53 = auStack_1b8._0_16_;
            }
            else {
              auStack_1b8._4_4_ = (undefined4)((ulong)auStack_1b8._0_8_ >> 0x20);
              auVar53._4_4_ = (float)auStack_1b8._4_4_;
LAB_0404adc1:
              _auStack_1d8 = ZEXT416(uVar27);
              pGVar22 = (__this->fields)._gameManager;
            }
            if (pGVar22 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0404b729;
            uVar47 = auVar53._0_8_;
            if ((char)(pGVar22->fields).Snap != '\0') goto LAB_0404ae3a;
LAB_0404af55:
            *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance = uStack_198;
LAB_0404b6b5:
            (__this->fields)._previousMousePoint.fields.y = (float)auStack_138._0_4_;
          }
          else {
            if (iVar5 != 1) {
              auVar53._8_8_ = 0;
              auVar53._0_8_ = auStack_1b8._0_8_;
              _auStack_1d8 = ZEXT416(uVar27);
            }
            uVar47 = auVar53._0_8_;
            if ((char)(pGVar22->fields).Snap == '\0') goto LAB_0404af55;
LAB_0404ae3a:
            uVar47 = auVar53._0_8_;
            iVar5 = (pGVar22->fields).CurrentGizmoMode;
            fVar28 = auVar53._0_4_;
            fVar46 = auVar53._4_4_;
            uVar29 = auVar53._8_4_;
            uStack_1dc = auVar53._12_4_;
            if (iVar5 == 1) {
              lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
              if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x50), lVar6 == 0)) goto LAB_0404b729;
              auStack_1b8._0_4_ = *(float *)(lVar6 + 0x14);
              if (DAT_056fde1c == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Math);
                uVar47 = CONCAT44(fVar46,fVar28);
                DAT_056fde1c = '\x01';
              }
              if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                il2cpp_init_class();
                uVar47 = CONCAT44(fVar46,fVar28);
              }
              auVar53._0_4_ = (float)((ulong)uVar47 >> 0x20);
              auVar53._0_4_ =
                   (float)auStack_1d8._0_4_ * (float)auStack_1d8._0_4_ +
                   auVar53._0_4_ * auVar53._0_4_ + (float)uVar47 * (float)uVar47;
              auStack_168._0_4_ = auVar53._0_4_;
              if (auVar53._0_4_ < 0.0) {
                auVar53._0_4_ = sqrtf(auVar53._0_4_);
              }
              else {
                auVar53._0_4_ = SQRT(auVar53._0_4_);
              }
              auVar53._0_4_ = auVar53._0_4_ / (float)auStack_1b8._0_4_;
              dVar14 = modf((double)auVar53._0_4_,(double *)&UStack_188,pMVar25);
              if (0.0 <= auVar53._0_4_) {
                if ((dVar14 != 0.5) || (NAN(dVar14))) {
                  auVar53._0_4_ = floorf(auVar53._0_4_ + 0.5);
                }
                else {
                  auVar53._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                  if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
                    auVar53._0_4_ = auVar53._0_4_ + 1.0;
                  }
                }
              }
              else if ((dVar14 != -0.5) || (NAN(dVar14))) {
                auVar53._0_4_ = ceilf(auVar53._0_4_ + -0.5);
              }
              else {
                auVar53._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
                  auVar53._0_4_ = auVar53._0_4_ + -1.0;
                }
              }
              if (DAT_056fde20 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Math);
                DAT_056fde20 = '\x01';
              }
              if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              uVar33 = 0;
              uVar32 = 0;
              if ((float)auStack_168._0_4_ < 0.0) {
                auVar53._4_4_ = sqrtf((float)auStack_168._0_4_);
                uVar33 = extraout_XMM0_Dc_06;
                uVar32 = extraout_XMM0_Dd_06;
              }
              else {
                auVar53._4_4_ = SQRT((float)auStack_168._0_4_);
              }
              auVar17._4_4_ = fVar46;
              auVar17._0_4_ = fVar28;
              auVar17._8_4_ = uVar29;
              auVar17._12_4_ = uStack_1dc;
              auVar53._0_4_ = auVar53._0_4_ * (float)auStack_1b8._0_4_;
              if (auVar53._4_4_ <= 1e-05) {
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                }
                auVar39 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
                auVar42._8_8_ = 0;
                auVar42._0_8_ = auVar39;
                auStack_1d8._0_4_ = *(undefined4 *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
                register0x00001284 = (undefined1  [12])0x0;
                auVar45 = _auStack_168;
              }
              else {
                auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ / auVar53._4_4_;
                auVar13._4_4_ = auVar53._4_4_;
                auVar13._0_4_ = auVar53._4_4_;
                auVar13._8_4_ = uVar33;
                auVar13._12_4_ = uVar32;
                auVar42 = divps(auVar17,auVar13);
                auVar39 = auVar42._0_8_;
                auVar45 = _auStack_168;
              }
              _auStack_168 = auVar42;
              auVar53._4_4_ = auVar53._0_4_;
              auVar53._8_4_ = auVar53._0_4_;
              if (DAT_056fde1c == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Math);
                DAT_056fde1c = '\x01';
                auVar45 = _auStack_168;
                auVar39 = auStack_168;
              }
              _auStack_168 = auVar45;
              auVar53._4_4_ = auVar53._4_4_ * SUB84(auVar39,0);
              auVar53._8_4_ = auVar53._8_4_ * (float)((ulong)auVar39 >> 0x20);
              uVar47 = CONCAT44(auVar53._8_4_,auVar53._4_4_);
              auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ * auVar53._0_4_;
              if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                il2cpp_init_class();
                uVar47 = CONCAT44(auVar53._8_4_,auVar53._4_4_);
              }
              fVar28 = (float)uVar47;
              fVar46 = (float)((ulong)uVar47 >> 0x20);
              auVar53._0_4_ =
                   (float)auStack_1d8._0_4_ * (float)auStack_1d8._0_4_ +
                   fVar46 * fVar46 + fVar28 * fVar28;
              if (0.0 <= auVar53._0_4_) goto LAB_0404b680;
LAB_0404b692:
              auVar53._0_4_ = sqrtf(auVar53._0_4_);
              uVar47 = CONCAT44(fVar46,fVar28);
              if (auVar53._0_4_ < (float)auStack_1b8._0_4_) goto LAB_0404b6c7;
LAB_0404b6ad:
              *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance = uStack_198;
              goto LAB_0404b6b5;
            }
            if (iVar5 != 0) goto LAB_0404af55;
            lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
            if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x50), lVar6 == 0)) goto LAB_0404b729;
            auStack_1b8._0_4_ = *(float *)(lVar6 + 0x14);
            pUVar21 = (__this->fields)._lineX;
            pUVar7 = (__this->fields)._activeLine;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar18 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                                (MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              pUVar21 = (__this->fields)._lineY;
              pUVar7 = (__this->fields)._activeLine;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar18 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                                  (MethodInfo *)0x0);
              if ((char)bVar18 != '\0') {
                pUVar21 = (__this->fields)._transform;
                if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
                pMVar23 = (MethodInfo *)0x0;
                UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
                auVar53._0_4_ = (fVar46 + UVar50.fields.y) / (float)auStack_1b8._0_4_;
                dVar14 = modf((double)auVar53._0_4_,(double *)&UStack_188,pMVar23);
                if (0.0 <= auVar53._0_4_) {
                  if ((dVar14 != 0.5) || (NAN(dVar14))) {
                    auVar53._0_4_ = floorf(auVar53._0_4_ + 0.5);
                  }
                  else {
                    auVar53._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                    if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
                      auVar53._0_4_ = auVar53._0_4_ + 1.0;
                      pUVar21 = (__this->fields)._transform;
                      goto joined_r0x0404b5b5;
                    }
                  }
LAB_0404b5cc:
                  pUVar21 = (__this->fields)._transform;
                }
                else if ((dVar14 != -0.5) || (NAN(dVar14))) {
                  auVar53._0_4_ = ceilf(auVar53._0_4_ + -0.5);
                  pUVar21 = (__this->fields)._transform;
                }
                else {
                  auVar53._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                  if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) == 0)
                  goto LAB_0404b5cc;
                  auVar53._0_4_ = auVar53._0_4_ + -1.0;
                  pUVar21 = (__this->fields)._transform;
                }
joined_r0x0404b5b5:
                if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
                pMVar25 = (MethodInfo *)0x0;
                UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
                uVar47 = CONCAT44(auVar53._0_4_ * (float)auStack_1b8._0_4_ - UVar50.fields.y,fVar28)
                ;
                goto LAB_0404b605;
              }
              pMVar25 = (MethodInfo *)(__this->fields)._lineZ;
              pUVar21 = (__this->fields)._activeLine;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar18 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)pMVar25,
                                  (MethodInfo *)0x0);
              if ((char)bVar18 != '\0') {
                pUVar21 = (__this->fields)._transform;
                if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
                pMVar23 = (MethodInfo *)0x0;
                UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
                auVar53._0_4_ =
                     ((float)auStack_1d8._0_4_ + UVar50.fields.z) / (float)auStack_1b8._0_4_;
                dVar14 = modf((double)auVar53._0_4_,(double *)&UStack_188,pMVar23);
                auStack_1d8._4_4_ = UStack_188.fields.m_Origin.fields.y;
                if (0.0 <= auVar53._0_4_) {
                  if ((dVar14 != 0.5) || (NAN(dVar14))) {
                    auVar53._0_4_ = floorf(auVar53._0_4_ + 0.5);
                    auStack_1d8._4_4_ = extraout_XMM0_Db_01;
                    uStack_1d0 = extraout_XMM0_Dc_08;
                    uStack_1cc = extraout_XMM0_Dd_08;
                  }
                  else {
                    uStack_1d0 = 0;
                    uStack_1cc = 0;
                    auVar53._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                    if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
                      auVar53._0_4_ = auVar53._0_4_ + 1.0;
                      pUVar21 = (__this->fields)._transform;
                      goto joined_r0x0404b593;
                    }
                  }
LAB_0404b73e:
                  pUVar21 = (__this->fields)._transform;
                }
                else if ((dVar14 != -0.5) || (NAN(dVar14))) {
                  auVar53._0_4_ = ceilf(auVar53._0_4_ + -0.5);
                  pUVar21 = (__this->fields)._transform;
                  auStack_1d8._4_4_ = extraout_XMM0_Db_00;
                  uStack_1d0 = extraout_XMM0_Dc_07;
                  uStack_1cc = extraout_XMM0_Dd_07;
                }
                else {
                  uStack_1d0 = 0;
                  uStack_1cc = 0;
                  auVar53._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                  if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) == 0)
                  goto LAB_0404b73e;
                  auVar53._0_4_ = auVar53._0_4_ + -1.0;
                  pUVar21 = (__this->fields)._transform;
joined_r0x0404b593:
                  uStack_1cc = 0;
                  uStack_1d0 = 0;
                }
                if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
                auStack_1d8._0_4_ = auVar53._0_4_ * (float)auStack_1b8._0_4_;
                pMVar25 = (MethodInfo *)0x0;
                UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
                auStack_1d8._0_4_ = auVar53._0_4_ * (float)auStack_1b8._0_4_ - UVar50.fields.z;
              }
              uVar47 = CONCAT44(fVar46,fVar28);
            }
            else {
              pUVar21 = (__this->fields)._transform;
              if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
              pMVar23 = (MethodInfo *)0x0;
              UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
              fVar28 = (UVar50.fields.x + fVar28) / (float)auStack_1b8._0_4_;
              dVar14 = modf((double)fVar28,(double *)&UStack_188,pMVar23);
              if (0.0 <= fVar28) {
                if ((dVar14 != 0.5) || (NAN(dVar14))) {
                  fVar28 = floorf(fVar28 + 0.5);
                }
                else {
                  fVar28 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                  if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
                    fVar28 = fVar28 + 1.0;
                    pUVar21 = (__this->fields)._transform;
                    goto joined_r0x0404b506;
                  }
                }
LAB_0404b51d:
                pUVar21 = (__this->fields)._transform;
              }
              else if ((dVar14 != -0.5) || (NAN(dVar14))) {
                fVar28 = ceilf(fVar28 + -0.5);
                pUVar21 = (__this->fields)._transform;
              }
              else {
                fVar28 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
                if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) == 0)
                goto LAB_0404b51d;
                fVar28 = fVar28 + -1.0;
                pUVar21 = (__this->fields)._transform;
              }
joined_r0x0404b506:
              if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
              pMVar25 = (MethodInfo *)0x0;
              UVar50 = UnityEngine_Transform__get_position(pUVar21,(MethodInfo *)0x0);
              auVar15._4_8_ = auVar53._8_8_;
              auVar15._0_4_ = fVar46;
              auVar48._0_8_ = auVar15._0_8_ << 0x20;
              auVar48._8_4_ = uVar29;
              auVar48._12_4_ = uStack_1dc;
              auVar49._4_12_ = auVar48._4_12_;
              auVar49._0_4_ = fVar28 * (float)auStack_1b8._0_4_ - UVar50.fields.x;
              uVar47 = auVar49._0_8_;
LAB_0404b605:
              fVar28 = (float)uVar47;
              fVar46 = (float)((ulong)uVar47 >> 0x20);
            }
            if (DAT_056fde1c == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              uVar47 = CONCAT44(fVar46,fVar28);
              DAT_056fde1c = '\x01';
            }
            if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
              il2cpp_init_class();
              uVar47 = CONCAT44(fVar46,fVar28);
            }
            auVar53._0_4_ = (float)((ulong)uVar47 >> 0x20);
            auVar53._0_4_ =
                 auStack_1d8._0_4_ * auStack_1d8._0_4_ +
                 auVar53._0_4_ * auVar53._0_4_ + (float)uVar47 * (float)uVar47;
            if (auVar53._0_4_ < 0.0) goto LAB_0404b692;
LAB_0404b680:
            if ((float)auStack_1b8._0_4_ <= SQRT(auVar53._0_4_)) goto LAB_0404b6ad;
          }
LAB_0404b6c7:
          uVar29 = (undefined4)uVar47;
          uVar33 = (undefined4)((ulong)uVar47 >> 0x20);
LAB_0404b6d0:
          UVar52.fields.y = (float)uVar33;
          UVar52.fields.x = (float)uVar29;
          UVar52.fields.z = auStack_1d8._0_4_;
          MapEditor_PositionGizmo__MoveSelectedObjects(__this,UVar52,pMVar25);
          MapEditor_PositionGizmo__ResetCenter(__this,pMVar25);
        }
        else {
          UnityEngine_Camera__ScreenPointToRay(&UStack_188,pUVar11,UVar50,(MethodInfo *)0x0);
          fStack_e8 = UStack_188.fields.m_Direction.fields.y;
          fStack_e4 = UStack_188.fields.m_Direction.fields.z;
          auStack_f8._0_4_ = UStack_188.fields.m_Origin.fields.x;
          auStack_f8._4_4_ = UStack_188.fields.m_Origin.fields.y;
          fStack_f0 = UStack_188.fields.m_Origin.fields.z;
          fStack_ec = UStack_188.fields.m_Direction.fields.x;
          uVar2 = (__this->fields)._activeIsCenter;
          uVar3 = (__this->fields)._dragPlane.fields.m_Normal.fields.x;
          auVar53._0_4_ = (__this->fields)._dragPlane.fields.m_Normal.fields.y;
          auVar53._4_4_ =
               UStack_188.fields.m_Direction.fields.z * auVar53._0_4_ +
               UStack_188.fields.m_Direction.fields.y * (float)uVar3 +
               UStack_188.fields.m_Direction.fields.x * (float)uVar2;
          auVar53._0_4_ =
               -(auVar53._0_4_ * UStack_188.fields.m_Origin.fields.z +
                UStack_188.fields.m_Origin.fields.y * (float)uVar3 +
                UStack_188.fields.m_Origin.fields.x * (float)uVar2) -
               (__this->fields)._dragPlane.fields.m_Normal.fields.z;
          if (DAT_056fdea3 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Mathf);
            DAT_056fdea3 = '\x01';
          }
          auVar53._8_4_ = ABS(auVar53._4_4_);
          if (auVar53._8_4_ <= 0.0) {
            auVar53._8_4_ = 0.0;
          }
          fVar46 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
          fVar28 = auVar53._8_4_ * 1e-06;
          if (auVar53._8_4_ * 1e-06 <= fVar46) {
            fVar28 = fVar46;
          }
          if ((fVar28 <= ABS(0.0 - auVar53._4_4_)) && (0.0 < auVar53._0_4_ / auVar53._4_4_)) {
            __this_02.fields.m_Origin.fields.z = (float)(int)in_stack_fffffffffffffe00;
            __this_02.fields.m_Direction.fields.x =
                 (float)(int)((ulong)in_stack_fffffffffffffe00 >> 0x20);
            __this_02.fields.m_Origin.fields.x = (float)(int)in_stack_fffffffffffffdf8;
            __this_02.fields.m_Origin.fields.y =
                 (float)(int)((ulong)in_stack_fffffffffffffdf8 >> 0x20);
            __this_02.fields.m_Direction.fields.y = (float)(int)in_stack_fffffffffffffe08;
            __this_02.fields.m_Direction.fields.z =
                 (float)(int)((ulong)in_stack_fffffffffffffe08 >> 0x20);
            UVar50 = UnityEngine_Ray__GetPoint
                               (__this_02,auVar53._0_4_ / auVar53._4_4_,(MethodInfo *)auStack_f8);
            fStack_120 = UVar50.fields.z;
            pIStack_128 = UVar50.fields._0_8_;
            uVar47 = *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance;
            UVar51.fields.x = UVar50.fields.x - (float)uVar47;
            UVar51.fields.y = UVar50.fields.y - (float)((ulong)uVar47 >> 0x20);
            UVar51.fields.z = fStack_120 - (__this->fields)._previousMousePoint.fields.y;
            UVar50 = MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle
                               (__this,UVar51,(__this->fields)._activeLine,method_04);
            fStack_140 = UVar50.fields.z;
            auStack_148 = UVar50.fields._0_8_;
            pMVar25 = (MethodInfo *)auStack_148;
            MapEditor_PositionGizmo__ApplySnap
                      (__this,(UnityEngine_Vector3_o *)pMVar25,(UnityEngine_Vector3_o *)&pIStack_128
                       ,pMVar23);
            uVar29 = auStack_148._0_4_;
            uVar33 = auStack_148._4_4_;
            _auStack_1d8 = ZEXT416((uint)fStack_140);
            goto LAB_0404b6d0;
          }
        }
        cVar4 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
      }
      else {
        pUVar21 = (__this->fields)._lineX;
        pUVar7 = (__this->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar18 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                            (MethodInfo *)0x0);
        pMVar25 = extraout_RDX;
        if ((char)bVar18 == '\0') {
          pUVar21 = (__this->fields)._lineY;
          pUVar7 = (__this->fields)._activeLine;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar18 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                              (MethodInfo *)0x0);
          pMVar25 = extraout_RDX_00;
          if ((char)bVar18 == '\0') {
            pUVar21 = (__this->fields)._lineZ;
            pUVar7 = (__this->fields)._activeLine;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar18 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)pUVar21,
                                (MethodInfo *)0x0);
            pMVar25 = method_03;
            if ((char)bVar18 == '\0') {
              if (*(char *)&(__this->fields)._previousMousePoint.fields.z != '\0') {
                MapEditor_PositionGizmo__DoVertexSnap
                          (__this,(Cameras_BaseCamera_o *)CONCAT44(uVar33,uVar29),method_03);
                cVar4 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
                goto joined_r0x0404a48d;
              }
              goto LAB_0404a58a;
            }
          }
        }
        MapEditor_PositionGizmo__DoAxisSurfaceSnap
                  (__this,(Cameras_BaseCamera_o *)CONCAT44(uVar33,uVar29),pMVar25);
        cVar4 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
      }
    }
    else {
      MapEditor_PositionGizmo__DoFreeDragVertexSnap
                (__this,(Cameras_BaseCamera_o *)CONCAT44(uVar33,uVar29),method_02);
      cVar4 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
    }
joined_r0x0404a48d:
    if ((cVar4 != '\0') && (*(char *)&(__this->fields)._snapAnchorLocal.fields.y != '\0')) {
      pUVar20 = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar18 = UnityEngine_Object__op_Inequality
                         (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        pUVar21 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
        if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
        pUVar7 = (__this->fields)._transform;
        UVar50 = UnityEngine_Transform__TransformPoint
                           (pUVar21,*(UnityEngine_Vector3_Fields *)
                                     &(__this->fields)._snapAnchorTransform,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_0404b729;
        UnityEngine_Transform__set_position(pUVar7,UVar50,(MethodInfo *)0x0);
        pGVar22 = (__this->fields)._gameManager;
        goto joined_r0x0404a3d1;
      }
    }
    pGVar22 = (__this->fields)._gameManager;
  }
joined_r0x0404a3d1:
  if (pGVar22 != (GameManagers_MapEditorGameManager_o *)0x0) {
    *(undefined1 *)&(pGVar22->fields).IgnoreNextSelect = 1;
    return;
  }
LAB_0404b729:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$GetPlaneNormal
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__GetPlaneNormal (MapEditor_PositionGizmo_o* __this, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x404bfe0

UnityEngine_Vector3_o
MapEditor_PositionGizmo__GetPlaneNormal
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Transform_o *plane,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Vector3_Fields UVar3;
  
  if (DAT_05704402 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704402 = '\x01';
  }
  pUVar1 = (__this->fields)._planeXY;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0)
  ;
  if ((char)bVar2 == '\0') {
    pUVar1 = (__this->fields)._planeYZ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields)._planeXZ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,
                         (MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        UVar3 = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      }
      else {
        pUVar1 = (__this->fields)._transform;
        if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0404c10a;
        UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_up(pUVar1,(MethodInfo *)0x0);
      }
    }
    else {
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0404c10a;
      UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_right(pUVar1,(MethodInfo *)0x0)
      ;
    }
  }
  else {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
LAB_0404c10a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0)
    ;
  }
  return (UnityEngine_Vector3_o)UVar3;
}


// MapEditor.PositionGizmo$$ProjectDragOntoPlaneHandle
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o drag, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x404d9a0

UnityEngine_Vector3_o
MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o drag,
          UnityEngine_Transform_o *plane,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  UnityEngine_Transform_o *pUVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  float local_48;
  
  fVar6 = drag.fields.z;
  fVar4 = drag.fields.y;
  if (DAT_05704403 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704403 = '\x01';
    method = extraout_RDX;
  }
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    local_48 = drag.fields.x;
    if ((pGVar1->fields).CurrentGizmoMode == 0) {
      pUVar2 = (__this->fields)._planeXY;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar2,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pUVar2 = (__this->fields)._planeYZ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar2,
                           (MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pUVar2 = (__this->fields)._planeXZ;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar2,
                             (MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            fVar4 = 0.0;
          }
        }
        else {
          local_48 = 0.0;
        }
      }
      else {
        fVar6 = 0.0;
      }
    }
    else {
      UVar7 = MapEditor_PositionGizmo__GetPlaneNormal(__this,plane,method);
      fVar5 = UVar7.fields.z * fVar6 + UVar7.fields.y * fVar4 + local_48 * UVar7.fields.x;
      local_48 = local_48 - fVar5 * UVar7.fields.x;
      fVar4 = fVar4 - fVar5 * UVar7.fields.y;
      fVar6 = fVar6 - UVar7.fields.z * fVar5;
    }
    UVar7.fields.y = fVar4;
    UVar7.fields.x = local_48;
    UVar7.fields.z = fVar6;
    return (UnityEngine_Vector3_o)UVar7.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$ApplySnap
// il2cpp: void MapEditor_PositionGizmo__ApplySnap (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o* frameDelta, UnityEngine_Vector3_o* mousePoint, const MethodInfo* method);
// 0x404db30

void MapEditor_PositionGizmo__ApplySnap
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o *frameDelta,
               UnityEngine_Vector3_o *mousePoint,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  GameManagers_MapEditorGameManager_o *pGVar11;
  long lVar12;
  UnityEngine_Transform_o *pUVar13;
  double dVar14;
  bool_conflict bVar15;
  MethodInfo *pMVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float extraout_XMM0_Dc;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float fVar21;
  undefined1 auVar23 [16];
  UnityEngine_Vector3_o UVar24;
  double local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined8 uVar22;
  
  pMVar16 = (MethodInfo *)frameDelta;
  if (DAT_05704404 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05704404 = '\x01';
  }
  pGVar11 = (__this->fields)._gameManager;
  if (pGVar11 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0404e555;
  if ((char)(pGVar11->fields).Snap == '\0') goto LAB_0404e531;
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x50), lVar12 == 0)) goto LAB_0404e555;
  fVar1 = *(float *)(lVar12 + 0x14);
  if ((pGVar11->fields).CurrentGizmoMode == 0) {
    pUVar13 = (__this->fields)._transform;
    if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto LAB_0404e555;
    UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
    uVar3 = (frameDelta->fields).x;
    uVar7 = (frameDelta->fields).y;
    local_58 = (float)uVar7 + UVar24.fields.y;
    fStack_50 = extraout_XMM0_Dc + 0.0;
    fStack_4c = extraout_XMM0_Dd + 0.0;
    local_48._4_4_ = local_58;
    local_48._0_4_ = (float)uVar3 + UVar24.fields.x;
    fStack_40 = fStack_50;
    fStack_3c = fStack_4c;
    fVar17 = UVar24.fields.z + (frameDelta->fields).z;
    pMVar16 = (MethodInfo *)(__this->fields)._planeXY;
    pUVar13 = (__this->fields)._activeLine;
    fStack_54 = local_58;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)pMVar16,
                        (MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      pMVar16 = (MethodInfo *)(__this->fields)._planeYZ;
      pUVar13 = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar15 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)pMVar16,
                          (MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        pMVar16 = (MethodInfo *)(__this->fields)._planeXZ;
        pUVar13 = (__this->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar15 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)pMVar16,
                            (MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          local_58 = (float)local_48._0_4_ / fVar1;
          dVar14 = modf((double)local_58,&local_60,pMVar16);
          uVar19 = (undefined4)((ulong)local_60 >> 0x20);
          if (0.0 <= local_58) {
            if ((dVar14 != 0.5) || (NAN(dVar14))) {
              local_58 = floorf(local_58 + 0.5);
              uVar19 = extraout_XMM0_Db_02;
              fStack_50 = (float)extraout_XMM0_Dc_04;
              fStack_4c = (float)extraout_XMM0_Dd_04;
            }
            else {
              fStack_50 = 0.0;
              fStack_4c = 0.0;
              local_58 = (float)local_60;
              if (((long)local_60 & 1U) != 0) {
                local_58 = local_58 + 1.0;
              }
            }
          }
          else if ((dVar14 != -0.5) || (NAN(dVar14))) {
            local_58 = ceilf(local_58 + -0.5);
            uVar19 = extraout_XMM0_Db_01;
            fStack_50 = (float)extraout_XMM0_Dc_03;
            fStack_4c = (float)extraout_XMM0_Dd_03;
          }
          else {
            fStack_50 = 0.0;
            fStack_4c = 0.0;
            local_58 = (float)local_60;
            if (((long)local_60 & 1U) != 0) {
              local_58 = local_58 + -1.0;
            }
          }
          local_58 = local_58 * fVar1;
          fVar17 = fVar17 / fVar1;
          fStack_54 = (float)uVar19;
          dVar14 = modf((double)fVar17,&local_60,pMVar16);
          if (0.0 <= fVar17) {
            if ((dVar14 != 0.5) || (NAN(dVar14))) {
              fVar17 = floorf(fVar17 + 0.5);
            }
            else {
              fVar17 = (float)local_60;
              if (((long)local_60 & 1U) != 0) {
                fVar17 = fVar17 + 1.0;
              }
            }
          }
          else if ((dVar14 != -0.5) || (NAN(dVar14))) {
            fVar17 = ceilf(fVar17 + -0.5);
          }
          else {
            fVar17 = (float)local_60;
            if (((long)local_60 & 1U) != 0) {
              fVar17 = fVar17 + -1.0;
            }
          }
          fStack_54 = (float)local_48._4_4_;
          fStack_50 = fStack_40;
          fStack_4c = fStack_3c;
          goto LAB_0404e463;
        }
        local_58 = (float)local_48._0_4_;
        fStack_54 = (float)local_48._4_4_;
        fStack_50 = fStack_40;
        fStack_4c = fStack_3c;
      }
      else {
        local_58 = local_58 / fVar1;
        dVar14 = modf((double)local_58,&local_60,pMVar16);
        if (0.0 <= local_58) {
          if ((dVar14 != 0.5) || (NAN(dVar14))) {
            fStack_54 = floorf(local_58 + 0.5);
          }
          else {
            fStack_54 = (float)local_60;
            if (((long)local_60 & 1U) != 0) {
              fStack_54 = fStack_54 + 1.0;
            }
          }
        }
        else if ((dVar14 != -0.5) || (NAN(dVar14))) {
          fStack_54 = ceilf(local_58 + -0.5);
        }
        else {
          fStack_54 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fStack_54 = fStack_54 + -1.0;
          }
        }
        fStack_54 = fStack_54 * fVar1;
        local_58 = (float)local_48._0_4_;
        fStack_50 = fStack_40;
        fStack_4c = fStack_3c;
        fVar17 = fVar17 / fVar1;
        dVar14 = modf((double)fVar17,&local_60,pMVar16);
        if (0.0 <= fVar17) {
          if ((dVar14 != 0.5) || (NAN(dVar14))) {
            fVar17 = floorf(fVar17 + 0.5);
            goto LAB_0404e36b;
          }
          fVar17 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fVar17 = fVar17 + 1.0;
          }
        }
        else {
          if ((dVar14 != -0.5) || (NAN(dVar14))) {
            fVar17 = ceilf(fVar17 + -0.5);
LAB_0404e36b:
            fVar17 = fVar17 * fVar1;
            local_58 = local_58;
            fStack_50 = fStack_50;
            fStack_4c = fStack_4c;
            goto LAB_0404e469;
          }
          fVar17 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fVar17 = fVar17 + -1.0;
          }
        }
LAB_0404e463:
        fVar17 = fVar17 * fVar1;
        local_58 = local_58;
      }
    }
    else {
      local_48._0_4_ = (float)local_48._0_4_ / fVar1;
      dVar14 = modf((double)(float)local_48._0_4_,&local_60,pMVar16);
      uVar19 = (undefined4)((ulong)local_60 >> 0x20);
      if (0.0 <= (float)local_48._0_4_) {
        if ((dVar14 != 0.5) || (NAN(dVar14))) {
          fVar18 = floorf((float)local_48._0_4_ + 0.5);
          uVar19 = extraout_XMM0_Db_00;
          fStack_40 = (float)extraout_XMM0_Dc_02;
          fStack_3c = (float)extraout_XMM0_Dd_02;
        }
        else {
          fStack_40 = 0.0;
          fStack_3c = 0.0;
          fVar18 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fVar18 = fVar18 + 1.0;
          }
        }
      }
      else if ((dVar14 != -0.5) || (NAN(dVar14))) {
        fVar18 = ceilf((float)local_48._0_4_ + -0.5);
        uVar19 = extraout_XMM0_Db;
        fStack_40 = (float)extraout_XMM0_Dc_01;
        fStack_3c = (float)extraout_XMM0_Dd_01;
      }
      else {
        fStack_40 = 0.0;
        fStack_3c = 0.0;
        fVar18 = (float)local_60;
        if (((long)local_60 & 1U) != 0) {
          fVar18 = fVar18 + -1.0;
        }
      }
      local_48._4_4_ = uVar19;
      local_48._0_4_ = fVar18 * fVar1;
      local_58 = local_58 / fVar1;
      dVar14 = modf((double)local_58,&local_60,pMVar16);
      if (0.0 <= local_58) {
        if ((dVar14 != 0.5) || (NAN(dVar14))) {
          fStack_54 = floorf(local_58 + 0.5);
        }
        else {
          fStack_54 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fStack_54 = fStack_54 + 1.0;
          }
        }
      }
      else if ((dVar14 != -0.5) || (NAN(dVar14))) {
        fStack_54 = ceilf(local_58 + -0.5);
      }
      else {
        fStack_54 = (float)local_60;
        if (((long)local_60 & 1U) != 0) {
          fStack_54 = fStack_54 + -1.0;
        }
      }
      fStack_54 = fStack_54 * fVar1;
      local_58 = (float)local_48._0_4_;
      fStack_50 = fStack_40;
      fStack_4c = fStack_3c;
    }
LAB_0404e469:
    pUVar13 = (__this->fields)._transform;
    if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
LAB_0404e555:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
    (frameDelta->fields).x = local_58 - UVar24.fields.x;
    (frameDelta->fields).y = fStack_54 - UVar24.fields.y;
    (frameDelta->fields).z = fVar17 - UVar24.fields.z;
  }
  else {
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    fVar17 = (frameDelta->fields).x;
    uVar2 = (frameDelta->fields).y;
    uVar6 = (frameDelta->fields).z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_58 = fVar17;
      il2cpp_init_class();
      fVar17 = local_58;
    }
    fVar17 = (float)uVar6 * (float)uVar6 + fVar17 * fVar17 + (float)uVar2 * (float)uVar2;
    if (fVar17 < 0.0) {
      fVar17 = sqrtf(fVar17);
    }
    else {
      fVar17 = SQRT(fVar17);
    }
    local_58 = fVar17 / fVar1;
    dVar14 = modf((double)local_58,&local_60,pMVar16);
    if (local_58 < 0.0) {
      if ((dVar14 != -0.5) || (NAN(dVar14))) {
        fVar18 = ceilf(local_58 + -0.5);
      }
      else {
        fVar18 = (float)local_60;
        if (((long)local_60 & 1U) != 0) {
          fVar18 = fVar18 + -1.0;
        }
      }
    }
    else if ((dVar14 != 0.5) || (NAN(dVar14))) {
      fVar18 = floorf(local_58 + 0.5);
    }
    else {
      fVar18 = (float)local_60;
      if (((long)local_60 & 1U) != 0) {
        fVar18 = fVar18 + 1.0;
      }
    }
    if (0.0 < fVar17) {
      uVar4 = (frameDelta->fields).x;
      uVar8 = (frameDelta->fields).y;
      local_48._4_4_ = uVar8;
      local_48._0_4_ = uVar4;
      register0x000012c8 = 0;
      local_58 = (frameDelta->fields).z;
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        iVar10 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar10 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar10 == 0) {
        il2cpp_init_class();
      }
      uVar19 = 0;
      uVar20 = 0;
      fVar17 = local_58 * local_58 +
               local_48._4_4_ * local_48._4_4_ + local_48._0_4_ * local_48._0_4_;
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
        uVar19 = extraout_XMM0_Dc_00;
        uVar20 = extraout_XMM0_Dd_00;
        if (1e-05 < fVar17) goto LAB_0404df66;
LAB_0404de5d:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar22 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar21 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar17 = SQRT(fVar17);
        if (fVar17 <= 1e-05) goto LAB_0404de5d;
LAB_0404df66:
        fVar21 = local_58 / fVar17;
        auVar23._4_4_ = fVar17;
        auVar23._0_4_ = fVar17;
        auVar23._8_4_ = uVar19;
        auVar23._12_4_ = uVar20;
        auVar23 = divps(_local_48,auVar23);
        uVar22 = auVar23._0_8_;
      }
      fVar18 = fVar18 * fVar1;
      (frameDelta->fields).x = fVar18 * (float)uVar22;
      (frameDelta->fields).y = fVar18 * (float)((ulong)uVar22 >> 0x20);
      (frameDelta->fields).z = fVar21 * fVar18;
    }
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  fVar17 = (frameDelta->fields).x;
  uVar5 = (frameDelta->fields).y;
  uVar9 = (frameDelta->fields).z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    local_58 = fVar17;
    il2cpp_init_class();
    fVar17 = local_58;
  }
  fVar17 = (float)uVar9 * (float)uVar9 + fVar17 * fVar17 + (float)uVar5 * (float)uVar5;
  if (fVar17 < 0.0) {
    fVar17 = sqrtf(fVar17);
  }
  else {
    fVar17 = SQRT(fVar17);
  }
  if (fVar17 < fVar1) {
    return;
  }
LAB_0404e531:
  uVar22 = *(undefined8 *)&mousePoint->fields;
  (__this->fields)._previousMousePoint.fields.y = (mousePoint->fields).z;
  *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance = uVar22;
  return;
}


// MapEditor.PositionGizmo$$DoVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x404d630

void MapEditor_PositionGizmo__DoVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  MethodInfo *in_RCX;
  MethodInfo *in_R9;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  undefined8 uVar9;
  float fVar10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_HashSet_Enumerator_T__c *local_68;
  Il2CppMethodPointer pIStack_60;
  Il2CppObject *local_58;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  Il2CppRGCTXData *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  InvokerMethod pIStack_20;
  
  if (DAT_05704405 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704405 = '\x01';
  }
  fVar10 = 0.0;
  uVar9._0_4_ = 0.0;
  uVar9._4_4_ = 0.0;
  pIVar11 = (Il2CppObject *)0x0;
  local_68 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_58 = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto LAB_0404d8df;
  if ((pSVar2->fields)._count == 0) {
    return;
  }
  if (*(char *)&(__this->fields)._snapAnchorLocal.fields.y == '\0') {
LAB_0404d758:
    local_30 = (Il2CppRGCTXData *)0x0;
    local_48.fields._index = 0;
    local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
    in_RCX = (MethodInfo *)&stack0xffffffffffffffd0;
    bVar3 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                      (__this,camera,(UnityEngine_Vector3_o *)&stack0xffffffffffffff78,
                       (UnityEngine_Transform_o **)in_RCX,(UnityEngine_Vector3_o *)&local_48,in_R9);
    if ((char)bVar3 == '\0') {
      return;
    }
  }
  else {
    x = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto LAB_0404d758;
    pUVar4 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0404d8df;
    UVar8 = UnityEngine_Transform__TransformPoint
                      (pUVar4,*(UnityEngine_Vector3_Fields *)&(__this->fields)._snapAnchorTransform,
                       (MethodInfo *)0x0);
    fVar10 = UVar8.fields.z;
    uVar9 = UVar8.fields._0_8_;
  }
  bVar3 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
                    (__this,camera,INFINITY,(UnityEngine_Vector3_o *)&stack0xffffffffffffff88,in_RCX
                    );
  if ((char)bVar3 != '\0') {
    fVar5 = SUB84(pIVar11,0) - (float)uVar9;
    fVar6 = (float)((ulong)pIVar11 >> 0x20) - SUB84(uVar9,4);
    fVar7 = 0.0 - fVar10;
    uStack_24 = fVar6;
    local_28 = fVar5;
    pIStack_20 = (InvokerMethod)0x0;
    if (1e-08 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) {
      pGVar1 = (__this->fields)._gameManager;
      if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)
                      (pGVar1->fields).SelectedObjects,
         __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
LAB_0404d8df:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__GetEnumerator(&local_48,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
      local_58 = local_48.fields._current;
      pIStack_60 = (Il2CppMethodPointer)CONCAT44(local_48.fields._version,local_48.fields._index);
      local_68 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48.fields._set;
      while (__this_01.fields._index = (int32_t)fVar10,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar9,
            __this_01.fields._version = (int32_t)fVar7, __this_01.fields._current = pIVar11,
            bVar3 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185890 *)&local_68), (char)bVar3 != '\0') {
        if (local_58 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (local_58[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar4 = UnityEngine_GameObject__get_transform(local_58[1].monitor,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar8 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
        value.fields.x = UVar8.fields.x + (float)local_28;
        value.fields.y = UVar8.fields.y + (float)uStack_24;
        value.fields.z = UVar8.fields.z + fVar7;
        UnityEngine_Transform__set_position(pUVar4,value,(MethodInfo *)0x0);
      }
      __this_02.fields._index = (int32_t)fVar10;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar9;
      __this_02.fields._version = (int32_t)fVar7;
      __this_02.fields._current = pIVar11;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185880 *)&local_68);
    }
  }
  return;
}


// MapEditor.PositionGizmo$$DoAxisSurfaceSnap
// il2cpp: void MapEditor_PositionGizmo__DoAxisSurfaceSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x404c8d0

void MapEditor_PositionGizmo__DoAxisSurfaceSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Camera_o *pUVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  UnityEngine_Collider_c *x_00;
  UnityEngine_Collider_o *pUVar7;
  System_Object_array *pSVar8;
  undefined1 auVar9 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  UnityEngine_RaycastHit_o __this_06;
  undefined1 auVar10 [16];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar11;
  bool_conflict bVar12;
  uint uVar13;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar14;
  System_Collections_Generic_List_object__o *__this_07;
  System_Object_array *pSVar15;
  System_Int32_array *layers;
  UnityEngine_Transform_o *pUVar16;
  uint uVar17;
  long lVar18;
  MethodInfo *in_R9;
  float fVar19;
  float fVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o direction;
  undefined1 in_stack_fffffffffffffeb8 [12];
  Il2CppObject *pIVar33;
  float fVar34;
  undefined4 in_stack_fffffffffffffed4;
  undefined1 local_118 [32];
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [24];
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  _union_247328 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uVar27;
  
  if (DAT_05704406 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_init_method_metadata(&TypeInfo_List_Collider);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05704406 = '\x01';
  }
  fVar34 = 0.0;
  pIVar33 = (Il2CppObject *)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_58._0_2_ = 0;
  uStack_58._2_1_ = '\0';
  uStack_58._3_1_ = '\0';
  uStack_58._4_4_ = 0;
  uStack_50 = 0;
  local_4c = 0;
  local_68.genericMethod = (void *)0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_2_ = 0;
  uStack_60._6_2_ = 0;
  local_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_118._8_8_ = (Il2CppMethodPointer)0x0;
  local_118._16_8_ = (UnityEngine_Collider_o *)0x0;
  local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_a8._8_8_ = (Il2CppMethodPointer)0x0;
  local_a8._16_8_ = (UnityEngine_Collider_o *)0x0;
  pGVar3 = (__this->fields)._gameManager;
  if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar4 = (pGVar3->fields).SelectedObjects,
     pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto LAB_0404d375;
  if ((pSVar4->fields)._count == 0) {
    return;
  }
  pUVar16 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar12 != '\0') {
    return;
  }
  if (*(char *)&(__this->fields)._snapAnchorLocal.fields.y == '\0') {
LAB_0404cae7:
    local_a8._24_8_ = (char *)0x0;
    local_d0.fields._index = 0;
    local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    bVar12 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                       (__this,camera,(UnityEngine_Vector3_o *)&stack0xfffffffffffffec8,
                        (UnityEngine_Transform_o **)(local_a8 + 0x18),
                        (UnityEngine_Vector3_o *)&local_d0,in_R9);
    if ((char)bVar12 == '\0') {
      return;
    }
    pUVar16 = (__this->fields)._activeLine;
  }
  else {
    x = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') goto LAB_0404cae7;
    pUVar16 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto LAB_0404d375;
    UVar32 = UnityEngine_Transform__TransformPoint
                       (pUVar16,*(UnityEngine_Vector3_Fields *)
                                 &(__this->fields)._snapAnchorTransform,(MethodInfo *)0x0);
    fVar34 = UVar32.fields.z;
    pIVar33 = UVar32.fields._0_8_;
    pUVar16 = (__this->fields)._activeLine;
  }
  if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto LAB_0404d375;
  UVar32 = UnityEngine_Transform__get_right(pUVar16,(MethodInfo *)0x0);
  fVar24 = UVar32.fields.z;
  fVar29 = UVar32.fields.x;
  fVar25 = UVar32.fields.y;
  uVar22 = extraout_XMM0_Dc;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  uVar21 = 0;
  uVar23 = 0;
  fVar19 = fVar24 * fVar24 + fVar25 * fVar25 + fVar29 * fVar29;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
    uVar21 = extraout_XMM0_Dc_00;
    uVar23 = extraout_XMM0_Dd_00;
    if (1e-05 < fVar19) goto LAB_0404cc07;
LAB_0404cba8:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    uVar27 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar25 = (float)uVar27;
    fVar19 = (float)((ulong)uVar27 >> 0x20);
    fVar26 = 0.0;
    fVar24 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    fVar29 = (__this->fields)._snapAnchorLocal.fields.z;
  }
  else {
    fVar19 = SQRT(fVar19);
    if (fVar19 <= 1e-05) goto LAB_0404cba8;
LAB_0404cc07:
    fVar24 = fVar24 / fVar19;
    auVar10._4_4_ = fVar25;
    auVar10._0_4_ = fVar29;
    auVar10._8_4_ = uVar22;
    auVar10._12_4_ = extraout_XMM0_Dd;
    auVar28._4_4_ = fVar19;
    auVar28._0_4_ = fVar19;
    auVar28._8_4_ = uVar21;
    auVar28._12_4_ = uVar23;
    auVar28 = divps(auVar10,auVar28);
    fVar25 = auVar28._0_4_;
    fVar19 = auVar28._4_4_;
    fVar26 = auVar28._8_4_;
    fVar29 = (__this->fields)._snapAnchorLocal.fields.z;
  }
  if (fVar29 == 0.0) {
    UVar32 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    fStack_b0 = (float)extraout_XMM0_Dc_01;
    local_b8 = (undefined1  [8])UVar32.fields._0_8_;
    fStack_ac = (float)extraout_XMM0_Dd_01;
    if ((camera == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar5 = (camera->fields).Camera, pUVar5 == (UnityEngine_Camera_o *)0x0)) goto LAB_0404d375;
    local_88 = *(System_Collections_Generic_List_Enumerator_T__c **)&(__this->fields)._hasSnapAnchor
    ;
    uStack_80 = (Il2CppType *)0x0;
    UVar32.fields.z = fVar34;
    UVar32.fields._0_8_ = pIVar33;
    local_e8._8_8_ = 0;
    local_e8._0_8_ = pIVar33;
    local_f8 = (System_Collections_Generic_HashSet_Enumerator_T__c *)CONCAT44(local_f8._4_4_,fVar34)
    ;
    UVar32 = UnityEngine_Camera__WorldToScreenPoint(pUVar5,UVar32,(MethodInfo *)0x0);
    fStack_70 = (float)extraout_XMM0_Dc_02;
    local_78 = UVar32.fields._0_8_;
    fStack_6c = (float)extraout_XMM0_Dd_02;
    pUVar5 = (camera->fields).Camera;
    if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto LAB_0404d375;
    position.fields.x = (float)local_e8._0_4_ + fVar25;
    position.fields.y = (float)local_e8._4_4_ + fVar19;
    position.fields.z = (float)local_f8 + fVar24;
    UVar32 = UnityEngine_Camera__WorldToScreenPoint(pUVar5,position,(MethodInfo *)0x0);
    local_e8._0_4_ = UVar32.fields.x - (float)local_78._0_4_;
    local_e8._4_4_ = UVar32.fields.y - (float)local_78._4_4_;
    local_e8._8_4_ = extraout_XMM0_Dc_03 - fStack_70;
    local_e8._12_4_ = extraout_XMM0_Dd_03 - fStack_6c;
    fVar20 = (float)local_e8._4_4_ * (float)local_e8._4_4_;
    fVar29 = fVar20 + (float)local_e8._0_4_ * (float)local_e8._0_4_;
    if (fVar29 < 1e-06) {
      return;
    }
    local_b8._0_4_ = (float)local_b8._0_4_ - (float)local_88;
    local_b8._4_4_ = (float)local_b8._4_4_ - local_88._4_4_;
    fStack_b0 = fStack_b0 - (float)uStack_80;
    fStack_ac = fStack_ac - uStack_80._4_4_;
    if ((float)local_b8._4_4_ * (float)local_b8._4_4_ +
        (float)local_b8._0_4_ * (float)local_b8._0_4_ < 25.0) {
      return;
    }
    if (DAT_056fdea4 == '\0') {
      local_f8 = (System_Collections_Generic_HashSet_Enumerator_T__c *)CONCAT44(fVar20,fVar29);
      fStack_f0 = local_e8._8_4_ * local_e8._8_4_;
      fStack_ec = local_e8._12_4_ * local_e8._12_4_;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea4 = '\x01';
      fVar29 = (float)local_f8;
      fVar20 = local_f8._4_4_;
      fVar30 = fStack_f0;
      fVar31 = fStack_ec;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_0404cdc8;
LAB_0404cd3d:
      if (0.0 <= fVar29) goto LAB_0404cd49;
LAB_0404cde8:
      fVar29 = sqrtf(fVar29);
      uVar22 = extraout_XMM0_Dc_04;
      uVar21 = extraout_XMM0_Dd_04;
      if (1e-05 < fVar29) goto LAB_0404cdfe;
LAB_0404ce07:
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      uVar27 = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    }
    else {
      fVar30 = local_e8._8_4_ * local_e8._8_4_;
      fVar31 = local_e8._12_4_ * local_e8._12_4_;
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_0404cd3d;
LAB_0404cdc8:
      local_f8 = (System_Collections_Generic_HashSet_Enumerator_T__c *)CONCAT44(fVar20,fVar29);
      fStack_f0 = fVar30;
      fStack_ec = fVar31;
      il2cpp_init_class();
      fVar29 = (float)local_f8;
      if ((float)local_f8 < 0.0) goto LAB_0404cde8;
LAB_0404cd49:
      uVar22 = 0;
      uVar21 = 0;
      fVar29 = SQRT(fVar29);
      if (fVar29 <= 1e-05) goto LAB_0404ce07;
LAB_0404cdfe:
      auVar9._4_4_ = fVar29;
      auVar9._0_4_ = fVar29;
      auVar9._8_4_ = uVar22;
      auVar9._12_4_ = uVar21;
      auVar28 = divps(local_e8._0_16_,auVar9);
      uVar27 = auVar28._0_8_;
    }
    fVar29 = (float)((uint)(0.0 <= (float)local_b8._4_4_ * (float)((ulong)uVar27 >> 0x20) +
                                   (float)local_b8._0_4_ * (float)uVar27) * 2 + -1);
    (__this->fields)._snapAnchorLocal.fields.z = fVar29;
  }
  __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Collider);
  System_Collections_Generic_List<object>___ctor(__this_07,MethodInfo_List_1_UnityEngine_Collider);
  pGVar3 = (__this->fields)._gameManager;
  if ((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar6 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).SelectedObjects,
     local_f8 = (System_Collections_Generic_HashSet_Enumerator_T__c *)__this,
     pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    fVar29 = (float)(int)fVar29;
    fVar24 = fVar24 * fVar29;
    fVar25 = fVar25 * fVar29;
    fVar19 = fVar19 * fVar29;
    fVar26 = fVar26 * 0.0;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_d0,pSVar6,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    local_118._16_8_ = local_d0.fields._current;
    local_118._8_8_ = CONCAT44(local_d0.fields._version,local_d0.fields._index);
    local_118._0_8_ = local_d0.fields._list;
LAB_0404cf10:
    __this_00.fields._version = (int32_t)fVar24;
    __this_00.fields._set =
         (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_00.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_00.fields._current = pIVar33;
    bVar12 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                       (__this_00,(MethodInfo_3185890 *)local_118);
    uVar27 = local_118._16_8_;
    if ((char)bVar12 != '\0') {
      if ((UnityEngine_Collider_o *)local_118._16_8_ == (UnityEngine_Collider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x_00 = ((UnityEngine_Collider_o *)(local_118._16_8_ + 0x18))->klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                         );
      if ((char)bVar12 == '\0') {
        if (((UnityEngine_Collider_o *)(uVar27 + 0x18))->klass == (UnityEngine_Collider_c *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar15 = UnityEngine_GameObject__GetComponentsInChildren<object>
                            ((UnityEngine_GameObject_o *)
                             ((UnityEngine_Collider_o *)(uVar27 + 0x18))->klass,MethodInfo_Collider___GetComponentsInChildren_Collider);
        if (pSVar15 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar13 = (uint)pSVar15->max_length;
        if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
          if (0 < (int)uVar13) {
            lVar18 = 0;
            do {
              if (uVar13 <= (uint)lVar18) goto LAB_0404d34b;
              pUVar7 = (UnityEngine_Collider_o *)pSVar15->m_Items[lVar18];
              if (pUVar7 == (UnityEngine_Collider_o *)0x0) goto LAB_0404d350;
              bVar12 = UnityEngine_Collider__get_enabled(pUVar7,(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                UnityEngine_Collider__set_enabled(pUVar7,0,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar13 = (uint)pSVar15->max_length;
              lVar18 = lVar18 + 1;
            } while ((int)lVar18 < (int)uVar13);
          }
        }
        else if (0 < (int)uVar13) {
          uVar17 = 0;
          if (uVar13 == 0) {
LAB_0404d34b:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          do {
            pUVar7 = (UnityEngine_Collider_o *)pSVar15->m_Items[(int)uVar17];
            if (pUVar7 == (UnityEngine_Collider_o *)0x0) {
LAB_0404d350:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar12 = UnityEngine_Collider__get_enabled(pUVar7,(MethodInfo *)0x0);
            if ((char)bVar12 != '\0') {
              UnityEngine_Collider__set_enabled(pUVar7,0,(MethodInfo *)0x0);
              lVar18 = MethodInfo_Void_Add;
              piVar1 = &(__this_07->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_07->fields)._items;
              if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar13 = (__this_07->fields)._size;
              if (uVar13 < (uint)pSVar8->max_length) {
                (__this_07->fields)._size = uVar13 + 1;
                pSVar8->m_Items[(int)uVar13] = (Il2CppObject *)pUVar7;
                il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar13);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_07,(Il2CppObject *)pUVar7,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar17 = uVar17 + 1;
            uVar13 = (uint)pSVar15->max_length;
            if ((int)uVar13 <= (int)uVar17) break;
            if (uVar13 <= uVar17) goto LAB_0404d34b;
          } while( true );
        }
      }
      goto LAB_0404cf10;
    }
    __this_01.fields._version = (int32_t)fVar24;
    __this_01.fields._set =
         (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_01.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_01.fields._current = pIVar33;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185880 *)local_118);
    local_e8._8_8_ = 0;
    local_e8._0_8_ = pIVar33;
    local_b8._0_4_ = fVar34;
    layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
    pSVar11 = local_f8;
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      auVar28 = local_e8._0_16_;
      direction.fields.y = fVar19;
      direction.fields.x = fVar25;
      origin.fields.z = (float)local_b8._0_4_;
      origin.fields.x = (float)local_e8._0_4_;
      origin.fields.y = (float)local_e8._4_4_;
      direction.fields.z = fVar24;
      local_e8._0_16_ = auVar28;
      bVar12 = UnityEngine_Physics__Raycast
                         (origin,direction,(UnityEngine_RaycastHit_o *)&local_68,100000.0,layerMask,
                          (MethodInfo *)0x0);
      if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator(&local_d0,__this_07,MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
        local_a8._16_8_ = local_d0.fields._current;
        local_a8._8_8_ = CONCAT44(local_d0.fields._version,local_d0.fields._index);
        local_a8._0_8_ = local_d0.fields._list;
        while (__this_02.fields._version = (int32_t)fVar24,
              __this_02.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_,
              __this_02.fields._index = in_stack_fffffffffffffeb8._8_4_,
              __this_02.fields._current = pIVar33,
              bVar14 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_02,(MethodInfo_3185E20 *)local_a8), (char)bVar14 != '\0') {
          if ((UnityEngine_Collider_o *)local_a8._16_8_ == (UnityEngine_Collider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Collider__set_enabled
                    ((UnityEngine_Collider_o *)local_a8._16_8_,1,(MethodInfo *)0x0);
        }
        __this_03.fields._version = (int32_t)fVar24;
        __this_03.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_;
        __this_03.fields._index = in_stack_fffffffffffffeb8._8_4_;
        __this_03.fields._current = pIVar33;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_03,(MethodInfo_3185E10 *)local_a8);
        if ((char)bVar12 != '\0') {
          __this_06.fields.m_Normal.fields.x = fVar24;
          __this_06.fields.m_Point.fields.x = (float)in_stack_fffffffffffffeb8._0_4_;
          __this_06.fields.m_Point.fields.y = (float)in_stack_fffffffffffffeb8._4_4_;
          __this_06.fields.m_Point.fields.z = (float)in_stack_fffffffffffffeb8._8_4_;
          __this_06.fields.m_Normal.fields._4_8_ = pIVar33;
          __this_06.fields.m_FaceID = (uint32_t)fVar34;
          __this_06.fields.m_Distance = (float)in_stack_fffffffffffffed4;
          __this_06.fields.m_UV.fields.x = fVar25;
          __this_06.fields.m_UV.fields.y = fVar19;
          __this_06.fields.m_Collider = (int32_t)fVar26;
          UVar32 = UnityEngine_RaycastHit__get_point(__this_06,(MethodInfo *)&local_68);
          fVar34 = UVar32.fields.x - (float)local_e8._0_4_;
          fVar24 = UVar32.fields.y - (float)local_e8._4_4_;
          fVar29 = UVar32.fields.z - (float)local_b8._0_4_;
          if (1e-08 <= fVar29 * fVar29 + fVar24 * fVar24 + fVar34 * fVar34) {
            pGVar3 = (pSVar11->_1).byval_arg.data;
            if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
               (pSVar6 = (System_Collections_Generic_HashSet_object__o *)
                         (pGVar3->fields).SelectedObjects,
               pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0404d375;
            System_Collections_Generic_HashSet<object>__GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_d0,pSVar6,
                       MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
            local_118._16_8_ = local_d0.fields._current;
            local_118._8_8_ = CONCAT44(local_d0.fields._version,local_d0.fields._index);
            local_118._0_8_ = local_d0.fields._list;
            while (__this_04.fields._version = (int32_t)fVar29,
                  __this_04.fields._set =
                       (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_,
                  __this_04.fields._index = in_stack_fffffffffffffeb8._8_4_,
                  __this_04.fields._current = pIVar33,
                  bVar12 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                     (__this_04,(MethodInfo_3185890 *)local_118),
                  (char)bVar12 != '\0') {
              if ((UnityEngine_Collider_o *)local_118._16_8_ == (UnityEngine_Collider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (((UnityEngine_Collider_o *)(local_118._16_8_ + 0x18))->klass ==
                  (UnityEngine_Collider_c *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar16 = UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)
                                   ((UnityEngine_Collider_o *)(local_118._16_8_ + 0x18))->klass,
                                   (MethodInfo *)0x0);
              if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UVar32 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
              value.fields.x = UVar32.fields.x + fVar34;
              value.fields.y = UVar32.fields.y + fVar24;
              value.fields.z = UVar32.fields.z + fVar29;
              UnityEngine_Transform__set_position(pUVar16,value,(MethodInfo *)0x0);
            }
            __this_05.fields._version = (int32_t)fVar29;
            __this_05.fields._set =
                 (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
            __this_05.fields._index = in_stack_fffffffffffffeb8._8_4_;
            __this_05.fields._current = pIVar33;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_05,(MethodInfo_3185880 *)local_118);
          }
        }
        return;
      }
    }
  }
LAB_0404d375:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$DoFreeDragVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoFreeDragVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x404c110

void MapEditor_PositionGizmo__DoFreeDragVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *x;
  Utility_BaseComponentCache_o *pUVar4;
  System_Collections_Generic_HashSet_object__o *__this_01;
  undefined1 auVar5 [16];
  UnityEngine_Ray_o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *in_RCX;
  MethodInfo *in_R9;
  float fVar8;
  float fVar9;
  float fVar10;
  uint extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar11;
  uint extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o value;
  float in_stack_fffffffffffffefc;
  UnityEngine_Vector3_Fields local_f8;
  float local_ec;
  UnityEngine_Vector3_Fields local_e8;
  undefined1 local_d8 [40];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [16];
  Il2CppObject *local_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  undefined1 local_78 [16];
  Il2CppMethodPointer local_60;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  Il2CppType **ppIStack_30;
  _union_13 local_28;
  _union_14 _Stack_20;
  
  if (DAT_05704407 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata();
    DAT_05704407 = '\x01';
  }
  local_d8._32_8_ = (Il2CppRGCTXData *)0x0;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  local_f8.z = 0.0;
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  local_e8.z = 0.0;
  local_e8.x = 0.0;
  local_e8.y = 0.0;
  local_d8._0_8_ = (Il2CppMethodPointer)0x0;
  local_d8._8_8_ = (Il2CppMethodPointer)0x0;
  local_d8._16_8_ = (InvokerMethod)0x0;
  pGVar2 = (__this->fields)._gameManager;
  if ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto LAB_0404c801;
  if ((pSVar3->fields)._count == 0) {
    return;
  }
  if (camera == (Cameras_BaseCamera_o *)0x0) goto LAB_0404c801;
  __this_00 = (camera->fields).Camera;
  UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_0404c801;
  UnityEngine_Camera__ScreenPointToRay
            ((UnityEngine_Ray_o *)local_a0,__this_00,UVar29,(MethodInfo *)0x0);
  fStack_a8 = SUB84(local_90,0);
  fStack_a4 = (float)((ulong)local_90 >> 0x20);
  local_d8._32_8_ = local_a0._0_8_;
  fStack_b0 = (float)local_a0._8_4_;
  fStack_ac = (float)local_a0._12_4_;
  if (*(char *)&(__this->fields)._snapAnchorLocal.fields.y == '\0') {
LAB_0404c29d:
    local_60 = (Il2CppMethodPointer)0x0;
    local_a0._8_4_ = 0.0;
    local_a0._0_8_ = (Il2CppRGCTXData *)0x0;
    in_RCX = (MethodInfo *)&local_60;
    bVar6 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                      (__this,camera,(UnityEngine_Vector3_o *)&local_f8,
                       (UnityEngine_Transform_o **)in_RCX,(UnityEngine_Vector3_o *)local_a0,in_R9);
    if ((char)bVar6 == '\0') {
      return;
    }
    pUVar4 = (camera->fields).Cache;
  }
  else {
    x = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto LAB_0404c29d;
    pUVar7 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_0404c801;
    UVar29 = UnityEngine_Transform__TransformPoint
                       (pUVar7,*(UnityEngine_Vector3_Fields *)&(__this->fields)._snapAnchorTransform
                        ,(MethodInfo *)0x0);
    local_f8.z = UVar29.fields.z;
    local_f8._0_8_ = UVar29.fields._0_8_;
    pUVar4 = (camera->fields).Cache;
  }
  if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar7 = (pUVar4->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
  goto LAB_0404c801;
  UVar29 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  fVar12 = UVar29.fields.z;
  fVar13 = UVar29.fields.x;
  fVar8 = UVar29.fields.y;
  uStack_80._0_4_ = 0.0;
  uStack_80._4_4_ = 0.0;
  local_78 = ZEXT416((uint)local_f8.z);
  local_88._0_4_ = local_f8.x;
  local_88._4_4_ = local_f8.y;
  uStack_80 = 0;
  fVar14 = local_f8.z;
  fVar15 = local_f8.x;
  local_28._0_4_ = local_f8.y;
  if (DAT_056fdea6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea6 = '\x01';
    fVar14 = (float)local_78._0_4_;
    fVar15 = (float)local_88._0_4_;
    local_28._0_4_ = local_88._4_4_;
    in_stack_fffffffffffffefc = fVar8;
  }
  fVar17 = fVar8 - (float)local_28._0_4_;
  fVar12 = fVar12 - fVar14;
  fVar13 = fVar13 - fVar15;
  local_28._4_4_ = local_28._0_4_;
  _Stack_20._0_4_ = (float)uStack_80;
  _Stack_20._4_4_ = uStack_80._4_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    in_stack_fffffffffffffefc = fVar8;
  }
  fVar8 = fVar13 * fVar13 + fVar17 * fVar17 + fVar12 * fVar12;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar13 = 0.0;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  bVar6 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
                    (__this,camera,30.0,(UnityEngine_Vector3_o *)&local_e8,in_RCX);
  if ((char)bVar6 == '\0') {
LAB_0404c456:
    pUVar4 = (camera->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar7 = (pUVar4->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
    goto LAB_0404c801;
    UVar29 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
    fVar8 = UVar29.fields.z;
    uVar21 = UVar29.fields._0_8_;
    fVar12 = UVar29.fields.x;
    in_stack_fffffffffffffefc = UVar29.fields.y;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      uVar21 = CONCAT44(in_stack_fffffffffffffefc,fVar12);
      DAT_056fde20 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      uVar21 = CONCAT44(in_stack_fffffffffffffefc,fVar12);
    }
    fVar17 = (float)(uVar21 >> 0x20);
    fVar10 = fVar8 * fVar8 + fVar17 * fVar17 + (float)uVar21 * (float)uVar21;
    fVar17 = fVar15;
    fVar9 = fVar13;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
      uVar21 = CONCAT44(in_stack_fffffffffffffefc,fVar12);
      fVar15 = extraout_XMM0_Dc_00;
      fVar13 = extraout_XMM0_Dd_00;
      if (1e-05 < fVar10) goto LAB_0404c523;
LAB_0404c4d4:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar11 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      fVar16 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
    }
    else {
      fVar10 = SQRT(fVar10);
      if (fVar10 <= 1e-05) goto LAB_0404c4d4;
LAB_0404c523:
      fVar16 = -fVar14;
      fVar18 = -fVar17;
      fVar19 = -fVar9;
      auVar22._0_8_ = uVar21 ^ 0x8000000080000000;
      auVar22._8_4_ = extraout_XMM0_Dc ^ 0x80000000;
      auVar22._12_4_ = extraout_XMM0_Dd ^ 0x80000000;
      fVar11 = -fVar8 / fVar10;
      auVar5._4_4_ = fVar10;
      auVar5._0_4_ = fVar10;
      auVar5._8_4_ = fVar15;
      auVar5._12_4_ = fVar13;
      auVar23 = divps(auVar22,auVar5);
    }
    fVar20 = auVar23._0_4_;
    fVar24 = auVar23._4_4_;
    uVar25 = auVar23._8_4_;
    uVar26 = auVar23._12_4_;
    fVar10 = fStack_a4 * fVar11 + fStack_a8 * fVar24 + fVar20 * fStack_ac;
    fVar15 = fStack_b0 * fVar11;
    fVar13 = fVar24;
    fVar27 = (float)local_d8._32_8_;
    fVar28 = SUB84(local_d8._32_8_,4);
    if (DAT_056fdea3 == '\0') {
      local_38 = (Il2CppRGCTXData *)local_d8._32_8_;
      ppIStack_30 = (Il2CppType **)0x0;
      local_48 = ZEXT416((uint)fVar10);
      local_ec = fStack_b0 * fVar11;
      local_58 = fVar24;
      fStack_54 = fVar24;
      uStack_50 = uVar25;
      uStack_4c = uVar26;
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      auVar23._4_4_ = fVar24;
      auVar23._0_4_ = fVar20;
      auVar23._8_4_ = uVar25;
      auVar23._12_4_ = uVar26;
      DAT_056fdea3 = '\x01';
      fVar15 = local_ec;
      fVar13 = local_58;
      fVar10 = (float)local_48._0_4_;
      fVar27 = (float)local_38;
      fVar28 = local_38._4_4_;
      fVar8 = fVar11;
      fVar14 = fVar16;
      fVar17 = fVar18;
      fVar9 = fVar19;
      fVar12 = fVar20;
      in_stack_fffffffffffffefc = fVar24;
    }
    fVar16 = ABS(fVar10);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar19 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    fVar18 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar19) {
      fVar18 = fVar19;
    }
    if (ABS(0.0 - fVar10) < fVar18) {
      return;
    }
    fVar10 = ((fVar11 * (float)local_78._0_4_ +
              (float)local_28._0_4_ * fVar13 + (float)local_88._0_4_ * auVar23._0_4_) -
             (fVar15 + fVar28 * fVar13 + auVar23._0_4_ * fVar27)) / fVar10;
    if (fVar10 <= 0.0) {
      return;
    }
    __this_02.fields.m_Origin.fields.y = fVar14;
    __this_02.fields.m_Origin.fields.x = fVar8;
    __this_02.fields.m_Origin.fields.z = fVar17;
    __this_02.fields.m_Direction.fields.x = fVar9;
    __this_02.fields.m_Direction.fields.y = fVar12;
    __this_02.fields.m_Direction.fields.z = in_stack_fffffffffffffefc;
    UVar29 = UnityEngine_Ray__GetPoint(__this_02,fVar10,(MethodInfo *)(local_d8 + 0x20));
    fVar12 = UVar29.fields.x - (float)local_88._0_4_;
    fVar9 = UVar29.fields.y - (float)local_88._4_4_;
    fVar10 = extraout_XMM0_Dc_01 - (float)uStack_80;
    fVar11 = extraout_XMM0_Dd_01 - uStack_80._4_4_;
    fVar16 = UVar29.fields.z - (float)local_78._0_4_;
    fVar17 = fVar16 * fVar16 + fVar9 * fVar9 + fVar12 * fVar12;
  }
  else {
    fVar8 = fVar8 * 0.3;
    if (fVar8 <= 60.0) {
      fVar8 = 60.0;
    }
    fVar12 = local_e8.x - (float)local_88._0_4_;
    fVar9 = local_e8.y - (float)local_88._4_4_;
    fVar10 = 0.0 - (float)uStack_80;
    fVar11 = 0.0 - uStack_80._4_4_;
    fVar16 = local_e8.z - (float)local_78._0_4_;
    fVar14 = fVar9 * fVar9;
    fVar15 = fVar10 * fVar10;
    fVar13 = fVar11 * fVar11;
    fVar17 = fVar16 * fVar16 + fVar14 + fVar12 * fVar12;
    if (fVar8 * fVar8 < fVar17) goto LAB_0404c456;
  }
  if (1e-08 <= fVar17) {
    pGVar2 = (__this->fields)._gameManager;
    if ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
       (__this_01 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects
       , __this_01 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
LAB_0404c801:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,__this_01,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer
              );
    local_d8._16_8_ = local_90;
    local_d8._8_8_ = CONCAT44(local_a0._12_4_,local_a0._8_4_);
    local_d8._0_8_ = local_a0._0_8_;
    while (__this_03.fields._set._4_4_ = fVar9, __this_03.fields._set._0_4_ = fVar12,
          __this_03.fields._index = (int32_t)fVar10, __this_03.fields._version = (int32_t)fVar11,
          __this_03.fields._current._0_4_ = fVar16,
          __this_03.fields._current._4_4_ = in_stack_fffffffffffffefc,
          bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_03,(MethodInfo_3185890 *)local_d8), (char)bVar6 != '\0') {
      if ((Il2CppObject *)local_d8._16_8_ == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (((Il2CppObject *)(local_d8._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar7 = UnityEngine_GameObject__get_transform
                         (((Il2CppObject *)(local_d8._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar29 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      value.fields.x = UVar29.fields.x + fVar12;
      value.fields.y = UVar29.fields.y + fVar9;
      value.fields.z = UVar29.fields.z + fVar16;
      UnityEngine_Transform__set_position(pUVar7,value,(MethodInfo *)0x0);
    }
    __this_04.fields._set._4_4_ = fVar9;
    __this_04.fields._set._0_4_ = fVar12;
    __this_04.fields._index = (int32_t)fVar10;
    __this_04.fields._version = (int32_t)fVar11;
    __this_04.fields._current._0_4_ = fVar16;
    __this_04.fields._current._4_4_ = in_stack_fffffffffffffefc;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_04,(MethodInfo_3185880 *)local_d8);
  }
  return;
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x404e790

bool_conflict
MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,
          UnityEngine_Vector3_o *vertex,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
                    (__this,camera,INFINITY,vertex,method);
  return bVar1;
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, float screenRadius, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x404e7a0

bool_conflict
MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,float screenRadius,
          UnityEngine_Vector3_o *vertex,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_Camera_o *pUVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_04;
  _union_229636 _Var7;
  _union_229636 _Var8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int32_t iVar14;
  int32_t iVar15;
  bool_conflict bVar16;
  uint uVar17;
  int iVar18;
  System_Object_array *pSVar19;
  ulong uVar20;
  UnityEngine_Object_o *pUVar21;
  MethodInfo *method_00;
  UnityEngine_Mesh_o *__this_05;
  UnityEngine_Vector3_array *pUVar22;
  UnityEngine_Transform_o *__this_06;
  Il2CppObject *item;
  uint uVar23;
  ulong uVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o UVar32;
  _union_229636 in_stack_fffffffffffffe68;
  void *in_stack_fffffffffffffe70;
  void *in_stack_fffffffffffffe78;
  undefined7 in_stack_fffffffffffffe80;
  undefined1 in_stack_fffffffffffffe87;
  ulong in_stack_fffffffffffffe88;
  float local_170;
  float local_16c;
  undefined1 local_148 [52];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  _union_229636 local_108;
  void *pvStack_100;
  void *local_f8;
  _union_229636 *local_e8;
  System_Object_array *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  _union_229636 local_c8;
  Il2CppObject *pIStack_c0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_b8;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  _union_229636 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  _union_229636 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  if (DAT_05704408 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Int32_Map_MapObject__get_C);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata();
    DAT_05704408 = '\x01';
  }
  local_148._16_8_ = (InvokerMethod)0x0;
  local_148._24_8_ = (char *)0x0;
  local_148._0_8_ = (Il2CppMethodPointer)0x0;
  local_148._8_8_ = (Il2CppMethodPointer)0x0;
  local_148._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  local_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_108.genericMethod = (void *)0x0;
  pvStack_100 = (void *)0x0;
  local_f8 = (void *)0x0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fdd15 = '\x01';
  }
  uVar4 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (vertex->fields).x = (float)(int)uVar4;
  (vertex->fields).y = (float)(int)((ulong)uVar4 >> 0x20);
  (vertex->fields).z = fVar26;
  UVar31 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fStack_a0 = (float)extraout_XMM0_Dc;
  local_a8 = (undefined1  [8])UVar31.fields._0_8_;
  fStack_9c = (float)extraout_XMM0_Dd;
  iVar14 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar15 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pGVar5 = (__this->fields)._gameManager;
  if (pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar5->fields).SelectedObjects;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)
        **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&local_d8,
                 (System_Collections_Generic_Dictionary_int__object__o *)
                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
      local_148._32_8_ = local_b8;
      local_148._16_8_ = local_c8;
      local_148._24_8_ = pIStack_c0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        fVar30 = (float)iVar14;
        fVar26 = (float)iVar15;
        local_148._48_4_ =
             ~-(uint)(INFINITY <= screenRadius) & (uint)(screenRadius * screenRadius) |
             -(uint)(INFINITY <= screenRadius) & 0x7f7fffff;
        fStack_114 = 0.0;
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        local_170 = screenRadius;
        local_e8 = &local_88;
        if ((INFINITY <= screenRadius) &&
           (local_170 = fVar30, local_e8 = &local_68, fVar30 <= fVar26)) {
          local_170 = fVar26;
        }
        local_16c = 3.4028235e+38;
        uVar20 = 0;
        do {
          do {
            do {
              do {
                __this_02.fields._8_8_ = in_stack_fffffffffffffe70;
                __this_02.fields._dictionary = in_stack_fffffffffffffe68.genericMethod;
                __this_02.fields._current.fields.key = in_stack_fffffffffffffe78;
                __this_02.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
                __this_02.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
                __this_02.fields._32_8_ = in_stack_fffffffffffffe88;
                bVar16 = System_Collections_Generic_Dictionary_Enumerator<int__object>__MoveNext
                                   (__this_02,(MethodInfo_31C2A20 *)local_148);
                if ((char)bVar16 == '\0') goto LAB_0404ee6f;
                il2cpp_glue_02716390(local_148,MethodInfo_KeyValuePair_2_System_Int32_Map_MapObject__get_C);
                bVar16 = System_Collections_Generic_HashSet<object>__Contains
                                   (__this_00,item,MethodInfo_Boolean_Contains);
              } while ((char)bVar16 != '\0');
              if (item == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar21 = item[1].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar16 = UnityEngine_Object__op_Equality
                                 (pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            } while ((char)bVar16 != '\0');
            if (pUVar21 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar16 = UnityEngine_GameObject__get_activeInHierarchy
                               ((UnityEngine_GameObject_o *)pUVar21,(MethodInfo *)0x0);
          } while ((char)bVar16 == '\0');
          pSVar19 = UnityEngine_GameObject__GetComponentsInChildren<object>
                              ((UnityEngine_GameObject_o *)pUVar21,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
          if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          iVar18 = (int)pSVar19->max_length;
          if (0 < iVar18) {
            uVar23 = 0;
            local_e0 = pSVar19;
            if (iVar18 == 0) {
LAB_0404eebf:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            do {
              __this_01 = (UnityEngine_MeshFilter_o *)local_e0->m_Items[(int)uVar23];
              if (__this_01 == (UnityEngine_MeshFilter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar21 = (UnityEngine_Object_o *)
                        UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar16 = UnityEngine_Object__op_Equality
                                 (pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              in_stack_fffffffffffffe87 = (undefined1)uVar20;
              if ((char)bVar16 == '\0') {
                method_00 = (MethodInfo *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)__this_01,MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar16 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar16 != '\0') {
                  if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_Renderer__get_bounds
                            ((UnityEngine_Bounds_o *)local_48,(UnityEngine_Renderer_o *)method_00,
                             (MethodInfo *)0x0);
                  uVar13 = local_48._12_4_;
                  uVar12 = local_48._8_4_;
                  uVar11 = local_48._4_4_;
                  uVar10 = local_48._0_4_;
                  local_c8 = (_union_229636)local_48._16_8_;
                  local_d8 = (float)local_48._0_4_;
                  fStack_d4 = (float)local_48._4_4_;
                  fStack_d0 = (float)local_48._8_4_;
                  fStack_cc = (float)local_48._12_4_;
                  if (camera == (Cameras_BaseCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar6 = (camera->fields).Camera;
                  local_e8[2] = (_union_229636)local_48._16_8_;
                  _Var7._4_4_ = uVar11;
                  _Var7._0_4_ = uVar10;
                  _Var8._4_4_ = uVar13;
                  _Var8._0_4_ = uVar12;
                  *local_e8 = _Var7;
                  local_e8[1] = _Var8;
                  in_stack_fffffffffffffe68 = (_union_229636)local_e8->genericMethod;
                  in_stack_fffffffffffffe70 = local_e8[1].genericMethod;
                  in_stack_fffffffffffffe78 = local_e8[2].genericMethod;
                  local_108 = in_stack_fffffffffffffe68;
                  pvStack_100 = in_stack_fffffffffffffe70;
                  local_f8 = in_stack_fffffffffffffe78;
                  bVar16 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                                     ((UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)local_e8,
                                      pUVar6,(UnityEngine_Vector2_o)local_a8,local_170,method_00);
                  if ((char)bVar16 == '\0') goto LAB_0404eb18;
                }
                __this_05 = UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
                if (__this_05 == (UnityEngine_Mesh_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar22 = UnityEngine_Mesh__get_vertices(__this_05,(MethodInfo *)0x0);
                __this_06 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                if (pUVar22 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                iVar18 = (int)pUVar22->max_length;
                if (__this_06 == (UnityEngine_Transform_o *)0x0) {
                  if (0 < iVar18) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
                else if (0 < iVar18) {
                  pfVar25 = &pUVar22->m_Items[0].fields.z;
                  uVar24 = 0;
                  in_stack_fffffffffffffe88 = uVar20;
                  if ((pUVar22->max_length & 0xffffffff) == 0) {
LAB_0404ee9c:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  while( true ) {
                    uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar25 + -2))->x;
                    uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar25 + -2))->y;
                    UVar31.fields.y = (float)uVar2;
                    UVar31.fields.x = (float)uVar1;
                    UVar31.fields.z = *pfVar25;
                    UVar31 = UnityEngine_Transform__TransformPoint
                                       (__this_06,UVar31,(MethodInfo *)0x0);
                    if (camera == (Cameras_BaseCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pUVar6 = (camera->fields).Camera;
                    if (pUVar6 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    local_98._8_4_ = extraout_XMM0_Dc_00;
                    local_98._0_8_ = UVar31.fields._0_8_;
                    local_98._12_4_ = extraout_XMM0_Dd_00;
                    UVar32 = UnityEngine_Camera__WorldToScreenPoint(pUVar6,UVar31,(MethodInfo *)0x0)
                    ;
                    auVar9 = local_98;
                    fVar28 = UVar32.fields.z;
                    fVar29 = UVar32.fields.x;
                    fVar27 = UVar32.fields.y;
                    if ((((0.0 < fVar28) && (0.0 <= fVar29)) && (fVar27 <= fVar26)) &&
                       ((0.0 <= fVar27 && (fVar29 <= fVar30)))) {
                      fVar27 = (fVar27 - (float)local_a8._4_4_) * (fVar27 - (float)local_a8._4_4_);
                      fVar29 = fVar27 + (fVar29 - (float)local_a8._0_4_) *
                                        (fVar29 - (float)local_a8._0_4_);
                      if ((fVar29 + 36.0 < (float)local_148._48_4_) ||
                         (((fVar29 <= (float)local_148._48_4_ + 36.0 && (fVar28 < local_16c)) &&
                          (ABS(fVar29 - (float)local_148._48_4_) <= 36.0)))) {
                        (vertex->fields).x = (float)local_98._0_4_;
                        (vertex->fields).y = (float)local_98._4_4_;
                        (vertex->fields).z = UVar31.fields.z;
                        in_stack_fffffffffffffe87 = 1;
                        local_16c = fVar28;
                        local_148._48_4_ = fVar29;
                        fStack_114 = fVar27;
                        fStack_110 = (extraout_XMM0_Dc_01 - fStack_a0) *
                                     (extraout_XMM0_Dc_01 - fStack_a0);
                        fStack_10c = (extraout_XMM0_Dd_01 - fStack_9c) *
                                     (extraout_XMM0_Dd_01 - fStack_9c);
                      }
                    }
                    uVar24 = uVar24 + 1;
                    uVar3 = (uint)pUVar22->max_length;
                    uVar20 = (ulong)uVar3;
                    pfVar25 = pfVar25 + 3;
                    local_98 = auVar9;
                    if ((long)(int)uVar3 <= (long)uVar24) break;
                    if (uVar3 <= uVar24) goto LAB_0404ee9c;
                  }
                }
              }
LAB_0404eb18:
              uVar23 = uVar23 + 1;
              uVar3 = (uint)local_e0->max_length;
              uVar20 = CONCAT71((int7)(uVar20 >> 8),in_stack_fffffffffffffe87);
              uVar17 = (uint)uVar20;
              if ((int)uVar3 <= (int)uVar23) goto LAB_0404ee3a;
              if (uVar3 <= uVar23) goto LAB_0404eebf;
            } while( true );
          }
          uVar17 = (uint)uVar20;
LAB_0404ee3a:
          uVar20 = (ulong)uVar17;
        } while (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0);
      }
      __this_03.fields._8_8_ = in_stack_fffffffffffffe70;
      __this_03.fields._dictionary = in_stack_fffffffffffffe68.genericMethod;
      __this_03.fields._current.fields.key = in_stack_fffffffffffffe78;
      __this_03.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
      __this_03.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
      __this_03.fields._32_8_ = in_stack_fffffffffffffe88;
      bVar16 = System_Collections_Generic_Dictionary_Enumerator<int__object>__MoveNext
                         (__this_03,(MethodInfo_31C2A20 *)local_148);
      if ((char)bVar16 != '\0') {
        il2cpp_glue_02716390(local_148,MethodInfo_KeyValuePair_2_System_Int32_Map_MapObject__get_C);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar20 = 0;
LAB_0404ee6f:
      __this_04.fields._8_8_ = in_stack_fffffffffffffe70;
      __this_04.fields._dictionary = in_stack_fffffffffffffe68.genericMethod;
      __this_04.fields._current.fields.key = in_stack_fffffffffffffe78;
      __this_04.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
      __this_04.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
      __this_04.fields._32_8_ = in_stack_fffffffffffffe88;
      System_Collections_Generic_Dictionary_Enumerator<int__object>__Dispose
                (__this_04,(MethodInfo_31C2B30 *)local_148);
      return (uint)uVar20 & 0xffffff01;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$ScreenBoundsIntersectsMouse
// il2cpp: bool MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse (UnityEngine_Bounds_o bounds, UnityEngine_Camera_o* cam, UnityEngine_Vector2_o mouseScreen, float screenRadius, const MethodInfo* method);
// 0x404f0d0

bool_conflict
MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
          (UnityEngine_Bounds_o bounds,UnityEngine_Camera_o *cam,UnityEngine_Vector2_o mouseScreen,
          float screenRadius,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  undefined8 local_140;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  UnityEngine_Vector3_o position;
  undefined1 auVar5 [16];
  undefined1 extraout_XMM0 [16];
  
  if (cam != (UnityEngine_Camera_o *)0x0) {
    fVar2 = bounds.fields.m_Center.fields.x - bounds.fields.m_Extents.fields.x;
    fVar6 = bounds.fields.m_Center.fields.y - bounds.fields.m_Extents.fields.y;
    fVar7 = bounds.fields.m_Center.fields.z - bounds.fields.m_Extents.fields.z;
    uVar1 = 0;
    UVar11.fields.z = fVar7;
    UVar11.fields.x = fVar2;
    UVar11.fields.y = fVar6;
    UVar11 = UnityEngine_Camera__WorldToScreenPoint(cam,UVar11,(MethodInfo *)0x0);
    fVar3 = bounds.fields.m_Center.fields.x + bounds.fields.m_Extents.fields.x;
    UVar12.fields.z = fVar7;
    UVar12.fields.x = fVar3;
    UVar12.fields.y = fVar6;
    UVar12 = UnityEngine_Camera__WorldToScreenPoint(cam,UVar12,(MethodInfo *)0x0);
    fVar4 = bounds.fields.m_Center.fields.y + bounds.fields.m_Extents.fields.y;
    UVar13.fields.z = fVar7;
    UVar13.fields.x = fVar2;
    UVar13.fields.y = fVar4;
    UVar13 = UnityEngine_Camera__WorldToScreenPoint(cam,UVar13,(MethodInfo *)0x0);
    UVar14.fields.z = fVar7;
    UVar14.fields.x = fVar3;
    UVar14.fields.y = fVar4;
    UVar14 = UnityEngine_Camera__WorldToScreenPoint(cam,UVar14,(MethodInfo *)0x0);
    UVar18.fields.z = bounds.fields.m_Center.fields.z + bounds.fields.m_Extents.fields.z;
    UVar18.fields.x = fVar2;
    UVar18.fields.y = fVar6;
    UVar15 = UnityEngine_Camera__WorldToScreenPoint(cam,UVar18,(MethodInfo *)0x0);
    UVar16.fields.z = UVar18.fields.z;
    UVar16.fields.x = fVar3;
    UVar16.fields.y = fVar6;
    UVar16 = UnityEngine_Camera__WorldToScreenPoint(cam,UVar16,(MethodInfo *)0x0);
    UVar17.fields.z = UVar18.fields.z;
    UVar17.fields.x = fVar2;
    UVar17.fields.y = fVar4;
    UVar17 = UnityEngine_Camera__WorldToScreenPoint(cam,UVar17,(MethodInfo *)0x0);
    position.fields.z = UVar18.fields.z;
    position.fields.x = fVar3;
    position.fields.y = fVar4;
    UVar18 = UnityEngine_Camera__WorldToScreenPoint(cam,position,(MethodInfo *)0x0);
    auVar5._8_8_ = extraout_XMM0._8_8_;
    auVar5._0_8_ = UVar18.fields._0_8_;
    local_a8 = UVar17.fields.x;
    uStack_a4 = UVar17.fields.y;
    local_98 = UVar16.fields.x;
    uStack_94 = UVar16.fields.y;
    local_88 = UVar15.fields.x;
    uStack_84 = UVar15.fields.y;
    local_78 = UVar14.fields.x;
    uStack_74 = UVar14.fields.y;
    local_68 = UVar13.fields.x;
    uStack_64 = UVar13.fields.y;
    local_58 = UVar12.fields.x;
    uStack_54 = UVar12.fields.y;
    local_48 = UVar11.fields.x;
    uStack_44 = UVar11.fields.y;
    auVar9._4_4_ = -(uint)(0.0 < UVar13.fields.z);
    auVar9._0_4_ = -(uint)(0.0 < UVar14.fields.z);
    auVar9._8_4_ = -(uint)(0.0 < UVar12.fields.z);
    auVar9._12_4_ = -(uint)(0.0 < UVar11.fields.z);
    auVar8._4_4_ = -(uint)(0.0 < UVar17.fields.z);
    auVar8._0_4_ = -(uint)(0.0 < UVar18.fields.z);
    auVar8._8_4_ = -(uint)(0.0 < UVar16.fields.z);
    auVar8._12_4_ = -(uint)(0.0 < UVar15.fields.z);
    auVar8 = packssdw(auVar8,auVar9);
    auVar8 = packsswb(auVar8,auVar5);
    local_28 = mouseScreen.fields.x;
    uStack_24 = mouseScreen.fields.y;
    if ((((((((SUB161(auVar8 >> 7,0) & 1) != 0 || (SUB161(auVar8 >> 0xf,0) & 1) != 0) ||
            (SUB161(auVar8 >> 0x17,0) & 1) != 0) || (SUB161(auVar8 >> 0x1f,0) & 1) != 0) ||
          (SUB161(auVar8 >> 0x27,0) & 1) != 0) || (SUB161(auVar8 >> 0x2f,0) & 1) != 0) ||
        (SUB161(auVar8 >> 0x37,0) & 1) != 0) || (SUB161(auVar8 >> 0x3f,0) & 1) != 0) {
      fVar2 = local_48;
      if (local_48 <= -3.4028235e+38) {
        fVar2 = -3.4028235e+38;
      }
      fVar3 = local_58;
      if (local_58 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = local_68;
      if (local_68 <= fVar3) {
        fVar2 = fVar3;
      }
      fVar3 = local_78;
      if (local_78 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = local_88;
      if (local_88 <= fVar3) {
        fVar2 = fVar3;
      }
      fVar3 = local_98;
      if (local_98 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = local_a8;
      if (local_a8 <= fVar3) {
        fVar2 = fVar3;
      }
      auVar10 = auVar5;
      if (UVar18.fields.x <= fVar2) {
        auVar10._4_12_ = auVar5._4_12_;
        auVar10._0_4_ = fVar2;
      }
      uVar1 = 0;
      if (local_28 <= auVar10._0_4_ + screenRadius) {
        if (3.4028235e+38 <= local_48) {
          local_48 = 3.4028235e+38;
        }
        if (local_48 <= local_58) {
          local_58 = local_48;
        }
        if (local_58 <= local_68) {
          local_68 = local_58;
        }
        if (local_68 <= local_78) {
          local_78 = local_68;
        }
        if (local_78 <= local_88) {
          local_88 = local_78;
        }
        if (local_88 <= local_98) {
          local_98 = local_88;
        }
        if (local_98 <= local_a8) {
          local_a8 = local_98;
        }
        if (local_a8 <= UVar18.fields.x) {
          auVar5._4_12_ = auVar5._4_12_;
          auVar5._0_4_ = local_a8;
        }
        if (auVar5._0_4_ - screenRadius <= local_28) {
          fVar2 = uStack_44;
          if (3.4028235e+38 <= uStack_44) {
            fVar2 = 3.4028235e+38;
          }
          fVar3 = uStack_54;
          if (fVar2 <= uStack_54) {
            fVar3 = fVar2;
          }
          fVar2 = uStack_64;
          if (fVar3 <= uStack_64) {
            fVar2 = fVar3;
          }
          fVar3 = uStack_74;
          if (fVar2 <= uStack_74) {
            fVar3 = fVar2;
          }
          fVar2 = uStack_84;
          if (fVar3 <= uStack_84) {
            fVar2 = fVar3;
          }
          fVar3 = uStack_94;
          if (fVar2 <= uStack_94) {
            fVar3 = fVar2;
          }
          fVar2 = uStack_a4;
          if (fVar3 <= uStack_a4) {
            fVar2 = fVar3;
          }
          fVar3 = UVar18.fields.y;
          fVar4 = fVar3;
          if (fVar2 <= fVar3) {
            fVar4 = fVar2;
          }
          if (fVar4 - screenRadius <= uStack_24) {
            if (uStack_44 <= -3.4028235e+38) {
              uStack_44 = -3.4028235e+38;
            }
            if (uStack_54 <= uStack_44) {
              uStack_54 = uStack_44;
            }
            if (uStack_64 <= uStack_54) {
              uStack_64 = uStack_54;
            }
            if (uStack_74 <= uStack_64) {
              uStack_74 = uStack_64;
            }
            if (uStack_84 <= uStack_74) {
              uStack_84 = uStack_74;
            }
            if (uStack_94 <= uStack_84) {
              uStack_94 = uStack_84;
            }
            if (uStack_a4 <= uStack_94) {
              uStack_a4 = uStack_94;
            }
            if (fVar3 <= uStack_a4) {
              fVar3 = uStack_a4;
            }
            uVar1 = (uint)(uStack_24 <= fVar3 + screenRadius);
          }
          else {
            uVar1 = 0;
          }
        }
      }
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, UnityEngine_Transform_o** owner, UnityEngine_Vector3_o* localVertex, const MethodInfo* method);
// 0x404b790

bool_conflict
MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,
          UnityEngine_Vector3_o *vertex,UnityEngine_Transform_o **owner,
          UnityEngine_Vector3_o *localVertex,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_Camera_o *__this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  UnityEngine_Bounds_o bounds;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined1 auVar5 [16];
  int32_t iVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  uint uVar9;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *pUVar11;
  MethodInfo *method_00;
  UnityEngine_Mesh_o *__this_05;
  UnityEngine_Vector3_array *pUVar13;
  UnityEngine_Transform_o *__this_06;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  undefined8 in_stack_fffffffffffffee8;
  undefined8 in_stack_fffffffffffffef0;
  Il2CppObject *in_stack_fffffffffffffef8;
  undefined1 local_fd;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined1 local_c8 [48];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  _union_329995 local_88;
  UnityEngine_Vector3_o *local_80;
  UnityEngine_Vector3_o *local_78;
  UnityEngine_Transform_o **local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  ulong uVar12;
  
  if (DAT_05704409 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704409 = '\x01';
  }
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (Il2CppMethodPointer)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (vertex->fields).x = (float)(int)uVar3;
  (vertex->fields).y = (float)(int)((ulong)uVar3 >> 0x20);
  (vertex->fields).z = fVar20;
  *owner = (UnityEngine_Transform_o *)0x0;
  il2cpp_runtime_glue(owner,0);
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fdd15 = '\x01';
  }
  uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (localVertex->fields).x = (float)(int)uVar3;
  (localVertex->fields).y = (float)(int)((ulong)uVar3 >> 0x20);
  (localVertex->fields).z = fVar20;
  UVar24 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  local_68._8_4_ = extraout_XMM0_Dc;
  local_68._0_8_ = UVar24.fields._0_8_;
  local_68._12_4_ = extraout_XMM0_Dd;
  iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar7 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pGVar4 = (__this->fields)._gameManager;
  if ((pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar4->fields).SelectedObjects,
     local_c8._40_8_ = camera, local_80 = localVertex, local_78 = vertex, local_70 = owner,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  fVar18 = (float)iVar6;
  fVar19 = (float)iVar7;
  System_Collections_Generic_HashSet<object>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
  local_c8._16_8_ = local_88;
  fVar20 = fVar18;
  if (fVar18 <= fVar19) {
    fVar20 = fVar19;
  }
  local_f8 = 0;
  local_f0 = 3.4028235e+38;
  local_fc = 3.4028235e+38;
LAB_0404b990:
  do {
    do {
      __this_03.fields._index = (int)in_stack_fffffffffffffef0;
      __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffef0 >> 0x20);
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
      __this_03.fields._current = in_stack_fffffffffffffef8;
      bVar8 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_03,(MethodInfo_3185890 *)local_c8);
      if ((char)bVar8 == '\0') {
        __this_04.fields._index = (int)in_stack_fffffffffffffef0;
        __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffef0 >> 0x20);
        __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8
        ;
        __this_04.fields._current = in_stack_fffffffffffffef8;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_04,(MethodInfo_3185880 *)local_c8);
        return (bool_conflict)local_f8;
      }
      if ((Il2CppObject *)local_c8._16_8_ == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar11 = *(void **)(local_c8._16_8_ + 0x18);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
    } while ((char)bVar8 != '\0');
    if (pUVar11 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10 = UnityEngine_GameObject__GetComponentsInChildren<object>
                        ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    if (pSVar10 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar15 = (int)pSVar10->max_length;
  } while (iVar15 < 1);
  uVar14 = 0;
  local_fd = (undefined1)local_f8;
  local_c8._24_8_ = pSVar10;
  if (iVar15 == 0) {
LAB_0404be11:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    __this_01 = (UnityEngine_MeshFilter_o *)((Il2CppObject **)(local_c8._24_8_ + 0x20))[(int)uVar14]
    ;
    if (__this_01 == (UnityEngine_MeshFilter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10 = (System_Object_array *)local_c8._24_8_;
    pUVar11 = (UnityEngine_Object_o *)
              UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar9 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar12 = (ulong)uVar9;
    if ((char)uVar9 == '\0') {
      method_00 = (MethodInfo *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this_01,MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Renderer__get_bounds
                  ((UnityEngine_Bounds_o *)local_48,(UnityEngine_Renderer_o *)method_00,
                   (MethodInfo *)0x0);
        local_88.genericMethod = (void *)local_48._16_8_;
        local_98._0_4_ = local_48._0_4_;
        local_98._4_4_ = local_48._4_4_;
        fStack_90 = (float)local_48._8_4_;
        fStack_8c = (float)local_48._12_4_;
        if ((Cameras_BaseCamera_o *)local_c8._40_8_ == (Cameras_BaseCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        in_stack_fffffffffffffee8 = CONCAT44(local_48._4_4_,local_48._0_4_);
        in_stack_fffffffffffffef0 = CONCAT44(local_48._12_4_,local_48._8_4_);
        bounds.fields.m_Center.fields.z = (float)local_48._8_4_;
        bounds.fields.m_Extents.fields.x = (float)local_48._12_4_;
        bounds.fields.m_Center.fields.x = (float)local_48._0_4_;
        bounds.fields.m_Center.fields.y = (float)local_48._4_4_;
        bounds.fields.m_Extents.fields.y = (float)local_48._16_4_;
        bounds.fields.m_Extents.fields.z = (float)local_48._20_4_;
        in_stack_fffffffffffffef8 = (Il2CppObject *)local_48._16_8_;
        uVar9 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                          (bounds,((Cameras_BaseCamera_Fields *)(local_c8._40_8_ + 0x10))->Camera,
                           (UnityEngine_Vector2_o)local_68._0_8_,fVar20,method_00);
        uVar12 = (ulong)uVar9;
        if ((char)uVar9 == '\0') goto LAB_0404ba30;
      }
      __this_05 = UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_Mesh_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar13 = UnityEngine_Mesh__get_vertices(__this_05,(MethodInfo *)0x0);
      __this_06 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar12 = pUVar13->max_length;
      if (__this_06 == (UnityEngine_Transform_o *)0x0) {
        if (0 < (int)uVar12) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_0404ba30;
      }
      if ((int)uVar12 < 1) goto LAB_0404ba30;
      pfVar16 = &pUVar13->m_Items[0].fields.z;
      local_f8 = CONCAT71((int7)((ulong)pSVar10 >> 8),local_fd);
      uVar17 = 0;
      local_c8._32_8_ = pUVar13;
      if ((uVar12 & 0xffffffff) == 0) {
LAB_0404bdc7:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      while( true ) {
        uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar16 + -2))->x;
        uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar16 + -2))->y;
        UVar24.fields.y = (float)uVar2;
        UVar24.fields.x = (float)uVar1;
        UVar24.fields.z = *pfVar16;
        UVar24 = UnityEngine_Transform__TransformPoint(__this_06,UVar24,(MethodInfo *)0x0);
        if ((Cameras_BaseCamera_o *)local_c8._40_8_ == (Cameras_BaseCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_02 = ((Cameras_BaseCamera_Fields *)(local_c8._40_8_ + 0x10))->Camera;
        if (__this_02 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        local_58._8_4_ = extraout_XMM0_Dc_00;
        local_58._0_8_ = UVar24.fields._0_8_;
        local_58._12_4_ = extraout_XMM0_Dd_00;
        UVar25 = UnityEngine_Camera__WorldToScreenPoint(__this_02,UVar24,(MethodInfo *)0x0);
        auVar5 = local_58;
        fVar22 = UVar25.fields.z;
        fVar23 = UVar25.fields.x;
        fVar21 = UVar25.fields.y;
        if ((((0.0 < fVar22) && (0.0 <= fVar23)) && (fVar21 <= fVar19)) &&
           ((0.0 <= fVar21 && (fVar23 <= fVar18)))) {
          fVar23 = (fVar21 - (float)local_68._4_4_) * (fVar21 - (float)local_68._4_4_) +
                   (fVar23 - (float)local_68._0_4_) * (fVar23 - (float)local_68._0_4_);
          if ((fVar23 + 36.0 < local_fc) ||
             ((fVar22 < local_f0 && (ABS(fVar23 - local_fc) <= 36.0)))) {
            (local_78->fields).x = (float)local_58._0_4_;
            (local_78->fields).y = (float)local_58._4_4_;
            (local_78->fields).z = UVar24.fields.z;
            *local_70 = __this_06;
            local_58 = auVar5;
            il2cpp_runtime_glue();
            if ((uint)*(il2cpp_array_size_t *)(local_c8._32_8_ + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3._0_4_ = ((UnityEngine_Vector3_Fields *)(pfVar16 + -2))->x;
            uVar3._4_4_ = ((UnityEngine_Vector3_Fields *)(pfVar16 + -2))->y;
            fVar21 = *pfVar16;
            (local_80->fields).x = (float)(undefined4)uVar3;
            (local_80->fields).y = (float)uVar3._4_4_;
            (local_80->fields).z = fVar21;
            local_f8 = CONCAT71((int7)((ulong)uVar3 >> 8),1);
            local_fc = fVar23;
            local_f0 = fVar22;
          }
        }
        uVar17 = uVar17 + 1;
        uVar9 = (uint)*(il2cpp_array_size_t *)(local_c8._32_8_ + 0x18);
        pfVar16 = pfVar16 + 3;
        if ((long)(int)uVar9 <= (long)uVar17) break;
        if (uVar9 <= uVar17) goto LAB_0404bdc7;
      }
    }
    else {
LAB_0404ba30:
      local_f8 = CONCAT71((int7)(uVar12 >> 8),local_fd);
    }
    uVar14 = uVar14 + 1;
    uVar9 = (uint)*(il2cpp_array_size_t *)(local_c8._24_8_ + 0x18);
    local_fd = (undefined1)local_f8;
    if ((int)uVar9 <= (int)uVar14) goto LAB_0404b990;
    if (uVar9 <= uVar14) goto LAB_0404be11;
  } while( true );
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x404e760

bool_conflict
MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,
          UnityEngine_Vector3_o *vertex,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_R9;
  UnityEngine_Vector3_Fields UStack_18;
  UnityEngine_Transform_o *pUStack_8;
  
  pUStack_8 = (UnityEngine_Transform_o *)0x0;
  UStack_18.z = 0.0;
  UStack_18.x = 0.0;
  UStack_18.y = 0.0;
  bVar1 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                    (__this,camera,vertex,&pUStack_8,(UnityEngine_Vector3_o *)&UStack_18,in_R9);
  return bVar1;
}


// MapEditor.PositionGizmo$$MoveSelectedObjects
// il2cpp: void MapEditor_PositionGizmo__MoveSelectedObjects (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x404e560

void MapEditor_PositionGizmo__MoveSelectedObjects
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o frameDelta,
               MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_03;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff88 [12];
  Il2CppRGCTXData *pIVar5;
  float local_48;
  float fStack_44;
  System_Collections_Generic_HashSet_Enumerator_T__o local_30;
  
  fVar3 = frameDelta.fields.z;
  if (DAT_0570440a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    DAT_0570440a = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator(&local_30,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
  pIVar5 = (Il2CppRGCTXData *)local_30.fields._set;
  while( true ) {
    __this_01.fields._version = (int32_t)fVar3;
    __this_01.fields._set =
         (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_01.fields._current = (Il2CppObject *)pIVar5;
    bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_02.fields._version = (int32_t)fVar3;
      __this_02.fields._set =
           (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_02.fields._current = (Il2CppObject *)pIVar5;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
      return;
    }
    if (local_30.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (local_30.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_03 = UnityEngine_GameObject__get_transform
                          (local_30.fields._current[1].monitor,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) break;
    UVar4 = UnityEngine_Transform__get_position(__this_03,(MethodInfo *)0x0);
    local_48 = frameDelta.fields.x;
    fStack_44 = frameDelta.fields.y;
    value.fields.x = UVar4.fields.x + local_48;
    value.fields.y = UVar4.fields.y + fStack_44;
    value.fields.z = UVar4.fields.z + fVar3;
    UnityEngine_Transform__set_position(__this_03,value,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$ResetCenter
// il2cpp: void MapEditor_PositionGizmo__ResetCenter (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x4049450

void MapEditor_PositionGizmo__ResetCenter(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  undefined1 auVar3 [16];
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *__this_03;
  float fVar6;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Quaternion_o value;
  undefined1 in_stack_ffffffffffffff88 [12];
  float fVar9;
  System_Collections_Generic_HashSet_T__o *pSVar10;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  System_Collections_Generic_HashSet_Enumerator_T__o local_38;
  
  if (DAT_0570440b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_0570440b = '\x01';
  }
  pUVar5 = (__this->fields)._transform;
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation
              (pUVar5,(UnityEngine_Quaternion_o)
                      **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects
       , __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet<object>__GetEnumerator(&local_38,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
      fVar9 = 0.0;
      local_48 = 0.0;
      fStack_44 = 0.0;
      fStack_40 = 0.0;
      fStack_3c = 0.0;
      pSVar10 = local_38.fields._set;
      while( true ) {
        __this_01.fields._version = (int32_t)fVar9;
        __this_01.fields._set =
             (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_01.fields._current = (Il2CppObject *)pSVar10;
        bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar4 == '\0') break;
        if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar5 = UnityEngine_GameObject__get_transform
                           (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        local_48 = local_48 + UVar8.fields.x;
        fStack_44 = fStack_44 + UVar8.fields.y;
        fStack_40 = fStack_40 + extraout_XMM0_Dc;
        fStack_3c = fStack_3c + extraout_XMM0_Dd;
        fVar9 = fVar9 + UVar8.fields.z;
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pGVar1->fields).CurrentGizmoMode == 1) {
          if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = (__this->fields)._transform;
          __this_03 = UnityEngine_GameObject__get_transform
                                (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0
                                );
          if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          value = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Transform__set_rotation(pUVar5,value,(MethodInfo *)0x0);
        }
      }
      __this_02.fields._version = (int32_t)fVar9;
      __this_02.fields._set =
           (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar10;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
      pGVar1 = (__this->fields)._gameManager;
      if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).SelectedObjects,
          pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
         (pUVar5 = (__this->fields)._transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        fVar6 = (float)(pSVar2->fields)._count;
        UVar8.fields.z = fVar9 / fVar6;
        auVar3._4_4_ = fStack_44;
        auVar3._0_4_ = local_48;
        auVar3._8_4_ = fStack_40;
        auVar3._12_4_ = fStack_3c;
        auVar7._4_4_ = fVar6;
        auVar7._0_4_ = fVar6;
        auVar7._8_8_ = 0;
        auVar7 = divps(auVar3,auVar7);
        UVar8.fields.x = (float)(int)auVar7._0_8_;
        UVar8.fields.y = (float)(int)((ulong)auVar7._0_8_ >> 0x20);
        UnityEngine_Transform__set_position(pUVar5,UVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$ResetColors
// il2cpp: void MapEditor_PositionGizmo__ResetColors (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x4048750

void MapEditor_PositionGizmo__ResetColors(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool_conflict bVar7;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MapEditor_PositionGizmo_o *pMVar8;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  
  pMVar8 = __this;
  if (DAT_0570440c == '\0') {
    pMVar8 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    il2cpp_init_method_metadata();
    DAT_0570440c = '\x01';
    in_RDX = extraout_RDX;
  }
  MapEditor_PositionGizmo__SetLineColor
            (pMVar8,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,
             in_RDX);
  MapEditor_PositionGizmo__SetLineColor
            (pMVar8,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,
             method_00);
  MapEditor_PositionGizmo__SetLineColor
            (pMVar8,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields,
             method_01);
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeXY;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar1 = (__this->fields).LineZColor.fields.r;
    uVar4 = (__this->fields).LineZColor.fields.g;
    color.fields.g = (float)uVar4;
    color.fields.r = (float)uVar1;
    color.fields.a = 0.4;
    color.fields.b = (__this->fields).LineZColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeXY,color,method_02);
  }
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeYZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar2 = (__this->fields).LineXColor.fields.r;
    uVar5 = (__this->fields).LineXColor.fields.g;
    color_00.fields.g = (float)uVar5;
    color_00.fields.r = (float)uVar2;
    color_00.fields.a = 0.4;
    color_00.fields.b = (__this->fields).LineXColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeYZ,color_00,method_03);
  }
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeXZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar3 = (__this->fields).LineYColor.fields.r;
    uVar6 = (__this->fields).LineYColor.fields.g;
    color_01.fields.g = (float)uVar6;
    color_01.fields.r = (float)uVar3;
    color_01.fields.a = 0.4;
    color_01.fields.b = (__this->fields).LineYColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeXZ,color_01,method_04);
    return;
  }
  return;
}


// MapEditor.PositionGizmo$$SetLineColor
// il2cpp: void MapEditor_PositionGizmo__SetLineColor (MapEditor_PositionGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, const MethodInfo* method);
// 0x404bf00

void MapEditor_PositionGizmo__SetLineColor
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Transform_o *line,
               UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Material_o *pUVar3;
  uint uVar4;
  
  if (DAT_0570440d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    DAT_0570440d = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)line,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_00 = (UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar4];
          if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto LAB_0404bfc9;
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_0404bfc9;
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_0404bfc9;
          UnityEngine_Material__set_renderQueue(pUVar3,0xc27,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_0404bfc9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.PositionGizmo$$.ctor
// il2cpp: void MapEditor_PositionGizmo___ctor (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x404f580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MapEditor_PositionGizmo___ctor(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_00ccd980;
  UVar1.b = (float)(int)DAT_00ccd980;
  UVar1.r = (float)(int)uVar2;
  UVar1.g = (float)(int)((ulong)uVar2 >> 0x20);
  UVar1.a = DAT_00ccd980._4_4_;
  (__this->fields).SelectedColor.fields = UVar1;
  (__this->fields).LineXColor.fields.r = 1.0;
  (__this->fields).LineXColor.fields.g = 0.0;
  (__this->fields).LineXColor.fields.b = 0.0;
  (__this->fields).LineXColor.fields.a = 1.0;
  (__this->fields).LineYColor.fields.r = 1.0;
  (__this->fields).LineYColor.fields.g = 0.92156863;
  (__this->fields).LineYColor.fields.b = 0.015686275;
  (__this->fields).LineYColor.fields.a = 1.0;
  (__this->fields).LineZColor.fields.r = 0.0;
  (__this->fields).LineZColor.fields.g = 0.0;
  (__this->fields).LineZColor.fields.b = (float)(int)uVar2;
  (__this->fields).LineZColor.fields.a = (float)(int)((ulong)uVar2 >> 0x20);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


