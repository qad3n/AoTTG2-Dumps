// Type: MapEditor.PositionGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/PositionGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs
// --------------------------------

// MapEditor.PositionGizmo.<>c$$.cctor
// il2cpp: void MapEditor_PositionGizmo___c___cctor (const MethodInfo* method);
// 0x5db2b30

void MapEditor_PositionGizmo___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_PositionGizmo_c);
    Il2CppMethodInitialized_07548117 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_PositionGizmo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9 = (MapEditor_PositionGizmo___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9);
  return;
}


// MapEditor.PositionGizmo.<>c$$.ctor
// il2cpp: void MapEditor_PositionGizmo___c___ctor (MapEditor_PositionGizmo___c_o* __this, const MethodInfo* method);
// 0x5db2ba0

void MapEditor_PositionGizmo___c___ctor(MapEditor_PositionGizmo___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.PositionGizmo.<>c$$<MoveSelectedObjects>b__48_0
// il2cpp: int32_t MapEditor_PositionGizmo___c___MoveSelectedObjects_b__48_0 (MapEditor_PositionGizmo___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5db2bb0

int32_t MapEditor_PositionGizmo___c___MoveSelectedObjects_b__48_0
                  (MapEditor_PositionGizmo___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// MapEditor.PositionGizmo$$Create
// il2cpp: MapEditor_PositionGizmo_o* MapEditor_PositionGizmo__Create (const MethodInfo* method);
// 0x5c93c80

MapEditor_PositionGizmo_o * MapEditor_PositionGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_PositionGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_075479f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_PositionGizmo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmos/PositionGizmo");
    Il2CppMethodInitialized_075479f0 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/PositionGizmo",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar1 = UnityEngine_GameObject__AddComponent_object_
                     (__this,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_PositionGizmo);
  UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
  return pMVar1;
}


// MapEditor.PositionGizmo$$IsActive
// il2cpp: bool MapEditor_PositionGizmo__IsActive (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c93d70

bool MapEditor_PositionGizmo__IsActive(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075479f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479f1 = '\x01';
  }
  x = (__this->fields)._activeLine;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.PositionGizmo$$Awake
// il2cpp: void MapEditor_PositionGizmo__Awake (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c93dc0

void MapEditor_PositionGizmo__Awake(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075479f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineZ");
    il2cpp_codegen_initialize_runtime_metadata(&"LineY");
    il2cpp_codegen_initialize_runtime_metadata(&"LineX");
    Il2CppMethodInitialized_075479f2 = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,method);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineX);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lineY);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)UnityEngine_Transform__Find(pUVar1,"LineZ",(MethodInfo *)0x0);
        (__this->fields)._lineZ = (UnityEngine_Transform_o *)method_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._lineZ);
        MapEditor_PositionGizmo__CreatePlaneHandles(__this,method_00);
        MapEditor_PositionGizmo__ResetColors(__this,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$CreatePlaneHandles
// il2cpp: void MapEditor_PositionGizmo__CreatePlaneHandles (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c93ea0

void MapEditor_PositionGizmo__CreatePlaneHandles(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_075479f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PlaneXZ");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaneXY");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaneYZ");
    Il2CppMethodInitialized_075479f3 = '\x01';
    in_RDX = extraout_RDX;
  }
  pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneXY",(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),
                      (UnityEngine_Color_o)(__this->fields).LineZColor.fields,in_RDX);
  (__this->fields)._planeXY = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planeXY);
  axisMask.fields.z = 1.0;
  axisMask.fields.x = 0.0;
  axisMask.fields.y = 1.0;
  pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneYZ",axisMask,
                      (UnityEngine_Color_o)(__this->fields).LineXColor.fields,method_01);
  (__this->fields)._planeYZ = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planeYZ);
  axisMask_00.fields.z = 1.0;
  axisMask_00.fields.x = 1.0;
  axisMask_00.fields.y = 0.0;
  method_00 = (MethodInfo *)
              MapEditor_PositionGizmo__CreatePlaneHandle
                        (__this,"PlaneXZ",axisMask_00,
                         (UnityEngine_Color_o)(__this->fields).LineYColor.fields,method_02);
  (__this->fields)._planeXZ = (UnityEngine_Transform_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planeXZ);
  pUVar1 = MapEditor_PositionGizmo__CreateCenterSquare(__this,method_00);
  (__this->fields)._centerSquare = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._centerSquare);
  pUVar1 = (__this->fields)._centerSquare;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$CreateCenterSquare
// il2cpp: UnityEngine_Transform_o* MapEditor_PositionGizmo__CreateCenterSquare (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c94430

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreateCenterSquare(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  MapEditor_PositionGizmo_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_MeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_03;
  UnityEngine_BoxCollider_o *__this_04;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *__this_05;
  UnityEngine_Color_o value_00;
  UnityEngine_Vector3_o value_01;
  
  if (Il2CppMethodInitialized_075479f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"CenterSquare");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor/Gizmo");
    Il2CppMethodInitialized_075479f4 = '\x01';
  }
  __this_00 = (MapEditor_PositionGizmo_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,"CenterSquare",(MethodInfo *)0x0)
  ;
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (__this_00 != (MapEditor_PositionGizmo_o *)0x0) {
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)__this_00,
               TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(pUVar1,(__this->fields)._transform,false,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar1,(UnityEngine_Vector3_o)
                          (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_00,
                               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter
                              );
        method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer;
        __this_05 = __this_00;
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_00,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
        value = MapEditor_PositionGizmo__BuildQuadMesh
                          (__this_05,(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),6.0,method_00);
        if (__this_01 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_sharedMesh(__this_01,value,(MethodInfo *)0x0);
          shader = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor(__this_03,shader,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            value_00.fields.b = 1.0;
            value_00.fields.a = 0.5;
            value_00.fields.r = 1.0;
            value_00.fields.g = 1.0;
            UnityEngine_Material__set_color(__this_03,value_00,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(__this_03,0x1268,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_MeshRenderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this_02,__this_03,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode
                        ((UnityEngine_Renderer_o *)__this_02,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows
                        ((UnityEngine_Renderer_o *)__this_02,false,(MethodInfo *)0x0);
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_00,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
              if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
                value_01.fields.z = 0.5;
                value_01.fields.x = 6.0;
                value_01.fields.y = 6.0;
                UnityEngine_BoxCollider__set_size(__this_04,value_01,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                }
                UnityEngine_BoxCollider__set_center
                          (__this_04,
                           (UnityEngine_Vector3_o)
                           (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0)
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
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$CreatePlaneHandle
// il2cpp: UnityEngine_Transform_o* MapEditor_PositionGizmo__CreatePlaneHandle (MapEditor_PositionGizmo_o* __this, System_String_o* name, UnityEngine_Vector3_o axisMask, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5c94140

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreatePlaneHandle
          (MapEditor_PositionGizmo_o *__this,System_String_o *name,UnityEngine_Vector3_o axisMask,
          UnityEngine_Color_o color,MethodInfo *method)

{
  ulong uVar1;
  MapEditor_PositionGizmo_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_MeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_03;
  UnityEngine_BoxCollider_o *__this_04;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *__this_05;
  uint uVar3;
  UnityEngine_Color_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  float local_58;
  float fStack_54;
  float local_48;
  
  if (Il2CppMethodInitialized_075479f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor/Gizmo");
    Il2CppMethodInitialized_075479f5 = '\x01';
  }
  __this_00 = (MapEditor_PositionGizmo_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,name,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (__this_00 != (MapEditor_PositionGizmo_o *)0x0) {
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)__this_00,
               TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(pUVar2,(__this->fields)._transform,false,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        local_58 = axisMask.fields.x;
        fStack_54 = axisMask.fields.y;
        value_01.fields.x = local_58 * 8.0;
        value_01.fields.y = fStack_54 * 8.0;
        value_01.fields.z = axisMask.fields.z * 8.0;
        UnityEngine_Transform__set_localPosition(pUVar2,value_01,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_00,
                               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter
                              );
        method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer;
        __this_05 = __this_00;
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_00,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
        value = MapEditor_PositionGizmo__BuildQuadMesh(__this_05,axisMask,6.0,method_00);
        if (__this_01 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_sharedMesh(__this_01,value,(MethodInfo *)0x0);
          shader = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor(__this_03,shader,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            local_48 = color.fields.b;
            value_00.fields.a = 0.4;
            value_00.fields.b = local_48;
            value_00.fields.r = color.fields.r;
            value_00.fields.g = color.fields.g;
            UnityEngine_Material__set_color(__this_03,value_00,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(__this_03,0x1267,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_MeshRenderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this_02,__this_03,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode
                        ((UnityEngine_Renderer_o *)__this_02,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows
                        ((UnityEngine_Renderer_o *)__this_02,false,(MethodInfo *)0x0);
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_00,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
              if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
                uVar3 = -(uint)(0.0 < axisMask.fields.z);
                uVar1 = CONCAT44(-(uint)(0.0 < fStack_54),-(uint)(0.0 < local_58)) & 0x40c0000040c00000 |
                        CONCAT44(~-(uint)(0.0 < fStack_54),~-(uint)(0.0 < local_58)) & 0x3f0000003f000000;
                value_02.fields.z = (float)(~uVar3 & 0x3f000000 | uVar3 & 0x40c00000);
                value_02.fields.x = (float)(int)uVar1;
                value_02.fields.y = (float)(int)(uVar1 >> 0x20);
                UnityEngine_BoxCollider__set_size(__this_04,value_02,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                }
                UnityEngine_BoxCollider__set_center
                          (__this_04,
                           (UnityEngine_Vector3_o)
                           (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                pUVar2 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
                return pUVar2;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$BuildQuadMesh
// il2cpp: UnityEngine_Mesh_o* MapEditor_PositionGizmo__BuildQuadMesh (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o axisMask, float size, const MethodInfo* method);
// 0x5c94700
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c94962: movss xmm0, dword ptr [rip - 0x4cd3106]
// asm:   0x5c9496a: xorps xmm4, xmm4
// asm:   0x5c9496d: je 0x5c947b4
// asm:   0x5c94973: jmp 0x5c947b8

UnityEngine_Mesh_o *
MapEditor_PositionGizmo__BuildQuadMesh
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o axisMask,float size,MethodInfo *method)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector3_array *value_00;
  UnityEngine_Mesh_o *__this_00;
  System_Int32_array *value_01;
  bool bVar6;
  float fVar7;
  float extraout_XMM0_Db;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_b8;
  float fStack_b4;
  UnityEngine_Vector3_StaticFields local_a0;
  float local_28;
  
  fVar7 = axisMask.fields.y;
  local_28 = size;
  if (Il2CppMethodInitialized_075479f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94F557CF5A
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_075479f6 = '\x01';
  }
  bVar4 = axisMask.fields.x <= 0.0;
  fVar11 = 0.0;
  fVar30 = 1.0;
  local_a0.downVector.fields.y = 1.0;
  local_a0.downVector.fields.z = 0.0;
  if (axisMask.fields.z <= 0.0) {
    fVar11 = 1.0;
    fVar26 = 0.0;
    if (0.0 < fVar7) goto label_05c9479e;
label_05c9494b:
    bVar6 = bVar4 || fVar7 <= 0.0;
    fVar11 = 1.0;
    fVar26 = 0.0;
    if (!bVar4 && fVar7 > 0.0) goto label_05c947a6;
label_05c94956:
    local_a0.downVector.fields.z = fVar26;
    local_a0.downVector.fields.y = fVar11;
    if (!bVar6) goto label_05c947af;
label_05c94962:
    fVar7 = 1.0;
    fVar30 = 0.0;
  }
  else {
    fVar26 = fVar30;
    if (fVar7 <= 0.0) goto label_05c9494b;
label_05c9479e:
    bVar6 = bVar4 || fVar7 <= 0.0;
    if (bVar4 || fVar7 <= 0.0) goto label_05c94956;
label_05c947a6:
    if (bVar6) goto label_05c94962;
label_05c947af:
    fVar7 = 0.0;
  }
  local_a0.leftVector.fields.z = 0.0;
  local_a0.rightVector.fields.x = fVar30;
  local_a0.rightVector.fields.y = 0.0;
  local_a0.rightVector.fields.z = 0.0;
  auVar12 = ZEXT416((uint)fVar7);
  local_a0.positiveInfinityVector.fields.z = (float)auVar12._0_4_;
  local_a0.negativeInfinityVector.fields.x = (float)auVar12._4_4_;
  local_a0.negativeInfinityVector.fields.y = (float)auVar12._8_4_;
  local_a0.negativeInfinityVector.fields.z = (float)auVar12._12_4_;
  local_a0.leftVector.fields.x = 0.0;
  local_a0.leftVector.fields.y = 0.0;
  fVar11 = fVar30;
  fVar26 = local_a0.downVector.fields.y;
  fVar29 = 0.0;
  fVar31 = 0.0;
  fVar32 = local_a0.downVector.fields.z;
  fVar15 = local_a0.downVector.fields.z;
  fVar23 = local_a0.downVector.fields.z;
  fVar25 = local_a0.downVector.fields.z;
  fVar8 = local_a0.downVector.fields.z;
  fVar9 = 0.0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  fVar13 = 0.0;
  fVar16 = fVar7;
  fVar18 = 0.0;
  fVar20 = 0.0;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_a0.upVector.fields.x = 0.0;
    local_a0.upVector.fields.z = 0.0;
    local_a0.downVector.fields.x = 0.0;
    local_a0.backVector.fields.z = 0.0;
    local_a0.positiveInfinityVector.fields.x = 0.0;
    local_a0.positiveInfinityVector.fields.y = 0.0;
    local_a0.forwardVector.fields.z = 0.0;
    local_a0.backVector.fields.x = 0.0;
    local_a0.zeroVector.fields.z = local_a0.downVector.fields.z;
    local_a0.oneVector.fields.x = local_a0.downVector.fields.z;
    local_a0.oneVector.fields.y = local_a0.downVector.fields.z;
    local_a0.oneVector.fields.z = local_a0.downVector.fields.z;
    local_a0.upVector.fields.y = fVar7;
    local_a0.forwardVector.fields.x = fVar30;
    local_a0.forwardVector.fields.y = local_a0.downVector.fields.y;
    local_a0.backVector.fields.y = local_a0.downVector.fields.z;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar11 = local_a0.forwardVector.fields.x;
    fVar26 = local_a0.forwardVector.fields.y;
    fVar29 = local_a0.forwardVector.fields.z;
    fVar31 = local_a0.backVector.fields.x;
    fVar32 = local_a0.zeroVector.fields.z;
    fVar15 = local_a0.oneVector.fields.x;
    fVar23 = local_a0.oneVector.fields.y;
    fVar25 = local_a0.oneVector.fields.z;
    fVar8 = local_a0.backVector.fields.y;
    fVar9 = local_a0.backVector.fields.z;
    fVar27 = local_a0.positiveInfinityVector.fields.x;
    fVar28 = local_a0.positiveInfinityVector.fields.y;
    fVar13 = local_a0.upVector.fields.x;
    fVar16 = local_a0.upVector.fields.y;
    fVar18 = local_a0.upVector.fields.z;
    fVar20 = local_a0.downVector.fields.x;
  }
  fVar10 = fVar30 * local_a0.downVector.fields.y;
  fVar30 = fVar30 * local_a0.downVector.fields.z;
  local_a0.zeroVector.fields.x = 0.0;
  local_a0.zeroVector.fields.y = 0.0;
  fVar22 = fVar32 * local_a0.leftVector.fields.z;
  fVar24 = fVar15 * local_a0.rightVector.fields.x;
  fVar14 = fVar13 * fVar11;
  fVar17 = fVar16 * fVar26;
  fVar19 = fVar18 * fVar29;
  fVar21 = fVar20 * fVar31;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_a0.zeroVector.fields.z = fVar32 * local_a0.leftVector.fields.z;
    local_a0.oneVector.fields.x = fVar15 * local_a0.rightVector.fields.x;
    local_a0.oneVector.fields.y = fVar23 * local_a0.rightVector.fields.y;
    local_a0.oneVector.fields.z = fVar25 * local_a0.rightVector.fields.z;
    local_a0.upVector.fields.x = fVar13 * fVar11;
    local_a0.upVector.fields.y = fVar16 * fVar26;
    local_a0.upVector.fields.z = fVar18 * fVar29;
    local_a0.downVector.fields.x = fVar20 * fVar31;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar22 = local_a0.zeroVector.fields.z;
    fVar24 = local_a0.oneVector.fields.x;
    fVar14 = local_a0.upVector.fields.x;
    fVar17 = local_a0.upVector.fields.y;
    fVar19 = local_a0.upVector.fields.z;
    fVar21 = local_a0.downVector.fields.x;
  }
  fVar10 = fVar10 - fVar22;
  fVar30 = fVar30 - fVar24;
  auVar12._0_4_ = fVar7 * fVar8 - fVar14;
  auVar12._4_4_ = fVar9 * 0.0 - fVar17;
  auVar12._8_4_ = fVar27 * 0.0 - fVar19;
  auVar12._12_4_ = fVar28 * 0.0 - fVar21;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar7 = fVar10 * fVar10 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    fVar30 = extraout_XMM0_Db;
    if (fVar7 <= 1e-05) goto label_05c94920;
label_05c94998:
    fVar10 = fVar10 / fVar7;
    auVar3._4_4_ = fVar7;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = fVar30;
    auVar3._12_4_ = fVar30;
    auVar12 = divps(auVar12,auVar3);
    local_a0.zeroVector.fields.x = auVar12._0_4_;
    local_a0.zeroVector.fields.y = auVar12._4_4_;
    pUVar5 = &local_a0;
  }
  else {
    fVar7 = SQRT(fVar7);
    if (1e-05 < fVar7) goto label_05c94998;
label_05c94920:
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar10 = (pUVar5->zeroVector).fields.z;
  }
  uVar1._0_4_ = (pUVar5->zeroVector).fields.x;
  uVar1._4_4_ = (pUVar5->zeroVector).fields.y;
  value = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
  if (value == (UnityEngine_Vector3_array *)0x0) goto label_05c94c4e;
  uVar2 = (uint)value->max_length;
  if (uVar2 != 0) {
    fVar26 = local_28 * 0.5;
    fVar7 = local_a0.positiveInfinityVector.fields.z * fVar26;
    fVar11 = local_a0.leftVector.fields.z * fVar26;
    fVar30 = local_a0.rightVector.fields.x * fVar26;
    fVar29 = fVar26 * -0.0 - fVar7;
    fVar31 = -local_a0.downVector.fields.y * fVar26 - fVar11;
    fVar32 = -local_a0.downVector.fields.z * fVar26 - fVar30;
    value->m_Items[0].fields.x = fVar31;
    value->m_Items[0].fields.y = fVar32;
    value->m_Items[0].fields.z = fVar29;
    if (uVar2 != 1) {
      fVar15 = fVar26 * 0.0 - fVar7;
      fVar23 = fVar26 * local_a0.downVector.fields.y - fVar11;
      fVar25 = fVar26 * local_a0.downVector.fields.z - fVar30;
      value->m_Items[1].fields.x = fVar23;
      value->m_Items[1].fields.y = fVar25;
      value->m_Items[1].fields.z = fVar15;
      if (2 < uVar2) {
        fVar27 = fVar26 * 0.0 + fVar7;
        fVar8 = fVar26 * local_a0.downVector.fields.y + fVar11;
        fVar9 = fVar26 * local_a0.downVector.fields.z + fVar30;
        value->m_Items[2].fields.x = fVar8;
        value->m_Items[2].fields.y = fVar9;
        value->m_Items[2].fields.z = fVar27;
        if (uVar2 != 3) {
          fVar11 = fVar11 + -local_a0.downVector.fields.y * fVar26;
          fVar30 = fVar30 + -local_a0.downVector.fields.z * fVar26;
          fVar7 = fVar26 * -0.0 + fVar7;
          value->m_Items[3].fields.x = fVar11;
          value->m_Items[3].fields.y = fVar30;
          value->m_Items[3].fields.z = fVar7;
          if (4 < uVar2) {
            value->m_Items[4].fields.x = fVar31;
            value->m_Items[4].fields.y = fVar32;
            value->m_Items[4].fields.z = fVar29;
            if (uVar2 != 5) {
              value->m_Items[5].fields.x = fVar23;
              value->m_Items[5].fields.y = fVar25;
              value->m_Items[5].fields.z = fVar15;
              if (6 < uVar2) {
                value->m_Items[6].fields.x = fVar8;
                value->m_Items[6].fields.y = fVar9;
                value->m_Items[6].fields.z = fVar27;
                if (uVar2 != 7) {
                  value->m_Items[7].fields.x = fVar11;
                  value->m_Items[7].fields.y = fVar30;
                  value->m_Items[7].fields.z = fVar7;
                  value_00 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
                  if (value_00 == (UnityEngine_Vector3_array *)0x0) {
label_05c94c4e:
                    ThrowNullReferenceException();
                  }
                  uVar2 = (uint)value_00->max_length;
                  if (uVar2 != 0) {
                    value_00->m_Items[0].fields.x = (float)(undefined4)uVar1;
                    value_00->m_Items[0].fields.y = (float)uVar1._4_4_;
                    value_00->m_Items[0].fields.z = fVar10;
                    if (uVar2 != 1) {
                      value_00->m_Items[1].fields.x = (float)(undefined4)uVar1;
                      value_00->m_Items[1].fields.y = (float)uVar1._4_4_;
                      value_00->m_Items[1].fields.z = fVar10;
                      if (2 < uVar2) {
                        value_00->m_Items[2].fields.x = (float)(undefined4)uVar1;
                        value_00->m_Items[2].fields.y = (float)uVar1._4_4_;
                        value_00->m_Items[2].fields.z = fVar10;
                        if (uVar2 != 3) {
                          value_00->m_Items[3].fields.x = (float)(undefined4)uVar1;
                          value_00->m_Items[3].fields.y = (float)uVar1._4_4_;
                          value_00->m_Items[3].fields.z = fVar10;
                          if (4 < uVar2) {
                            fVar10 = -fVar10;
                            value_00->m_Items[4].fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
                            value_00->m_Items[4].fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20)
                            ;
                            value_00->m_Items[4].fields.z = fVar10;
                            if (uVar2 != 5) {
                              value_00->m_Items[5].fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
                              value_00->m_Items[5].fields.y =
                                   (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
                              value_00->m_Items[5].fields.z = fVar10;
                              if (6 < uVar2) {
                                value_00->m_Items[6].fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
                                value_00->m_Items[6].fields.y =
                                     (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
                                value_00->m_Items[6].fields.z = fVar10;
                                if (uVar2 != 7) {
                                  value_00->m_Items[7].fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
                                  value_00->m_Items[7].fields.y =
                                       (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
                                  value_00->m_Items[7].fields.z = fVar10;
                                  __this_00 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
                                  UnityEngine_Mesh___ctor(__this_00,(MethodInfo *)0x0);
                                  if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
                                    UnityEngine_Mesh__set_vertices(__this_00,value,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__set_normals(__this_00,value_00,(MethodInfo *)0x0);
                                    value_01 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0xc);
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                              ((System_Array_o *)value_01,
                                               FieldRva_PrivateImplementationDetails_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94F557CF5A
                                               ,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__set_triangles(__this_00,value_01,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__RecalculateBounds(__this_00,(MethodInfo *)0x0);
                                    return __this_00;
                                  }
                                  goto label_05c94c4e;
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
  ThrowIndexOutOfRangeException();
}


// MapEditor.PositionGizmo$$OnSelectionChange
// il2cpp: void MapEditor_PositionGizmo__OnSelectionChange (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c94c60

void MapEditor_PositionGizmo__OnSelectionChange(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075479f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479f7 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar2->fields)._count) {
      x = (pGVar1->fields).CurrentGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          method_00 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          MapEditor_PositionGizmo__ResetCenter(__this,method_00);
          MapEditor_PositionGizmo__ResetColors(__this,method_00);
          return;
        }
        goto label_05c94d33;
      }
    }
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05c94d33:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$Update
// il2cpp: void MapEditor_PositionGizmo__Update (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c95030
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c95d10: jmp 0x5c95d48
// asm:   0x5c95e06: xor esi, esi
// asm:   0x5c95e08: call 0x5951420  ; GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting()
// asm:   0x5c95e0d: jmp 0x5c95cd7
// asm:   0x5c966b9: lea rdi, [rsp + 0x40]
// asm:   0x5c96718: movss xmm1, dword ptr [rsp + 0x30]

void MapEditor_PositionGizmo__Update(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Plane_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint32_t uVar8;
  int iVar9;
  Settings_InputSettings_o *pSVar10;
  Settings_MapEditorInputSettings_o *pSVar11;
  Settings_KeybindSetting_o *selectKey;
  Settings_KeybindSetting_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar12;
  System_Collections_Generic_HashSet_MapObject__o *pSVar13;
  UnityEngine_Transform_o *pUVar14;
  Settings_MapEditorSettings_o *pSVar15;
  Settings_FloatSetting_o *pSVar16;
  undefined1 auVar17 [16];
  UnityEngine_Ray_o ray;
  UnityEngine_Ray_o ray_00;
  UnityEngine_Vector3_o pos;
  UnityEngine_Vector3_o pos_00;
  UnityEngine_Vector3_o pos_01;
  undefined8 uVar18;
  _union_14 _Var19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  UnityEngine_GameObject_o *pUVar23;
  System_Int32_array *layers;
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *__this_01;
  UnityEngine_Transform_o *pUVar24;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MethodInfo *pMVar25;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_03;
  MethodInfo *pMVar26;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *pMVar27;
  MapEditor_PositionGizmo_o *__this_02;
  MethodInfo *in_R9;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar32;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float fVar33;
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  undefined8 extraout_XMM1_Qa;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar34 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o drag;
  UnityEngine_Vector3_o frameDelta;
  float fStack_218;
  float fStack_214;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  float fStack_1f0;
  undefined1 auStack_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  UnityEngine_Ray_o UStack_1d0;
  undefined1 auStack_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_19c;
  UnityEngine_Vector2_Fields UStack_198;
  float fStack_190;
  undefined1 auStack_188 [8];
  float fStack_180;
  InvokerMethod pIStack_178;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_140;
  float fStack_138;
  UnityEngine_Vector3_Fields UStack_130;
  UnityEngine_Vector3_Fields UStack_120;
  UnityEngine_Vector3_Fields UStack_110;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  Il2CppType *pIStack_d8;
  float fStack_d0;
  float fStack_cc;
  _union_13 _Stack_c8;
  _union_14 _Stack_c0;
  float fStack_b8;
  float fStack_ac;
  UnityEngine_Vector3_Fields UStack_a8;
  UnityEngine_RaycastHit_o UStack_98;
  UnityEngine_RaycastHit_o UStack_68;
  
  if (Il2CppMethodInitialized_075479f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionCommand);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_075479f8 = '\x01';
  }
  UStack_110.z = 0.0;
  UStack_110.x = 0.0;
  UStack_110.y = 0.0;
  auStack_100 = (undefined1  [8])0x0;
  UStack_120.z = 0.0;
  UStack_120.x = 0.0;
  UStack_120.y = 0.0;
  UStack_98.fields.m_UV.fields.x = 0.0;
  UStack_98.fields.m_UV.fields.y = 0.0;
  UStack_98.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_98.fields.m_Normal.fields.y = 0.0;
  UStack_98.fields.m_Normal.fields.z = 0.0;
  UStack_98.fields.m_FaceID = 0;
  UStack_98.fields.m_Distance = 0.0;
  UStack_98.fields.m_Point.fields.x = 0.0;
  UStack_98.fields.m_Point.fields.y = 0.0;
  UStack_98.fields.m_Point.fields.z = 0.0;
  UStack_98.fields.m_Normal.fields.x = 0.0;
  fStack_190 = 0.0;
  UStack_198.x = 0.0;
  UStack_198.y = 0.0;
  pIStack_d8 = (Il2CppType *)0x0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  _Stack_c8.rgctx_data = (Il2CppRGCTXData *)0x0;
  UStack_68.fields.m_UV.fields.x = 0.0;
  UStack_68.fields.m_UV.fields.y = 0.0;
  UStack_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_68.fields.m_Normal.fields.y = 0.0;
  UStack_68.fields.m_Normal.fields.z = 0.0;
  UStack_68.fields.m_FaceID = 0;
  UStack_68.fields.m_Distance = 0.0;
  UStack_68.fields.m_Point.fields.x = 0.0;
  UStack_68.fields.m_Point.fields.y = 0.0;
  UStack_68.fields.m_Point.fields.z = 0.0;
  UStack_68.fields.m_Normal.fields.x = 0.0;
  fStack_170 = 0.0;
  pIStack_178 = (InvokerMethod)0x0;
  fStack_19c = 0.0;
  UStack_130.z = 0.0;
  UStack_130.x = 0.0;
  UStack_130.y = 0.0;
  fStack_180 = 0.0;
  auStack_188 = (undefined1  [8])0x0;
  fStack_138 = 0.0;
  uStack_140._0_4_ = 0;
  uStack_140._4_2_ = 0;
  uStack_140._6_2_ = 0;
  fStack_1f0 = 0.0;
  uStack_1f8._0_4_ = 0.0;
  uStack_1f8._4_4_ = 0.0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,method);
  pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  auVar34 = _auStack_1b8;
  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  if (pSVar10 == (Settings_InputSettings_o *)0x0) goto label_05c96730;
  pSVar11 = (pSVar10->fields).MapEditor;
  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  if (pSVar11 == (Settings_MapEditorInputSettings_o *)0x0) goto label_05c96730;
  pMVar27 = (MethodInfo *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  selectKey = (pSVar11->fields).Select;
  __this_00 = (pSVar11->fields).VertexSnap;
  pUVar24 = (__this->fields)._activeLine;
  pMVar25 = pMVar27;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar20 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar20) {
    pUVar24 = (__this->fields)._centerSquare;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar20 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar20) {
      auVar34 = _auStack_1b8;
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
      if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_05c96730;
      bVar20 = false;
      bVar21 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
      auVar34 = _auStack_1b8;
      if (bVar21) {
        pGVar12 = (__this->fields)._gameManager;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pGVar12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05c96730;
        pSVar13 = (pGVar12->fields).SelectedObjects;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pSVar13 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_05c96730;
        bVar20 = 0 < (pSVar13->fields)._count;
      }
      pUVar24 = (__this->fields)._centerSquare;
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
      pUVar23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0);
      auVar34 = _auStack_1b8;
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
      if (pUVar23 == (UnityEngine_GameObject_o *)0x0) goto label_05c96730;
      UnityEngine_GameObject__SetActive(pUVar23,bVar20,(MethodInfo *)0x0);
      pUVar24 = (__this->fields)._planeXY;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar21 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar21) {
        pUVar24 = (__this->fields)._planeXY;
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        pUVar23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0);
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar23 == (UnityEngine_GameObject_o *)0x0) goto label_05c96730;
        UnityEngine_GameObject__SetActive(pUVar23,!bVar20,(MethodInfo *)0x0);
      }
      pUVar24 = (__this->fields)._planeYZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar21 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar21) {
        pUVar24 = (__this->fields)._planeYZ;
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        pUVar23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0);
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar23 == (UnityEngine_GameObject_o *)0x0) goto label_05c96730;
        UnityEngine_GameObject__SetActive(pUVar23,!bVar20,(MethodInfo *)0x0);
      }
      pUVar24 = (__this->fields)._planeXZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar21 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar21) {
        pUVar24 = (__this->fields)._planeXZ;
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        pUVar23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0);
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar23 == (UnityEngine_GameObject_o *)0x0) goto label_05c96730;
        UnityEngine_GameObject__SetActive(pUVar23,!bVar20,(MethodInfo *)0x0);
      }
      if (bVar20) {
        pMVar25 = (MethodInfo *)auStack_100;
        bVar20 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                           (__this,(Cameras_BaseCamera_o *)pMVar27,(UnityEngine_Vector3_o *)&UStack_110,
                            (UnityEngine_Transform_o **)pMVar25,(UnityEngine_Vector3_o *)&UStack_120,in_R9);
        if (bVar20) {
          pUVar24 = (__this->fields)._transform;
          auVar34 = _auStack_1b8;
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
          UVar43.fields.z = UStack_110.z;
          UVar43.fields.x = UStack_110.x;
          UVar43.fields.y = UStack_110.y;
          UnityEngine_Transform__set_position(pUVar24,UVar43,(MethodInfo *)0x0);
          (__this->fields)._snapAnchorTransform = (UnityEngine_Transform_o *)auStack_100;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._snapAnchorTransform);
          (__this->fields)._snapAnchorLocal.fields.z = UStack_120.z;
          (__this->fields)._snapAnchorLocal.fields.x = UStack_120.x;
          (__this->fields)._snapAnchorLocal.fields.y = UStack_120.y;
          (__this->fields)._hasSnapAnchor = true;
        }
        pUVar24 = (__this->fields)._centerSquare;
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        UVar43 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pMVar27 == (MethodInfo *)0x0) goto label_05c96730;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if ((Utility_BaseComponentCache_o *)pMVar27->return_type == (Utility_BaseComponentCache_o *)0x0)
        goto label_05c96730;
        auStack_1e8._0_4_ = UVar43.fields.z;
        pUVar14 = (((Utility_BaseComponentCache_o *)pMVar27->return_type)->fields).Transform;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        UVar44 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if ((Utility_BaseComponentCache_o *)pMVar27->return_type == (Utility_BaseComponentCache_o *)0x0)
        goto label_05c96730;
        pUVar14 = (((Utility_BaseComponentCache_o *)pMVar27->return_type)->fields).Transform;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        uStack_208._0_4_ = UVar43.fields.x;
        uStack_208._4_4_ = UVar43.fields.y;
        uStack_208 = (Il2CppType *)
                     CONCAT44(uStack_208._4_4_ - UVar44.fields.y,(float)uStack_208 - UVar44.fields.x);
        auStack_1e8._0_4_ = (float)auStack_1e8._0_4_ - UVar44.fields.z;
        UVar43 = UnityEngine_Transform__get_up(pUVar14,(MethodInfo *)0x0);
        UStack_a8.z = UVar43.fields.z;
        UStack_1d0.fields.m_Origin.fields._0_8_ = uStack_208;
        UStack_1d0.fields.m_Origin.fields.z = (float)auStack_1e8._0_4_;
        UStack_a8._0_8_ = UVar43.fields._0_8_;
        value = UnityEngine_Quaternion__Internal_LookRotation
                          ((UnityEngine_Vector3_o *)&UStack_1d0,(UnityEngine_Vector3_o *)&UStack_a8,
                           (MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar24,value,(MethodInfo *)0x0);
      }
      else {
        (__this->fields)._hasSnapAnchor = false;
        (__this->fields)._snapAnchorTransform = (UnityEngine_Transform_o *)0x0;
        pMVar26 = (MethodInfo *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._snapAnchorTransform);
        MapEditor_PositionGizmo__ResetCenter(__this,pMVar26);
      }
    }
  }
  targetAddress = &(__this->fields)._activeLine;
  pUVar24 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar20 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar20) {
    bVar20 = MapEditor_BaseGizmo__TryGetPointerDown
                       ((MapEditor_BaseGizmo_o *)__this,selectKey,(UnityEngine_Vector3_o *)&UStack_198,pMVar25
                       );
    if (!bVar20) {
      return;
    }
    auVar34 = _auStack_1b8;
    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
    if (pMVar27 != (MethodInfo *)0x0) {
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
      if (pMVar27->klass != (Il2CppClass *)0x0) {
        UVar44.fields.z = fStack_190;
        UVar44.fields.x = UStack_198.x;
        UVar44.fields.y = UStack_198.y;
        UnityEngine_Camera__ScreenPointToRay_68c1290
                  (&UStack_1d0,(UnityEngine_Camera_o *)pMVar27->klass,UVar44,(MethodInfo *)0x0);
        layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (layers != (System_Int32_array *)0x0) {
          if ((int)layers->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo;
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          ray.fields.m_Direction.fields.z = UStack_1d0.fields.m_Direction.fields.z;
          ray.fields.m_Direction.fields.y = UStack_1d0.fields.m_Direction.fields.y;
          ray.fields.m_Origin.fields.z = UStack_1d0.fields.m_Origin.fields.z;
          ray.fields.m_Origin.fields.x = UStack_1d0.fields.m_Origin.fields.x;
          ray.fields.m_Origin.fields.y = UStack_1d0.fields.m_Origin.fields.y;
          ray.fields.m_Direction.fields.x = UStack_1d0.fields.m_Direction.fields.x;
          bVar20 = UnityEngine_Physics__Raycast_69da1f0(ray,&UStack_98,100000.0,layerMask,(MethodInfo *)0x0);
          if (!bVar20) {
            if (Il2CppMethodInitialized_075479e9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
              Il2CppMethodInitialized_075479e9 = '\x01';
              uVar8 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
            }
            else {
              uVar8 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
            }
            if (uVar8 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
              bVar20 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
            }
            else {
              bVar20 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
            }
            if (bVar20) {
              if ((((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer)->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
              }
              UI_MobileMapEditorPointer__CancelGizmoPointer((MethodInfo *)0x0);
            }
            return;
          }
          auVar34 = _auStack_1b8;
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (__this_00 != (Settings_KeybindSetting_o *)0x0) {
            bVar20 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
            if (bVar20) {
              pUVar24 = (__this->fields)._centerSquare;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar20 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if (bVar20) {
                pUVar24 = (__this->fields)._centerSquare;
                auVar34 = _auStack_1b8;
                uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                pUVar23 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0);
                auVar34 = _auStack_1b8;
                uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                if (pUVar23 == (UnityEngine_GameObject_o *)0x0) goto label_05c96730;
                bVar20 = UnityEngine_GameObject__get_activeSelf(pUVar23,(MethodInfo *)0x0);
                if (bVar20) {
                  pUVar24 = (__this->fields)._centerSquare;
                  auVar34 = _auStack_1b8;
                  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                  if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                  x = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar24,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Collider)
                  ;
                  auVar34 = _auStack_1b8;
                  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                  if (pMVar27->klass == (Il2CppClass *)0x0) goto label_05c96730;
                  pos.fields.z = fStack_190;
                  pos.fields.x = UStack_198.x;
                  pos.fields.y = UStack_198.y;
                  UnityEngine_Camera__ScreenPointToRay_68c1290
                            (&UStack_1d0,(UnityEngine_Camera_o *)pMVar27->klass,pos,(MethodInfo *)0x0);
                  _Stack_c8._4_4_ = UStack_1d0.fields.m_Direction.fields.z;
                  _Stack_c8._0_4_ = UStack_1d0.fields.m_Direction.fields.y;
                  fStack_d0 = UStack_1d0.fields.m_Origin.fields.z;
                  fStack_cc = UStack_1d0.fields.m_Direction.fields.x;
                  pIStack_d8 = (Il2CppType *)UStack_1d0.fields.m_Origin.fields._0_8_;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar20 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar20) {
                    auVar34 = _auStack_1b8;
                    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                    if (x == (UnityEngine_Object_o *)0x0) goto label_05c96730;
                    ray_00.fields.m_Origin.fields.z = fStack_d0;
                    ray_00.fields.m_Origin.fields._0_8_ = pIStack_d8;
                    ray_00.fields.m_Direction.fields.x = fStack_cc;
                    ray_00.fields.m_Direction.fields._4_8_ = _Stack_c8.rgctx_data;
                    bVar20 = UnityEngine_Collider__Raycast_69d8af0
                                       ((UnityEngine_Collider_o *)x,ray_00,&UStack_68,100000.0,
                                        (MethodInfo *)0x0);
                    if (bVar20) {
                      UStack_98.fields.m_UV.fields.x = UStack_68.fields.m_UV.fields.x;
                      UStack_98.fields.m_UV.fields.y = UStack_68.fields.m_UV.fields.y;
                      UStack_98.fields.m_Collider.fields.m_Data = UStack_68.fields.m_Collider.fields.m_Data;
                      UStack_98.fields.m_Normal.fields.y = UStack_68.fields.m_Normal.fields.y;
                      UStack_98.fields.m_Normal.fields.z = UStack_68.fields.m_Normal.fields.z;
                      UStack_98.fields.m_FaceID = UStack_68.fields.m_FaceID;
                      UStack_98.fields.m_Distance = UStack_68.fields.m_Distance;
                      UStack_98.fields.m_Point.fields.x = UStack_68.fields.m_Point.fields.x;
                      UStack_98.fields.m_Point.fields.y = UStack_68.fields.m_Point.fields.y;
                      UStack_98.fields.m_Point.fields.z = UStack_68.fields.m_Point.fields.z;
                      UStack_98.fields.m_Normal.fields.x = UStack_68.fields.m_Normal.fields.x;
                    }
                  }
                }
              }
            }
            __this_01 = UnityEngine_RaycastHit__get_collider(&UStack_98,(MethodInfo *)0x0);
            auVar34 = _auStack_1b8;
            uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
            if (__this_01 != (UnityEngine_Collider_o *)0x0) {
              pUVar24 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              (__this->fields)._activeLine = pUVar24;
              Il2CppCodeGenWriteBarrier(targetAddress);
              pUVar24 = (__this->fields)._planeXY;
              pUVar14 = (__this->fields)._activeLine;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar20 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                                  (MethodInfo *)0x0);
              bVar21 = true;
              if (!bVar20) {
                pUVar24 = (__this->fields)._planeYZ;
                pUVar14 = (__this->fields)._activeLine;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar20 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                                    (MethodInfo *)0x0);
                if (!bVar20) {
                  pUVar24 = (__this->fields)._planeXZ;
                  pUVar14 = (__this->fields)._activeLine;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar21 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                                      (MethodInfo *)0x0);
                }
              }
              (__this->fields)._activeIsPlane = bVar21;
              pMVar25 = (MethodInfo *)(__this->fields)._centerSquare;
              pUVar24 = (__this->fields)._activeLine;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar20 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)pMVar25,
                                  (MethodInfo *)0x0);
              (__this->fields)._activeIsCenter = bVar20;
              __this_02 = __this;
              MapEditor_PositionGizmo__ResetColors(__this,pMVar25);
              fVar28 = (__this->fields).SelectedColor.fields.a;
              uVar38 = 0;
              uVar39 = 0;
              MapEditor_PositionGizmo__SetLineColor
                        (__this_02,(__this->fields)._activeLine,
                         (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,method_00);
              UVar43 = UnityEngine_RaycastHit__get_point(&UStack_98,(MethodInfo *)0x0);
              (__this->fields)._previousMousePoint.fields.x = UVar43.fields.x;
              (__this->fields)._previousMousePoint.fields.y = UVar43.fields.y;
              (__this->fields)._previousMousePoint.fields.z = UVar43.fields.z;
              if ((__this->fields)._activeIsPlane != false) {
                UVar43 = MapEditor_PositionGizmo__GetPlaneNormal
                                   (__this,(__this->fields)._activeLine,method_01);
                fVar29 = UVar43.fields.z;
                auVar17._8_4_ = extraout_XMM0_Dc;
                auVar17._0_8_ = UVar43.fields._0_8_;
                auVar17._12_4_ = extraout_XMM0_Dd;
                pUVar24 = (__this->fields)._transform;
                auVar34 = _auStack_1b8;
                uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                UVar44 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                fStack_150 = (float)extraout_XMM0_Dc_00;
                auStack_158 = (undefined1  [8])UVar44.fields._0_8_;
                fStack_14c = (float)extraout_XMM0_Dd_00;
                auStack_1e8._4_4_ = fVar28;
                auStack_1e8._0_4_ = UVar44.fields.z;
                fStack_1e0 = (float)uVar38;
                fStack_1dc = (float)uVar39;
                if (Il2CppMethodInitialized_0753e729 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                  Il2CppMethodInitialized_0753e729 = '\x01';
                }
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                fStack_218 = UVar43.fields.x;
                fStack_214 = UVar43.fields.y;
                fVar28 = fVar29 * fVar29 + fStack_214 * fStack_214 + fStack_218 * fStack_218;
                if (fVar28 < 0.0) {
                  fVar28 = sqrtf(fVar28);
                }
                else {
                  fVar28 = SQRT(fVar28);
                }
                fVar40 = 0.0;
                uVar31 = 0;
                if (1e-05 < fVar28) {
                  fVar40 = fVar29 / fVar28;
                  auVar34._4_4_ = fVar28;
                  auVar34._0_4_ = fVar28;
                  auVar34._8_4_ = fVar28;
                  auVar34._12_4_ = fVar28;
                  auVar34 = divps(auVar17,auVar34);
                  uVar31 = auVar34._0_8_;
                }
                pUVar1 = &(__this->fields)._dragPlane;
                (pUVar1->fields).m_Normal.fields.x = (float)(int)uVar31;
                (pUVar1->fields).m_Normal.fields.y = (float)(int)((ulong)uVar31 >> 0x20);
                (__this->fields)._dragPlane.fields.m_Normal.fields.z = fVar40;
                (__this->fields)._dragPlane.fields.m_Distance =
                     -((float)auStack_1e8._0_4_ * fVar40 +
                      (float)auStack_158._4_4_ * (float)((ulong)uVar31 >> 0x20) +
                      (float)auStack_158._0_4_ * (float)uVar31);
              }
              (__this->fields)._axisSnapDirection = 0;
              (__this->fields)._axisSnapStartMouse.fields = UStack_198;
              pGVar12 = (__this->fields)._gameManager;
              auVar34 = _auStack_1b8;
              uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
              if (pGVar12 != (GameManagers_MapEditorGameManager_o *)0x0) {
                GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar12,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    goto label_05c96730;
  }
  bVar20 = MapEditor_BaseGizmo__IsPointerHeld
                     ((MapEditor_BaseGizmo_o *)__this,selectKey,(UnityEngine_Vector3_o *)&pIStack_178,pMVar25)
  ;
  auVar34 = _auStack_1b8;
  if (bVar20) {
    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
    if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_05c96730;
    bVar21 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    bVar20 = (__this->fields)._activeIsCenter;
    pMVar25 = (MethodInfo *)(ulong)bVar20;
    if (bVar21) {
      (__this->fields)._vertexSnapActive = true;
      if (bVar20 != false) goto label_05c95c32;
      pUVar24 = (__this->fields)._lineX;
      pUVar14 = (__this->fields)._activeLine;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar20 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,(MethodInfo *)0x0);
      pMVar26 = extraout_RDX;
      if (!bVar20) {
        pUVar24 = (__this->fields)._lineY;
        pUVar14 = (__this->fields)._activeLine;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar20 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,(MethodInfo *)0x0)
        ;
        pMVar26 = extraout_RDX_00;
        if (!bVar20) {
          pUVar24 = (__this->fields)._lineZ;
          pUVar14 = (__this->fields)._activeLine;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar20 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                              (MethodInfo *)0x0);
          pMVar26 = method_03;
          if (!bVar20) {
            if ((__this->fields)._vertexSnapActive == false) goto label_05c95e32;
            MapEditor_PositionGizmo__DoVertexSnap(__this,(Cameras_BaseCamera_o *)pMVar27,method_03);
            goto label_05c95c3f;
          }
        }
      }
      MapEditor_PositionGizmo__DoAxisSurfaceSnap(__this,(Cameras_BaseCamera_o *)pMVar27,pMVar26);
    }
    else {
      (__this->fields)._vertexSnapActive = bVar20;
      if (bVar20 == false) {
label_05c95e32:
        auVar34 = _auStack_1b8;
        if ((__this->fields)._activeIsPlane == false) {
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (pMVar27 == (MethodInfo *)0x0) goto label_05c96730;
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (pMVar27->klass == (Il2CppClass *)0x0) goto label_05c96730;
          pos_01.fields.z = fStack_170;
          pos_01.fields._0_8_ = pIStack_178;
          UnityEngine_Camera__ScreenPointToRay_68c1290
                    (&UStack_1d0,(UnityEngine_Camera_o *)pMVar27->klass,pos_01,(MethodInfo *)0x0);
          _fStack_150 = 0;
          auStack_158._0_4_ = UStack_1d0.fields.m_Origin.fields.x;
          auStack_158._4_4_ = UStack_1d0.fields.m_Origin.fields.y;
          _auStack_1b8 = ZEXT416((uint)UStack_1d0.fields.m_Origin.fields.z);
          fStack_168 = UStack_1d0.fields.m_Direction.fields.y;
          fStack_164 = UStack_1d0.fields.m_Direction.fields.y;
          fStack_160 = UStack_1d0.fields.m_Direction.fields.y;
          fStack_15c = UStack_1d0.fields.m_Direction.fields.y;
          _auStack_1e8 = ZEXT416((uint)UStack_1d0.fields.m_Direction.fields.z);
          uVar3 = (__this->fields)._previousMousePoint.fields.x;
          uVar6 = (__this->fields)._previousMousePoint.fields.y;
          fStack_138 = (__this->fields)._previousMousePoint.fields.z - UStack_1d0.fields.m_Origin.fields.z;
          uStack_140._4_4_ = (float)uVar6 - UStack_1d0.fields.m_Origin.fields.y;
          uStack_140._0_4_ = (uint32_t)((float)uVar3 - UStack_1d0.fields.m_Origin.fields.x);
          fVar28 = (float)il2cpp_runtime_helper_059d7e70(UStack_1d0.fields.m_Direction.fields.x,0);
          auStack_f8._0_4_ = fVar28 * 0.017453292;
          uStack_e8 = (char *)il2cpp_runtime_helper_0599adc0(&uStack_140,0);
          fVar28 = cosf((float)auStack_f8._0_4_);
          fVar28 = (float)uStack_e8 / fVar28;
          uVar38 = auStack_158._0_4_;
          auStack_158._0_4_ = (float)auStack_158._4_4_ + fStack_168 * fVar28;
          uVar4 = (__this->fields)._previousMousePoint.fields.x;
          uVar7 = (__this->fields)._previousMousePoint.fields.y;
          fStack_150 = (float)auStack_158._4_4_;
          fStack_14c = (float)auStack_158._4_4_;
          fStack_168 = (float)auStack_158._0_4_ - (float)uVar7;
          uStack_e8._0_4_ = fVar28 * (float)auStack_1e8._0_4_ + (float)auStack_1b8._0_4_;
          uStack_e8._4_4_ = fVar28 * UStack_1d0.fields.m_Direction.fields.x + (float)uVar38;
          fStack_e0 = fVar28 * (float)auStack_1e8._4_4_ + (float)auStack_1b8._4_4_;
          fStack_dc = fVar28 * UStack_1d0.fields.m_Direction.fields.y + (float)auStack_158._4_4_;
          fVar28 = (float)uStack_e8 - (__this->fields)._previousMousePoint.fields.z;
          fVar29 = uStack_e8._4_4_ - (float)uVar4;
          fVar40 = fStack_e0 - 0.0;
          fVar32 = fStack_dc - (float)uVar7;
          pUVar24 = (__this->fields)._lineY;
          pUVar14 = (__this->fields)._activeLine;
          fStack_164 = (float)auStack_158._4_4_;
          fStack_160 = (float)auStack_158._4_4_;
          fStack_15c = (float)auStack_158._4_4_;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          auStack_1e8._4_4_ = fStack_164;
          auStack_1e8._0_4_ = fStack_168;
          fStack_1e0 = fVar29;
          fStack_1dc = fVar32;
          bVar20 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                              (MethodInfo *)0x0);
          if (bVar20) {
            auStack_1b8 = (undefined1  [8])il2cpp_runtime_helper_059d80e0(&uStack_140);
            auVar34 = _auStack_1b8;
            uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
            if ((Utility_BaseComponentCache_o *)pMVar27->return_type == (Utility_BaseComponentCache_o *)0x0)
            goto label_05c96730;
            fStack_1b0 = (float)extraout_XMM0_Dc_01;
            fStack_1ac = (float)extraout_XMM0_Dd_01;
            pUVar24 = (((Utility_BaseComponentCache_o *)pMVar27->return_type)->fields).Transform;
            auVar34 = _auStack_1b8;
            uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
            if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
            UVar43 = UnityEngine_Transform__get_up(pUVar24,(MethodInfo *)0x0);
            fVar30 = UVar43.fields.x * fVar29 + fStack_168 * UVar43.fields.y + UVar43.fields.z * fVar28;
            fStack_1e0 = fStack_1e0 + (float)auStack_1b8._0_4_ * fVar30 + (float)auStack_1b8._0_4_ * fVar30;
            auStack_1e8._0_4_ =
                 (float)auStack_1e8._0_4_ +
                 (float)auStack_1b8._4_4_ * fVar30 + (float)auStack_1b8._4_4_ * fVar30;
            fVar29 = fVar40 + fStack_1b0 * fVar30 + fStack_1b0 * fVar30;
            fVar28 = fVar28 + extraout_XMM1_Da * fVar30 + extraout_XMM1_Da * fVar30;
            fStack_1dc = fVar32 + fStack_1ac * fVar30 + fStack_1ac * fVar30;
          }
          else {
            fStack_1dc = fVar29;
          }
          auStack_1e8._4_4_ = auStack_1e8._0_4_;
          auStack_1e8._0_4_ = fStack_1e0;
          fStack_1e0 = fVar29;
          auVar34 = _auStack_1b8;
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (*targetAddress == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
          UVar43 = UnityEngine_Transform__get_right(*targetAddress,(MethodInfo *)0x0);
          fStack_168 = UVar43.fields.z;
          auVar34 = _auStack_1b8;
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (*targetAddress == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
          pMVar27 = (MethodInfo *)0x0;
          UVar44 = UnityEngine_Transform__get_right(*targetAddress,(MethodInfo *)0x0);
          auStack_f8._8_4_ = extraout_XMM0_Dc_03;
          auStack_f8._0_8_ = UVar44.fields._0_8_;
          auStack_f8._12_4_ = extraout_XMM0_Dd_03;
          auStack_1b8._0_4_ = UVar44.fields.z;
          uVar31 = il2cpp_runtime_helper_05b8d690(0);
          fVar40 = (float)((ulong)uVar31 >> 0x20);
          auVar35._8_8_ = extraout_XMM1_Qb;
          auVar35._0_8_ = extraout_XMM1_Qa;
          fVar29 = (float)extraout_XMM1_Qa;
          pGVar12 = (__this->fields)._gameManager;
          fStack_1f0 = fVar29;
          auVar34 = _auStack_1b8;
          uStack_1f8 = uVar31;
          if (pGVar12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05c96730;
          fVar28 = fVar28 * (float)auStack_1b8._0_4_ +
                   (float)auStack_1e8._4_4_ * (float)auStack_f8._4_4_ +
                   (float)auStack_1e8._0_4_ * (float)auStack_f8._0_4_;
          fVar32 = fStack_168 * fVar28;
          fStack_218 = UVar43.fields.x;
          fStack_214 = UVar43.fields.y;
          fStack_218 = fStack_218 * fVar28;
          fStack_214 = fStack_214 * fVar28;
          uVar18 = CONCAT44(fStack_214,fStack_218);
          iVar9 = (pGVar12->fields).CurrentGizmoMode;
          if (iVar9 == 1) {
            auVar35 = ZEXT416((uint)fVar32);
            fVar30 = extraout_XMM0_Dc_02 * fVar28;
            fVar33 = extraout_XMM0_Dd_02 * fVar28;
            fVar40 = fStack_214;
            fVar41 = fStack_214;
            fVar42 = fStack_214;
            fStack_1f0 = fVar32;
            uStack_1f8._4_4_ = fStack_214;
            uVar31 = uVar18;
          }
          else {
            fVar30 = extraout_XMM0_Dc_04;
            fVar33 = extraout_XMM0_Dd_04;
            fVar41 = fVar40;
            fVar42 = fVar40;
            uStack_1f8._4_4_ = fVar40;
            uVar18 = uVar31;
            if (iVar9 == 0) {
              auStack_1e8._4_4_ = fVar40;
              auStack_1e8._0_4_ = fVar40;
              fStack_1e0 = fVar40;
              fStack_1dc = fVar40;
              fStack_1b0 = extraout_XMM0_Dc_04;
              auStack_1b8 = (undefined1  [8])uVar31;
              fStack_1ac = extraout_XMM0_Dd_04;
              pMVar27 = (MethodInfo *)(__this->fields)._lineX;
              pUVar24 = (__this->fields)._activeLine;
              fStack_168 = fVar32;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar20 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)pMVar27,
                                  (MethodInfo *)0x0);
              if (bVar20) {
                auVar35 = ZEXT416((uint)fVar29);
                fVar30 = extraout_XMM0_Dc_02 * fVar28;
                fVar33 = extraout_XMM0_Dd_02 * fVar28;
                fVar40 = (float)auStack_1e8._4_4_;
                fVar41 = fStack_1e0;
                fVar42 = fStack_1dc;
                uVar18 = CONCAT44(fStack_214,fStack_218);
                uVar31 = CONCAT44(auStack_1e8._0_4_,fStack_218);
              }
              else {
                pMVar27 = (MethodInfo *)(__this->fields)._lineY;
                pUVar24 = (__this->fields)._activeLine;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar20 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)pMVar27,
                                    (MethodInfo *)0x0);
                if (bVar20) {
                  auVar35 = ZEXT416((uint)fVar29);
                  uVar18 = auStack_1b8;
                  fVar30 = fStack_1b0;
                  fVar33 = fStack_1ac;
                  fVar40 = fStack_214;
                  fVar41 = fStack_214;
                  fVar42 = fStack_214;
                  uStack_1f8._4_4_ = fStack_214;
                  uVar31 = CONCAT44(fStack_214,(float)uStack_1f8);
                }
                else {
                  pMVar27 = (MethodInfo *)(__this->fields)._lineZ;
                  pUVar24 = (__this->fields)._activeLine;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar20 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)pMVar27,
                                      (MethodInfo *)0x0);
                  if (bVar20) {
                    fStack_1f0 = fStack_168;
                    fVar29 = fStack_168;
                  }
                  auVar35 = ZEXT416((uint)fVar29);
                  uVar18 = auStack_1b8;
                  fVar30 = fStack_1b0;
                  fVar33 = fStack_1ac;
                  fVar40 = (float)auStack_1e8._4_4_;
                  fVar41 = fStack_1e0;
                  fVar42 = fStack_1dc;
                  uVar31 = CONCAT44(auStack_1e8._0_4_,(float)uStack_1f8);
                }
              }
            }
          }
          uStack_1f8._0_4_ = (float)uVar31;
          pGVar12 = (__this->fields)._gameManager;
          auVar34 = _auStack_1b8;
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (pGVar12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05c96730;
          if ((pGVar12->fields).Snap == false) {
label_05c966cc:
            (__this->fields)._previousMousePoint.fields.x = uStack_e8._4_4_;
            (__this->fields)._previousMousePoint.fields.y = (float)auStack_158._0_4_;
            (__this->fields)._previousMousePoint.fields.z = (float)uStack_e8;
          }
          else {
            iVar9 = (pGVar12->fields).CurrentGizmoMode;
            if (iVar9 == 1) {
              pSVar15 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
              uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
              if (pSVar15 == (Settings_MapEditorSettings_o *)0x0) goto label_05c96730;
              pSVar16 = (pSVar15->fields).SnapMove;
              uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
              if (pSVar16 == (Settings_FloatSetting_o *)0x0) goto label_05c96730;
              fVar28 = (pSVar16->fields)._value;
              fVar29 = (float)il2cpp_runtime_helper_0599adc0(&uStack_1f8);
              fVar29 = (float)il2cpp_runtime_helper_02fdaa70(fVar29 / fVar28);
              fVar29 = fVar29 * fVar28;
              uVar31 = il2cpp_runtime_helper_059d80e0(&uStack_1f8);
              uStack_1f8._0_4_ = fVar29 * (float)uVar31;
              uStack_1f8._4_4_ = fVar29 * (float)((ulong)uVar31 >> 0x20);
              fStack_1f0 = extraout_XMM1_Da_00 * fVar29;
            }
            else {
              if (iVar9 != 0) goto label_05c966cc;
              pSVar15 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
              uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
              if (pSVar15 == (Settings_MapEditorSettings_o *)0x0) goto label_05c96730;
              auStack_1e8._4_4_ = fVar40;
              auStack_1e8._0_4_ = (int)((ulong)uVar31 >> 0x20);
              fStack_1e0 = fVar41;
              fStack_1dc = fVar42;
              fStack_1b0 = fVar30;
              auStack_1b8 = (undefined1  [8])uVar18;
              fStack_1ac = fVar33;
              fVar29 = auVar35._0_4_;
              pSVar16 = (pSVar15->fields).SnapMove;
              auVar34 = _auStack_1b8;
              uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
              if (pSVar16 == (Settings_FloatSetting_o *)0x0) goto label_05c96730;
              fVar28 = (pSVar16->fields)._value;
              pUVar24 = (__this->fields)._lineX;
              pUVar14 = (__this->fields)._activeLine;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar20 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                                  (MethodInfo *)0x0);
              if (bVar20) {
                pUVar24 = (__this->fields)._transform;
                auVar34 = _auStack_1b8;
                uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                UVar43 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                auVar36._4_12_ = auVar35._4_12_;
                auVar36._0_4_ = UVar43.fields.z;
                fVar29 = (float)il2cpp_runtime_helper_02fdaa70((UVar43.fields.x + (float)auStack_1b8._0_4_) / fVar28,
                                             auVar36._0_8_);
                pUVar24 = (__this->fields)._transform;
                auVar34 = _auStack_1b8;
                uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                UVar43 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                uStack_1f8._0_4_ = fVar29 * fVar28 - UVar43.fields.x;
              }
              else {
                pUVar24 = (__this->fields)._lineY;
                pUVar14 = (__this->fields)._activeLine;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar20 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                                    (MethodInfo *)0x0);
                if (bVar20) {
                  pUVar24 = (__this->fields)._transform;
                  auVar34 = _auStack_1b8;
                  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                  if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                  UVar43 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                  auVar37._4_12_ = auVar35._4_12_;
                  auVar37._0_4_ = UVar43.fields.z;
                  fVar29 = (float)il2cpp_runtime_helper_02fdaa70((UVar43.fields.y + (float)auStack_1e8._0_4_) / fVar28,
                                               auVar37._0_8_);
                  pUVar24 = (__this->fields)._transform;
                  auVar34 = _auStack_1b8;
                  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                  if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                  UVar43 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                  uStack_1f8._4_4_ = fVar29 * fVar28 - UVar43.fields.y;
                }
                else {
                  pUVar24 = (__this->fields)._lineZ;
                  pUVar14 = (__this->fields)._activeLine;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar20 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)pUVar24,
                                      (MethodInfo *)0x0);
                  if (bVar20) {
                    pUVar24 = (__this->fields)._transform;
                    auVar34 = _auStack_1b8;
                    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                    UVar43 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                    fVar29 = (float)il2cpp_runtime_helper_02fdaa70((fVar29 + UVar43.fields.z) / fVar28);
                    pUVar24 = (__this->fields)._transform;
                    auVar34 = _auStack_1b8;
                    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
                    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
                    UVar43 = UnityEngine_Transform__get_position(pUVar24,(MethodInfo *)0x0);
                    fStack_1f0 = fVar29 * fVar28 - UVar43.fields.z;
                  }
                }
              }
            }
            pMVar27 = (MethodInfo *)0x0;
            fVar29 = (float)il2cpp_runtime_helper_0599adc0(&uStack_1f8);
            if (fVar28 <= fVar29) goto label_05c966cc;
          }
          fVar29 = (float)uStack_1f8;
          fVar40 = uStack_1f8._4_4_;
          fVar28 = fStack_1f0;
        }
        else {
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (pMVar27 == (MethodInfo *)0x0) goto label_05c96730;
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
          if (pMVar27->klass == (Il2CppClass *)0x0) goto label_05c96730;
          pos_00.fields.z = fStack_170;
          pos_00.fields._0_8_ = pIStack_178;
          UnityEngine_Camera__ScreenPointToRay_68c1290
                    (&UStack_1d0,(UnityEngine_Camera_o *)pMVar27->klass,pos_00,(MethodInfo *)0x0);
          fVar28 = UStack_1d0.fields.m_Origin.fields.z;
          auStack_158._4_4_ = UStack_1d0.fields.m_Direction.fields.y;
          auStack_158._0_4_ = UStack_1d0.fields.m_Direction.fields.x;
          _Stack_c0.genericMethod = (void *)UStack_1d0.fields.m_Origin.fields._0_8_;
          _Var19.genericMethod = _Stack_c0.genericMethod;
          fStack_b8 = UStack_1d0.fields.m_Origin.fields.z;
          _fStack_150 = 0;
          auStack_1e8._0_4_ = UStack_1d0.fields.m_Direction.fields.z;
          fStack_ac = UStack_1d0.fields.m_Direction.fields.z;
          _Stack_c0._0_4_ = UStack_1d0.fields.m_Origin.fields.x;
          uVar38 = _Stack_c0._0_4_;
          _Stack_c0._4_4_ = UStack_1d0.fields.m_Origin.fields.y;
          uVar39 = _Stack_c0._4_4_;
          _Stack_c0.genericMethod = _Var19.genericMethod;
          cVar22 = il2cpp_runtime_helper_05c9a0c0(&(__this->fields)._dragPlane,&fStack_19c,0);
          if (cVar22 == '\0') goto label_05c95c3f;
          fVar29 = fStack_19c * (float)auStack_158._0_4_ + (float)uVar38;
          fVar40 = fStack_19c * (float)auStack_158._4_4_ + (float)uVar39;
          UStack_130.z = fVar28 + (float)auStack_1e8._0_4_ * fStack_19c;
          UStack_130.y = fVar40;
          UStack_130.x = fVar29;
          uVar2 = (__this->fields)._previousMousePoint.fields.x;
          uVar5 = (__this->fields)._previousMousePoint.fields.y;
          drag.fields.x = fVar29 - (float)uVar2;
          drag.fields.y = fVar40 - (float)uVar5;
          drag.fields.z = UStack_130.z - (__this->fields)._previousMousePoint.fields.z;
          UVar43 = MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle
                             (__this,drag,(__this->fields)._activeLine,method_05);
          fStack_180 = UVar43.fields.z;
          auStack_188 = UVar43.fields._0_8_;
          pMVar27 = (MethodInfo *)auStack_188;
          MapEditor_PositionGizmo__ApplySnap
                    (__this,(UnityEngine_Vector3_o *)pMVar27,(UnityEngine_Vector3_o *)&UStack_130,pMVar25);
          fVar29 = auStack_188._0_4_;
          fVar40 = auStack_188._4_4_;
          fVar28 = fStack_180;
        }
        frameDelta.fields.y = fVar40;
        frameDelta.fields.x = fVar29;
        frameDelta.fields.z = fVar28;
        MapEditor_PositionGizmo__MoveSelectedObjects(__this,frameDelta,pMVar27);
        MapEditor_PositionGizmo__ResetCenter(__this,pMVar27);
      }
      else {
label_05c95c32:
        MapEditor_PositionGizmo__DoFreeDragVertexSnap(__this,(Cameras_BaseCamera_o *)pMVar27,method_02);
      }
    }
label_05c95c3f:
    if (((__this->fields)._vertexSnapActive != false) && ((__this->fields)._hasSnapAnchor != false)) {
      pUVar24 = (__this->fields)._snapAnchorTransform;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar20 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar20) {
        pUVar24 = (__this->fields)._snapAnchorTransform;
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        pUVar14 = (__this->fields)._transform;
        UVar43 = UnityEngine_Transform__TransformPoint
                           (pUVar24,(UnityEngine_Vector3_o)(__this->fields)._snapAnchorLocal.fields,
                            (MethodInfo *)0x0);
        auVar34 = _auStack_1b8;
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
        if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05c96730;
        UnityEngine_Transform__set_position(pUVar14,UVar43,(MethodInfo *)0x0);
      }
    }
  }
  else {
    pGVar12 = (__this->fields)._gameManager;
    if (pGVar12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05c96730;
    GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar12,(MethodInfo *)0x0);
    pGVar12 = (__this->fields)._gameManager;
    auVar34 = _auStack_1b8;
    if (pGVar12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05c96730;
    mapObjects = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                           (pGVar12,(MethodInfo *)0x0);
    pMVar25 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand);
    MapEditor_TransformPositionCommand___ctor
              ((MapEditor_TransformPositionCommand_o *)pMVar25,mapObjects,method_04);
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar12,(MapEditor_BaseCommand_o *)pMVar25,true,(MethodInfo *)0x0);
    MapEditor_PositionGizmo__ResetColors(__this,pMVar25);
    (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this->fields)._activeIsPlane = false;
    (__this->fields)._activeIsCenter = false;
    (__this->fields)._vertexSnapActive = false;
    (__this->fields)._hasSnapAnchor = false;
    (__this->fields)._snapAnchorTransform = (UnityEngine_Transform_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._snapAnchorTransform);
    (__this->fields)._axisSnapDirection = 0;
  }
  pGVar12 = (__this->fields)._gameManager;
  auVar34 = _auStack_1b8;
  uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(float)uStack_1f8);
  if (pGVar12 != (GameManagers_MapEditorGameManager_o *)0x0) {
    (pGVar12->fields).IgnoreNextSelect = true;
    return;
  }
label_05c96730:
  _auStack_1b8 = auVar34;
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$GetPlaneNormal
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__GetPlaneNormal (MapEditor_PositionGizmo_o* __this, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x5c96e60

UnityEngine_Vector3_o
MapEditor_PositionGizmo__GetPlaneNormal
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Transform_o *plane,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields UVar3;
  
  if (Il2CppMethodInitialized_075479f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479f9 = '\x01';
  }
  pUVar1 = (__this->fields)._planeXY;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar3;
    }
  }
  else {
    pUVar1 = (__this->fields)._planeYZ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_right(pUVar1,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar3;
      }
    }
    else {
      pUVar1 = (__this->fields)._planeXZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
      if (!bVar2) {
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields;
      }
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_up(pUVar1,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$ProjectDragOntoPlaneHandle
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o drag, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x5c98190
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c982bf: movss xmm4, dword ptr [rsp + 0xc]
// asm:   0x5c982c5: movaps xmm5, xmmword ptr [rsp + 0x10]
// asm:   0x5c982ca: jmp 0x5c982e1
// asm:   0x5c982db: movss xmm4, dword ptr [rsp + 0xc]

UnityEngine_Vector3_o
MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o drag,UnityEngine_Transform_o *plane,
          MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  UnityEngine_Transform_o *pUVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  float fStack_38;
  float fStack_34;
  
  fVar5 = drag.fields.z;
  if (Il2CppMethodInitialized_075479fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479fa = '\x01';
    method = extraout_RDX;
  }
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  fStack_38 = drag.fields.x;
  fStack_34 = drag.fields.y;
  if ((pGVar1->fields).CurrentGizmoMode == 0) {
    pUVar2 = (__this->fields)._planeXY;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    if (bVar3) {
      fVar5 = 0.0;
    }
    else {
      pUVar2 = (__this->fields)._planeYZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
      if (bVar3) {
        fStack_38 = 0.0;
      }
      else {
        pUVar2 = (__this->fields)._planeXZ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
        if (bVar3) {
          fStack_34 = 0.0;
        }
      }
    }
  }
  else {
    UVar6 = MapEditor_PositionGizmo__GetPlaneNormal(__this,plane,method);
    fVar4 = UVar6.fields.z * fVar5 + UVar6.fields.y * fStack_34 + UVar6.fields.x * fStack_38;
    fStack_38 = fStack_38 - fVar4 * UVar6.fields.x;
    fStack_34 = fStack_34 - fVar4 * UVar6.fields.y;
    fVar5 = fVar5 - UVar6.fields.z * fVar4;
  }
  UVar6.fields.y = fStack_34;
  UVar6.fields.x = fStack_38;
  UVar6.fields.z = fVar5;
  return (UnityEngine_Vector3_o)UVar6.fields;
}


// MapEditor.PositionGizmo$$ApplySnap
// il2cpp: void MapEditor_PositionGizmo__ApplySnap (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o* frameDelta, UnityEngine_Vector3_o* mousePoint, const MethodInfo* method);
// 0x5c98300
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c98671: movaps xmm3, xmm0
// asm:   0x5c98783: cmp byte ptr [rip + 0x18a5f9f], 0
// asm:   0x5c9878a: je 0x5c98ce3
// asm:   0x5c987f1: jmp 0x5c98814
// asm:   0x5c98a65: movaps xmm1, xmm0

void MapEditor_PositionGizmo__ApplySnap
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o *frameDelta,
               UnityEngine_Vector3_o *mousePoint,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar6;
  GameManagers_MapEditorGameManager_o *pGVar9;
  Settings_MapEditorSettings_o *pSVar10;
  Settings_FloatSetting_o *pSVar11;
  UnityEngine_Transform_o *pUVar12;
  double dVar13;
  bool bVar14;
  UnityEngine_Vector3_StaticFields *intptr;
  MethodInfo *pMVar15;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float in_XMM3_Db;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  UnityEngine_Vector3_o UVar18;
  double dStack_70;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  UnityEngine_Vector3_Fields UStack_40;
  
  pMVar15 = (MethodInfo *)frameDelta;
  if (Il2CppMethodInitialized_075479fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_075479fb = '\x01';
  }
  pGVar9 = (__this->fields)._gameManager;
  if (pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05c98cfb;
  if ((pGVar9->fields).Snap == false) goto label_05c987ff;
  pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar10 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar11 = (pSVar10->fields).SnapMove, pSVar11 == (Settings_FloatSetting_o *)0x0)) goto label_05c98cfb;
  fVar1 = (pSVar11->fields)._value;
  if ((pGVar9->fields).CurrentGizmoMode == 0) {
    pUVar12 = (__this->fields)._transform;
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c98cfb;
    UVar18 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
    auStack_68._0_4_ = UVar18.fields.x;
    auStack_68._4_4_ = UVar18.fields.y;
    uVar5._0_4_ = (frameDelta->fields).x;
    uVar5._4_4_ = (frameDelta->fields).y;
    auStack_58._0_4_ = UVar18.fields.z + (frameDelta->fields).z;
    pMVar15 = (MethodInfo *)(__this->fields)._planeXY;
    pUVar12 = (__this->fields)._activeLine;
    fStack_60 = extraout_XMM0_Dc;
    fStack_5c = extraout_XMM0_Dd;
    uVar4._0_4_ = 0.0;
    uVar4._4_4_ = 0.0;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      auStack_68 = (undefined1  [8])UVar18.fields._0_8_;
      UStack_40.x = 0.0;
      UStack_40.y = 0.0;
      _fStack_48 = uVar5;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      uVar5._0_4_ = fStack_48;
      uVar5._4_4_ = fStack_44;
      uVar4._0_4_ = UStack_40.x;
      uVar4._4_4_ = UStack_40.y;
    }
    auStack_68._4_4_ = (float)auStack_68._4_4_ + uVar5._4_4_;
    auStack_68._0_4_ = (float)auStack_68._0_4_ + (float)uVar5;
    fStack_60 = fStack_60 + (float)uVar4;
    fStack_5c = fStack_5c + uVar4._4_4_;
    bVar14 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)pMVar15,(MethodInfo *)0x0);
    if (bVar14) {
      fStack_44 = (float)auStack_68._4_4_;
      fStack_48 = (float)auStack_68._0_4_ / fVar1;
      UStack_40._0_8_ = auStack_68._8_8_;
      dVar13 = modf((double)((float)auStack_68._0_4_ / fVar1),&dStack_70,pMVar15);
      uVar5._0_4_ = (float)((ulong)dStack_70 >> 0x20);
      if (0.0 <= fStack_48) {
        if ((dVar13 != 0.5) || (NAN(dVar13))) {
          uVar5._4_4_ = floorf(fStack_48 + 0.5);
          uVar5._0_4_ = extraout_XMM0_Db_03;
          UStack_40.x = extraout_XMM0_Dc_03;
          UStack_40.y = extraout_XMM0_Dd_03;
        }
        else {
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
          uVar5._4_4_ = (float)dStack_70;
          if (((long)dStack_70 & 1U) != 0) {
            uVar5._4_4_ = uVar5._4_4_ + 1.0;
          }
        }
      }
      else if ((dVar13 != -0.5) || (NAN(dVar13))) {
        uVar5._4_4_ = ceilf(fStack_48 + -0.5);
        uVar5._0_4_ = extraout_XMM0_Db_02;
        UStack_40.x = extraout_XMM0_Dc_02;
        UStack_40.y = extraout_XMM0_Dd_02;
      }
      else {
        UStack_40.x = 0.0;
        UStack_40.y = 0.0;
        uVar5._4_4_ = (float)dStack_70;
        if (((long)dStack_70 & 1U) != 0) {
          uVar5._4_4_ = uVar5._4_4_ + -1.0;
        }
      }
      fStack_44 = (float)uVar5;
      fStack_48 = uVar5._4_4_ * fVar1;
      auStack_68._0_4_ = (float)auStack_68._4_4_ / fVar1;
      fStack_60 = (float)auStack_68._4_4_;
      fStack_5c = (float)auStack_68._4_4_;
      dVar13 = modf((double)((float)auStack_68._4_4_ / fVar1),&dStack_70,pMVar15);
      if (0.0 <= (float)auStack_68._0_4_) {
        if ((dVar13 != 0.5) || (NAN(dVar13))) {
          auStack_68._4_4_ = floorf((float)auStack_68._0_4_ + 0.5);
        }
        else {
          auStack_68._4_4_ = (BADTYPE)dStack_70;
          if (((long)dStack_70 & 1U) != 0) {
            auStack_68._4_4_ = (float)auStack_68._4_4_ + 1.0;
          }
        }
      }
      else if ((dVar13 != -0.5) || (NAN(dVar13))) {
        auStack_68._4_4_ = ceilf((float)auStack_68._0_4_ + -0.5);
      }
      else {
        auStack_68._4_4_ = (BADTYPE)dStack_70;
        if (((long)dStack_70 & 1U) != 0) {
          auStack_68._4_4_ = (float)auStack_68._4_4_ + -1.0;
        }
      }
      auStack_68._4_4_ = (float)auStack_68._4_4_ * fVar1;
      uVar5._0_4_ = (float)auStack_58._0_4_;
      auStack_68._0_4_ = fStack_48;
      fStack_60 = UStack_40.x;
      fStack_5c = UStack_40.y;
    }
    else {
      pMVar15 = (MethodInfo *)(__this->fields)._planeYZ;
      pUVar12 = (__this->fields)._activeLine;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)pMVar15,(MethodInfo *)0x0);
      if (bVar14) {
        fStack_44 = (float)auStack_68._4_4_;
        fStack_48 = (float)auStack_68._4_4_ / fVar1;
        UStack_40.y = (float)auStack_68._4_4_;
        UStack_40.x = (float)auStack_68._4_4_;
        dVar13 = modf((double)((float)auStack_68._4_4_ / fVar1),&dStack_70,pMVar15);
        if (0.0 <= fStack_48) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            uVar5._0_4_ = floorf(fStack_48 + 0.5);
          }
          else {
            uVar5._0_4_ = (float)dStack_70;
            if (((long)dStack_70 & 1U) != 0) {
              uVar5._0_4_ = (float)uVar5 + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          uVar5._0_4_ = ceilf(fStack_48 + -0.5);
        }
        else {
          uVar5._0_4_ = (float)dStack_70;
          if (((long)dStack_70 & 1U) != 0) {
            uVar5._0_4_ = (float)uVar5 + -1.0;
          }
        }
        auStack_68._4_4_ = (float)uVar5 * fVar1;
        uVar5._0_4_ = (float)auStack_58._0_4_ / fVar1;
        auStack_58._0_4_ = (float)uVar5;
        dVar13 = modf((double)(float)uVar5,&dStack_70,pMVar15);
        if (0.0 <= (float)auStack_58._0_4_) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            uVar5._0_4_ = floorf((float)auStack_58._0_4_ + 0.5);
            goto label_05c98ba5;
          }
          uVar5._0_4_ = (float)dStack_70;
          if (((long)dStack_70 & 1U) != 0) {
            uVar5._0_4_ = (float)uVar5 + 1.0;
          }
        }
        else {
          if ((dVar13 != -0.5) || (NAN(dVar13))) {
            uVar5._0_4_ = ceilf((float)auStack_58._0_4_ + -0.5);
label_05c98ba5:
            uVar5._0_4_ = (float)uVar5 * fVar1;
            goto label_05c98c9d;
          }
          uVar5._0_4_ = (float)dStack_70;
          if (((long)dStack_70 & 1U) != 0) {
            uVar5._0_4_ = (float)uVar5 + -1.0;
          }
        }
      }
      else {
        pMVar15 = (MethodInfo *)(__this->fields)._planeXZ;
        pUVar12 = (__this->fields)._activeLine;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar14 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)pMVar15,(MethodInfo *)0x0)
        ;
        if (!bVar14) {
          uVar5._0_4_ = (float)auStack_58._0_4_;
          goto label_05c98c9d;
        }
        fStack_44 = (float)auStack_68._4_4_;
        fStack_48 = (float)auStack_68._0_4_ / fVar1;
        UStack_40._0_8_ = auStack_68._8_8_;
        dVar13 = modf((double)((float)auStack_68._0_4_ / fVar1),&dStack_70,pMVar15);
        uVar5._0_4_ = (float)((ulong)dStack_70 >> 0x20);
        if (0.0 <= fStack_48) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            uVar5._4_4_ = floorf(fStack_48 + 0.5);
            uVar5._0_4_ = extraout_XMM0_Db_05;
            UStack_40.x = extraout_XMM0_Dc_05;
            UStack_40.y = extraout_XMM0_Dd_05;
          }
          else {
            UStack_40.x = 0.0;
            UStack_40.y = 0.0;
            uVar5._4_4_ = (float)dStack_70;
            if (((long)dStack_70 & 1U) != 0) {
              uVar5._4_4_ = uVar5._4_4_ + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          uVar5._4_4_ = ceilf(fStack_48 + -0.5);
          uVar5._0_4_ = extraout_XMM0_Db_04;
          UStack_40.x = extraout_XMM0_Dc_04;
          UStack_40.y = extraout_XMM0_Dd_04;
        }
        else {
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
          uVar5._4_4_ = (float)dStack_70;
          if (((long)dStack_70 & 1U) != 0) {
            uVar5._4_4_ = uVar5._4_4_ + -1.0;
          }
        }
        fStack_44 = (float)uVar5;
        fStack_48 = uVar5._4_4_ * fVar1;
        uVar5._0_4_ = (float)auStack_58._0_4_ / fVar1;
        auStack_58._0_4_ = (float)uVar5;
        dVar13 = modf((double)(float)uVar5,&dStack_70,pMVar15);
        if (0.0 <= (float)auStack_58._0_4_) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            uVar5._0_4_ = floorf((float)auStack_58._0_4_ + 0.5);
          }
          else {
            uVar5._0_4_ = (float)dStack_70;
            if (((long)dStack_70 & 1U) != 0) {
              uVar5._0_4_ = (float)uVar5 + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          uVar5._0_4_ = ceilf((float)auStack_58._0_4_ + -0.5);
        }
        else {
          uVar5._0_4_ = (float)dStack_70;
          if (((long)dStack_70 & 1U) != 0) {
            uVar5._0_4_ = (float)uVar5 + -1.0;
          }
        }
        auStack_68._0_4_ = fStack_48;
      }
      uVar5._0_4_ = (float)uVar5 * fVar1;
    }
label_05c98c9d:
    auStack_58._0_4_ = (float)uVar5;
    pUVar12 = (__this->fields)._transform;
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
label_05c98cfb:
      ThrowNullReferenceException();
    }
    UVar18 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
    (frameDelta->fields).x = (float)auStack_68._0_4_ - UVar18.fields.x;
    (frameDelta->fields).y = (float)auStack_68._4_4_ - UVar18.fields.y;
    (frameDelta->fields).z = (float)auStack_58._0_4_ - UVar18.fields.z;
  }
  else {
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    uVar5._0_4_ = (frameDelta->fields).x;
    uVar4._0_4_ = (frameDelta->fields).y;
    uVar4._4_4_ = (frameDelta->fields).z;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      auStack_58._8_4_ = 0.0;
      fStack_4c = 0.0;
      auStack_68._0_4_ = (float)uVar5;
      auStack_58._0_8_ = uVar4;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      uVar4._0_4_ = (float)auStack_58._0_4_;
      uVar4._4_4_ = (float)auStack_58._4_4_;
      uVar5._0_4_ = (float)auStack_68._0_4_;
    }
    uVar5._0_4_ = uVar4._4_4_ * uVar4._4_4_ + (float)uVar5 * (float)uVar5 + (float)uVar4 * (float)uVar4;
    if ((float)uVar5 < 0.0) {
      uVar5._0_4_ = sqrtf((float)uVar5);
    }
    else {
      uVar5._0_4_ = SQRT((float)uVar5);
    }
    auStack_68._0_4_ = (float)uVar5;
    auStack_58._0_4_ = (float)uVar5 / fVar1;
    intptr = (UnityEngine_Vector3_StaticFields *)&dStack_70;
    dVar13 = modf((double)((float)uVar5 / fVar1),(double *)intptr,pMVar15);
    if (0.0 <= (float)auStack_58._0_4_) {
      if ((dVar13 != 0.5) || (NAN(dVar13))) {
        uVar5._0_4_ = floorf((float)auStack_58._0_4_ + 0.5);
        in_XMM3_Db = extraout_XMM0_Db_00;
        in_XMM3_Dc = extraout_XMM0_Dc_01;
        in_XMM3_Dd = extraout_XMM0_Dd_01;
      }
      else {
        uVar5._0_4_ = (float)dStack_70;
        if (((long)dStack_70 & 1U) != 0) {
          uVar5._0_4_ = (float)uVar5 + 1.0;
        }
      }
    }
    else if ((dVar13 != -0.5) || (NAN(dVar13))) {
      uVar5._0_4_ = ceilf((float)auStack_58._0_4_ + -0.5);
      in_XMM3_Db = extraout_XMM0_Db;
      in_XMM3_Dc = extraout_XMM0_Dc_00;
      in_XMM3_Dd = extraout_XMM0_Dd_00;
    }
    else {
      uVar5._0_4_ = (float)dStack_70;
      if (((long)dStack_70 & 1U) != 0) {
        uVar5._0_4_ = (float)uVar5 + -1.0;
      }
    }
    if (0.0 < (float)auStack_68._0_4_) {
      auStack_58._4_4_ = in_XMM3_Db;
      auStack_58._0_4_ = (float)uVar5;
      fStack_4c = in_XMM3_Dd;
      auStack_58._8_4_ = in_XMM3_Dc;
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
        dStack_70 = 0.0;
        uVar5._0_4_ = (float)auStack_58._0_4_;
      }
      else {
        dStack_70 = 0.0;
      }
      dStack_70 = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        dStack_70 = 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar5._0_4_ = (float)auStack_58._0_4_;
      }
      auVar17 = _auStack_68;
      uVar5._4_4_ = (frameDelta->fields).x;
      fVar2 = (frameDelta->fields).y;
      fVar7 = (frameDelta->fields).z;
      auStack_68._4_4_ = fVar7;
      auStack_68._0_4_ = fVar2;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        _fStack_60 = 0;
        fStack_48 = uVar5._4_4_;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        fVar2 = (float)auStack_68._0_4_;
        fVar7 = (float)auStack_68._4_4_;
        uVar5._0_4_ = (float)auStack_58._0_4_;
        uVar5._4_4_ = fStack_48;
        auVar17 = _auStack_68;
      }
      _auStack_68 = auVar17;
      fVar7 = fVar7 * fVar7;
      uVar5._4_4_ = fVar7 + uVar5._4_4_ * uVar5._4_4_ + fVar2 * fVar2;
      if (uVar5._4_4_ < 0.0) {
        uVar5._4_4_ = sqrtf(uVar5._4_4_);
        uVar5._0_4_ = (float)auStack_58._0_4_ * fVar1;
        fVar7 = extraout_XMM0_Db_01;
        if (uVar5._4_4_ <= 1e-05) goto label_05c98716;
label_05c98747:
        uVar3 = (frameDelta->fields).x;
        uVar8 = (frameDelta->fields).y;
        auVar16._4_4_ = uVar8;
        auVar16._0_4_ = uVar3;
        auVar16._8_8_ = 0;
        auVar17._4_4_ = uVar5._4_4_;
        auVar17._0_4_ = uVar5._4_4_;
        auVar17._8_4_ = fVar7;
        auVar17._12_4_ = fVar7;
        auVar17 = divps(auVar16,auVar17);
        dStack_70 = auVar17._0_8_;
        uVar5._4_4_ = (frameDelta->fields).z / uVar5._4_4_;
      }
      else {
        uVar5._4_4_ = SQRT(uVar5._4_4_);
        uVar5._0_4_ = (float)uVar5 * fVar1;
        if (1e-05 < uVar5._4_4_) goto label_05c98747;
label_05c98716:
        intptr = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar5._4_4_ = (intptr->zeroVector).fields.z;
      }
      dVar13 = *(double *)&(intptr->zeroVector).fields;
      (frameDelta->fields).x = (float)uVar5 * SUB84(dVar13,0);
      (frameDelta->fields).y = (float)uVar5 * (float)((ulong)dVar13 >> 0x20);
      (frameDelta->fields).z = uVar5._4_4_ * (float)uVar5;
    }
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  uVar5._0_4_ = (frameDelta->fields).x;
  uVar6._0_4_ = (frameDelta->fields).y;
  uVar6._4_4_ = (frameDelta->fields).z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    auStack_58._8_4_ = 0.0;
    fStack_4c = 0.0;
    auStack_68._0_4_ = (float)uVar5;
    auStack_58._0_8_ = uVar6;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar6._0_4_ = (float)auStack_58._0_4_;
    uVar6._4_4_ = (float)auStack_58._4_4_;
    uVar5._0_4_ = (float)auStack_68._0_4_;
  }
  uVar5._0_4_ = uVar6._4_4_ * uVar6._4_4_ + (float)uVar5 * (float)uVar5 + (float)uVar6 * (float)uVar6;
  if ((float)uVar5 < 0.0) {
    uVar5._0_4_ = sqrtf((float)uVar5);
  }
  else {
    uVar5._0_4_ = SQRT((float)uVar5);
  }
  if ((float)uVar5 < fVar1) {
    return;
  }
label_05c987ff:
  fVar1 = (mousePoint->fields).x;
  uVar5._0_4_ = (mousePoint->fields).y;
  (__this->fields)._previousMousePoint.fields.z = (mousePoint->fields).z;
  (__this->fields)._previousMousePoint.fields.x = fVar1;
  (__this->fields)._previousMousePoint.fields.y = (float)uVar5;
  return;
}


// MapEditor.PositionGizmo$$DoVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x5c98000

void MapEditor_PositionGizmo__DoVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  bool bVar4;
  MethodInfo *in_RCX;
  MethodInfo *in_R9;
  UnityEngine_Vector3_o frameDelta;
  UnityEngine_Vector3_o local_50;
  UnityEngine_Vector3_Fields local_40;
  Il2CppMethodPointer local_30;
  UnityEngine_Vector3_o local_28;
  
  if (Il2CppMethodInitialized_075479fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479fc = '\x01';
  }
  local_50.fields = (UnityEngine_Vector3_Fields)ZEXT812(0);
  local_40.z = 0.0;
  local_40.x = 0.0;
  local_40.y = 0.0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
label_05c98182:
    ThrowNullReferenceException();
  }
  if ((pSVar2->fields)._count == 0) {
    return;
  }
  if ((__this->fields)._hasSnapAnchor != false) {
    pUVar3 = (__this->fields)._snapAnchorTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields)._snapAnchorTransform;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05c98182;
      local_50 = UnityEngine_Transform__TransformPoint
                           (pUVar3,(UnityEngine_Vector3_o)(__this->fields)._snapAnchorLocal.fields,
                            (MethodInfo *)0x0);
      goto label_05c98110;
    }
  }
  local_30 = (Il2CppMethodPointer)0x0;
  in_RCX = (MethodInfo *)&local_30;
  bVar4 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                    (__this,camera,&local_50,(UnityEngine_Transform_o **)in_RCX,&local_28,in_R9);
  if (!bVar4) {
    return;
  }
label_05c98110:
  bVar4 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_5b99040
                    (__this,camera,INFINITY,(UnityEngine_Vector3_o *)&local_40,in_RCX);
  if (bVar4) {
    frameDelta.fields.z = local_40.z - local_50.fields.z;
    frameDelta.fields.x = local_40.x - local_50.fields.x;
    frameDelta.fields.y = local_40.y - local_50.fields.y;
    if (1e-08 <= frameDelta.fields.z * frameDelta.fields.z +
                 frameDelta.fields.y * frameDelta.fields.y + frameDelta.fields.x * frameDelta.fields.x) {
      MapEditor_PositionGizmo__MoveSelectedObjects(__this,frameDelta,(MethodInfo *)camera);
    }
  }
  return;
}


// MapEditor.PositionGizmo$$DoAxisSurfaceSnap
// il2cpp: void MapEditor_PositionGizmo__DoAxisSurfaceSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x5c97570
// eh: try 0x5c9795a..0x5c97f17 -> pad 0x5c97f2e (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c97f4e..0x5c97f53 -> pad 0x5c97f75 cleanup
// eh: try 0x5c97f78..0x5c97f82 -> pad 0x5c97fe9 catch (...) [compiler noexcept guard]
// eh: try 0x5c97faa..0x5c97faf -> pad 0x5c97fd4 cleanup
// eh: try 0x5c97fd7..0x5c97fe1 -> pad 0x5c97fe9 catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c97c1d: nop dword ptr [rax]
// asm:   0x5c97c9f: nop 
// asm:   0x5c97cd7: jmp 0x5c97c20
// asm:   0x5c97f1c: jmp 0x5c97f92
// asm:   0x5c97f1e: jmp 0x5c97f92
// asm:   0x5c97f20: jmp 0x5c97f92
// asm:   0x5c97f22: jmp 0x5c97f92
// asm:   0x5c97f24: jmp 0x5c97f92
// asm:   0x5c97f26: jmp 0x5c97f92
// asm:   0x5c97f28: jmp 0x5c97f92
// asm:   0x5c97f2a: jmp 0x5c97f92
// asm:   0x5c97f2c: jmp 0x5c97f92
// asm:   0x5c97f2e: jmp 0x5c97f92
// asm:   0x5c97f30: jmp 0x5c97f92
// asm:   0x5c97f32: jmp 0x5c97f36
// asm:   0x5c97f34: jmp 0x5c97f36
// asm:   0x5c97f36: mov r15, rax
// asm:   0x5c97f39: cmp edx, 1
// asm:   0x5c97f3c: jne 0x5c97f78
// asm:   0x5c97f3e: mov rdi, r15
// asm:   0x5c97f41: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c97f46: mov rbx, qword ptr [rax]
// asm:   0x5c97f49: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c97f4e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c97f53: lea rax, [rip + 0x15f59e6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x5c97f5a: mov rsi, qword ptr [rax]
// asm:   0x5c97f5d: lea rdi, [rsp + 0xb0]
// asm:   0x5c97f65: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c97f6a: test rbx, rbx
// asm:   0x5c97f6d: je 0x5c97e76
// asm:   0x5c97f73: jmp 0x5c97fcc
// asm:   0x5c97f75: mov r15, rax
// asm:   0x5c97f78: lea rdi, [rsp + 0x18]
// asm:   0x5c97f7d: call 0x2fdab50  ; il2cpp_runtime_helper_02fdab50()
// asm:   0x5c97f82: jmp 0x5c97fe1
// asm:   0x5c97f84: jmp 0x5c97f92
// asm:   0x5c97f86: jmp 0x5c97f92
// asm:   0x5c97f88: jmp 0x5c97f92
// asm:   0x5c97f8a: jmp 0x5c97f92
// asm:   0x5c97f8c: jmp 0x5c97f92
// asm:   0x5c97f8e: jmp 0x5c97f92
// asm:   0x5c97f90: jmp 0x5c97f92
// asm:   0x5c97f92: mov r15, rax
// asm:   0x5c97f95: cmp edx, 1
// asm:   0x5c97f98: jne 0x5c97fd7
// asm:   0x5c97f9a: mov rdi, r15
// asm:   0x5c97f9d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c97fa2: mov rbx, qword ptr [rax]
// asm:   0x5c97fa5: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c97faa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c97faf: lea rax, [rip + 0x15f640a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c97fb6: mov rsi, qword ptr [rax]
// asm:   0x5c97fb9: lea rdi, [rsp + 0x40]
// asm:   0x5c97fbe: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c97fc3: test rbx, rbx
// asm:   0x5c97fc6: je 0x5c97cf0
// asm:   0x5c97fcc: mov rdi, rbx
// asm:   0x5c97fcf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c97fd4: mov r15, rax
// asm:   0x5c97fd7: lea rdi, [rsp + 0x18]
// asm:   0x5c97fdc: call 0x2fdab20  ; il2cpp_runtime_helper_02fdab20()
// asm:   0x5c97fe1: mov rdi, r15
// asm:   0x5c97fe4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c97fe9: mov rdi, rax
// asm:   0x5c97fec: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_PositionGizmo__DoAxisSurfaceSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint32_t uVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  System_Collections_Generic_HashSet_MapObject__o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Collider_o *pUVar9;
  UnityEngine_Collider_array *pUVar10;
  UnityEngine_Camera_o *pUVar11;
  UnityEngine_Vector2_o UVar12;
  Il2CppObject *pIVar13;
  undefined8 __this_00;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  UnityEngine_Vector3_StaticFields *pUVar17;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_MapObject__o *__this_02;
  System_Object_array *pSVar18;
  System_Int32_array *layers;
  MethodInfo *pMVar19;
  MethodInfo *in_R9;
  uint uVar20;
  float fVar21;
  undefined4 extraout_XMM0_Db;
  float fVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar23;
  undefined4 in_XMM1_Db;
  undefined1 auVar24 [16];
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o frameDelta;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_Fields UStack_140;
  undefined1 auStack_130 [16];
  Il2CppObject *pIStack_120;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [8];
  undefined1 *puStack_100;
  Il2CppObject *pIStack_f8;
  undefined1 auStack_e8 [12];
  float fStack_dc;
  UnityEngine_Vector2_Fields UStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  System_Collections_Generic_List_Enumerator_T__o SStack_98;
  UnityEngine_Transform_o *pUStack_80;
  UnityEngine_Vector2_Fields UStack_78;
  undefined8 uStack_70;
  UnityEngine_RaycastHit_o UStack_68;
  
  if (Il2CppMethodInitialized_075479fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_075479fd = '\x01';
  }
  UStack_140.z = 0.0;
  UStack_140.x = 0.0;
  UStack_140.y = 0.0;
  UStack_68.fields.m_UV.fields.x = 0.0;
  UStack_68.fields.m_UV.fields.y = 0.0;
  UStack_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_68.fields.m_Normal.fields.y = 0.0;
  UStack_68.fields.m_Normal.fields.z = 0.0;
  UStack_68.fields.m_FaceID = 0;
  UStack_68.fields.m_Distance = 0.0;
  UStack_68.fields.m_Point.fields.x = 0.0;
  UStack_68.fields.m_Point.fields.y = 0.0;
  UStack_68.fields.m_Point.fields.z = 0.0;
  UStack_68.fields.m_Normal.fields.x = 0.0;
  UStack_d0.x = 0.0;
  UStack_d0.y = 0.0;
  auStack_108 = (undefined1  [8])0x0;
  puStack_100 = (undefined1 *)0x0;
  pIStack_f8 = (Il2CppObject *)0x0;
  SStack_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_98.fields._index = 0;
  SStack_98.fields._version = 0;
  SStack_98.fields._current = (Il2CppObject *)0x0;
  pGVar5 = (__this->fields)._gameManager;
  if ((pGVar5 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar6 = (pGVar5->fields).SelectedObjects,
     pSVar6 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_05c97f08;
  if ((pSVar6->fields)._count == 0) {
    return;
  }
  pUVar7 = (__this->fields)._activeLine;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    return;
  }
  if ((__this->fields)._hasSnapAnchor == false) {
label_05c97781:
    pUStack_80 = (UnityEngine_Transform_o *)0x0;
    bVar14 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                       (__this,camera,(UnityEngine_Vector3_o *)&UStack_140,&pUStack_80,
                        (UnityEngine_Vector3_o *)auStack_130,in_R9);
    if (!bVar14) {
      return;
    }
  }
  else {
    pUVar7 = (__this->fields)._snapAnchorTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar14) goto label_05c97781;
    pUVar7 = (__this->fields)._snapAnchorTransform;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c97f08;
    in_XMM1_Db = 0;
    UVar25 = UnityEngine_Transform__TransformPoint
                       (pUVar7,(UnityEngine_Vector3_o)(__this->fields)._snapAnchorLocal.fields,
                        (MethodInfo *)0x0);
    UStack_140.z = UVar25.fields.z;
    UStack_140._0_8_ = UVar25.fields._0_8_;
  }
  pUVar7 = (__this->fields)._activeLine;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c97f08;
  UVar25 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
  fVar23 = UVar25.fields.z;
  fStack_110 = (float)extraout_XMM0_Dc;
  auStack_118 = (undefined1  [8])UVar25.fields._0_8_;
  fStack_10c = (float)extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05c977f7;
label_05c97aaf:
    auStack_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    auStack_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05c97aaf;
label_05c977f7:
    auStack_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    in_XMM1_Db = 0;
  }
  fVar21 = fVar23 * fVar23 +
           (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
           (float)auStack_118._0_4_ * (float)auStack_118._0_4_;
  if (fVar21 < 0.0) {
    fVar21 = sqrtf(fVar21);
    in_XMM1_Db = extraout_XMM0_Db;
    if (fVar21 <= 1e-05) goto label_05c97841;
label_05c9786d:
    fVar23 = fVar23 / fVar21;
    auVar24._4_4_ = fVar21;
    auVar24._0_4_ = fVar21;
    auVar24._8_4_ = in_XMM1_Db;
    auVar24._12_4_ = in_XMM1_Db;
    auVar24 = divps(_auStack_118,auVar24);
    auStack_130._0_8_ = auVar24._0_8_;
    pUVar17 = (UnityEngine_Vector3_StaticFields *)auStack_130;
  }
  else {
    fVar21 = SQRT(fVar21);
    if (1e-05 < fVar21) goto label_05c9786d;
label_05c97841:
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar23 = (pUVar17->zeroVector).fields.z;
  }
  uVar2 = (pUVar17->zeroVector).fields.x;
  uVar3 = (pUVar17->zeroVector).fields.y;
  auStack_118._4_4_ = uVar3;
  auStack_118._0_4_ = uVar2;
  fVar21 = (float)(__this->fields)._axisSnapDirection;
  _fStack_110 = 0;
  if (fVar21 == 0.0) {
    if ((camera == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar11 = (camera->fields).Camera, pUVar11 == (UnityEngine_Camera_o *)0x0)) goto label_05c97f08;
    auStack_e8._0_4_ = (__this->fields)._PointerPosition_k__BackingField.fields.x;
    auStack_e8._4_4_ = (__this->fields)._PointerPosition_k__BackingField.fields.y;
    auStack_e8._8_4_ = 0.0;
    fStack_dc = 0.0;
    UStack_78 = (__this->fields)._axisSnapStartMouse.fields;
    uStack_70 = 0;
    UVar25.fields.z = UStack_140.z;
    UVar25.fields.x = UStack_140.x;
    UVar25.fields.y = UStack_140.y;
    auStack_a8._0_4_ = UStack_140.x;
    auStack_a8._4_4_ = UStack_140.y;
    uStack_a0 = 0;
    auStack_c8._0_4_ = UStack_140.z;
    UVar25 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar11,UVar25,(MethodInfo *)0x0);
    auStack_b8._8_4_ = extraout_XMM0_Dc_00;
    auStack_b8._0_8_ = UVar25.fields._0_8_;
    auStack_b8._12_4_ = extraout_XMM0_Dd_00;
    pUVar11 = (camera->fields).Camera;
    if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto label_05c97f08;
    position.fields.z = (float)auStack_c8._0_4_ + fVar23;
    position.fields.x = (float)auStack_a8._0_4_ + (float)auStack_118._0_4_;
    position.fields.y = (float)auStack_a8._4_4_ + (float)auStack_118._4_4_;
    UVar25 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar11,position,(MethodInfo *)0x0);
    fVar21 = UVar25.fields.x - (float)auStack_b8._0_4_;
    fVar22 = UVar25.fields.y - (float)auStack_b8._4_4_;
    UStack_d0.y = fVar22;
    UStack_d0.x = fVar21;
    if (fVar22 * fVar22 + fVar21 * fVar21 < 1e-06) {
      return;
    }
    auStack_e8._0_4_ = (float)auStack_e8._0_4_ - UStack_78.x;
    auStack_e8._4_4_ = (float)auStack_e8._4_4_ - UStack_78.y;
    fStack_dc = fStack_dc - uStack_70._4_4_;
    auStack_e8._8_4_ = (float)auStack_e8._8_4_ - (float)uStack_70;
    if ((float)auStack_e8._4_4_ * (float)auStack_e8._4_4_ + (float)auStack_e8._0_4_ * (float)auStack_e8._0_4_
        < 25.0) {
      return;
    }
    UVar12 = UnityEngine_Vector2__Normalize((UnityEngine_Vector2_o *)&UStack_d0,(MethodInfo *)0x0);
    fVar21 = (float)((uint)(0.0 <= (float)auStack_e8._4_4_ * UVar12.fields.y +
                                   (float)auStack_e8._0_4_ * UVar12.fields.x) * 2 + -1);
    (__this->fields)._axisSnapDirection = (int32_t)fVar21;
  }
  auStack_a8._0_4_ = fVar21;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  pGVar5 = (__this->fields)._gameManager;
  if ((pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_02 = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                            (pGVar5,(MethodInfo *)0x0),
     __this_02 != (System_Collections_Generic_List_MapObject__o *)0x0)) {
    auStack_b8._0_8_ = __this;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_130,
               (System_Collections_Generic_List_object__o *)__this_02,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    pIStack_f8 = pIStack_120;
    auStack_108 = (undefined1  [8])auStack_130._0_8_;
    puStack_100 = (undefined1 *)auStack_130._8_8_;
    auStack_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_130._8_8_ = auStack_108;
    if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) {
      while (bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_108,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
            pIVar13 = pIStack_f8, bVar14) {
        if (pIStack_f8 == (Il2CppObject *)0x0) goto label_05c97f03;
        pUVar8 = pIStack_f8[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar14 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar14) {
          if (pIVar13[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_05c97f0d;
          pSVar18 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                              (pIVar13[1].monitor,
                               (MethodInfo_353C030 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
          if (pSVar18 == (System_Object_array *)0x0) goto label_05c97f12;
          uVar16 = (uint)pSVar18->max_length;
          if (0 < (int)uVar16) {
            uVar20 = 0;
            do {
              if (uVar16 <= uVar20) goto label_05c97ee3;
              pUVar9 = (UnityEngine_Collider_o *)pSVar18->m_Items[(int)uVar20];
              if (pUVar9 == (UnityEngine_Collider_o *)0x0) goto label_05c97ee8;
              bVar14 = UnityEngine_Collider__get_enabled(pUVar9,(MethodInfo *)0x0);
              if (bVar14) {
                UnityEngine_Collider__set_enabled(pUVar9,false,(MethodInfo *)0x0);
                goto label_05c97ef9;
              }
              uVar20 = uVar20 + 1;
              uVar16 = (uint)pSVar18->max_length;
            } while ((int)uVar20 < (int)uVar16);
          }
        }
      }
    }
    else {
      while (bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_108,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
            pIVar13 = pIStack_f8, bVar14) {
        if (pIStack_f8 == (Il2CppObject *)0x0) {
label_05c97f03:
          ThrowNullReferenceException();
        }
        pUVar8 = pIStack_f8[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar14 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar14) {
          if (pIVar13[1].monitor == (UnityEngine_GameObject_o *)0x0) {
label_05c97f0d:
            ThrowNullReferenceException();
          }
          pSVar18 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                              (pIVar13[1].monitor,
                               (MethodInfo_353C030 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
          if (pSVar18 == (System_Object_array *)0x0) {
label_05c97f12:
            ThrowNullReferenceException();
          }
          uVar16 = (uint)pSVar18->max_length;
          if (0 < (int)uVar16) {
            uVar20 = 0;
            do {
              if (uVar16 <= uVar20) {
label_05c97ee3:
                ThrowIndexOutOfRangeException();
              }
              pUVar9 = (UnityEngine_Collider_o *)pSVar18->m_Items[(int)uVar20];
              if (pUVar9 == (UnityEngine_Collider_o *)0x0) {
label_05c97ee8:
                ThrowNullReferenceException();
              }
              bVar14 = UnityEngine_Collider__get_enabled(pUVar9,(MethodInfo *)0x0);
              if (bVar14) {
                UnityEngine_Collider__set_enabled(pUVar9,false,(MethodInfo *)0x0);
                pMVar19 = MethodInfo_System_Collections_Generic_List_Collider_Add;
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar10 = (__this_01->fields)._items;
                if (pUVar10 == (UnityEngine_Collider_array *)0x0) {
label_05c97ef9:
                  ThrowNullReferenceException();
                }
                uVar16 = (__this_01->fields)._size;
                if (uVar16 < (uint)pUVar10->max_length) {
                  (__this_01->fields)._size = uVar16 + 1;
                  pUVar10->m_Items[(int)uVar16] = pUVar9;
                  Il2CppCodeGenWriteBarrier(pUVar10->m_Items + (int)uVar16);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar9,
                             (MethodInfo_395D230 *)pMVar19->klass->rgctx_data[0xe].method);
                }
              }
              uVar20 = uVar20 + 1;
              uVar16 = (uint)pSVar18->max_length;
            } while ((int)uVar20 < (int)uVar16);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_108,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    auStack_c8._0_4_ = UStack_140.x;
    auStack_c8._4_4_ = UStack_140.y;
    auStack_c8._8_4_ = 0.0;
    auStack_c8._12_4_ = 0.0;
    auStack_e8._0_4_ = UStack_140.z;
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      fVar21 = (float)(int)auStack_a8._0_4_;
      auStack_118._4_4_ = (float)auStack_118._4_4_ * fVar21;
      auStack_118._0_4_ = (float)auStack_118._0_4_ * fVar21;
      fStack_110 = fStack_110 * fVar21;
      fStack_10c = fStack_10c * fVar21;
      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      origin.fields.z = (float)auStack_e8._0_4_;
      origin.fields.x = (float)auStack_c8._0_4_;
      origin.fields.y = (float)auStack_c8._4_4_;
      direction.fields.z = fVar23 * fVar21;
      direction.fields.x = (float)auStack_118._0_4_;
      direction.fields.y = (float)auStack_118._4_4_;
      bVar14 = UnityEngine_Physics__Raycast_69d9ca0
                         (origin,direction,&UStack_68,100000.0,layerMask,(MethodInfo *)0x0);
      if (__this_01 != (System_Collections_Generic_List_Collider__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&SStack_98,(System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
        auStack_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_130._8_8_ = &SStack_98;
        while( true ) {
          bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_98,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
          if (!bVar15) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_98,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
            __this_00 = auStack_b8._0_8_;
            if (bVar14) {
              pMVar19 = (MethodInfo *)0x0;
              UVar25 = UnityEngine_RaycastHit__get_point(&UStack_68,(MethodInfo *)0x0);
              frameDelta.fields.x = UVar25.fields.x - (float)auStack_c8._0_4_;
              frameDelta.fields.y = UVar25.fields.y - (float)auStack_c8._4_4_;
              frameDelta.fields.z = UVar25.fields.z - (float)auStack_e8._0_4_;
              if (1e-08 <= frameDelta.fields.z * frameDelta.fields.z +
                           frameDelta.fields.y * frameDelta.fields.y +
                           frameDelta.fields.x * frameDelta.fields.x) {
                MapEditor_PositionGizmo__MoveSelectedObjects
                          ((MapEditor_PositionGizmo_o *)__this_00,frameDelta,pMVar19);
              }
            }
            return;
          }
          if ((UnityEngine_Collider_o *)SStack_98.fields._current == (UnityEngine_Collider_o *)0x0) break;
          UnityEngine_Collider__set_enabled
                    ((UnityEngine_Collider_o *)SStack_98.fields._current,true,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
label_05c97f08:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$DoFreeDragVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoFreeDragVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x5c96fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c972c9: jmp 0x5c97372

void MapEditor_PositionGizmo__DoFreeDragVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  uint32_t uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  Utility_BaseComponentCache_o *pUVar5;
  char *pcVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  float fVar12;
  float fVar13;
  undefined4 uVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_Fields UStack_a8;
  UnityEngine_Vector3_Fields UStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [20];
  float fStack_64;
  Il2CppMethodPointer pIStack_60;
  undefined8 uStack_58;
  InvokerMethod pIStack_50;
  undefined8 uStack_48;
  Il2CppClass *pIStack_40;
  undefined1 auStack_38 [16];
  _union_13 _Stack_28;
  _union_14 _Stack_20;
  
  if (Il2CppMethodInitialized_075479fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479fe = '\x01';
  }
  UStack_a8.z = 0.0;
  UStack_a8.x = 0.0;
  UStack_a8.y = 0.0;
  UStack_98.z = 0.0;
  UStack_98.x = 0.0;
  UStack_98.y = 0.0;
  pGVar2 = (__this->fields)._gameManager;
  if ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_05c9755d;
  if ((pSVar3->fields)._count == 0) {
    return;
  }
  if ((camera == (Cameras_BaseCamera_o *)0x0) ||
     (__this_00 = (camera->fields).Camera, __this_00 == (UnityEngine_Camera_o *)0x0)) goto label_05c9755d;
  UnityEngine_Camera__ScreenPointToRay_68c1290
            ((UnityEngine_Ray_o *)auStack_78,__this_00,
             (UnityEngine_Vector3_o)(__this->fields)._PointerPosition_k__BackingField.fields,(MethodInfo *)0x0
            );
  uStack_58 = (Il2CppMethodPointer)auStack_78._0_8_;
  pIStack_50 = (InvokerMethod)0x0;
  uStack_48 = (char *)auStack_78._12_8_;
  pIStack_40 = (Il2CppClass *)0x0;
  if ((__this->fields)._hasSnapAnchor == false) {
label_05c97104:
    pIStack_60 = (Il2CppMethodPointer)0x0;
    in_RCX = (MethodInfo *)&pIStack_60;
    bVar11 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                       (__this,camera,(UnityEngine_Vector3_o *)&UStack_a8,(UnityEngine_Transform_o **)in_RCX,
                        (UnityEngine_Vector3_o *)auStack_78,in_R9);
    if (!bVar11) {
      return;
    }
  }
  else {
    pUVar4 = (__this->fields)._snapAnchorTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar11) goto label_05c97104;
    pUVar4 = (__this->fields)._snapAnchorTransform;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c9755d;
    UVar21 = UnityEngine_Transform__TransformPoint
                       (pUVar4,(UnityEngine_Vector3_o)(__this->fields)._snapAnchorLocal.fields,
                        (MethodInfo *)0x0);
    UStack_a8.z = UVar21.fields.z;
    UStack_a8._0_8_ = UVar21.fields._0_8_;
  }
  pUVar5 = (camera->fields).Cache;
  if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar4 = (pUVar5->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    UVar21 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    fVar7 = UStack_a8.z;
    auStack_88._0_4_ = UStack_a8.x;
    auStack_88._4_4_ = UStack_a8.y;
    uStack_80 = 0;
    if (Il2CppMethodInitialized_0753e7b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b7 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      auStack_88 = (undefined1  [8])UStack_a8._0_8_;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar12 = UVar21.fields.z - fVar7;
    fVar17 = UVar21.fields.x - (float)auStack_88._0_4_;
    fVar19 = UVar21.fields.y - (float)auStack_88._4_4_;
    fVar12 = fVar12 * fVar12 + fVar19 * fVar19 + fVar17 * fVar17;
    if (fVar12 < 0.0) {
      fVar12 = sqrtf(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    method_00 = (MethodInfo *)camera;
    bVar11 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_5b99040
                       (__this,camera,30.0,(UnityEngine_Vector3_o *)&UStack_98,in_RCX);
    if (bVar11) {
      fVar12 = fVar12 * 0.3;
      if (fVar12 <= 60.0) {
        fVar12 = 60.0;
      }
      fVar17 = UStack_98.x - (float)auStack_88._0_4_;
      fVar19 = UStack_98.y - (float)auStack_88._4_4_;
      fVar13 = UStack_98.z - fVar7;
      fVar18 = fVar13 * fVar13 + fVar19 * fVar19 + fVar17 * fVar17;
      if (fVar18 <= fVar12 * fVar12) goto label_05c974fa;
    }
    pUVar5 = (camera->fields).Cache;
    if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar4 = (pUVar5->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      UVar21 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
      fVar12 = UVar21.fields.x;
      fVar17 = UVar21.fields.y;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar19 = UVar21.fields.z * UVar21.fields.z + fVar17 * fVar17 + fVar12 * fVar12;
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
        pcVar6 = uStack_48;
        uVar8 = _Stack_28._0_4_;
        uVar9 = _Stack_20._0_4_;
        uVar10 = _Stack_20._4_4_;
      }
      else {
        fVar19 = SQRT(fVar19);
        pcVar6 = uStack_48;
        uVar8 = _Stack_28._0_4_;
        uVar9 = _Stack_20._0_4_;
        uVar10 = _Stack_20._4_4_;
      }
      _Stack_20._4_4_ = 0;
      _Stack_20._0_4_ = 0;
      uVar16 = 0.0;
      _Stack_28._0_4_ = 0.0;
      fVar13 = 0.0;
      if (1e-05 < fVar19) {
        auVar14._0_8_ = UVar21.fields._4_8_ ^ 0x8000000080000000;
        auVar14._8_4_ = -fVar17;
        auVar14._12_4_ = -fVar17;
        fVar13 = -fVar12 / fVar19;
        auVar15._4_4_ = fVar19;
        auVar15._0_4_ = fVar19;
        auVar15._8_4_ = fVar19;
        auVar15._12_4_ = fVar19;
        auVar15 = divps(auVar14,auVar15);
        _Stack_28._0_4_ = auVar15._0_4_;
        uVar16 = auVar15._4_4_;
        _Stack_20._0_4_ = auVar15._8_4_;
        _Stack_20._4_4_ = auVar15._12_4_;
      }
      uStack_48._0_4_ = SUB84(pcVar6,0);
      uStack_48._4_4_ = (float)((ulong)pcVar6 >> 0x20);
      fVar12 = fStack_64 * (float)uVar16 +
               uStack_48._4_4_ * (float)_Stack_28._0_4_ + (float)uStack_48 * fVar13;
      uVar20 = _Stack_28._0_4_;
      uStack_48 = pcVar6;
      if (g_data_0753e7b4 == '\0') {
        auStack_38 = ZEXT416((uint)fVar12);
        _Stack_28._4_4_ = uVar16;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        g_data_0753e7b4 = '\x01';
        fVar12 = (float)auStack_38._0_4_;
        uVar20 = _Stack_28._0_4_;
        uVar8 = _Stack_28._0_4_;
        uVar9 = _Stack_20._0_4_;
        uVar10 = _Stack_20._4_4_;
      }
      _Stack_20._4_4_ = uVar10;
      _Stack_20._0_4_ = uVar9;
      _Stack_28._0_4_ = uVar8;
      fVar17 = ABS(fVar12);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar18 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar19 = fVar17 * 1e-06;
      if (fVar17 * 1e-06 <= fVar18) {
        fVar19 = fVar18;
      }
      if (ABS(0.0 - fVar12) < fVar19) {
        return;
      }
      fVar12 = ((fVar7 * (float)uVar16 +
                (float)auStack_88._4_4_ * (float)uVar20 + (float)auStack_88._0_4_ * fVar13) -
               ((float)uVar16 * (float)auStack_78._8_4_ +
               uStack_58._4_4_ * (float)uVar20 + fVar13 * (float)uStack_58)) / fVar12;
      if (fVar12 <= 0.0) {
        return;
      }
      fVar17 = ((float)uStack_58 + (float)uStack_48 * fVar12) - (float)auStack_88._0_4_;
      fVar19 = (uStack_58._4_4_ + uStack_48._4_4_ * fVar12) - (float)auStack_88._4_4_;
      fVar13 = ((float)auStack_78._8_4_ + fStack_64 * fVar12) - fVar7;
      fVar18 = fVar13 * fVar13 + fVar19 * fVar19 + fVar17 * fVar17;
label_05c974fa:
      if (1e-08 <= fVar18) {
        UVar21.fields.y = fVar19;
        UVar21.fields.x = fVar17;
        UVar21.fields.z = fVar13;
        MapEditor_PositionGizmo__MoveSelectedObjects(__this,UVar21,method_00);
      }
      return;
    }
  }
label_05c9755d:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x5c99030

bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_5b99040
                    (__this,camera,INFINITY,vertex,method);
  return bVar1;
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, float screenRadius, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x5c99040
// eh: try 0x5c992f3..0x5c998df -> pad 0x5c99939 (+40 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c99959..0x5c9995e -> pad 0x5c99988 cleanup
// eh: try 0x5c9998b..0x5c99998 -> pad 0x5c999a0 catch (...) [compiler noexcept guard]
// asm: 83 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c99737: jmp 0x5c9962b
// asm:   0x5c9985e: xor eax, eax
// asm:   0x5c99860: mov qword ptr [rsp + 0x20], rax
// asm:   0x5c9986a: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c9986f: jmp 0x5c99878
// asm:   0x5c99871: xor eax, eax
// asm:   0x5c99873: mov qword ptr [rsp + 0x20], rax
// asm:   0x5c9987d: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c99882: jmp 0x5c99890
// asm:   0x5c99889: xor eax, eax
// asm:   0x5c9988b: mov qword ptr [rsp + 0x20], rax
// asm:   0x5c99895: xor eax, eax
// asm:   0x5c99897: mov qword ptr [rsp + 0x20], rax
// asm:   0x5c998b0: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c998b5: jmp 0x5c9989c
// asm:   0x5c998df: jmp 0x5c9993e
// asm:   0x5c998e1: jmp 0x5c9993e
// asm:   0x5c998e3: jmp 0x5c9993e
// asm:   0x5c998e5: jmp 0x5c9993e
// asm:   0x5c998e7: jmp 0x5c9993e
// asm:   0x5c998e9: jmp 0x5c9993e
// asm:   0x5c998eb: jmp 0x5c9993e
// asm:   0x5c998ed: jmp 0x5c9993e
// asm:   0x5c998ef: jmp 0x5c9993e
// asm:   0x5c998f1: jmp 0x5c9993e
// asm:   0x5c998f3: jmp 0x5c9993e
// asm:   0x5c998f5: jmp 0x5c9993e
// asm:   0x5c998f7: jmp 0x5c9993e
// asm:   0x5c998f9: jmp 0x5c9993e
// asm:   0x5c998fb: jmp 0x5c9993e
// asm:   0x5c998fd: jmp 0x5c9993e
// asm:   0x5c998ff: jmp 0x5c9993e
// asm:   0x5c99901: jmp 0x5c9993e
// asm:   0x5c99903: jmp 0x5c99939
// asm:   0x5c99905: jmp 0x5c9993e
// asm:   0x5c99907: jmp 0x5c9993e
// asm:   0x5c99909: jmp 0x5c9993e
// asm:   0x5c9990b: jmp 0x5c9993e
// asm:   0x5c9990d: jmp 0x5c99929
// asm:   0x5c9990f: jmp 0x5c99929
// asm:   0x5c99911: jmp 0x5c99929
// asm:   0x5c99913: jmp 0x5c9993e
// asm:   0x5c99915: jmp 0x5c99929
// asm:   0x5c99917: jmp 0x5c9993e
// asm:   0x5c99919: jmp 0x5c99929
// asm:   0x5c9991b: jmp 0x5c99929
// asm:   0x5c9991d: jmp 0x5c99939
// asm:   0x5c9991f: jmp 0x5c99939
// asm:   0x5c99921: jmp 0x5c99929
// asm:   0x5c99923: jmp 0x5c9993e
// asm:   0x5c99925: jmp 0x5c99939
// asm:   0x5c99927: jmp 0x5c99929
// asm:   0x5c99929: mov rbp, rax
// asm:   0x5c9992c: xor eax, eax
// asm:   0x5c9992e: mov qword ptr [rsp + 0x20], rax
// asm:   0x5c99933: jmp 0x5c99941
// asm:   0x5c99935: jmp 0x5c9993e
// asm:   0x5c99937: jmp 0x5c99939
// asm:   0x5c99939: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c9993e: mov rbp, rax
// asm:   0x5c99941: cmp edx, 1
// asm:   0x5c99944: jne 0x5c9998b
// asm:   0x5c99946: mov rdi, rbp
// asm:   0x5c99949: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9994e: mov rbp, qword ptr [rax]
// asm:   0x5c99951: mov qword ptr [rsp + 0x100], rbp
// asm:   0x5c99959: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9995e: lea rax, [rip + 0x15f5fa3]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose
// asm:   0x5c99965: mov rsi, qword ptr [rax]
// asm:   0x5c99968: lea rdi, [rsp + 0x60]
// asm:   0x5c9996d: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x5c99972: test rbp, rbp
// asm:   0x5c99975: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x5c9997a: je 0x5c9979a
// asm:   0x5c99980: mov rdi, rbp
// asm:   0x5c99983: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c99988: mov rbp, rax
// asm:   0x5c9998b: lea rdi, [rsp + 0x100]
// asm:   0x5c99993: call 0x2fdab80  ; il2cpp_runtime_helper_02fdab80()
// asm:   0x5c99998: mov rdi, rbp
// asm:   0x5c9999b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c999a0: mov rdi, rax
// asm:   0x5c999a3: call 0x2ab61e0  ; __clang_call_terminate()

bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_5b99040
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,float screenRadius,
               UnityEngine_Vector3_o *vertex,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_Camera_o *__this_03;
  Il2CppObject *pIVar6;
  bool bVar7;
  bool bVar8;
  int32_t iVar9;
  int32_t iVar10;
  System_Collections_Generic_HashSet_MeshFilter__o *__this_04;
  System_Object_array *pSVar11;
  ulong uVar12;
  UnityEngine_Object_o *pUVar13;
  MethodInfo *pMVar14;
  UnityEngine_Bounds_Fields *pUVar15;
  UnityEngine_Mesh_o *__this_05;
  UnityEngine_Vector3_array *pUVar16;
  UnityEngine_Transform_o *__this_06;
  int iVar17;
  float *pfVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o UVar27;
  float local_188;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_158;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_118;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  UnityEngine_Vector3_array *local_d0;
  ulong local_c8;
  UnityEngine_Vector3_o *local_c0;
  undefined8 local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *local_b0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_a8;
  undefined8 uStack_a0;
  Il2CppObject *local_98;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_88;
  undefined8 uStack_80;
  Il2CppObject *local_78;
  UnityEngine_Vector2_o local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_48 [2];
  Il2CppObject *local_38;
  
  pMVar14 = (MethodInfo *)camera;
  if (Il2CppMethodInitialized_075479ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MeshFilter_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479ff = '\x01';
  }
  local_158.fields._current.fields.key = (Il2CppObject *)0x0;
  local_158.fields._current.fields.value = (Il2CppObject *)0x0;
  local_158.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_158.fields._version = 0;
  local_158.fields._index = 0;
  local_158.fields._getEnumeratorRetType = 0;
  local_158.fields._36_4_ = 0;
  local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_78 = (Il2CppObject *)0x0;
  local_a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_98 = (Il2CppObject *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar20 = (pUVar4->zeroVector).fields.y;
  fVar21 = (pUVar4->zeroVector).fields.z;
  (vertex->fields).x = (pUVar4->zeroVector).fields.x;
  (vertex->fields).y = fVar20;
  (vertex->fields).z = fVar21;
  local_68.fields.x = (__this->fields)._PointerPosition_k__BackingField.fields.x;
  local_68.fields.y = (__this->fields)._PointerPosition_k__BackingField.fields.y;
  uStack_60 = 0;
  iVar9 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar10 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pGVar5 = (__this->fields)._gameManager;
  if (pGVar5 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_05c99884:
    ThrowNullReferenceException();
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar5->fields).SelectedObjects;
  __this_04 = MapEditor_PositionGizmo__GetSelectionMeshFilters(__this,pMVar14);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c99884;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator
            (&local_118,__this_01,
             (MethodInfo_4A0FBD0 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
  local_158.fields._getEnumeratorRetType = local_118.fields._getEnumeratorRetType;
  local_158.fields._36_4_ = local_118.fields._36_4_;
  local_158.fields._current.fields.key = local_118.fields._current.fields.key;
  local_158.fields._current.fields.value = local_118.fields._current.fields.value;
  local_158.fields._dictionary = local_118.fields._dictionary;
  local_158.fields._version = local_118.fields._version;
  local_158.fields._index = local_118.fields._index;
  local_b8 = 0;
  local_b0 = &local_158;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar8 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                      (&local_158,
                       (MethodInfo_4CA10B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext);
    if (bVar8) {
      ThrowNullReferenceException();
    }
  }
  else {
    if (__this_04 != (System_Collections_Generic_HashSet_MeshFilter__o *)0x0) {
      local_128 = (float)(~-(uint)(INFINITY <= screenRadius) & (uint)(screenRadius * screenRadius) |
                         -(uint)(INFINITY <= screenRadius) & 0x7f7fffff);
      fStack_124 = 0.0;
      fStack_120 = 0.0;
      fStack_11c = 0.0;
      fVar20 = (float)iVar9;
      fVar23 = (float)iVar10;
      fVar21 = fVar20;
      if (fVar20 <= fVar23) {
        fVar21 = fVar23;
      }
      local_188 = 3.4028235e+38;
      bVar8 = false;
      local_c0 = vertex;
      while (bVar7 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                               (&local_158,
                                (MethodInfo_4CA10B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext
                               ), pIVar6 = local_158.fields._current.fields.value, bVar7) {
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,local_158.fields._current.fields.value,
                           (MethodInfo_4FB3720 *)
                           MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
        if (!bVar7) {
          if (pIVar6 == (Il2CppObject *)0x0) goto label_05c99878;
          pUVar13 = pIVar6[1].monitor;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar7) {
            if (pUVar13 == (UnityEngine_Object_o *)0x0) goto label_05c99890;
            bVar7 = UnityEngine_GameObject__get_activeInHierarchy
                              ((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
            if (bVar7) {
              pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                  ((UnityEngine_GameObject_o *)pUVar13,
                                   (MethodInfo_353C030 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
              if (pSVar11 == (System_Object_array *)0x0) goto label_05c9989c;
              if (0 < (int)pSVar11->max_length) {
                uVar12 = pSVar11->max_length & 0xffffffff;
                uVar19 = 0;
                do {
                  if (uVar12 <= uVar19) goto label_05c99865;
                  __this_02 = (UnityEngine_MeshFilter_o *)pSVar11->m_Items[uVar19];
                  local_c8 = uVar19;
                  bVar7 = System_Collections_Generic_HashSet_object___Contains
                                    ((System_Collections_Generic_HashSet_object__o *)__this_04,
                                     (Il2CppObject *)__this_02,
                                     (MethodInfo_4FB3720 *)
                                     MethodInfo_System_Collections_Generic_HashSet_MeshFilter_Contains);
                  if (!bVar7) {
                    if (__this_02 == (UnityEngine_MeshFilter_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar13 = (UnityEngine_Object_o *)
                              UnityEngine_MeshFilter__get_sharedMesh(__this_02,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar7 = UnityEngine_Object__op_Equality
                                      (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if (!bVar7) {
                      pMVar14 = (MethodInfo *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)__this_02,
                                           (MethodInfo_34B0830 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar7 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar7) {
                        if (pMVar14 == (MethodInfo *)0x0) {
                          ThrowNullReferenceException();
                        }
                        UnityEngine_Renderer__get_bounds
                                  ((UnityEngine_Bounds_o *)local_48,(UnityEngine_Renderer_o *)pMVar14,
                                   (MethodInfo *)0x0);
                        local_118.fields._current.fields.key = local_38;
                        local_118.fields._dictionary = local_48[0];
                        local_118.fields._8_8_ = local_48[1];
                        if (camera == (Cameras_BaseCamera_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        if (screenRadius < INFINITY) {
                          local_98 = local_38;
                          local_a8 = local_48[0];
                          uStack_a0 = local_48[1];
                          pUVar15 = (UnityEngine_Bounds_Fields *)&local_a8;
                          fVar25 = screenRadius;
                        }
                        else {
                          local_78 = local_38;
                          local_88 = local_48[0];
                          uStack_80 = local_48[1];
                          pUVar15 = (UnityEngine_Bounds_Fields *)&local_88;
                          fVar25 = fVar21;
                        }
                        local_d8._0_4_ = (pUVar15->m_Extents).fields.y;
                        local_d8._4_4_ = (pUVar15->m_Extents).fields.z;
                        local_e8._0_4_ = (pUVar15->m_Center).fields.x;
                        local_e8._4_4_ = (pUVar15->m_Center).fields.y;
                        uStack_e0 = *(undefined8 *)&(pUVar15->m_Center).fields.z;
                        bVar7 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                                          ((UnityEngine_Bounds_o)*pUVar15,(camera->fields).Camera,local_68,
                                           fVar25,pMVar14);
                        if (!bVar7) goto label_05c993a0;
                      }
                      __this_05 = UnityEngine_MeshFilter__get_sharedMesh(__this_02,(MethodInfo *)0x0);
                      if (__this_05 == (UnityEngine_Mesh_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar16 = UnityEngine_Mesh__get_vertices(__this_05,(MethodInfo *)0x0);
                      __this_06 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                      if (pUVar16 == (UnityEngine_Vector3_array *)0x0) {
                        ThrowNullReferenceException();
                      }
                      iVar17 = (int)pUVar16->max_length;
                      uVar12 = pUVar16->max_length & 0xffffffff;
                      if (__this_06 == (UnityEngine_Transform_o *)0x0) {
                        if (0 < iVar17) {
                          if (uVar12 != 0) {
                            ThrowNullReferenceException();
                          }
label_05c998d5:
                          ThrowIndexOutOfRangeException();
                        }
                      }
                      else if (camera == (Cameras_BaseCamera_o *)0x0) {
                        if (0 < iVar17) {
                          if (uVar12 != 0) {
                            UnityEngine_Transform__TransformPoint
                                      (__this_06,(UnityEngine_Vector3_o)pUVar16->m_Items[0].fields,
                                       (MethodInfo *)0x0);
                            ThrowNullReferenceException();
                          }
                          goto label_05c998d5;
                        }
                      }
                      else if (0 < iVar17) {
                        pfVar18 = &pUVar16->m_Items[0].fields.z;
                        uVar19 = 0;
                        local_d0 = pUVar16;
                        do {
                          if (uVar12 <= uVar19) goto label_05c998d5;
                          uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar18 + -2))->x;
                          uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar18 + -2))->y;
                          UVar26.fields.y = (float)uVar2;
                          UVar26.fields.x = (float)uVar1;
                          UVar26.fields.z = *pfVar18;
                          UVar26 = UnityEngine_Transform__TransformPoint(__this_06,UVar26,(MethodInfo *)0x0);
                          __this_03 = (camera->fields).Camera;
                          if (__this_03 == (UnityEngine_Camera_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          local_58._8_4_ = extraout_XMM0_Dc;
                          local_58._0_8_ = UVar26.fields._0_8_;
                          local_58._12_4_ = extraout_XMM0_Dd;
                          UVar27 = UnityEngine_Camera__WorldToScreenPoint_68c0c30
                                             (__this_03,UVar26,(MethodInfo *)0x0);
                          fVar24 = UVar27.fields.z;
                          fVar25 = UVar27.fields.x;
                          fVar22 = UVar27.fields.y;
                          if ((((0.0 < fVar24) && (0.0 <= fVar25)) && (0.0 <= fVar22)) &&
                             ((fVar25 <= fVar20 && (fVar22 <= fVar23)))) {
                            fVar22 = (fVar22 - local_68.fields.y) * (fVar22 - local_68.fields.y);
                            fVar25 = fVar22 + (fVar25 - local_68.fields.x) * (fVar25 - local_68.fields.x);
                            if ((fVar25 + 36.0 < local_128) ||
                               (((fVar25 <= local_128 + 36.0 && (ABS(fVar25 - local_128) <= 36.0)) &&
                                (fVar24 < local_188)))) {
                              (local_c0->fields).x = (float)local_58._0_4_;
                              (local_c0->fields).y = (float)local_58._4_4_;
                              (local_c0->fields).z = UVar26.fields.z;
                              bVar8 = true;
                              local_188 = fVar24;
                              local_128 = fVar25;
                              fStack_124 = fVar22;
                              fStack_120 = fVar22;
                              fStack_11c = fVar22;
                            }
                          }
                          uVar19 = uVar19 + 1;
                          uVar3 = (uint)local_d0->max_length;
                          uVar12 = (ulong)uVar3;
                          pfVar18 = pfVar18 + 3;
                        } while ((long)uVar19 < (long)(int)uVar3);
                      }
                    }
                  }
label_05c993a0:
                  uVar19 = local_c8 + 1;
                  uVar3 = (uint)pSVar11->max_length;
                  uVar12 = (ulong)uVar3;
                } while ((long)uVar19 < (long)(int)uVar3);
              }
            }
          }
        }
      }
      goto label_05c99786;
    }
    while (bVar8 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                             (&local_158,
                              (MethodInfo_4CA10B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext
                             ), pIVar6 = local_158.fields._current.fields.value, bVar8) {
      bVar8 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,local_158.fields._current.fields.value,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
      if (!bVar8) {
        if (pIVar6 == (Il2CppObject *)0x0) {
label_05c99878:
          ThrowNullReferenceException();
        }
        pUVar13 = pIVar6[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar8) {
          if (pUVar13 == (UnityEngine_Object_o *)0x0) {
label_05c99890:
            ThrowNullReferenceException();
          }
          bVar8 = UnityEngine_GameObject__get_activeInHierarchy
                            ((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
          if (bVar8) {
            pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                ((UnityEngine_GameObject_o *)pUVar13,
                                 (MethodInfo_353C030 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
            if (pSVar11 == (System_Object_array *)0x0) {
label_05c9989c:
              ThrowNullReferenceException();
            }
            if (0 < (int)pSVar11->max_length) {
              if ((pSVar11->max_length & 0xffffffff) != 0) {
                ThrowNullReferenceException();
              }
label_05c99865:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
  bVar8 = false;
label_05c99786:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
            (&local_158,
             (MethodInfo_4CA11D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
  return bVar8;
}


// MapEditor.PositionGizmo$$ScreenBoundsIntersectsMouse
// il2cpp: bool MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse (UnityEngine_Bounds_o bounds, UnityEngine_Camera_o* cam, UnityEngine_Vector2_o mouseScreen, float screenRadius, const MethodInfo* method);
// 0x5c99ce0

bool MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
               (UnityEngine_Bounds_o bounds,UnityEngine_Camera_o *cam,UnityEngine_Vector2_o mouseScreen,
               float screenRadius,MethodInfo *method)

{
  bool bVar1;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o position;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  
  if (cam == (UnityEngine_Camera_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar5 = bounds.fields.m_Center.fields.z + bounds.fields.m_Extents.fields.z;
  fVar7 = bounds.fields.m_Center.fields.x + bounds.fields.m_Extents.fields.x;
  fVar8 = bounds.fields.m_Center.fields.y + bounds.fields.m_Extents.fields.y;
  position.fields.y = fVar8;
  position.fields.x = fVar7;
  UVar15.fields.z = bounds.fields.m_Center.fields.z - bounds.fields.m_Extents.fields.z;
  UVar15.fields.x = bounds.fields.m_Center.fields.x - bounds.fields.m_Extents.fields.x;
  UVar15.fields.y = bounds.fields.m_Center.fields.y - bounds.fields.m_Extents.fields.y;
  UVar13.fields.y = UVar15.fields.y;
  UVar13.fields.x = UVar15.fields.x;
  bVar1 = false;
  UVar9 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,UVar15,(MethodInfo *)0x0);
  UVar10.fields.y = UVar15.fields.y;
  UVar10.fields.x = fVar7;
  UVar10.fields.z = UVar15.fields.z;
  UVar10 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,UVar10,(MethodInfo *)0x0);
  UVar11.fields.y = fVar8;
  UVar11.fields.x = UVar15.fields.x;
  UVar11.fields.z = UVar15.fields.z;
  UVar11 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,UVar11,(MethodInfo *)0x0);
  UVar12.fields.z = UVar15.fields.z;
  UVar12.fields.x = fVar7;
  UVar12.fields.y = fVar8;
  UVar12 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,UVar12,(MethodInfo *)0x0);
  UVar13.fields.z = fVar5;
  UVar13 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,UVar13,(MethodInfo *)0x0);
  UVar14.fields.y = UVar15.fields.y;
  UVar14.fields.x = fVar7;
  UVar14.fields.z = fVar5;
  UVar14 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,UVar14,(MethodInfo *)0x0);
  UVar16.fields.y = fVar8;
  UVar16.fields.x = UVar15.fields.x;
  UVar16.fields.z = fVar5;
  UVar15 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,UVar16,(MethodInfo *)0x0);
  position.fields.z = fVar5;
  UVar16 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(cam,position,(MethodInfo *)0x0);
  fVar7 = UVar16.fields.x;
  fVar5 = UVar16.fields.y;
  auVar2._4_4_ = -(uint)(0.0 < UVar16.fields.z);
  auVar2._0_4_ = -(uint)(0.0 < UVar15.fields.z);
  auVar2._8_4_ = -(uint)(0.0 < UVar14.fields.z);
  auVar2._12_4_ = -(uint)(0.0 < UVar13.fields.z);
  auVar3._4_4_ = -(uint)(0.0 < UVar11.fields.z);
  auVar3._0_4_ = -(uint)(0.0 < UVar12.fields.z);
  auVar3._8_4_ = -(uint)(0.0 < UVar10.fields.z);
  auVar3._12_4_ = -(uint)(0.0 < UVar9.fields.z);
  auVar3 = packssdw(auVar2,auVar3);
  if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar3 >> 0x17,0) & 1) != 0) || (SUB161(auVar3 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x27,0) & 1) != 0) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') {
    local_68 = UVar9.fields.x;
    fStack_64 = UVar9.fields.y;
    fVar8 = local_68;
    if (3.4028235e+38 <= local_68) {
      fVar8 = 3.4028235e+38;
    }
    local_78 = UVar10.fields.x;
    fStack_74 = UVar10.fields.y;
    fVar6 = local_78;
    if (fVar8 <= local_78) {
      fVar6 = fVar8;
    }
    local_88 = UVar11.fields.x;
    fStack_84 = UVar11.fields.y;
    fVar8 = local_88;
    if (fVar6 <= local_88) {
      fVar8 = fVar6;
    }
    local_98 = UVar12.fields.x;
    fStack_94 = UVar12.fields.y;
    fVar6 = local_98;
    if (fVar8 <= local_98) {
      fVar6 = fVar8;
    }
    local_a8 = UVar13.fields.x;
    fStack_a4 = UVar13.fields.y;
    fVar8 = local_a8;
    if (fVar6 <= local_a8) {
      fVar8 = fVar6;
    }
    local_b8 = UVar14.fields.x;
    fStack_b4 = UVar14.fields.y;
    fVar6 = local_b8;
    if (fVar8 <= local_b8) {
      fVar6 = fVar8;
    }
    local_c8 = UVar15.fields.x;
    fStack_c4 = UVar15.fields.y;
    fVar8 = local_c8;
    if (fVar6 <= local_c8) {
      fVar8 = fVar6;
    }
    fVar6 = fVar7;
    if (fVar8 <= fVar7) {
      fVar6 = fVar8;
    }
    bVar1 = false;
    local_58 = mouseScreen.fields.x;
    fStack_54 = mouseScreen.fields.y;
    if (fVar6 - screenRadius <= local_58) {
      if (local_68 <= -3.4028235e+38) {
        local_68 = -3.4028235e+38;
      }
      if (local_78 <= local_68) {
        local_78 = local_68;
      }
      if (local_88 <= local_78) {
        local_88 = local_78;
      }
      if (local_98 <= local_88) {
        local_98 = local_88;
      }
      if (local_a8 <= local_98) {
        local_a8 = local_98;
      }
      if (local_b8 <= local_a8) {
        local_b8 = local_a8;
      }
      if (local_c8 <= local_b8) {
        local_c8 = local_b8;
      }
      auVar4._0_8_ = UVar16.fields._0_8_;
      auVar4._8_4_ = extraout_XMM0_Dc;
      auVar4._12_4_ = extraout_XMM0_Dd;
      if (fVar7 <= local_c8) {
        auVar4._0_4_ = local_c8;
      }
      if (local_58 <= auVar4._0_4_ + screenRadius) {
        fVar7 = fStack_64;
        if (3.4028235e+38 <= fStack_64) {
          fVar7 = 3.4028235e+38;
        }
        fVar8 = fStack_74;
        if (fVar7 <= fStack_74) {
          fVar8 = fVar7;
        }
        fVar7 = fStack_84;
        if (fVar8 <= fStack_84) {
          fVar7 = fVar8;
        }
        fVar8 = fStack_94;
        if (fVar7 <= fStack_94) {
          fVar8 = fVar7;
        }
        fVar7 = fStack_a4;
        if (fVar8 <= fStack_a4) {
          fVar7 = fVar8;
        }
        fVar8 = fStack_b4;
        if (fVar7 <= fStack_b4) {
          fVar8 = fVar7;
        }
        fVar7 = fStack_c4;
        if (fVar8 <= fStack_c4) {
          fVar7 = fVar8;
        }
        fVar8 = fVar5;
        if (fVar7 <= fVar5) {
          fVar8 = fVar7;
        }
        if (fVar8 - screenRadius <= fStack_54) {
          if (fStack_64 <= -3.4028235e+38) {
            fStack_64 = -3.4028235e+38;
          }
          if (fStack_74 <= fStack_64) {
            fStack_74 = fStack_64;
          }
          if (fStack_84 <= fStack_74) {
            fStack_84 = fStack_74;
          }
          if (fStack_94 <= fStack_84) {
            fStack_94 = fStack_84;
          }
          if (fStack_a4 <= fStack_94) {
            fStack_a4 = fStack_94;
          }
          if (fStack_b4 <= fStack_a4) {
            fStack_b4 = fStack_a4;
          }
          if (fStack_c4 <= fStack_b4) {
            fStack_c4 = fStack_b4;
          }
          if (fVar5 <= fStack_c4) {
            fVar5 = fStack_c4;
          }
          bVar1 = fStack_54 <= fVar5 + screenRadius;
        }
        else {
          bVar1 = false;
        }
      }
    }
  }
  return bVar1;
}


// MapEditor.PositionGizmo$$GetSelectionMeshFilters
// il2cpp: System_Collections_Generic_HashSet_MeshFilter__o* MapEditor_PositionGizmo__GetSelectionMeshFilters (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c999b0
// eh: try 0x5c99aea..0x5c99c59 -> pad 0x5c99c72 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c99c90..0x5c99c95 -> pad 0x5c99cb4 cleanup
// eh: try 0x5c99cb7..0x5c99cc1 -> pad 0x5c99cc9 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c99ad2: mov r14, rsp
// asm:   0x5c99ad5: lea r12, [rip + 0x15f798c]  ; MethodInfo_System_Collections_Generic_HashSet_MeshFilter_Add
// asm:   0x5c99adc: nop dword ptr [rax]
// asm:   0x5c99b6d: nop dword ptr [rax]
// asm:   0x5c99b9a: jmp 0x5c99ae0
// asm:   0x5c99b9f: lea rbp, [rip + 0x15f4822]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext
// asm:   0x5c99ba6: mov r14, rsp
// asm:   0x5c99ba9: lea r12, [rip + 0x15e1840]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c99c5e: jmp 0x5c99c78
// asm:   0x5c99c60: jmp 0x5c99c78
// asm:   0x5c99c62: jmp 0x5c99c78
// asm:   0x5c99c64: jmp 0x5c99c78
// asm:   0x5c99c66: jmp 0x5c99c78
// asm:   0x5c99c68: jmp 0x5c99c78
// asm:   0x5c99c6a: jmp 0x5c99c78
// asm:   0x5c99c6c: jmp 0x5c99c78
// asm:   0x5c99c6e: jmp 0x5c99c78
// asm:   0x5c99c70: jmp 0x5c99c78
// asm:   0x5c99c72: jmp 0x5c99c78
// asm:   0x5c99c74: jmp 0x5c99c78
// asm:   0x5c99c76: jmp 0x5c99c78
// asm:   0x5c99c78: mov r14, rax
// asm:   0x5c99c7b: cmp edx, 1
// asm:   0x5c99c7e: jne 0x5c99cb7
// asm:   0x5c99c80: mov rdi, r14
// asm:   0x5c99c83: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c99c88: mov rbx, qword ptr [rax]
// asm:   0x5c99c8b: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c99c90: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c99c95: lea rax, [rip + 0x15f4724]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c99c9c: mov rsi, qword ptr [rax]
// asm:   0x5c99c9f: mov rdi, rsp
// asm:   0x5c99ca2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c99ca7: test rbx, rbx
// asm:   0x5c99caa: je 0x5c99c33
// asm:   0x5c99cac: mov rdi, rbx
// asm:   0x5c99caf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c99cb4: mov r14, rax
// asm:   0x5c99cb7: lea rdi, [rsp + 0x20]
// asm:   0x5c99cbc: call 0x2fdabb0  ; il2cpp_runtime_helper_02fdabb0()
// asm:   0x5c99cc1: mov rdi, r14
// asm:   0x5c99cc4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c99cc9: mov rdi, rax
// asm:   0x5c99ccc: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_MeshFilter__o *
MapEditor_PositionGizmo__GetSelectionMeshFilters(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  uint uVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_Enumerator_object__o *pSVar4;
  bool bVar5;
  System_Collections_Generic_HashSet_MeshFilter__o *__this_01;
  System_Collections_Generic_List_MapObject__o *__this_02;
  System_Object_array *pSVar6;
  ulong uVar7;
  ulong uVar8;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547a00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_MeshFilter_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_MeshFilter_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a00 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_MeshFilter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_ctor);
  __this_00 = (__this->fields)._gameManager;
  if ((__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_02 = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                            (__this_00,(MethodInfo *)0x0),
     __this_02 == (System_Collections_Generic_List_MapObject__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_68.fields._current = local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  pSVar4 = &local_68;
  if (__this_01 == (System_Collections_Generic_HashSet_MeshFilter__o *)0x0) {
    while (local_48._8_8_ = pSVar4,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
          pIVar3 = local_68.fields._current, bVar5) {
      if (local_68.fields._current == (Il2CppObject *)0x0) goto label_05c99c45;
      pUVar2 = local_68.fields._current[1].monitor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
      if (!bVar5) {
        if (pIVar3[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_05c99c4a;
        pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (pIVar3[1].monitor,
                            (MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
        if (pSVar6 == (System_Object_array *)0x0) goto label_05c99c4f;
        pSVar4 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
        if (0 < (int)pSVar6->max_length) {
          if ((pSVar6->max_length & 0xffffffff) != 0) {
            ThrowNullReferenceException();
          }
label_05c99c1c:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  else {
    while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
          pIVar3 = local_68.fields._current, bVar5) {
      if (local_68.fields._current == (Il2CppObject *)0x0) {
label_05c99c45:
        ThrowNullReferenceException();
      }
      pUVar2 = local_68.fields._current[1].monitor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        if (pIVar3[1].monitor == (UnityEngine_GameObject_o *)0x0) {
label_05c99c4a:
          ThrowNullReferenceException();
        }
        pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (pIVar3[1].monitor,
                            (MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
        if (pSVar6 == (System_Object_array *)0x0) {
label_05c99c4f:
          ThrowNullReferenceException();
        }
        if (0 < (int)pSVar6->max_length) {
          uVar7 = pSVar6->max_length & 0xffffffff;
          uVar8 = 0;
          do {
            if (uVar7 <= uVar8) goto label_05c99c1c;
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,pSVar6->m_Items[uVar8],
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_Add);
            uVar8 = uVar8 + 1;
            uVar1 = (uint)pSVar6->max_length;
            uVar7 = (ulong)uVar1;
          } while ((long)uVar8 < (long)(int)uVar1);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
  return __this_01;
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, UnityEngine_Transform_o** owner, UnityEngine_Vector3_o* localVertex, const MethodInfo* method);
// 0x5c96740
// eh: try 0x5c96943..0x5c96ceb -> pad 0x5c96d17 (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c96d34..0x5c96d39 -> pad 0x5c96d5e cleanup
// eh: try 0x5c96d61..0x5c96d6e -> pad 0x5c96d76 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9693f: nop 
// asm:   0x5c96c59: movaps xmm0, xmm2
// asm:   0x5c96c5c: jmp 0x5c96ac6
// asm:   0x5c96cd7: test rax, rax
// asm:   0x5c96cda: jne 0x5c96ce1
// asm:   0x5c96ceb: jmp 0x5c96d19
// asm:   0x5c96ced: jmp 0x5c96d19
// asm:   0x5c96cef: jmp 0x5c96d19
// asm:   0x5c96cf1: jmp 0x5c96d19
// asm:   0x5c96cf3: jmp 0x5c96d19
// asm:   0x5c96cf5: jmp 0x5c96d19
// asm:   0x5c96cf7: jmp 0x5c96d19
// asm:   0x5c96cf9: jmp 0x5c96d19
// asm:   0x5c96cfb: jmp 0x5c96d19
// asm:   0x5c96cfd: jmp 0x5c96d19
// asm:   0x5c96cff: jmp 0x5c96d19
// asm:   0x5c96d01: jmp 0x5c96d19
// asm:   0x5c96d03: jmp 0x5c96d19
// asm:   0x5c96d05: jmp 0x5c96d19
// asm:   0x5c96d07: jmp 0x5c96d19
// asm:   0x5c96d09: jmp 0x5c96d19
// asm:   0x5c96d0b: jmp 0x5c96d19
// asm:   0x5c96d0d: jmp 0x5c96d19
// asm:   0x5c96d0f: jmp 0x5c96d19
// asm:   0x5c96d11: jmp 0x5c96d19
// asm:   0x5c96d13: jmp 0x5c96d19
// asm:   0x5c96d15: jmp 0x5c96d19
// asm:   0x5c96d17: jmp 0x5c96d19
// asm:   0x5c96d19: mov rbx, rax
// asm:   0x5c96d1c: cmp edx, 1
// asm:   0x5c96d1f: jne 0x5c96d61
// asm:   0x5c96d21: mov rdi, rbx
// asm:   0x5c96d24: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c96d29: mov rbx, qword ptr [rax]
// asm:   0x5c96d2c: mov qword ptr [rsp + 0xb0], rbx
// asm:   0x5c96d34: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c96d39: lea rax, [rip + 0x15f77d0]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose
// asm:   0x5c96d40: mov rsi, qword ptr [rax]
// asm:   0x5c96d43: lea rdi, [rsp + 0x60]
// asm:   0x5c96d48: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c96d4d: test rbx, rbx
// asm:   0x5c96d50: je 0x5c96c9b
// asm:   0x5c96d56: mov rdi, rbx
// asm:   0x5c96d59: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c96d5e: mov rbx, rax
// asm:   0x5c96d61: lea rdi, [rsp + 0xb0]
// asm:   0x5c96d69: call 0x2fdabe0  ; il2cpp_runtime_helper_02fdabe0()
// asm:   0x5c96d6e: mov rdi, rbx
// asm:   0x5c96d71: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c96d76: mov rdi, rax
// asm:   0x5c96d79: call 0x2ab61e0  ; __clang_call_terminate()

bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
               UnityEngine_Transform_o **owner,UnityEngine_Vector3_o *localVertex,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Bounds_o bounds;
  Il2CppObject *__this_01;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t iVar8;
  System_Collections_Generic_HashSet_MeshFilter__o *__this_02;
  UnityEngine_Object_o *x;
  MethodInfo *pMVar9;
  UnityEngine_Mesh_o *__this_03;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_Transform_o *__this_04;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  float local_104;
  float *local_f8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_c8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_a8;
  UnityEngine_Vector3_o *local_90;
  UnityEngine_Vector3_o *local_88;
  UnityEngine_Transform_o **local_80;
  undefined8 local_78;
  System_Collections_Generic_HashSet_Enumerator_T__o *local_70;
  UnityEngine_Vector2_o local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  System_Collections_Generic_HashSet_T__o *local_48 [2];
  UnityEngine_MeshFilter_o *local_38;
  
  if (Il2CppMethodInitialized_07547a01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MeshFilter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a01 = '\x01';
  }
  local_c8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_c8.fields._index = 0;
  local_c8.fields._version = 0;
  local_c8.fields._current = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar14 = (pUVar4->zeroVector).fields.y;
  fVar16 = (pUVar4->zeroVector).fields.z;
  (vertex->fields).x = (pUVar4->zeroVector).fields.x;
  (vertex->fields).y = fVar14;
  (vertex->fields).z = fVar16;
  *owner = (UnityEngine_Transform_o *)0x0;
  pMVar9 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(owner);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar14 = (pUVar4->zeroVector).fields.y;
  fVar16 = (pUVar4->zeroVector).fields.z;
  (localVertex->fields).x = (pUVar4->zeroVector).fields.x;
  (localVertex->fields).y = fVar14;
  (localVertex->fields).z = fVar16;
  local_68.fields.x = (__this->fields)._PointerPosition_k__BackingField.fields.x;
  local_68.fields.y = (__this->fields)._PointerPosition_k__BackingField.fields.y;
  uStack_60 = 0;
  local_90 = localVertex;
  local_88 = vertex;
  local_80 = owner;
  iVar7 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar8 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this_02 = MapEditor_PositionGizmo__GetSelectionMeshFilters(__this,pMVar9);
  if (__this_02 == (System_Collections_Generic_HashSet_MeshFilter__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar14 = (float)iVar7;
  fVar15 = (float)iVar8;
  System_Collections_Generic_HashSet_object___GetEnumerator
            (&local_a8,(System_Collections_Generic_HashSet_object__o *)__this_02,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_GetEnumerator);
  local_c8.fields._current = local_a8.fields._current;
  local_c8.fields._set = local_a8.fields._set;
  local_c8.fields._index = local_a8.fields._index;
  local_c8.fields._version = local_a8.fields._version;
  local_78 = 0;
  fVar16 = fVar14;
  if (fVar14 <= fVar15) {
    fVar16 = fVar15;
  }
  bVar6 = false;
  local_104 = 3.4028235e+38;
  fVar17 = 3.4028235e+38;
  local_70 = &local_c8;
label_05c96940:
  do {
    bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (&local_c8,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_MoveNext);
    __this_01 = local_c8.fields._current;
    if (!bVar5) {
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (&local_c8,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose);
      return bVar6;
    }
    if ((UnityEngine_MeshFilter_o *)local_c8.fields._current == (UnityEngine_MeshFilter_o *)0x0) {
      ThrowNullReferenceException();
    }
    x = (UnityEngine_Object_o *)
        UnityEngine_MeshFilter__get_sharedMesh
                  ((UnityEngine_MeshFilter_o *)local_c8.fields._current,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  } while (bVar5);
  pMVar9 = (MethodInfo *)
           UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this_01,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (pMVar9 == (MethodInfo *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Renderer__get_bounds
              ((UnityEngine_Bounds_o *)local_48,(UnityEngine_Renderer_o *)pMVar9,(MethodInfo *)0x0);
    local_a8.fields._current = (Il2CppObject *)local_38;
    local_a8.fields._set = local_48[0];
    local_a8.fields._8_8_ = local_48[1];
    if (camera == (Cameras_BaseCamera_o *)0x0) {
      ThrowNullReferenceException();
    }
    bounds.fields._8_8_ = local_48[1];
    bounds.fields.m_Center.fields._0_8_ = local_48[0];
    bounds.fields.m_Extents.fields._4_8_ = local_38;
    bVar5 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                      (bounds,(camera->fields).Camera,local_68,fVar16,pMVar9);
    if (!bVar5) goto label_05c96940;
  }
  __this_03 = UnityEngine_MeshFilter__get_sharedMesh((UnityEngine_MeshFilter_o *)__this_01,(MethodInfo *)0x0);
  if (__this_03 == (UnityEngine_Mesh_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar10 = UnityEngine_Mesh__get_vertices(__this_03,(MethodInfo *)0x0);
  __this_04 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar10 == (UnityEngine_Vector3_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar12 = (int)pUVar10->max_length;
  uVar11 = pUVar10->max_length & 0xffffffff;
  if (__this_04 == (UnityEngine_Transform_o *)0x0) {
    if (0 < iVar12) {
      if (uVar11 != 0) {
        ThrowNullReferenceException();
      }
label_05c96cdc:
      ThrowIndexOutOfRangeException();
    }
  }
  else if (camera == (Cameras_BaseCamera_o *)0x0) {
    if (0 < iVar12) {
      if (uVar11 != 0) {
        UnityEngine_Transform__TransformPoint
                  (__this_04,(UnityEngine_Vector3_o)pUVar10->m_Items[0].fields,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      goto label_05c96cdc;
    }
  }
  else if (0 < iVar12) {
    local_f8 = &pUVar10->m_Items[0].fields.z;
    uVar13 = 0;
    do {
      if (uVar11 <= uVar13) goto label_05c96cdc;
      uVar1 = ((UnityEngine_Vector3_Fields *)(local_f8 + -2))->x;
      uVar2 = ((UnityEngine_Vector3_Fields *)(local_f8 + -2))->y;
      UVar21.fields.y = (float)uVar2;
      UVar21.fields.x = (float)uVar1;
      UVar21.fields.z = *local_f8;
      UVar21 = UnityEngine_Transform__TransformPoint(__this_04,UVar21,(MethodInfo *)0x0);
      __this_00 = (camera->fields).Camera;
      if (__this_00 == (UnityEngine_Camera_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_58._8_4_ = extraout_XMM0_Dc;
      local_58._0_8_ = UVar21.fields._0_8_;
      local_58._12_4_ = extraout_XMM0_Dd;
      UVar22 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(__this_00,UVar21,(MethodInfo *)0x0);
      fVar19 = UVar22.fields.z;
      fVar20 = UVar22.fields.x;
      fVar18 = UVar22.fields.y;
      if ((((0.0 < fVar19) && (0.0 <= fVar20)) && (0.0 <= fVar18)) &&
         ((fVar20 <= fVar14 && (fVar18 <= fVar15)))) {
        fVar20 = (fVar18 - local_68.fields.y) * (fVar18 - local_68.fields.y) +
                 (fVar20 - local_68.fields.x) * (fVar20 - local_68.fields.x);
        if ((fVar20 + 36.0 < fVar17) || ((ABS(fVar20 - fVar17) <= 36.0 && (fVar19 < local_104)))) {
          (local_88->fields).x = (float)local_58._0_4_;
          (local_88->fields).y = (float)local_58._4_4_;
          (local_88->fields).z = UVar21.fields.z;
          *local_80 = __this_04;
          Il2CppCodeGenWriteBarrier(local_80);
          if ((uint)pUVar10->max_length <= uVar13) {
            ThrowIndexOutOfRangeException();
          }
          fVar18 = ((UnityEngine_Vector3_Fields *)(local_f8 + -2))->y;
          fVar17 = *local_f8;
          (local_90->fields).x = ((UnityEngine_Vector3_Fields *)(local_f8 + -2))->x;
          (local_90->fields).y = fVar18;
          (local_90->fields).z = fVar17;
          bVar6 = true;
          fVar17 = fVar20;
          local_104 = fVar19;
        }
      }
      uVar13 = uVar13 + 1;
      uVar3 = (uint)pUVar10->max_length;
      uVar11 = (ulong)uVar3;
      local_f8 = local_f8 + 3;
    } while ((long)uVar13 < (long)(int)uVar3);
  }
  goto label_05c96940;
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x5c99010

bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection_5b99010
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_R9;
  UnityEngine_Transform_o *pUStack_18;
  UnityEngine_Vector3_o UStack_10;
  
  pUStack_18 = (UnityEngine_Transform_o *)0x0;
  bVar1 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                    (__this,camera,vertex,&pUStack_18,&UStack_10,in_R9);
  return bVar1;
}


// MapEditor.PositionGizmo$$MoveSelectedObjects
// il2cpp: void MapEditor_PositionGizmo__MoveSelectedObjects (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x5c98d00
// eh: try 0x5c98ef4..0x5c98f97 -> pad 0x5c98fac (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c98fc4..0x5c98fc9 -> pad 0x5c98fea cleanup
// eh: try 0x5c98fed..0x5c98ff7 -> pad 0x5c98fff catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c98dd8: jmp 0x5c98df3
// asm:   0x5c98eee: nop 
// asm:   0x5c98f9c: jmp 0x5c98fac
// asm:   0x5c98f9e: jmp 0x5c98fac
// asm:   0x5c98fa0: jmp 0x5c98fac
// asm:   0x5c98fa2: jmp 0x5c98fac
// asm:   0x5c98fa4: jmp 0x5c98fac
// asm:   0x5c98fa6: jmp 0x5c98fac
// asm:   0x5c98fa8: jmp 0x5c98fac
// asm:   0x5c98faa: jmp 0x5c98fac
// asm:   0x5c98fac: mov rbx, rax
// asm:   0x5c98faf: cmp edx, 1
// asm:   0x5c98fb2: jne 0x5c98fed
// asm:   0x5c98fb4: mov rdi, rbx
// asm:   0x5c98fb7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c98fbc: mov rbx, qword ptr [rax]
// asm:   0x5c98fbf: mov qword ptr [rsp + 8], rbx
// asm:   0x5c98fc4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c98fc9: lea rax, [rip + 0x15f53d8]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5c98fd0: mov rsi, qword ptr [rax]
// asm:   0x5c98fd3: lea rdi, [rsp + 0x20]
// asm:   0x5c98fd8: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c98fdd: test rbx, rbx
// asm:   0x5c98fe0: je 0x5c98f75
// asm:   0x5c98fe2: mov rdi, rbx
// asm:   0x5c98fe5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c98fea: mov rbx, rax
// asm:   0x5c98fed: lea rdi, [rsp + 8]
// asm:   0x5c98ff2: call 0x2fdac10  ; il2cpp_runtime_helper_02fdac10()
// asm:   0x5c98ff7: mov rdi, rbx
// asm:   0x5c98ffa: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c98fff: mov rdi, rax
// asm:   0x5c99002: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_PositionGizmo__MoveSelectedObjects
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o frameDelta,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar3;
  MapEditor_PositionGizmo___c_StaticFields *pMVar4;
  System_Func_MapObject__int__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  MethodInfo *method_00;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o value;
  undefined1 local_70 [16];
  Map_MapObject_o *local_60;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined1 local_38 [16];
  
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = frameDelta.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_MapEditor_PositionGizmo_c_MoveSelectedObjects_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_PositionGizmo_c);
    Il2CppMethodInitialized_07547a02 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    source = (pGVar1->fields).SelectedObjects;
    if ((TypeInfo_MapEditor_PositionGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_PositionGizmo_c);
      pMVar4 = TypeInfo_MapEditor_PositionGizmo_c->static_fields;
      __this_02 = pMVar4->__9__48_0;
    }
    else {
      pMVar4 = TypeInfo_MapEditor_PositionGizmo_c->static_fields;
      __this_02 = pMVar4->__9__48_0;
    }
    if (__this_02 == (System_Func_MapObject__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_MapEditor_PositionGizmo_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_PositionGizmo_c);
        pMVar4 = TypeInfo_MapEditor_PositionGizmo_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pMVar4->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                ((System_Func_object__int__o *)__this_02,pIVar2,
                 (intptr_t)MethodInfo_MapEditor_PositionGizmo_c_MoveSelectedObjects_b__48_0,
                 (MethodInfo_4F198F0 *)0x0);
      pMVar4 = TypeInfo_MapEditor_PositionGizmo_c->static_fields;
      pMVar4->__9__48_0 = __this_02;
      Il2CppCodeGenWriteBarrier(&pMVar4->__9__48_0);
    }
    collection = System_Linq_Enumerable__Select_object__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_4fa7660
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_58.fields._current = (Il2CppObject *)local_60;
      local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)local_70._0_8_;
      local_58.fields._index = local_70._8_4_;
      local_58.fields._version = local_70._12_4_;
      local_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_70._8_8_ = &local_58;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_58,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          pIVar2 = local_58.fields._current;
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&local_58,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          pGVar1 = (__this->fields)._gameManager;
          if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
            ThrowNullReferenceException();
          }
        } while (((pGVar1->fields).HierarchyTreeViewEnabled != false) &&
                (bVar3 = MapEditor_BaseGizmo__HasSelectedAncestor
                                   ((Map_MapObject_o *)local_58.fields._current,__this_03,method_00), bVar3));
        if ((Map_MapObject_o *)pIVar2 == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = ((Map_MapObject_Fields *)((long)pIVar2 + 0x10))->GameObject;
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
        __this_04 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_04 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar5 = UnityEngine_Transform__get_position(__this_04,(MethodInfo *)0x0);
        value.fields.x = UVar5.fields.x + (float)local_38._0_4_;
        value.fields.y = UVar5.fields.y + (float)local_38._4_4_;
        value.fields.z = UVar5.fields.z + frameDelta.fields.z;
        UnityEngine_Transform__set_position(__this_04,value,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$ResetCenter
// il2cpp: void MapEditor_PositionGizmo__ResetCenter (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c94d40
// eh: try 0x5c94e74..0x5c94faf -> pad 0x5c94fcc (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c94fe4..0x5c94fe9 -> pad 0x5c9500e cleanup
// eh: try 0x5c95011..0x5c9501b -> pad 0x5c95023 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c94fb4: jmp 0x5c94fcc
// asm:   0x5c94fb6: jmp 0x5c94fcc
// asm:   0x5c94fb8: jmp 0x5c94fcc
// asm:   0x5c94fba: jmp 0x5c94fcc
// asm:   0x5c94fbc: jmp 0x5c94fcc
// asm:   0x5c94fbe: jmp 0x5c94fcc
// asm:   0x5c94fc0: jmp 0x5c94fcc
// asm:   0x5c94fc2: jmp 0x5c94fcc
// asm:   0x5c94fc4: jmp 0x5c94fcc
// asm:   0x5c94fc6: jmp 0x5c94fcc
// asm:   0x5c94fc8: jmp 0x5c94fcc
// asm:   0x5c94fca: jmp 0x5c94fcc
// asm:   0x5c94fcc: mov rbx, rax
// asm:   0x5c94fcf: cmp edx, 1
// asm:   0x5c94fd2: jne 0x5c95011
// asm:   0x5c94fd4: mov rdi, rbx
// asm:   0x5c94fd7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c94fdc: mov rbx, qword ptr [rax]
// asm:   0x5c94fdf: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5c94fe4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c94fe9: lea rax, [rip + 0x15f93b8]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5c94ff0: mov rsi, qword ptr [rax]
// asm:   0x5c94ff3: lea rdi, [rsp + 0x10]
// asm:   0x5c94ff8: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c94ffd: test rbx, rbx
// asm:   0x5c95000: je 0x5c94f40
// asm:   0x5c95006: mov rdi, rbx
// asm:   0x5c95009: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c9500e: mov rbx, rax
// asm:   0x5c95011: lea rdi, [rsp + 0x28]
// asm:   0x5c95016: call 0x2fdac40  ; il2cpp_runtime_helper_02fdac40()
// asm:   0x5c9501b: mov rdi, rbx
// asm:   0x5c9501e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c95023: mov rdi, rax
// asm:   0x5c95026: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_PositionGizmo__ResetCenter(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  undefined1 auVar3 [16];
  Il2CppObject *pIVar4;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  float fVar8;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar9;
  float local_6c;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_07547a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    Il2CppMethodInitialized_07547a03 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pUVar6 = (__this->fields)._transform;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation
              (pUVar6,(UnityEngine_Quaternion_o)
                      *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo *)0x0);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_58 = local_40;
      local_68 = (undefined1  [8])local_50._0_8_;
      pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_50._8_8_;
      local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_6c = 0.0;
      local_38 = 0.0;
      fStack_34 = 0.0;
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
      while( true ) {
        bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
        pIVar4 = local_58;
        if (!bVar5) break;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_58[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar6 = UnityEngine_GameObject__get_transform(local_58[1].monitor,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        local_38 = local_38 + UVar9.fields.x;
        fStack_34 = fStack_34 + UVar9.fields.y;
        fStack_30 = fStack_30 + extraout_XMM0_Dc;
        fStack_2c = fStack_2c + extraout_XMM0_Dd;
        local_6c = local_6c + UVar9.fields.z;
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pGVar1->fields).CurrentGizmoMode == 1) {
          if (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (__this->fields)._transform;
          __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          value = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Transform__set_rotation(pUVar6,value,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
      pGVar1 = (__this->fields)._gameManager;
      if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).SelectedObjects,
          pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
         (pUVar6 = (__this->fields)._transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        fVar8 = (float)(pSVar2->fields)._count;
        UVar9.fields.z = local_6c / fVar8;
        auVar3._4_4_ = fStack_34;
        auVar3._0_4_ = local_38;
        auVar3._8_4_ = fStack_30;
        auVar3._12_4_ = fStack_2c;
        auVar7._4_4_ = fVar8;
        auVar7._0_4_ = fVar8;
        auVar7._8_4_ = fVar8;
        auVar7._12_4_ = fVar8;
        auVar7 = divps(auVar3,auVar7);
        UVar9.fields._0_8_ = auVar7._0_8_;
        UnityEngine_Transform__set_position(pUVar6,UVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$ResetColors
// il2cpp: void MapEditor_PositionGizmo__ResetColors (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c93fe0

void MapEditor_PositionGizmo__ResetColors(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Object_c **__this_00;
  MapEditor_PositionGizmo_o *pMVar8;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  
  __this_00 = (UnityEngine_Object_c **)__this;
  if (g_data_07547a04 == '\0') {
    __this_00 = &TypeInfo_UnityEngine_Object;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    g_data_07547a04 = '\x01';
    in_RDX = extraout_RDX;
  }
  MapEditor_PositionGizmo__SetLineColor
            ((MapEditor_PositionGizmo_o *)__this_00,(__this->fields)._lineX,
             (UnityEngine_Color_o)(__this->fields).LineXColor.fields,in_RDX);
  MapEditor_PositionGizmo__SetLineColor
            ((MapEditor_PositionGizmo_o *)__this_00,(__this->fields)._lineY,
             (UnityEngine_Color_o)(__this->fields).LineYColor.fields,method_00);
  MapEditor_PositionGizmo__SetLineColor
            ((MapEditor_PositionGizmo_o *)__this_00,(__this->fields)._lineZ,
             (UnityEngine_Color_o)(__this->fields).LineZColor.fields,method_01);
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeXY;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    uVar1 = (__this->fields).LineZColor.fields.r;
    uVar4 = (__this->fields).LineZColor.fields.g;
    color.fields.g = (float)uVar4;
    color.fields.r = (float)uVar1;
    color.fields.a = 0.4;
    color.fields.b = (__this->fields).LineZColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeXY,color,method_02);
  }
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeYZ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    uVar2 = (__this->fields).LineXColor.fields.r;
    uVar5 = (__this->fields).LineXColor.fields.g;
    color_00.fields.g = (float)uVar5;
    color_00.fields.r = (float)uVar2;
    color_00.fields.a = 0.4;
    color_00.fields.b = (__this->fields).LineXColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeYZ,color_00,method_03);
  }
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeXZ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
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
// 0x5c96d80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c96dde: nop 

void MapEditor_PositionGizmo__SetLineColor
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o color,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Material_o *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_07547a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_07547a05 = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)line,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar4];
          if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_05c96e48;
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_05c96e48;
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_05c96e48;
          UnityEngine_Material__set_renderQueue(pUVar3,0x1267,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
label_05c96e48:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$.ctor
// il2cpp: void MapEditor_PositionGizmo___ctor (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x5c9a070

void MapEditor_PositionGizmo___ctor(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  (__this->fields).SelectedColor.fields.r = 1.0;
  (__this->fields).SelectedColor.fields.g = 1.0;
  (__this->fields).SelectedColor.fields.b = 1.0;
  (__this->fields).SelectedColor.fields.a = 1.0;
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
  (__this->fields).LineZColor.fields.b = 1.0;
  (__this->fields).LineZColor.fields.a = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


