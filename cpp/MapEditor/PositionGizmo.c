// Type: MapEditor.PositionGizmo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/PositionGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs
// --------------------------------

// MapEditor.PositionGizmo.<>c$$.cctor
// il2cpp: void MapEditor_PositionGizmo___c___cctor (const MethodInfo* method);
// 0x1822017a0

void MapEditor_PositionGizmo___c___cctor(MethodInfo *method)

{
  MapEditor_PositionGizmo___c_o *__this;
  
  if (Il2CppMethodInitialized_18434703e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_PositionGizmo_c);
    Il2CppMethodInitialized_18434703e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_PositionGizmo_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9,__this);
  return;
}


// MapEditor.PositionGizmo.<>c$$.ctor
// il2cpp: void MapEditor_PositionGizmo___c___ctor (MapEditor_PositionGizmo___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
MapEditor_PositionGizmo___c___ctor(MapEditor_PositionGizmo___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.PositionGizmo.<>c$$<MoveSelectedObjects>b__48_0
// il2cpp: int32_t MapEditor_PositionGizmo___c___MoveSelectedObjects_b__48_0 (MapEditor_PositionGizmo___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
MapEditor_PositionGizmo___c___MoveSelectedObjects_b__48_0(MapEditor_PositionGizmo___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$Create
// il2cpp: MapEditor_PositionGizmo_o* MapEditor_PositionGizmo__Create (const MethodInfo* method);
// 0x1821f4730

MapEditor_PositionGizmo_o * MapEditor_PositionGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_PositionGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_184347028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_PositionGizmo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmos/PositionGizmo");
    Il2CppMethodInitialized_184347028 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/PositionGizmo",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_PositionGizmo);
    UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
    return pMVar1;
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$IsActive
// il2cpp: bool MapEditor_PositionGizmo__IsActive (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x1821f5de0

bool MapEditor_PositionGizmo__IsActive(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347029 = '\x01';
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
// 0x1821f3680

void MapEditor_PositionGizmo__Awake(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434702a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineZ");
    il2cpp_codegen_initialize_runtime_metadata(&"LineY");
    il2cpp_codegen_initialize_runtime_metadata(&"LineX");
    Il2CppMethodInitialized_18434702a = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lineY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineZ",(MethodInfo *)0x0);
        (__this->fields)._lineZ = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._lineZ,pUVar1);
        if (Il2CppMethodInitialized_18434702b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"PlaneXZ");
          il2cpp_codegen_initialize_runtime_metadata(&"PlaneXY");
          il2cpp_codegen_initialize_runtime_metadata(&"PlaneYZ");
          Il2CppMethodInitialized_18434702b = '\x01';
        }
        local_18.r = (__this->fields).LineZColor.fields.r;
        local_18.g = (__this->fields).LineZColor.fields.g;
        local_18.b = (__this->fields).LineZColor.fields.b;
        local_18.a = (__this->fields).LineZColor.fields.a;
        local_28.fields.x = 1.0;
        local_28.fields.y = 1.0;
        local_28.fields.z = 0.0;
        pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                           (__this,"PlaneXY",&local_28,(UnityEngine_Color_o *)&local_18,
                            (MethodInfo *)0x0);
        (__this->fields)._planeXY = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._planeXY,pUVar1);
        local_18.r = (__this->fields).LineXColor.fields.r;
        local_18.g = (__this->fields).LineXColor.fields.g;
        local_18.b = (__this->fields).LineXColor.fields.b;
        local_18.a = (__this->fields).LineXColor.fields.a;
        local_28.fields.x = 0.0;
        local_28.fields.y = 1.0;
        local_28.fields.z = 1.0;
        pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                           (__this,"PlaneYZ",&local_28,(UnityEngine_Color_o *)&local_18,
                            (MethodInfo *)0x0);
        (__this->fields)._planeYZ = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._planeYZ,pUVar1);
        local_18.r = (__this->fields).LineYColor.fields.r;
        local_18.g = (__this->fields).LineYColor.fields.g;
        local_18.b = (__this->fields).LineYColor.fields.b;
        local_18.a = (__this->fields).LineYColor.fields.a;
        local_28.fields.x = 1.0;
        local_28.fields.y = 0.0;
        local_28.fields.z = 1.0;
        pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                           (__this,"PlaneXZ",&local_28,(UnityEngine_Color_o *)&local_18,
                            (MethodInfo *)0x0);
        (__this->fields)._planeXZ = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._planeXZ,pUVar1);
        pUVar1 = MapEditor_PositionGizmo__CreateCenterSquare(__this,(MethodInfo *)0x0);
        (__this->fields)._centerSquare = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._centerSquare,pUVar1);
        pUVar1 = (__this->fields)._centerSquare;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
            MapEditor_PositionGizmo__ResetColors(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$CreatePlaneHandles
// il2cpp: void MapEditor_PositionGizmo__CreatePlaneHandles (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x1821f45b0

void MapEditor_PositionGizmo__CreatePlaneHandles(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434702b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PlaneXZ");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaneXY");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaneYZ");
    Il2CppMethodInitialized_18434702b = '\x01';
  }
  local_18.r = (__this->fields).LineZColor.fields.r;
  local_18.g = (__this->fields).LineZColor.fields.g;
  local_18.b = (__this->fields).LineZColor.fields.b;
  local_18.a = (__this->fields).LineZColor.fields.a;
  local_28.fields.x = 1.0;
  local_28.fields.y = 1.0;
  local_28.fields.z = 0.0;
  pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneXY",&local_28,(UnityEngine_Color_o *)&local_18,
                      (MethodInfo *)0x0);
  (__this->fields)._planeXY = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planeXY,pUVar1);
  local_18.r = (__this->fields).LineXColor.fields.r;
  local_18.g = (__this->fields).LineXColor.fields.g;
  local_18.b = (__this->fields).LineXColor.fields.b;
  local_18.a = (__this->fields).LineXColor.fields.a;
  local_28.fields.x = 0.0;
  local_28.fields.y = 1.0;
  local_28.fields.z = 1.0;
  pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneYZ",&local_28,(UnityEngine_Color_o *)&local_18,
                      (MethodInfo *)0x0);
  (__this->fields)._planeYZ = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planeYZ,pUVar1);
  local_18.r = (__this->fields).LineYColor.fields.r;
  local_18.g = (__this->fields).LineYColor.fields.g;
  local_18.b = (__this->fields).LineYColor.fields.b;
  local_18.a = (__this->fields).LineYColor.fields.a;
  local_28.fields.x = 1.0;
  local_28.fields.y = 0.0;
  local_28.fields.z = 1.0;
  pUVar1 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneXZ",&local_28,(UnityEngine_Color_o *)&local_18,
                      (MethodInfo *)0x0);
  (__this->fields)._planeXZ = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planeXZ,pUVar1);
  pUVar1 = MapEditor_PositionGizmo__CreateCenterSquare(__this,(MethodInfo *)0x0);
  (__this->fields)._centerSquare = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._centerSquare,pUVar1);
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
// 0x1821f3f20

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreateCenterSquare(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_MeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_03;
  UnityEngine_BoxCollider_o *__this_04;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_18434702c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"CenterSquare");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor/Gizmo");
    Il2CppMethodInitialized_18434702c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this_00,"CenterSquare",(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__set_layer
              (__this_00,TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,(__this->fields)._transform,false,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar1 = (pUVar5->zeroVector).fields.x;
        uVar3 = (pUVar5->zeroVector).fields.y;
        local_18.fields.b = (pUVar5->zeroVector).fields.z;
        local_18.fields.r = (float)uVar1;
        local_18.fields.g = (float)uVar3;
        UnityEngine_Transform__set_localPosition(pUVar6,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter)
        ;
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
        local_18.fields.r = 1.0;
        local_18.fields.g = 1.0;
        local_18.fields.b = 0.0;
        value = MapEditor_PositionGizmo__BuildQuadMesh
                          (__this,(UnityEngine_Vector3_o *)&local_18,6.0,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_sharedMesh(__this_01,value,(MethodInfo *)0x0);
          shader = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor(__this_03,shader,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            local_18.fields.r = 1.0;
            local_18.fields.g = 1.0;
            local_18.fields.b = 1.0;
            local_18.fields.a = 0.5;
            UnityEngine_Material__set_color(__this_03,&local_18,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(__this_03,0x1268,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_MeshRenderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this_02,__this_03,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode
                        ((UnityEngine_Renderer_o *)__this_02,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows
                        ((UnityEngine_Renderer_o *)__this_02,false,(MethodInfo *)0x0);
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
              if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
                local_18.fields.r = 6.0;
                local_18.fields.g = 6.0;
                local_18.fields.b = 0.5;
                UnityEngine_BoxCollider__set_size
                          (__this_04,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433dbea == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433dbea = '\x01';
                }
                pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar2 = (pUVar5->zeroVector).fields.x;
                uVar4 = (pUVar5->zeroVector).fields.y;
                local_18.fields.b = (pUVar5->zeroVector).fields.z;
                local_18.fields.r = (float)uVar2;
                local_18.fields.g = (float)uVar4;
                UnityEngine_BoxCollider__set_center
                          (__this_04,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
                pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                return pUVar6;
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
// 0x1821f4240

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreatePlaneHandle
          (MapEditor_PositionGizmo_o *__this,System_String_o *name,UnityEngine_Vector3_o *axisMask,
          UnityEngine_Color_o *color,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_MeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_03;
  UnityEngine_BoxCollider_o *__this_04;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_18434702d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor/Gizmo");
    Il2CppMethodInitialized_18434702d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__set_layer
              (__this_00,TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,(__this->fields)._transform,false,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        local_38[0].g = (axisMask->fields).y * 8.0;
        local_38[0].r = (axisMask->fields).x * 8.0;
        local_38[0].b = (axisMask->fields).z * 8.0;
        UnityEngine_Transform__set_localPosition(pUVar2,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter)
        ;
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
        local_38[0].b = (axisMask->fields).z;
        local_38[0].r = (axisMask->fields).x;
        local_38[0].g = (axisMask->fields).y;
        fVar5 = 6.0;
        value = MapEditor_PositionGizmo__BuildQuadMesh
                          (__this,(UnityEngine_Vector3_o *)local_38,6.0,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_sharedMesh(__this_01,value,(MethodInfo *)0x0);
          shader = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor(__this_03,shader,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Material_o *)0x0) {
            local_38[0].r = (color->fields).r;
            local_38[0].g = (color->fields).g;
            local_38[0].b = (color->fields).b;
            local_38[0].a = 0.4;
            UnityEngine_Material__set_color(__this_03,(UnityEngine_Color_o *)local_38,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(__this_03,0x1267,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_MeshRenderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this_02,__this_03,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode
                        ((UnityEngine_Renderer_o *)__this_02,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows
                        ((UnityEngine_Renderer_o *)__this_02,false,(MethodInfo *)0x0);
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
              if ((axisMask->fields).x <= 0.0) {
                fVar4 = 0.5;
              }
              else {
                fVar4 = 6.0;
              }
              if ((axisMask->fields).y <= 0.0) {
                fVar3 = 0.5;
              }
              else {
                fVar3 = 6.0;
              }
              if ((axisMask->fields).z <= 0.0) {
                fVar5 = 0.5;
              }
              if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
                local_38[0].g = fVar3;
                local_38[0].r = fVar4;
                local_38[0].b = fVar5;
                UnityEngine_BoxCollider__set_size
                          (__this_04,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433dbea == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433dbea = '\x01';
                }
                pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
                local_38[0].r = (pUVar1->zeroVector).fields.x;
                local_38[0].g = (pUVar1->zeroVector).fields.y;
                local_38[0].b = (pUVar1->zeroVector).fields.z;
                UnityEngine_BoxCollider__set_center
                          (__this_04,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
                pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
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
// 0x1821f38d0

UnityEngine_Mesh_o *
MapEditor_PositionGizmo__BuildQuadMesh
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o *axisMask,float size,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  undefined1 auVar2 [12];
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector3_array *value_00;
  UnityEngine_Mesh_o *__this_00;
  System_Int32_array *value_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_b8 [8];
  float fStack_b0;
  undefined4 uStack_ac;
  
  if (Il2CppMethodInitialized_18434702e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94F557CF5A
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_18434702e = '\x01';
  }
  auVar2 = stack0xffffffffffffff4c;
  if (((axisMask->fields).x <= 0.0) || ((axisMask->fields).y <= 0.0)) {
    if (((axisMask->fields).y <= 0.0) || ((axisMask->fields).z <= 0.0)) {
      fVar18 = 0.0;
      fVar19 = 1.0;
      goto label_1821f39c2;
    }
    fVar15 = 1.0;
    fVar6 = 0.0;
    fVar19 = 1.0;
    fVar18 = 0.0;
  }
  else {
    fVar19 = 0.0;
    fVar18 = 1.0;
label_1821f39c2:
    fVar6 = 1.0;
    fVar15 = 0.0;
  }
  fVar10 = size * 0.5;
  fVar11 = fVar19 * fVar15 - fVar18 * 0.0;
  fVar13 = 0.0 - fVar19 * fVar6;
  local_b8._4_4_ = fVar13;
  local_b8._0_4_ = fVar11;
  fVar12 = fVar18 * fVar6 - fVar15 * 0.0;
  uStack_ac = auVar2._8_4_;
  fStack_b0 = fVar12;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar3 = (float)il2cpp_runtime_helper_180546a40(local_b8,0);
  if (fVar3 <= 1e-05) {
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar1->zeroVector).fields.x;
    fVar13 = (pUVar1->zeroVector).fields.y;
    fVar12 = (pUVar1->zeroVector).fields.z;
  }
  else {
    fVar11 = fVar11 / fVar3;
    fVar13 = fVar13 / fVar3;
    fVar12 = fVar12 / fVar3;
  }
  value = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
  if (value == (UnityEngine_Vector3_array *)0x0) goto label_1821f3f06;
  fVar17 = -fVar6 * fVar10 - fVar10 * 0.0;
  fVar7 = -fVar15 * fVar10 - fVar18 * fVar10;
  fVar3 = fVar10 * -0.0 - fVar19 * fVar10;
  fVar4 = fVar6 * fVar10 - fVar10 * 0.0;
  _local_b8 = ZEXT416((uint)fVar4);
  fVar5 = fVar15 * fVar10 - fVar18 * fVar10;
  fVar8 = fVar10 * 0.0 - fVar19 * fVar10;
  fVar9 = fVar10 * 0.0 + fVar6 * fVar10;
  fVar14 = fVar18 * fVar10 + fVar15 * fVar10;
  fVar16 = fVar19 * fVar10 + fVar10 * 0.0;
  fVar6 = fVar10 * 0.0 + -fVar6 * fVar10;
  fVar18 = fVar18 * fVar10 + -fVar15 * fVar10;
  fVar19 = fVar19 * fVar10 + fVar10 * -0.0;
  if ((int)value->max_length != 0) {
    value->m_Items[0].fields.x = fVar17;
    value->m_Items[0].fields.y = fVar7;
    value->m_Items[0].fields.z = fVar3;
    if (1 < (uint)value->max_length) {
      value->m_Items[1].fields.x = fVar4;
      value->m_Items[1].fields.y = fVar5;
      value->m_Items[1].fields.z = fVar8;
      if (2 < (uint)value->max_length) {
        value->m_Items[2].fields.x = fVar9;
        value->m_Items[2].fields.y = fVar14;
        value->m_Items[2].fields.z = fVar16;
        if (3 < (uint)value->max_length) {
          value->m_Items[3].fields.x = fVar6;
          value->m_Items[3].fields.y = fVar18;
          value->m_Items[3].fields.z = fVar19;
          if (4 < (uint)value->max_length) {
            value->m_Items[4].fields.x = fVar17;
            value->m_Items[4].fields.y = fVar7;
            value->m_Items[4].fields.z = fVar3;
            if (5 < (uint)value->max_length) {
              value->m_Items[5].fields.x = fVar4;
              value->m_Items[5].fields.y = fVar5;
              value->m_Items[5].fields.z = fVar8;
              if (6 < (uint)value->max_length) {
                value->m_Items[6].fields.x = fVar9;
                value->m_Items[6].fields.y = fVar14;
                value->m_Items[6].fields.z = fVar16;
                if (7 < (uint)value->max_length) {
                  value->m_Items[7].fields.x = fVar6;
                  value->m_Items[7].fields.y = fVar18;
                  value->m_Items[7].fields.z = fVar19;
                  value_00 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,8);
                  if (value_00 == (UnityEngine_Vector3_array *)0x0) {
label_1821f3f06:
                    ThrowNullReferenceException();
                  }
                  if ((int)value_00->max_length != 0) {
                    value_00->m_Items[0].fields.x = fVar11;
                    value_00->m_Items[0].fields.y = fVar13;
                    value_00->m_Items[0].fields.z = fVar12;
                    if (1 < (uint)value_00->max_length) {
                      value_00->m_Items[1].fields.x = fVar11;
                      value_00->m_Items[1].fields.y = fVar13;
                      value_00->m_Items[1].fields.z = fVar12;
                      if (2 < (uint)value_00->max_length) {
                        value_00->m_Items[2].fields.x = fVar11;
                        value_00->m_Items[2].fields.y = fVar13;
                        value_00->m_Items[2].fields.z = fVar12;
                        if (3 < (uint)value_00->max_length) {
                          value_00->m_Items[3].fields.x = fVar11;
                          value_00->m_Items[3].fields.y = fVar13;
                          value_00->m_Items[3].fields.z = fVar12;
                          if (4 < (uint)value_00->max_length) {
                            value_00->m_Items[4].fields.x = -fVar11;
                            value_00->m_Items[4].fields.y = -fVar13;
                            value_00->m_Items[4].fields.z = -fVar12;
                            if (5 < (uint)value_00->max_length) {
                              value_00->m_Items[5].fields.x = -fVar11;
                              value_00->m_Items[5].fields.y = -fVar13;
                              value_00->m_Items[5].fields.z = -fVar12;
                              if (6 < (uint)value_00->max_length) {
                                value_00->m_Items[6].fields.x = -fVar11;
                                value_00->m_Items[6].fields.y = -fVar13;
                                value_00->m_Items[6].fields.z = -fVar12;
                                if (7 < (uint)value_00->max_length) {
                                  value_00->m_Items[7].fields.x = -fVar11;
                                  value_00->m_Items[7].fields.y = -fVar13;
                                  value_00->m_Items[7].fields.z = -fVar12;
                                  __this_00 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
                                  UnityEngine_Mesh___ctor(__this_00,(MethodInfo *)0x0);
                                  if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
                                    UnityEngine_Mesh__set_vertices(__this_00,value,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__set_normals(__this_00,value_00,(MethodInfo *)0x0);
                                    value_01 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0xc);
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                              ((System_Array_o *)value_01,
                                               FieldRva_PrivateImplementationDetails_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94F557CF5A
                                               ,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__set_triangles(__this_00,value_01,(MethodInfo *)0x0);
                                    UnityEngine_Mesh__RecalculateBounds(__this_00,(MethodInfo *)0x0);
                                    return __this_00;
                                  }
                                  goto label_1821f3f06;
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
// 0x1821f6140

void MapEditor_PositionGizmo__OnSelectionChange(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_18434702f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434702f = '\x01';
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
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          MapEditor_PositionGizmo__ResetCenter(__this,(MethodInfo *)0x0);
          MapEditor_PositionGizmo__ResetColors(__this,(MethodInfo *)0x0);
          return;
        }
        goto label_1821f621c;
      }
    }
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
label_1821f621c:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$Update
// il2cpp: void MapEditor_PositionGizmo__Update (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x1821f7950
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f84a6: movaps xmm0, xmm7
// asm:   0x1821f84a9: movaps xmm8, xmm11
// asm:   0x1821f84ad: unpcklps xmm0, xmm11
// asm:   0x1821f84b1: jmp 0x1821f84be
// asm:   0x1821f84b3: movaps xmm7, xmm9
// asm:   0x1821f84b7: movaps xmm0, xmm7
// asm:   0x1821f84ba: unpcklps xmm0, xmm8
// asm:   0x1821f90e0: xor edx, edx
// asm:   0x1821f90e2: call 0x181e6e740  ; GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting()
// asm:   0x1821f90e7: jmp 0x1821f8b56

void MapEditor_PositionGizmo__Update(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar14;
  Settings_InputSettings_o *pSVar15;
  Settings_MapEditorInputSettings_o *pSVar16;
  Settings_KeybindSetting_o *__this_00;
  Cameras_BaseCamera_o *camera;
  Settings_KeybindSetting_o *__this_01;
  System_Collections_Generic_HashSet_MapObject__o *pSVar17;
  GameManagers_MapEditorGameManager_o *pGVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Camera_o *pUVar20;
  Utility_BaseComponentCache_o *pUVar21;
  UnityEngine_Vector3_StaticFields *pUVar22;
  Settings_MapEditorSettings_o *pSVar23;
  Settings_FloatSetting_o *pSVar24;
  UI_MapEditorMenu_o *pUVar25;
  bool value;
  bool value_00;
  undefined8 uVar26;
  longlong lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  UnityEngine_LayerMask_o UVar34;
  UnityEngine_GameObject_o *pUVar35;
  UnityEngine_Quaternion_o *pUVar36;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_TransformPositionCommand_o *__this_02;
  UnityEngine_Ray_o *pUVar37;
  UnityEngine_Vector3_o *pUVar38;
  System_Int32_array *layers;
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *__this_03;
  UnityEngine_Transform_o *pUVar39;
  char cVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  UnityEngine_Ray_o local_1d8;
  UnityEngine_Color_Fields local_1b8;
  UnityEngine_Vector3_Fields local_1a8;
  undefined4 uStack_19c;
  float local_198 [4];
  UnityEngine_Quaternion_o local_188;
  UnityEngine_Transform_o *local_178;
  UnityEngine_RaycastHit_o local_170;
  UnityEngine_Ray_o local_140;
  UnityEngine_RaycastHit_o local_128;
  undefined8 local_ec;
  
  if (Il2CppMethodInitialized_184347030 == '\0') {
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
    Il2CppMethodInitialized_184347030 = '\x01';
  }
  bVar33 = false;
  fVar45 = 0.0;
  local_170.fields.m_Normal.fields.y = 0.0;
  local_170.fields.m_Normal.fields.z = 0.0;
  local_170.fields.m_FaceID = 0;
  local_1a8._0_8_ = (UnityEngine_Transform_o *)0x0;
  local_128.fields.m_Normal.fields.y = 0.0;
  local_128.fields.m_Normal.fields.z = 0.0;
  local_128.fields.m_FaceID = 0;
  local_1a8.z = 0.0;
  local_178 = (UnityEngine_Transform_o *)0x0;
  local_1d8.fields.m_Origin.fields.x = 0.0;
  local_1d8.fields.m_Origin.fields.y = 0.0;
  local_1d8.fields._8_8_ = (ulonglong)(uint)local_1d8.fields.m_Direction.fields.x << 0x20;
  local_170.fields.m_Point.fields.x = 0.0;
  local_170.fields.m_Point.fields.y = 0.0;
  local_170.fields.m_Point.fields.z = 0.0;
  local_170.fields.m_Normal.fields.x = 0.0;
  local_198[0] = 0.0;
  local_170.fields.m_Distance = 0.0;
  local_170.fields.m_UV.fields.x = 0.0;
  local_170.fields.m_UV.fields.y = 0.0;
  local_170.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_1b8.b = 0.0;
  local_128.fields.m_Point.fields.x = 0.0;
  local_128.fields.m_Point.fields.y = 0.0;
  local_128.fields.m_Point.fields.z = 0.0;
  local_128.fields.m_Normal.fields.x = 0.0;
  local_128.fields.m_Distance = 0.0;
  local_128.fields.m_UV.fields.x = 0.0;
  local_128.fields.m_UV.fields.y = 0.0;
  local_128.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pSVar15 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar15 == (Settings_InputSettings_o *)0x0) ||
     (pSVar16 = (pSVar15->fields).MapEditor, pSVar16 == (Settings_MapEditorInputSettings_o *)0x0))
  goto label_1821f90ec;
  __this_00 = (pSVar16->fields).Select;
  pUVar39 = (__this->fields)._activeLine;
  camera = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  __this_01 = (((TypeInfo_Settings_SettingsManager->static_fields->InputSettings->fields).MapEditor)->fields).
              VertexSnap;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar31 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  cVar40 = '\x01';
  if (bVar31) {
    pUVar39 = (__this->fields)._centerSquare;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar31 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar31) {
      if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto label_1821f90ec;
      bVar31 = Settings_KeybindSetting__GetKey(__this_01,false,(MethodInfo *)0x0);
      if (bVar31) {
        pGVar18 = (__this->fields)._gameManager;
        if ((pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) ||
           (pSVar17 = (pGVar18->fields).SelectedObjects,
           pSVar17 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_1821f90ec;
        iVar14 = (pSVar17->fields)._count;
        bVar33 = 0 < iVar14;
        bVar31 = iVar14 < 1;
        value = iVar14 < 1;
        value_00 = iVar14 < 1;
      }
      else {
        value = true;
        bVar31 = true;
        value_00 = true;
      }
      pUVar39 = (__this->fields)._centerSquare;
      if ((pUVar39 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar35 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar39,(MethodInfo *)0x0),
         pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_1821f90ec;
      UnityEngine_GameObject__SetActive(pUVar35,bVar33,(MethodInfo *)0x0);
      local_188.fields._0_8_ = (__this->fields)._planeXY;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar32 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)local_188.fields._0_8_,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if (bVar32) {
        pUVar39 = (__this->fields)._planeXY;
        if ((pUVar39 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar35 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar39,(MethodInfo *)0x0),
           pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_1821f90ec;
        UnityEngine_GameObject__SetActive(pUVar35,bVar31,(MethodInfo *)0x0);
      }
      pUVar39 = (__this->fields)._planeYZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar31 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar31) {
        pUVar39 = (__this->fields)._planeYZ;
        if ((pUVar39 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar35 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar39,(MethodInfo *)0x0),
           pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_1821f90ec;
        UnityEngine_GameObject__SetActive(pUVar35,value,(MethodInfo *)0x0);
      }
      pUVar39 = (__this->fields)._planeXZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar31 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar31) {
        pUVar39 = (__this->fields)._planeXZ;
        if ((pUVar39 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar35 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar39,(MethodInfo *)0x0),
           pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_1821f90ec;
        UnityEngine_GameObject__SetActive(pUVar35,value_00,(MethodInfo *)0x0);
      }
      if (bVar33 == false) {
        (__this->fields)._hasSnapAnchor = false;
        (__this->fields)._snapAnchorTransform = (UnityEngine_Transform_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._snapAnchorTransform,(void *)0x0);
        MapEditor_PositionGizmo__ResetCenter(__this,(MethodInfo *)0x0);
      }
      else {
        bVar33 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                           (__this,camera,(UnityEngine_Vector3_o *)&local_1a8,&local_178,
                            (UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
        if (bVar33) {
          pUVar39 = (__this->fields)._transform;
          if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
          local_188.fields.x = local_1a8.x;
          local_188.fields.y = local_1a8.y;
          local_188.fields.z = local_1a8.z;
          UnityEngine_Transform__set_position(pUVar39,(UnityEngine_Vector3_o *)&local_188,(MethodInfo *)0x0);
          (__this->fields)._snapAnchorTransform = local_178;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._snapAnchorTransform,local_178);
          (__this->fields)._snapAnchorLocal.fields.x = local_1d8.fields.m_Origin.fields.x;
          (__this->fields)._snapAnchorLocal.fields.y = local_1d8.fields.m_Origin.fields.y;
          (__this->fields)._snapAnchorLocal.fields.z = local_1d8.fields.m_Origin.fields.z;
          (__this->fields)._hasSnapAnchor = true;
        }
        pUVar39 = (__this->fields)._centerSquare;
        if ((((pUVar39 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar38 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0),
             camera == (Cameras_BaseCamera_o *)0x0)) ||
            (pUVar21 = (camera->fields).Cache, pUVar21 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar19 = (pUVar21->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto label_1821f90ec;
        uVar2 = (pUVar38->fields).x;
        uVar9 = (pUVar38->fields).y;
        fVar46 = (pUVar38->fields).z;
        pUVar38 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_1d8,pUVar19,(MethodInfo *)0x0);
        pUVar21 = (camera->fields).Cache;
        uVar3 = (pUVar38->fields).x;
        uVar10 = (pUVar38->fields).y;
        if ((pUVar21 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar19 = (pUVar21->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto label_1821f90ec;
        fVar47 = (pUVar38->fields).z;
        pUVar38 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_1a8,pUVar19,(MethodInfo *)0x0)
        ;
        local_1d8.fields.m_Origin.fields.x = (pUVar38->fields).x;
        local_1d8.fields.m_Origin.fields.y = (pUVar38->fields).y;
        local_1d8.fields.m_Origin.fields.z = (pUVar38->fields).z;
        local_1a8._0_8_ = CONCAT44((float)uVar9 - (float)uVar10,(float)uVar2 - (float)uVar3);
        local_1a8.z = fVar46 - fVar47;
        pUVar36 = UnityEngine_Quaternion__Internal_LookRotation
                            (&local_188,(UnityEngine_Vector3_o *)&local_1a8,
                             (UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
        local_1d8.fields.m_Origin.fields.x = (pUVar36->fields).x;
        local_1d8.fields.m_Origin.fields.y = (pUVar36->fields).y;
        local_1d8.fields.m_Origin.fields.z = (pUVar36->fields).z;
        local_1d8.fields.m_Direction.fields.x = (pUVar36->fields).w;
        UnityEngine_Transform__set_rotation(pUVar39,(UnityEngine_Quaternion_o *)&local_1d8,(MethodInfo *)0x0);
      }
    }
  }
  pUVar39 = (__this->fields)._activeLine;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar33 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar33) {
    if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_1821f90ec;
    bVar33 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    if (bVar33) {
      if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto label_1821f90ec;
      bVar33 = Settings_KeybindSetting__GetKey(__this_01,false,(MethodInfo *)0x0);
      if (!bVar33) {
        cVar40 = (__this->fields)._activeIsCenter;
      }
      (__this->fields)._vertexSnapActive = cVar40 != '\0';
      if ((__this->fields)._activeIsCenter == false) {
        if (cVar40 != '\0') {
          pUVar39 = (__this->fields)._activeLine;
          pUVar19 = (__this->fields)._lineX;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar33 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                              (MethodInfo *)0x0);
          if (!bVar33) {
            pUVar39 = (__this->fields)._activeLine;
            pUVar19 = (__this->fields)._lineY;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar33 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                (MethodInfo *)0x0);
            if (!bVar33) {
              pUVar39 = (__this->fields)._activeLine;
              pUVar19 = (__this->fields)._lineZ;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar33 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                  (MethodInfo *)0x0);
              if (!bVar33) goto label_1821f80a7;
            }
          }
          MapEditor_PositionGizmo__DoAxisSurfaceSnap(__this,camera,(MethodInfo *)0x0);
        }
        else {
label_1821f80a7:
          if ((__this->fields)._vertexSnapActive == false) {
            if (camera == (Cameras_BaseCamera_o *)0x0) goto label_1821f90ec;
            pUVar20 = (camera->fields).Camera;
            if ((__this->fields)._activeIsPlane == false) {
              pUVar38 = UnityEngine_Input__get_mousePosition
                                  ((UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
              if (pUVar20 == (UnityEngine_Camera_o *)0x0) goto label_1821f90ec;
              local_1d8.fields.m_Origin.fields.x = (pUVar38->fields).x;
              local_1d8.fields.m_Origin.fields.y = (pUVar38->fields).y;
              local_1d8.fields.m_Origin.fields.z = (pUVar38->fields).z;
              pUVar37 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                                  (&local_140,pUVar20,(UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
              uVar4 = (__this->fields)._previousMousePoint.fields.x;
              uVar11 = (__this->fields)._previousMousePoint.fields.y;
              local_188.fields._0_8_ = *(undefined8 *)&(pUVar37->fields).m_Direction.fields;
              fVar49 = (float)local_188.fields._0_8_;
              uVar5 = (pUVar37->fields).m_Origin.fields.x;
              uVar12 = (pUVar37->fields).m_Origin.fields.y;
              fVar45 = (pUVar37->fields).m_Origin.fields.z;
              fVar46 = (float)uVar4 - (float)uVar5;
              fVar47 = (float)uVar11 - (float)uVar12;
              fVar43 = (pUVar37->fields).m_Direction.fields.z;
              fVar48 = (__this->fields)._previousMousePoint.fields.z - fVar45;
              local_1d8.fields.m_Origin.fields.y = fVar47;
              local_1d8.fields.m_Origin.fields.x = fVar46;
              local_1d8.fields.m_Origin.fields.z = fVar48;
              local_1a8._0_8_ = CONCAT44(fVar47,fVar46);
              local_1a8.z = fVar48;
              local_188.fields.z = fVar43;
              local_ec = (UnityEngine_Transform_o *)local_188.fields._0_8_;
              fVar41 = (float)il2cpp_runtime_helper_181d9e200(&local_188,&local_1a8);
              fVar44 = local_ec._4_4_;
              fVar41 = (float)il2cpp_runtime_helper_1804f54c0(fVar41 * 0.017453292);
              fVar42 = (float)il2cpp_runtime_helper_180546a40(&local_1d8,0);
              pUVar39 = (__this->fields)._activeLine;
              pUVar19 = (__this->fields)._lineY;
              fVar42 = fVar42 / fVar41;
              fVar49 = fVar49 * fVar42 + (float)uVar5;
              fVar50 = fVar44 * fVar42 + (float)uVar12;
              fVar45 = fVar43 * fVar42 + fVar45;
              fVar43 = fVar49 - (__this->fields)._previousMousePoint.fields.x;
              fVar41 = fVar50 - (__this->fields)._previousMousePoint.fields.y;
              fVar44 = fVar45 - (__this->fields)._previousMousePoint.fields.z;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar33 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                  (MethodInfo *)0x0);
              if (bVar33) {
                if (Il2CppMethodInitialized_18433de5f == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5f = '\x01';
                }
                fVar42 = (float)il2cpp_runtime_helper_180546a40(&local_1d8,0);
                if (fVar42 <= 1e-05) {
                  pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
                  fVar46 = (pUVar22->zeroVector).fields.x;
                  fVar47 = (pUVar22->zeroVector).fields.y;
                  fVar48 = (pUVar22->zeroVector).fields.z;
                }
                else {
                  fVar46 = fVar46 / fVar42;
                  fVar47 = fVar47 / fVar42;
                  fVar48 = fVar48 / fVar42;
                }
                pUVar21 = (camera->fields).Cache;
                if ((pUVar21 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar39 = (pUVar21->fields).Transform, pUVar39 == (UnityEngine_Transform_o *)0x0))
                goto label_1821f90ec;
                pUVar38 = UnityEngine_Transform__get_up
                                    ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
                fVar42 = fVar41 * (pUVar38->fields).y + fVar43 * (pUVar38->fields).x +
                         fVar44 * (pUVar38->fields).z;
                fVar43 = fVar46 * fVar42 + fVar46 * fVar42 + fVar43;
                fVar41 = fVar47 * fVar42 + fVar47 * fVar42 + fVar41;
                fVar44 = fVar48 * fVar42 + fVar48 * fVar42 + fVar44;
              }
              pUVar39 = (__this->fields)._activeLine;
              if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
              pUVar38 = UnityEngine_Transform__get_right
                                  ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
              pUVar39 = (__this->fields)._activeLine;
              if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
              uVar6 = (pUVar38->fields).x;
              uVar13 = (pUVar38->fields).y;
              fVar47 = (pUVar38->fields).z;
              pUVar38 = UnityEngine_Transform__get_right
                                  ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
              fVar43 = fVar41 * (pUVar38->fields).y + fVar43 * (pUVar38->fields).x +
                       fVar44 * (pUVar38->fields).z;
              fVar46 = (float)uVar6 * fVar43;
              fVar48 = (float)uVar13 * fVar43;
              if (Il2CppMethodInitialized_18433dbea == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbea = '\x01';
              }
              pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
              pGVar18 = (__this->fields)._gameManager;
              fVar44 = (pUVar22->zeroVector).fields.z;
              fVar41 = (pUVar22->zeroVector).fields.x;
              fVar42 = (pUVar22->zeroVector).fields.y;
              local_1b8.b = fVar44;
              if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821f90ec;
              fVar47 = fVar47 * fVar43;
              fVar43 = fVar42;
              if ((pGVar18->fields).CurrentGizmoMode == 0) {
                pUVar39 = (__this->fields)._activeLine;
                pUVar19 = (__this->fields)._lineX;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar33 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                    (MethodInfo *)0x0);
                fVar30 = fVar46;
                if (!bVar33) {
                  pUVar39 = (__this->fields)._activeLine;
                  pUVar19 = (__this->fields)._lineY;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar33 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                      (MethodInfo *)0x0);
                  fVar30 = fVar41;
                  fVar43 = fVar48;
                  if (!bVar33) {
                    pUVar39 = (__this->fields)._activeLine;
                    pUVar19 = (__this->fields)._lineZ;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar33 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                        (MethodInfo *)0x0);
                    fVar43 = fVar42;
                    if (bVar33) {
                      fVar44 = fVar47;
                      local_1b8.b = fVar47;
                    }
                  }
                }
label_1821f84be:
                fVar46 = fVar30;
                fVar47 = fVar44;
                local_1b8.g = fVar43;
                local_1b8.r = fVar46;
              }
              else {
                fVar30 = fVar41;
                if ((pGVar18->fields).CurrentGizmoMode != 1) goto label_1821f84be;
                local_1b8.g = fVar48;
                local_1b8.r = fVar46;
                fVar43 = fVar48;
                local_1b8.b = fVar47;
              }
              pGVar18 = (__this->fields)._gameManager;
              if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821f90ec;
              if (((pGVar18->fields).Snap == false) || ((pGVar18->fields).CurrentGizmoMode != 0)) {
                pGVar18 = (__this->fields)._gameManager;
                if (((pGVar18->fields).Snap != false) && ((pGVar18->fields).CurrentGizmoMode == 1)) {
                  pSVar23 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
                  if ((pSVar23 == (Settings_MapEditorSettings_o *)0x0) ||
                     (pSVar24 = (pSVar23->fields).SnapMove, pSVar24 == (Settings_FloatSetting_o *)0x0))
                  goto label_1821f90ec;
                  fVar48 = (pSVar24->fields)._value;
                  fVar44 = (float)il2cpp_runtime_helper_180546a40(&local_1b8,0);
                  fVar44 = (float)il2cpp_runtime_helper_180012930(fVar44 / fVar48);
                  fVar44 = fVar44 * fVar48;
                  if (Il2CppMethodInitialized_18433de5f == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_18433de5f = '\x01';
                  }
                  fVar41 = (float)il2cpp_runtime_helper_180546a40(&local_1b8,0);
                  if (fVar41 <= 1e-05) {
                    pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
                    fVar46 = (pUVar22->zeroVector).fields.x;
                    fVar43 = (pUVar22->zeroVector).fields.y;
                    fVar47 = (pUVar22->zeroVector).fields.z;
                  }
                  else {
                    fVar46 = fVar46 / fVar41;
                    fVar43 = fVar43 / fVar41;
                    fVar47 = fVar47 / fVar41;
                  }
                  fVar47 = fVar47 * fVar44;
                  local_1b8.g = fVar43 * fVar44;
                  local_1b8.r = fVar46 * fVar44;
                  local_1b8.b = fVar47;
                  fVar46 = (float)il2cpp_runtime_helper_180546a40(&local_1b8,0);
                  bVar33 = fVar46 < fVar48;
                  goto label_1821f87d0;
                }
label_1821f87d2:
                (__this->fields)._previousMousePoint.fields.x = fVar49;
                (__this->fields)._previousMousePoint.fields.y = fVar50;
                (__this->fields)._previousMousePoint.fields.z = fVar45;
              }
              else {
                pSVar23 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
                if ((pSVar23 == (Settings_MapEditorSettings_o *)0x0) ||
                   (pSVar24 = (pSVar23->fields).SnapMove, pSVar24 == (Settings_FloatSetting_o *)0x0))
                goto label_1821f90ec;
                fVar48 = (pSVar24->fields)._value;
                pUVar39 = (__this->fields)._activeLine;
                pUVar19 = (__this->fields)._lineX;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar33 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                    (MethodInfo *)0x0);
                if (bVar33) {
                  pUVar39 = (__this->fields)._transform;
                  if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
                  pUVar38 = UnityEngine_Transform__get_position
                                      ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
                  fVar46 = (float)il2cpp_runtime_helper_180012930((fVar46 + (pUVar38->fields).x) / fVar48);
                  pUVar39 = (__this->fields)._transform;
                  if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
                  pUVar38 = UnityEngine_Transform__get_position
                                      ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
                  local_1b8.r = fVar46 * fVar48 - (pUVar38->fields).x;
                }
                else {
                  pUVar39 = (__this->fields)._activeLine;
                  pUVar19 = (__this->fields)._lineY;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar33 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                      (MethodInfo *)0x0);
                  if (bVar33) {
                    pUVar39 = (__this->fields)._transform;
                    if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
                    pUVar38 = UnityEngine_Transform__get_position
                                        ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
                    fVar46 = (float)il2cpp_runtime_helper_180012930((fVar43 + (pUVar38->fields).y) / fVar48);
                    pUVar39 = (__this->fields)._transform;
                    if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
                    pUVar38 = UnityEngine_Transform__get_position
                                        ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
                    local_1b8.g = fVar46 * fVar48 - (pUVar38->fields).y;
                  }
                  else {
                    pUVar39 = (__this->fields)._activeLine;
                    pUVar19 = (__this->fields)._lineZ;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar33 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                        (MethodInfo *)0x0);
                    if (bVar33) {
                      pUVar39 = (__this->fields)._transform;
                      if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
                      pUVar38 = UnityEngine_Transform__get_position
                                          ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
                      fVar46 = (float)il2cpp_runtime_helper_180012930((fVar47 + (pUVar38->fields).z) / fVar48);
                      pUVar39 = (__this->fields)._transform;
                      if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
                      pUVar38 = UnityEngine_Transform__get_position
                                          ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
                      fVar47 = fVar46 * fVar48 - (pUVar38->fields).z;
                      local_1b8.b = fVar47;
                    }
                  }
                }
                fVar46 = (float)il2cpp_runtime_helper_180546a40(&local_1b8,0);
                bVar33 = fVar46 < fVar48;
label_1821f87d0:
                if (!bVar33) goto label_1821f87d2;
              }
              local_1d8.fields.m_Origin.fields.z = fVar47;
            }
            else {
              pUVar38 = UnityEngine_Input__get_mousePosition
                                  ((UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
              if (pUVar20 == (UnityEngine_Camera_o *)0x0) goto label_1821f90ec;
              local_1d8.fields.m_Origin.fields.x = (pUVar38->fields).x;
              local_1d8.fields.m_Origin.fields.y = (pUVar38->fields).y;
              local_1d8.fields.m_Origin.fields.z = (pUVar38->fields).z;
              pUVar37 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                                  (&local_140,pUVar20,(UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
              fVar45 = (pUVar37->fields).m_Origin.fields.x;
              fVar46 = (pUVar37->fields).m_Origin.fields.y;
              local_1d8.fields.m_Origin.fields.x = (pUVar37->fields).m_Origin.fields.x;
              local_1d8.fields.m_Origin.fields.y = (pUVar37->fields).m_Origin.fields.y;
              pfVar1 = &(pUVar37->fields).m_Origin.fields.z;
              fVar47 = *pfVar1;
              fVar48 = (pUVar37->fields).m_Direction.fields.x;
              local_1d8.fields._8_8_ = *(undefined8 *)pfVar1;
              fVar43 = (pUVar37->fields).m_Direction.fields.y;
              fVar44 = (pUVar37->fields).m_Direction.fields.z;
              local_1d8.fields.m_Direction.fields.y = (pUVar37->fields).m_Direction.fields.y;
              local_1d8.fields.m_Direction.fields.z = (pUVar37->fields).m_Direction.fields.z;
              bVar33 = UnityEngine_Plane__Raycast
                                 (&(__this->fields)._dragPlane,&local_1d8,local_198,(MethodInfo *)0x0);
              if (!bVar33) goto label_1821f8a8f;
              pUVar39 = (__this->fields)._activeLine;
              fVar45 = fVar48 * local_198[0] + fVar45;
              fVar48 = (__this->fields)._previousMousePoint.fields.x;
              fVar46 = fVar43 * local_198[0] + fVar46;
              fVar43 = (__this->fields)._previousMousePoint.fields.y;
              fVar47 = fVar44 * local_198[0] + fVar47;
              fVar44 = (__this->fields)._previousMousePoint.fields.z;
              local_1d8.fields.m_Origin.fields.y = fVar46;
              local_1d8.fields.m_Origin.fields.x = fVar45;
              local_1d8.fields.m_Origin.fields.z = fVar47;
              if (Il2CppMethodInitialized_184347032 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                Il2CppMethodInitialized_184347032 = '\x01';
              }
              pGVar18 = (__this->fields)._gameManager;
              if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821f90ec;
              fVar45 = fVar45 - fVar48;
              fVar46 = fVar46 - fVar43;
              fVar47 = fVar47 - fVar44;
              if ((pGVar18->fields).CurrentGizmoMode == 0) {
                pUVar19 = (__this->fields)._planeXY;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar33 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                    (MethodInfo *)0x0);
                if (bVar33) {
                  fVar47 = 0.0;
                }
                else {
                  pUVar19 = (__this->fields)._planeYZ;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar33 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                      (MethodInfo *)0x0);
                  if (bVar33) {
                    fVar45 = 0.0;
                  }
                  else {
                    pUVar19 = (__this->fields)._planeXZ;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar33 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,
                                        (MethodInfo *)0x0);
                    if (bVar33) {
                      fVar46 = 0.0;
                    }
                  }
                }
              }
              else {
                pUVar38 = MapEditor_PositionGizmo__GetPlaneNormal
                                    ((UnityEngine_Vector3_o *)&local_1a8,__this,pUVar39,(MethodInfo *)0x0);
                fVar48 = (pUVar38->fields).x;
                fVar43 = (pUVar38->fields).y;
                fVar44 = (pUVar38->fields).z;
                fVar41 = fVar43 * fVar46 + fVar48 * fVar45 + fVar44 * fVar47;
                fVar45 = fVar45 - fVar48 * fVar41;
                fVar46 = fVar46 - fVar43 * fVar41;
                fVar47 = fVar47 - fVar44 * fVar41;
              }
              local_1b8.g = fVar46;
              local_1b8.r = fVar45;
              local_1b8.b = fVar47;
              MapEditor_PositionGizmo__ApplySnap
                        (__this,(UnityEngine_Vector3_o *)&local_1b8,(UnityEngine_Vector3_o *)&local_1d8,
                         (MethodInfo *)0x0);
              local_1d8.fields.m_Origin.fields.z = local_1b8.b;
            }
            local_1d8.fields.m_Origin.fields.x = local_1b8.r;
            local_1d8.fields.m_Origin.fields.y = local_1b8.g;
            MapEditor_PositionGizmo__MoveSelectedObjects
                      (__this,(UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
            MapEditor_PositionGizmo__ResetCenter(__this,(MethodInfo *)0x0);
          }
          else {
            MapEditor_PositionGizmo__DoVertexSnap(__this,camera,(MethodInfo *)0x0);
          }
        }
      }
      else {
        MapEditor_PositionGizmo__DoFreeDragVertexSnap(__this,camera,(MethodInfo *)0x0);
      }
label_1821f8a8f:
      if (((__this->fields)._vertexSnapActive != false) && ((__this->fields)._hasSnapAnchor != false)) {
        pUVar39 = (__this->fields)._snapAnchorTransform;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar33 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar33) {
          pUVar39 = (__this->fields)._snapAnchorTransform;
          if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
          local_1d8.fields.m_Origin.fields.x = (__this->fields)._snapAnchorLocal.fields.x;
          local_1d8.fields.m_Origin.fields.y = (__this->fields)._snapAnchorLocal.fields.y;
          pUVar19 = (__this->fields)._transform;
          local_1d8.fields.m_Origin.fields.z = (__this->fields)._snapAnchorLocal.fields.z;
          pUVar38 = UnityEngine_Transform__TransformPoint
                              ((UnityEngine_Vector3_o *)&local_1a8,pUVar39,(UnityEngine_Vector3_o *)&local_1d8
                               ,(MethodInfo *)0x0);
          if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
          local_1d8.fields.m_Origin.fields.x = (pUVar38->fields).x;
          local_1d8.fields.m_Origin.fields.y = (pUVar38->fields).y;
          local_1d8.fields.m_Origin.fields.z = (pUVar38->fields).z;
          UnityEngine_Transform__set_position(pUVar19,(UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
        }
      }
    }
    else {
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821f90ec;
      GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar18,(MethodInfo *)0x0);
      pGVar18 = (__this->fields)._gameManager;
      if (pGVar18 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821f90ec;
      mapObjects = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                             (pGVar18,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand);
      MapEditor_TransformPositionCommand___ctor(__this_02,mapObjects,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                (pGVar18,(MapEditor_BaseCommand_o *)__this_02,true,(MethodInfo *)0x0);
      MapEditor_PositionGizmo__ResetColors(__this,(MethodInfo *)0x0);
      (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLine,(void *)0x0);
      (__this->fields)._activeIsPlane = false;
      (__this->fields)._activeIsCenter = false;
      (__this->fields)._vertexSnapActive = false;
      (__this->fields)._hasSnapAnchor = false;
      (__this->fields)._snapAnchorTransform = (UnityEngine_Transform_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._snapAnchorTransform,(void *)0x0);
      (__this->fields)._axisSnapDirection = 0;
    }
    pGVar18 = (__this->fields)._gameManager;
    if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
      (pGVar18->fields).IgnoreNextSelect = true;
      return;
    }
    goto label_1821f90ec;
  }
  pUVar25 = (__this->fields)._menu;
  if (pUVar25 == (UI_MapEditorMenu_o *)0x0) goto label_1821f90ec;
  if ((pUVar25->fields).IsMouseUI != false) {
    return;
  }
  if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_1821f90ec;
  bVar33 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
  if (!bVar33) {
    return;
  }
  if (camera == (Cameras_BaseCamera_o *)0x0) goto label_1821f90ec;
  pUVar20 = (camera->fields).Camera;
  pUVar38 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
  if (pUVar20 == (UnityEngine_Camera_o *)0x0) goto label_1821f90ec;
  local_1d8.fields.m_Origin.fields.x = (pUVar38->fields).x;
  local_1d8.fields.m_Origin.fields.y = (pUVar38->fields).y;
  local_1d8.fields.m_Origin.fields.z = (pUVar38->fields).z;
  pUVar37 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                      (&local_140,pUVar20,(UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
  uVar26._0_4_ = (pUVar37->fields).m_Origin.fields.x;
  uVar26._4_4_ = (pUVar37->fields).m_Origin.fields.y;
  lVar27 = *(longlong *)&(pUVar37->fields).m_Origin.fields.z;
  uVar7._0_4_ = (pUVar37->fields).m_Direction.fields.y;
  uVar7._4_4_ = (pUVar37->fields).m_Direction.fields.z;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) goto label_1821f90ec;
  if ((int)layers->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo;
  UVar34 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
  UVar34 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar34.fields.m_Mask,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_1d8.fields.m_Origin.fields._0_8_ = uVar26;
  local_1d8.fields._8_8_ = lVar27;
  local_1d8.fields.m_Direction.fields._4_8_ = uVar7;
  bVar33 = UnityEngine_Physics__Raycast_2fe5050
                     (&local_1d8,&local_170,100000.0,(int32_t)UVar34.fields.m_Mask,(MethodInfo *)0x0);
  if (!bVar33) {
    return;
  }
  if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto label_1821f90ec;
  bVar33 = Settings_KeybindSetting__GetKey(__this_01,false,(MethodInfo *)0x0);
  if (bVar33) {
    pUVar39 = (__this->fields)._centerSquare;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar33 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar33) {
      pUVar39 = (__this->fields)._centerSquare;
      if ((pUVar39 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar35 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar39,(MethodInfo *)0x0),
         pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto label_1821f90ec;
      bVar33 = UnityEngine_GameObject__get_activeSelf(pUVar35,(MethodInfo *)0x0);
      if (bVar33) {
        pUVar39 = (__this->fields)._centerSquare;
        if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar39,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Collider);
        pUVar20 = (camera->fields).Camera;
        pUVar38 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
        if (pUVar20 == (UnityEngine_Camera_o *)0x0) goto label_1821f90ec;
        local_1d8.fields.m_Origin.fields.x = (pUVar38->fields).x;
        local_1d8.fields.m_Origin.fields.y = (pUVar38->fields).y;
        local_1d8.fields.m_Origin.fields.z = (pUVar38->fields).z;
        pUVar37 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                            (&local_140,pUVar20,(UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
        uVar28._0_4_ = (pUVar37->fields).m_Origin.fields.x;
        uVar28._4_4_ = (pUVar37->fields).m_Origin.fields.y;
        lVar27 = *(longlong *)&(pUVar37->fields).m_Origin.fields.z;
        uVar8._0_4_ = (pUVar37->fields).m_Direction.fields.y;
        uVar8._4_4_ = (pUVar37->fields).m_Direction.fields.z;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar33 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar33) {
          if (x == (UnityEngine_Object_o *)0x0) goto label_1821f90ec;
          local_1d8.fields.m_Origin.fields._0_8_ = uVar28;
          local_1d8.fields._8_8_ = lVar27;
          local_1d8.fields.m_Direction.fields._4_8_ = uVar8;
          bVar33 = UnityEngine_Collider__Raycast_2fdcc50
                             ((UnityEngine_Collider_o *)x,&local_1d8,&local_128,100000.0,(MethodInfo *)0x0);
          if (bVar33) {
            local_170.fields.m_Point.fields.x = local_128.fields.m_Point.fields.x;
            local_170.fields.m_Point.fields.y = local_128.fields.m_Point.fields.y;
            local_170.fields.m_Point.fields.z = local_128.fields.m_Point.fields.z;
            local_170.fields.m_Normal.fields.x = local_128.fields.m_Normal.fields.x;
            local_170.fields.m_Normal.fields.y = local_128.fields.m_Normal.fields.y;
            local_170.fields.m_Normal.fields.z = local_128.fields.m_Normal.fields.z;
            local_170.fields.m_FaceID = local_128.fields.m_FaceID;
            local_170.fields.m_Distance = local_128.fields.m_Distance;
            local_170.fields.m_UV.fields.x = local_128.fields.m_UV.fields.x;
            local_170.fields.m_UV.fields.y = local_128.fields.m_UV.fields.y;
            local_170.fields.m_Collider.fields.m_Data = local_128.fields.m_Collider.fields.m_Data;
          }
        }
      }
    }
  }
  __this_03 = UnityEngine_RaycastHit__get_collider(&local_170,(MethodInfo *)0x0);
  if (__this_03 == (UnityEngine_Collider_o *)0x0) goto label_1821f90ec;
  pUVar39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  (__this->fields)._activeLine = pUVar39;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLine,pUVar39);
  pUVar39 = (__this->fields)._activeLine;
  pUVar19 = (__this->fields)._planeXY;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar33 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,(MethodInfo *)0x0);
  if (bVar33) {
label_1821f8f28:
    bVar33 = true;
  }
  else {
    pUVar39 = (__this->fields)._activeLine;
    pUVar19 = (__this->fields)._planeYZ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar33 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,(MethodInfo *)0x0);
    if (bVar33) goto label_1821f8f28;
    pUVar39 = (__this->fields)._activeLine;
    pUVar19 = (__this->fields)._planeXZ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar33 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,(MethodInfo *)0x0);
  }
  (__this->fields)._activeIsPlane = bVar33;
  pUVar39 = (__this->fields)._activeLine;
  pUVar19 = (__this->fields)._centerSquare;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar33 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar19,(MethodInfo *)0x0);
  (__this->fields)._activeIsCenter = bVar33;
  MapEditor_PositionGizmo__ResetColors(__this,(MethodInfo *)0x0);
  local_1d8.fields.m_Origin.fields.x = (__this->fields).SelectedColor.fields.r;
  local_1d8.fields.m_Origin.fields.y = (__this->fields).SelectedColor.fields.g;
  local_1d8.fields.m_Origin.fields.z = (__this->fields).SelectedColor.fields.b;
  local_1d8.fields.m_Direction.fields.x = (__this->fields).SelectedColor.fields.a;
  MapEditor_PositionGizmo__SetLineColor
            (__this,(__this->fields)._activeLine,(UnityEngine_Color_o *)&local_1d8,(MethodInfo *)0x0);
  pUVar38 = UnityEngine_RaycastHit__get_point
                      ((UnityEngine_Vector3_o *)&local_1d8,&local_170,(MethodInfo *)0x0);
  bVar33 = (__this->fields)._activeIsPlane;
  fVar47 = (pUVar38->fields).y;
  fVar46 = (pUVar38->fields).z;
  (__this->fields)._previousMousePoint.fields.x = (pUVar38->fields).x;
  (__this->fields)._previousMousePoint.fields.y = fVar47;
  (__this->fields)._previousMousePoint.fields.z = fVar46;
  if (bVar33 != false) {
    pUVar38 = MapEditor_PositionGizmo__GetPlaneNormal
                        ((UnityEngine_Vector3_o *)&local_1d8,__this,(__this->fields)._activeLine,
                         (MethodInfo *)0x0);
    pUVar39 = (__this->fields)._transform;
    if (pUVar39 == (UnityEngine_Transform_o *)0x0) goto label_1821f90ec;
    fVar46 = (pUVar38->fields).x;
    fVar47 = (pUVar38->fields).y;
    uVar29._0_4_ = (pUVar38->fields).x;
    uVar29._4_4_ = (pUVar38->fields).y;
    fVar48 = (pUVar38->fields).z;
    uStack_19c = 0;
    pUVar38 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_1d8,pUVar39,(MethodInfo *)0x0);
    fVar43 = (pUVar38->fields).x;
    fVar44 = (pUVar38->fields).y;
    fVar41 = (pUVar38->fields).z;
    local_1a8._0_8_ = uVar29;
    local_1a8.z = fVar48;
    local_1a8.z = (float)il2cpp_runtime_helper_180546a40(&local_1a8);
    if (1e-05 < local_1a8.z) {
      fVar45 = fVar46 / local_1a8.z;
      local_1a8.y = fVar47 / local_1a8.z;
      local_1a8.z = fVar48 / local_1a8.z;
    }
    else {
      local_1a8.y = 0.0;
      local_1a8.z = 0.0;
    }
    local_1a8.x = fVar45;
    (__this->fields)._dragPlane.fields.m_Normal.fields.x = fVar45;
    (__this->fields)._dragPlane.fields.m_Normal.fields.y = local_1a8.y;
    (__this->fields)._dragPlane.fields.m_Normal.fields.z = local_1a8.z;
    (__this->fields)._dragPlane.fields.m_Distance =
         -(fVar44 * local_1a8.y + fVar43 * fVar45 + fVar41 * local_1a8.z);
  }
  (__this->fields)._axisSnapDirection = 0;
  pUVar38 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
  pGVar18 = (__this->fields)._gameManager;
  fVar45 = (pUVar38->fields).x;
  (__this->fields)._axisSnapStartMouse.fields.y = (pUVar38->fields).y;
  (__this->fields)._axisSnapStartMouse.fields.x = fVar45;
  if (pGVar18 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar18,(MethodInfo *)0x0);
    return;
  }
label_1821f90ec:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$GetPlaneNormal
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__GetPlaneNormal (MapEditor_PositionGizmo_o* __this, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x1821f5a60

UnityEngine_Vector3_o *
MapEditor_PositionGizmo__GetPlaneNormal
          (UnityEngine_Vector3_o *__return_storage_ptr__,MapEditor_PositionGizmo_o *__this,
          UnityEngine_Transform_o *plane,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  bool bVar3;
  float fVar4;
  UnityEngine_Vector3_o *pUVar5;
  undefined8 uVar6;
  UnityEngine_Vector3_o local_38 [2];
  
  if (Il2CppMethodInitialized_184347031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347031 = '\x01';
  }
  pUVar1 = (__this->fields)._planeXY;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
label_1821f5ba6:
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Transform__get_forward(local_38,pUVar1,(MethodInfo *)0x0);
  }
  else {
    pUVar1 = (__this->fields)._planeYZ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_1821f5ba6;
      pUVar5 = UnityEngine_Transform__get_right(local_38,pUVar1,(MethodInfo *)0x0);
    }
    else {
      pUVar1 = (__this->fields)._planeXZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
      if (!bVar3) {
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar6._0_4_ = (pUVar2->upVector).fields.x;
        uVar6._4_4_ = (pUVar2->upVector).fields.y;
        fVar4 = (pUVar2->upVector).fields.z;
        goto label_1821f5b93;
      }
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_1821f5ba6;
      pUVar5 = UnityEngine_Transform__get_up(local_38,pUVar1,(MethodInfo *)0x0);
    }
  }
  uVar6._0_4_ = (pUVar5->fields).x;
  uVar6._4_4_ = (pUVar5->fields).y;
  fVar4 = (pUVar5->fields).z;
label_1821f5b93:
  (__return_storage_ptr__->fields).x = (float)(int)uVar6;
  (__return_storage_ptr__->fields).y = (float)(int)((ulonglong)uVar6 >> 0x20);
  (__return_storage_ptr__->fields).z = fVar4;
  return __return_storage_ptr__;
}


// MapEditor.PositionGizmo$$ProjectDragOntoPlaneHandle
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o drag, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x1821f6230

UnityEngine_Vector3_o *
MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle
          (UnityEngine_Vector3_o *__return_storage_ptr__,MapEditor_PositionGizmo_o *__this,
          UnityEngine_Vector3_o *drag,UnityEngine_Transform_o *plane,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameManagers_MapEditorGameManager_o *pGVar6;
  UnityEngine_Transform_o *pUVar7;
  bool bVar8;
  UnityEngine_Vector3_o *pUVar9;
  float fVar10;
  UnityEngine_Vector3_o local_38 [2];
  
  if (Il2CppMethodInitialized_184347032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347032 = '\x01';
  }
  pGVar6 = (__this->fields)._gameManager;
  if (pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) {
    if ((pGVar6->fields).CurrentGizmoMode != 0) {
      pUVar9 = MapEditor_PositionGizmo__GetPlaneNormal(local_38,__this,plane,(MethodInfo *)0x0);
      uVar2 = (pUVar9->fields).y;
      uVar4 = (pUVar9->fields).z;
      fVar1 = (pUVar9->fields).x;
      fVar10 = (float)uVar2 * (drag->fields).y + fVar1 * (drag->fields).x + (float)uVar4 * (drag->fields).z;
      (__return_storage_ptr__->fields).x = (drag->fields).x - fVar1 * fVar10;
      uVar3 = (drag->fields).y;
      uVar5 = (drag->fields).z;
      (__return_storage_ptr__->fields).y = (float)uVar3 - (float)uVar2 * fVar10;
      (__return_storage_ptr__->fields).z = (float)uVar5 - (float)uVar4 * fVar10;
      return __return_storage_ptr__;
    }
    pUVar7 = (__this->fields)._planeXY;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    if (bVar8) {
      (drag->fields).z = 0.0;
    }
    else {
      pUVar7 = (__this->fields)._planeYZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      if (bVar8) {
        (drag->fields).x = 0.0;
      }
      else {
        pUVar7 = (__this->fields)._planeXZ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
        if (bVar8) {
          (drag->fields).y = 0.0;
        }
      }
    }
    fVar1 = (drag->fields).z;
    fVar10 = (drag->fields).y;
    (__return_storage_ptr__->fields).x = (drag->fields).x;
    (__return_storage_ptr__->fields).y = fVar10;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$ApplySnap
// il2cpp: void MapEditor_PositionGizmo__ApplySnap (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o* frameDelta, UnityEngine_Vector3_o* mousePoint, const MethodInfo* method);
// 0x1821f3380

void MapEditor_PositionGizmo__ApplySnap
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o *frameDelta,
               UnityEngine_Vector3_o *mousePoint,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameManagers_MapEditorGameManager_o *pGVar6;
  Settings_MapEditorSettings_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  bool bVar11;
  UnityEngine_Vector3_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_184347033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347033 = '\x01';
  }
  pGVar6 = (__this->fields)._gameManager;
  if (pGVar6 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821f3678;
  if ((pGVar6->fields).Snap == false) goto label_1821f363b;
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar7 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar8 = (pSVar7->fields).SnapMove, pSVar8 == (Settings_FloatSetting_o *)0x0)) goto label_1821f3678;
  fVar1 = (pSVar8->fields)._value;
  if ((((__this->fields)._gameManager)->fields).CurrentGizmoMode == 0) {
    pUVar9 = (__this->fields)._transform;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_1821f3678;
    pUVar12 = UnityEngine_Transform__get_position(local_58,pUVar9,(MethodInfo *)0x0);
    fVar13 = (frameDelta->fields).x + (pUVar12->fields).x;
    fVar15 = (frameDelta->fields).y + (pUVar12->fields).y;
    fVar14 = (frameDelta->fields).z + (pUVar12->fields).z;
    pUVar9 = (__this->fields)._activeLine;
    pUVar10 = (__this->fields)._planeXY;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
    if (bVar11) {
      fVar13 = (float)il2cpp_runtime_helper_180012930(fVar13 / fVar1);
      fVar13 = fVar13 * fVar1;
      fVar15 = (float)il2cpp_runtime_helper_180012930(fVar15 / fVar1);
      fVar15 = fVar15 * fVar1;
    }
    else {
      pUVar9 = (__this->fields)._activeLine;
      pUVar10 = (__this->fields)._planeYZ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
      if (bVar11) {
        fVar15 = (float)il2cpp_runtime_helper_180012930(fVar15 / fVar1);
        fVar15 = fVar15 * fVar1;
      }
      else {
        pUVar9 = (__this->fields)._activeLine;
        pUVar10 = (__this->fields)._planeXZ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
        if (!bVar11) goto label_1821f35e6;
        fVar13 = (float)il2cpp_runtime_helper_180012930(fVar13 / fVar1);
        fVar13 = fVar13 * fVar1;
      }
      fVar14 = (float)il2cpp_runtime_helper_180012930(fVar14 / fVar1);
      fVar14 = fVar14 * fVar1;
    }
label_1821f35e6:
    pUVar9 = (__this->fields)._transform;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
label_1821f3678:
      ThrowNullReferenceException();
    }
    pUVar12 = UnityEngine_Transform__get_position(local_58,pUVar9,(MethodInfo *)0x0);
    fVar2 = (pUVar12->fields).z;
    fVar3 = (pUVar12->fields).x;
    (frameDelta->fields).y = fVar15 - (pUVar12->fields).y;
    (frameDelta->fields).z = fVar14 - fVar2;
    (frameDelta->fields).x = fVar13 - fVar3;
  }
  else {
    fVar13 = (float)il2cpp_runtime_helper_180546a40(frameDelta,0);
    fVar14 = (float)il2cpp_runtime_helper_180012930(fVar13 / fVar1);
    if (0.0 < fVar13) {
      fVar14 = fVar14 * fVar1;
      pUVar12 = UnityEngine_Vector3__get_normalized(local_58,frameDelta,(MethodInfo *)0x0);
      uVar4 = (pUVar12->fields).x;
      uVar5 = (pUVar12->fields).y;
      (frameDelta->fields).z = fVar14 * (pUVar12->fields).z;
      (frameDelta->fields).x = (float)uVar4 * fVar14;
      (frameDelta->fields).y = (float)uVar5 * fVar14;
    }
  }
  fVar13 = (float)il2cpp_runtime_helper_180546a40(frameDelta,0);
  if (fVar13 < fVar1) {
    return;
  }
label_1821f363b:
  fVar13 = (mousePoint->fields).y;
  fVar1 = (mousePoint->fields).z;
  (__this->fields)._previousMousePoint.fields.x = (mousePoint->fields).x;
  (__this->fields)._previousMousePoint.fields.y = fVar13;
  (__this->fields)._previousMousePoint.fields.z = fVar1;
  return;
}


// MapEditor.PositionGizmo$$DoVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x1821f5870

void MapEditor_PositionGizmo__DoVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  bool bVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Transform_o *local_res8;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184347034 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347034 = '\x01';
  }
  local_48.x = 0.0;
  local_48.y = 0.0;
  local_48.z = 0.0;
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_38.z = 0.0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
label_1821f5a4b:
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
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_1821f5a4b;
      local_28.x = (__this->fields)._snapAnchorLocal.fields.x;
      local_28.y = (__this->fields)._snapAnchorLocal.fields.y;
      local_28.z = (__this->fields)._snapAnchorLocal.fields.z;
      pUVar5 = UnityEngine_Transform__TransformPoint
                         (&local_18,pUVar3,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_48.x = (pUVar5->fields).x;
      local_48.y = (pUVar5->fields).y;
      local_48.z = (pUVar5->fields).z;
      goto label_1821f59af;
    }
  }
  local_res8 = (UnityEngine_Transform_o *)0x0;
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  bVar4 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                    (__this,camera,(UnityEngine_Vector3_o *)&local_48,&local_res8,
                     (UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
label_1821f59af:
  bVar4 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_21f7200
                    (__this,camera,INFINITY,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  if (bVar4) {
    local_38.x = local_38.x - local_48.x;
    local_38.y = local_38.y - local_48.y;
    local_38.z = local_38.z - local_48.z;
    if (1e-08 <= local_38.y * local_38.y + local_38.x * local_38.x + local_38.z * local_38.z) {
      MapEditor_PositionGizmo__MoveSelectedObjects
                (__this,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
    }
  }
  return;
}


// MapEditor.PositionGizmo$$DoAxisSurfaceSnap
// il2cpp: void MapEditor_PositionGizmo__DoAxisSurfaceSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x1821f4820
// eh: try 0x1821f4df0..0x1821f523b -> pad 0x18333f4c0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f4e6e: nop 
// asm:   0x1821f4ef5: mov rdx, qword ptr [rip + 0x1e965cc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1821f4efc: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x1821f4f01: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f4f06: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1821f4f0b: test rcx, rcx
// asm:   0x1821f4f0e: jne 0x1821f5229
// asm:   0x1821f4f14: mov r14d, 1
// asm:   0x1821f4f1a: mov r13, qword ptr [rsp + 0x1f0]
// asm:   0x1821f4f22: movss xmm7, dword ptr [rsp + 0x48]
// asm:   0x1821f4f28: movd esi, xmm7
// asm:   0x1821f4f2c: movss xmm6, dword ptr [rsp + 0x40]
// asm:   0x1821f4f32: movaps xmm13, xmm6
// asm:   0x1821f4f36: movss xmm0, dword ptr [rsp + 0x44]
// asm:   0x1821f4f3c: unpcklps xmm13, xmm0
// asm:   0x1821f4f40: movsd qword ptr [rsp + 0x40], xmm13
// asm:   0x1821f4f47: mov r15, qword ptr [rsp + 0x30]
// asm:   0x1821f4f4c: movss xmm8, dword ptr [rsp + 0x88]
// asm:   0x1821f4f56: movss xmm12, dword ptr [rsp + 0x8c]
// asm:   0x1821f4f60: movss xmm14, dword ptr [rsp + 0x90]
// asm:   0x1821f4f6a: movss xmm15, dword ptr [rsp + 0x98]
// asm:   0x1821f50f6: mov rdx, qword ptr [rip + 0x1e83dd3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x1821f50fd: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x1821f5102: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f5107: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1821f510c: test rcx, rcx
// asm:   0x1821f510f: jne 0x1821f523b
// asm:   0x1821f5115: mov r13, qword ptr [rsp + 0x1f0]
// asm:   0x1821f511d: movss xmm7, dword ptr [rsp + 0x48]
// asm:   0x1821f5123: movss xmm6, dword ptr [rsp + 0x40]
// asm:   0x1821f5129: movzx edi, byte ptr [rsp + 0x208]
// asm:   0x1821f5229: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821f523b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f4c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f4c5: push rbp
// asm:   0x18333f4c6: sub rsp, 0x30
// asm:   0x18333f4ca: mov rbp, rdx
// asm:   0x18333f4cd: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x18333f4d4: mov rcx, qword ptr [rax]
// asm:   0x18333f4d7: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18333f4db: movabs rax, 0
// asm:   0x18333f4e5: add rsp, 0x30
// asm:   0x18333f4e9: pop rbp
// asm:   0x18333f4ea: ret 
// asm:   0x18333f4f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f4f5: push rbp
// asm:   0x18333f4f6: sub rsp, 0x30
// asm:   0x18333f4fa: mov rbp, rdx
// asm:   0x18333f4fd: mov rax, qword ptr [rbp + 0xe8]
// asm:   0x18333f504: mov rcx, qword ptr [rax]
// asm:   0x18333f507: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18333f50b: movabs rax, 0
// asm:   0x18333f515: add rsp, 0x30
// asm:   0x18333f519: pop rbp
// asm:   0x18333f51a: ret 

void MapEditor_PositionGizmo__DoAxisSurfaceSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined8 uVar5;
  GameManagers_MapEditorGameManager_o *pGVar6;
  System_Collections_Generic_HashSet_MapObject__o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Camera_o *pUVar10;
  UnityEngine_Collider_c *x;
  UnityEngine_Collider_o *pUVar11;
  bool bVar12;
  bool bVar13;
  int32_t iVar14;
  UnityEngine_LayerMask_o UVar15;
  UnityEngine_Vector3_o *pUVar16;
  System_Collections_Generic_List_Collider__o *__this_00;
  System_Collections_Generic_List_MapObject__o *__this_01;
  System_Object_array *pSVar17;
  System_Int32_array *layers;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Transform_o *local_res20;
  UnityEngine_Vector3_o local_1b8;
  UnityEngine_Vector3_Fields local_1a8;
  float local_198;
  UnityEngine_Vector3_Fields local_188;
  undefined1 local_178 [16];
  UnityEngine_Collider_o *local_168;
  float local_160;
  float local_15c;
  float local_158;
  UnityEngine_Vector2_Fields local_150 [2];
  UnityEngine_Vector2_Fields local_140;
  undefined1 local_138 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_130;
  UnityEngine_Collider_o *local_128;
  undefined1 local_120 [8];
  uint64_t uStack_118;
  UnityEngine_Collider_o *local_110;
  UnityEngine_RaycastHit_o local_f8 [4];
  
  if (Il2CppMethodInitialized_184347035 == '\0') {
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
    Il2CppMethodInitialized_184347035 = '\x01';
  }
  local_1a8.x = 0.0;
  local_1a8.y = 0.0;
  local_1a8.z = 0.0;
  local_f8[0].fields.m_Point.fields.x = 0.0;
  local_f8[0].fields.m_Point.fields.y = 0.0;
  local_f8[0].fields.m_Point.fields.z = 0.0;
  local_f8[0].fields.m_Normal.fields.x = 0.0;
  local_f8[0].fields.m_Normal.fields.y = 0.0;
  local_f8[0].fields.m_Normal.fields.z = 0.0;
  local_f8[0].fields.m_FaceID = 0;
  local_f8[0].fields.m_Distance = 0.0;
  local_f8[0].fields.m_UV.fields.x = 0.0;
  local_f8[0].fields.m_UV.fields.y = 0.0;
  local_f8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_140.x = 0.0;
  local_140.y = 0.0;
  local_138 = (undefined1  [8])0x0;
  pUStack_130 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_128 = (UnityEngine_Collider_o *)0x0;
  local_120 = (undefined1  [8])0x0;
  uStack_118 = 0;
  local_110 = (UnityEngine_Collider_o *)0x0;
  pGVar6 = (__this->fields)._gameManager;
  if ((pGVar6 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar7 = (pGVar6->fields).SelectedObjects,
     pSVar7 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_1821f5203;
  if ((pSVar7->fields)._count == 0) {
    return;
  }
  pUVar8 = (__this->fields)._activeLine;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    return;
  }
  if ((__this->fields)._hasSnapAnchor == false) {
label_1821f4a8c:
    local_res20 = (UnityEngine_Transform_o *)0x0;
    local_1b8.fields._0_8_ = (System_Collections_Generic_List_Collider__o *)0x0;
    local_1b8.fields.z = 0.0;
    bVar12 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                       (__this,camera,(UnityEngine_Vector3_o *)&local_1a8,&local_res20,&local_1b8,
                        (MethodInfo *)0x0);
    if (!bVar12) {
      return;
    }
    uVar5._0_4_ = local_1a8.x;
    uVar5._4_4_ = local_1a8.y;
  }
  else {
    pUVar8 = (__this->fields)._snapAnchorTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar12) goto label_1821f4a8c;
    pUVar8 = (__this->fields)._snapAnchorTransform;
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1821f5203;
    local_1b8.fields._0_8_ = *(undefined8 *)&(__this->fields)._snapAnchorLocal.fields;
    local_1b8.fields.z = (__this->fields)._snapAnchorLocal.fields.z;
    pUVar16 = UnityEngine_Transform__TransformPoint
                        ((UnityEngine_Vector3_o *)&local_188,pUVar8,&local_1b8,(MethodInfo *)0x0);
    uVar5._0_4_ = (pUVar16->fields).x;
    uVar5._4_4_ = (pUVar16->fields).y;
    local_1a8.z = (pUVar16->fields).z;
    local_1a8._0_8_ = uVar5;
  }
  fVar22 = local_1a8.z;
  pUVar8 = (__this->fields)._activeLine;
  local_198 = local_1a8.z;
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1821f5203;
  pUVar16 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)&local_188,pUVar8,(MethodInfo *)0x0);
  local_1b8.fields._0_8_ = *(undefined8 *)&pUVar16->fields;
  fVar23 = (float)local_1b8.fields._0_8_;
  fVar25 = (pUVar16->fields).z;
  local_1b8.fields.z = fVar25;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar19 = (float)il2cpp_runtime_helper_180546a40(&local_1b8);
  if (fVar19 <= 1e-05) {
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar23 = (pUVar9->zeroVector).fields.x;
    fVar24 = (pUVar9->zeroVector).fields.y;
    fVar25 = (pUVar9->zeroVector).fields.z;
  }
  else {
    fVar23 = fVar23 / fVar19;
    fVar24 = local_1b8.fields.y / fVar19;
    fVar25 = fVar25 / fVar19;
  }
  if ((__this->fields)._axisSnapDirection == 0) {
    pUVar16 = UnityEngine_Input__get_mousePosition(&local_1b8,(MethodInfo *)0x0);
    if ((camera == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar10 = (camera->fields).Camera, pUVar10 == (UnityEngine_Camera_o *)0x0)) goto label_1821f5203;
    fVar19 = (pUVar16->fields).x;
    fVar21 = (pUVar16->fields).y;
    fVar20 = (__this->fields)._axisSnapStartMouse.fields.x;
    fVar1 = (__this->fields)._axisSnapStartMouse.fields.y;
    local_1b8.fields._0_8_ = CONCAT44(uVar5._4_4_,(float)uVar5);
    local_1b8.fields.z = fVar22;
    pUVar16 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                        ((UnityEngine_Vector3_o *)local_150,pUVar10,&local_1b8,(MethodInfo *)0x0);
    pUVar10 = (camera->fields).Camera;
    local_188.y = uVar5._4_4_;
    local_188.x = (float)uVar5;
    local_res20 = (UnityEngine_Transform_o *)CONCAT44(local_res20._4_4_,fVar22);
    if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto label_1821f5203;
    fVar2 = (pUVar16->fields).x;
    fVar3 = (pUVar16->fields).y;
    local_1b8.fields.y = fVar24 + local_1a8.y;
    local_1b8.fields.x = fVar23 + (float)uVar5;
    local_1b8.fields.z = fVar25 + fVar22;
    pUVar16 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                        ((UnityEngine_Vector3_o *)local_150,pUVar10,&local_1b8,(MethodInfo *)0x0);
    local_140.y = (pUVar16->fields).y - fVar3;
    local_140.x = (pUVar16->fields).x - fVar2;
    if (local_140.y * local_140.y + local_140.x * local_140.x < 1e-06) {
      return;
    }
    fVar19 = fVar19 - fVar20;
    fVar21 = fVar21 - fVar1;
    if (fVar21 * fVar21 + fVar19 * fVar19 < 25.0) {
      return;
    }
    local_150[0] = (UnityEngine_Vector2_Fields)
                   UnityEngine_Vector2__Normalize((UnityEngine_Vector2_o *)&local_140,(MethodInfo *)0x0);
    iVar14 = -1;
    if (0.0 <= fVar21 * local_150[0].y + fVar19 * local_150[0].x) {
      iVar14 = 1;
    }
    (__this->fields)._axisSnapDirection = iVar14;
  }
  else {
    local_res20 = (UnityEngine_Transform_o *)CONCAT44(local_res20._4_4_,fVar22);
    local_188.y = uVar5._4_4_;
    local_188.x = (float)uVar5;
  }
  fVar22 = (float)(__this->fields)._axisSnapDirection;
  local_150[0].x = fVar25;
  local_160 = fVar22;
  local_15c = fVar23;
  local_158 = fVar24;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  pGVar6 = (__this->fields)._gameManager;
  if ((pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_01 = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                            (pGVar6,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_MapObject__o *)0x0)) {
    local_1b8.fields._0_8_ = __this_00;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_178,
               (System_Collections_Generic_List_T__o *)__this_01,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    local_138 = (undefined1  [8])local_178._0_8_;
    pUStack_130 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178._8_8_;
    local_128 = local_168;
    local_178._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_178._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138;
    while (bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_138,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
          pUVar11 = local_128, bVar12) {
      if (local_128 == (UnityEngine_Collider_o *)0x0) {
        ThrowNullReferenceException();
      }
      x = (*(uint64_t *)((char *)local_128 + 0x18));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar12) {
        if ((*(uint64_t *)((char *)pUVar11 + 0x18)) == (UnityEngine_Collider_c *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                            ((UnityEngine_GameObject_o *)(*(uint64_t *)((char *)pUVar11 + 0x18)),
                             (MethodInfo_6F5810 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
        uVar18 = 0;
        if (pSVar17 == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        for (; uVar4 = (uint)pSVar17->max_length, (int)uVar18 < (int)uVar4; uVar18 = uVar18 + 1) {
          if (uVar4 <= uVar18) {
            ThrowIndexOutOfRangeException();
          }
          pUVar11 = (UnityEngine_Collider_o *)pSVar17->m_Items[(int)uVar18];
          if (pUVar11 == (UnityEngine_Collider_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar12 = UnityEngine_Collider__get_enabled(pUVar11,(MethodInfo *)0x0);
          if (bVar12) {
            UnityEngine_Collider__set_enabled(pUVar11,false,(MethodInfo *)0x0);
            if (__this_00 == (System_Collections_Generic_List_Collider__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_00);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    fVar21 = local_198;
    fVar20 = local_188.x;
    fVar19 = local_res20._0_4_;
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
      UVar15 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      UVar15 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar15.fields.m_Mask,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_1b8.fields._0_8_ = CONCAT44(fVar24 * fVar22,fVar23 * fVar22);
      local_188.y = uVar5._4_4_;
      local_188.x = (float)uVar5;
      local_188.z = fVar21;
      local_1b8.fields.z = fVar25 * fVar22;
      bVar12 = UnityEngine_Physics__Raycast_2fe5220
                         ((UnityEngine_Vector3_o *)&local_188,&local_1b8,local_f8,100000.0,
                          (int32_t)UVar15.fields.m_Mask,(MethodInfo *)0x0);
      local_res20 = (UnityEngine_Transform_o *)CONCAT71(local_res20._1_7_,bVar12);
      if (__this_00 != (System_Collections_Generic_List_Collider__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_178,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
        local_120 = (undefined1  [8])local_178._0_8_;
        uStack_118 = local_178._8_8_;
        local_110 = local_168;
        local_178._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_178._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_120;
        while( true ) {
          bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_120,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
          if (!bVar13) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_120,
                       MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
            if (bVar12) {
              pUVar16 = UnityEngine_RaycastHit__get_point(&local_1b8,local_f8,(MethodInfo *)0x0);
              fVar20 = (pUVar16->fields).x - fVar20;
              local_1a8.y = (pUVar16->fields).y - local_1a8.y;
              local_1a8.z = (pUVar16->fields).z - fVar19;
              if (1e-08 <= local_1a8.y * local_1a8.y + fVar20 * fVar20 + local_1a8.z * local_1a8.z) {
                local_1a8.x = fVar20;
                MapEditor_PositionGizmo__MoveSelectedObjects
                          (__this,(UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
              }
            }
            return;
          }
          if (local_110 == (UnityEngine_Collider_o *)0x0) break;
          UnityEngine_Collider__set_enabled(local_110,true,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
label_1821f5203:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$DoFreeDragVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoFreeDragVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x1821f5250

void MapEditor_PositionGizmo__DoFreeDragVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  Utility_BaseComponentCache_o *pUVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Ray_o *pUVar11;
  float fVar12;
  float fVar13;
  double dVar14;
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
  UnityEngine_Vector3_Fields local_128;
  float local_118;
  float local_114;
  UnityEngine_Vector3_Fields local_110 [2];
  UnityEngine_Vector3_Fields local_f8;
  float local_e8;
  float local_e4;
  UnityEngine_Ray_o local_e0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  
  if (Il2CppMethodInitialized_184347036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347036 = '\x01';
  }
  local_110[0].x = 0.0;
  local_110[0].y = 0.0;
  local_110[0].z = 0.0;
  local_128.x = 0.0;
  local_128.y = 0.0;
  local_128.z = 0.0;
  pGVar3 = (__this->fields)._gameManager;
  local_bc = 0;
  if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar4 = (pGVar3->fields).SelectedObjects,
     pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_1821f5866;
  if ((pSVar4->fields)._count == 0) {
    return;
  }
  if (camera == (Cameras_BaseCamera_o *)0x0) goto label_1821f5866;
  __this_00 = (camera->fields).Camera;
  pUVar10 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_e0,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto label_1821f5866;
  local_f8.x = (pUVar10->fields).x;
  local_f8.y = (pUVar10->fields).y;
  local_f8.z = (pUVar10->fields).z;
  pUVar11 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                      (&local_e0,__this_00,(UnityEngine_Vector3_o *)&local_f8,(MethodInfo *)0x0);
  local_e8 = (pUVar11->fields).m_Origin.fields.x;
  fVar1 = (pUVar11->fields).m_Origin.fields.y;
  local_e4 = (pUVar11->fields).m_Origin.fields.z;
  fVar2 = (pUVar11->fields).m_Direction.fields.x;
  local_118 = (pUVar11->fields).m_Direction.fields.y;
  local_114 = (pUVar11->fields).m_Direction.fields.z;
  if ((__this->fields)._hasSnapAnchor == false) {
label_1821f542a:
    local_e0.fields.m_Origin.fields.x = 0.0;
    local_e0.fields.m_Origin.fields.y = 0.0;
    local_e0.fields.m_Origin.fields.z = 0.0;
    local_f8.x = 0.0;
    local_f8.y = 0.0;
    bVar9 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                      (__this,camera,(UnityEngine_Vector3_o *)local_110,(UnityEngine_Transform_o **)&local_f8,
                       (UnityEngine_Vector3_o *)&local_e0,(MethodInfo *)0x0);
    if (!bVar9) {
      return;
    }
  }
  else {
    pUVar5 = (__this->fields)._snapAnchorTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar9) goto label_1821f542a;
    pUVar5 = (__this->fields)._snapAnchorTransform;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821f5866;
    local_f8.x = (__this->fields)._snapAnchorLocal.fields.x;
    local_f8.y = (__this->fields)._snapAnchorLocal.fields.y;
    local_f8.z = (__this->fields)._snapAnchorLocal.fields.z;
    pUVar10 = UnityEngine_Transform__TransformPoint
                        ((UnityEngine_Vector3_o *)&local_e0,pUVar5,(UnityEngine_Vector3_o *)&local_f8,
                         (MethodInfo *)0x0);
    local_110[0].x = (pUVar10->fields).x;
    local_110[0].y = (pUVar10->fields).y;
    local_110[0].z = (pUVar10->fields).z;
  }
  fVar24 = local_110[0].z;
  pUVar6 = (camera->fields).Cache;
  if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar5 = (pUVar6->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    fVar7 = local_110[0].x;
    fVar8 = local_110[0].y;
    pUVar10 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_e0,pUVar5,(MethodInfo *)0x0)
    ;
    fVar18 = (pUVar10->fields).x;
    fVar17 = (pUVar10->fields).y;
    fVar19 = (pUVar10->fields).z;
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    fVar18 = fVar18 - fVar7;
    fVar17 = fVar17 - fVar8;
    fVar19 = fVar19 - fVar24;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar14 = (double)(fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19);
    if (dVar14 < 0.0) {
      dVar14 = sqrt(dVar14);
    }
    else {
      dVar14 = SQRT(dVar14);
    }
    fVar18 = (float)dVar14 * 0.3;
    bVar9 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_21f7200
                      (__this,camera,30.0,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
    if (bVar9) {
      if (fVar18 <= 60.0) {
        fVar18 = 60.0;
      }
      if ((local_128.y - fVar8) * (local_128.y - fVar8) + (local_128.x - fVar7) * (local_128.x - fVar7) +
          (local_128.z - fVar24) * (local_128.z - fVar24) <= fVar18 * fVar18) goto label_1821f57a9;
    }
    pUVar6 = (camera->fields).Cache;
    if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar5 = (pUVar6->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar10 = UnityEngine_Transform__get_forward
                          ((UnityEngine_Vector3_o *)&local_e0,pUVar5,(MethodInfo *)0x0);
      fVar20 = -(pUVar10->fields).x;
      fVar21 = -(pUVar10->fields).y;
      fVar22 = -(pUVar10->fields).z;
      local_c8 = fVar20;
      local_c4 = fVar21;
      local_c0 = fVar22;
      fVar19 = (float)il2cpp_runtime_helper_180546a40(&local_c8,0);
      fVar17 = local_e4;
      fVar18 = local_e8;
      if (1e-05 < fVar19) {
        fVar20 = fVar20 / fVar19;
        fVar21 = fVar21 / fVar19;
        fVar22 = fVar22 / fVar19;
      }
      else {
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
      }
      fVar19 = local_e8 * fVar20;
      fVar23 = local_118 * fVar21 + fVar2 * fVar20 + local_114 * fVar22;
      fVar13 = local_e4 * fVar22;
      if (Il2CppMethodInitialized_18433dee4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_18433dee4 = '\x01';
      }
      fVar15 = ABS(fVar23);
      if (ABS(fVar23) <= 0.0) {
        fVar15 = 0.0;
      }
      fVar12 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar16 = fVar15 * 1e-06;
      if (fVar15 * 1e-06 <= fVar12) {
        fVar16 = fVar12;
      }
      if (ABS(0.0 - fVar23) < fVar16) {
        return;
      }
      fVar23 = (-(fVar1 * fVar21 + fVar19 + fVar13) - -(fVar8 * fVar21 + fVar7 * fVar20 + fVar24 * fVar22)) /
               fVar23;
      if (fVar23 <= 0.0) {
        return;
      }
      local_128.y = local_118 * fVar23 + fVar1;
      local_128.x = fVar2 * fVar23 + fVar18;
      local_128.z = local_114 * fVar23 + fVar17;
      fVar24 = local_110[0].z;
label_1821f57a9:
      local_128.x = local_128.x - fVar7;
      local_128.y = local_128.y - fVar8;
      local_128.z = local_128.z - fVar24;
      if (1e-08 <= local_128.y * local_128.y + local_128.x * local_128.x + local_128.z * local_128.z) {
        MapEditor_PositionGizmo__MoveSelectedObjects
                  (__this,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1821f5866:
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x1821f7920

bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_21f7200
                    (__this,camera,INFINITY,vertex,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, float screenRadius, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x1821f7200
// eh: try 0x1821f748b..0x1821f7915 -> pad 0x183320e60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f755c: nop dword ptr [rax]
// asm:   0x1821f765c: movaps xmm3, xmm6
// asm:   0x1821f7811: movss xmm6, dword ptr [rsp + 0x220]
// asm:   0x1821f781a: mov r14, qword ptr [rsp + 0x60]
// asm:   0x1821f781f: mov r15d, dword ptr [rsp + 0x34]
// asm:   0x1821f7831: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1821f7836: jmp 0x1821f74a0
// asm:   0x1821f784c: mov rdx, qword ptr [rip + 0x1eb80b5]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose
// asm:   0x1821f7853: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1821f7858: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f785d: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1821f7862: test rcx, rcx
// asm:   0x1821f7865: jne 0x1821f7915
// asm:   0x1821f7915: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320e60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320e65: push rbp
// asm:   0x183320e66: sub rsp, 0x30
// asm:   0x183320e6a: mov rbp, rdx
// asm:   0x183320e6d: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x183320e74: mov rcx, qword ptr [rax]
// asm:   0x183320e77: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183320e7b: movabs rax, 0
// asm:   0x183320e85: add rsp, 0x30
// asm:   0x183320e89: pop rbp
// asm:   0x183320e8a: ret 

bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_21f7200
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,float screenRadius,
               UnityEngine_Vector3_o *vertex,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  GameManagers_MapEditorGameManager_o *pGVar7;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_Camera_o *__this_02;
  UnityEngine_Vector2_Fields mouseScreen;
  Il2CppObject *pIVar8;
  bool bVar9;
  int32_t iVar10;
  int32_t iVar11;
  UnityEngine_Vector2_Fields *pUVar12;
  System_Collections_Generic_HashSet_object__o *__this_03;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Bounds_o *pUVar14;
  UnityEngine_Mesh_o *__this_04;
  UnityEngine_Vector3_array *pUVar15;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_Vector3_o *pUVar16;
  int32_t iVar17;
  System_Collections_Generic_HashSet_MapObject__o *__this_06;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool local_res8;
  UnityEngine_Vector3_Fields local_1c8;
  undefined8 local_1b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *local_1b0;
  System_Collections_Generic_HashSet_MeshFilter__o *local_1a8;
  System_Object_array *local_1a0;
  System_Collections_Generic_HashSet_MapObject__o *local_198;
  UnityEngine_Vector3_Fields local_188;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_178;
  UnityEngine_Bounds_o local_148;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_128;
  UnityEngine_Vector3_o local_100;
  UnityEngine_Vector3_o local_f0 [15];
  
  if (Il2CppMethodInitialized_184347037 == '\0') {
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
    Il2CppMethodInitialized_184347037 = '\x01';
  }
  local_178.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_178.fields._version = 0;
  local_178.fields._index = 0;
  local_178.fields._current.fields.key = (Il2CppObject *)0x0;
  local_178.fields._current.fields.value = (Il2CppObject *)0x0;
  local_178.fields._getEnumeratorRetType = 0;
  local_178.fields._36_4_ = 0;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar6->zeroVector).fields.z;
  fVar1 = (pUVar6->zeroVector).fields.y;
  (vertex->fields).x = (pUVar6->zeroVector).fields.x;
  (vertex->fields).y = fVar1;
  (vertex->fields).z = fVar4;
  pUVar12 = (UnityEngine_Vector2_Fields *)
            UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_1c8,(MethodInfo *)0x0);
  fVar4 = pUVar12->x;
  fVar1 = pUVar12->y;
  mouseScreen = *pUVar12;
  if (screenRadius == INFINITY) {
    fVar23 = 3.4028235e+38;
  }
  else {
    fVar23 = screenRadius * screenRadius;
  }
  fVar24 = 3.4028235e+38;
  iVar10 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar11 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pGVar7 = (__this->fields)._gameManager;
  if (pGVar7 != (GameManagers_MapEditorGameManager_o *)0x0) {
    __this_06 = (pGVar7->fields).SelectedObjects;
    local_198 = __this_06;
    __this_03 = (System_Collections_Generic_HashSet_object__o *)
                MapEditor_PositionGizmo__GetSelectionMeshFilters(__this,(MethodInfo *)0x0);
    local_1a8 = (System_Collections_Generic_HashSet_MeshFilter__o *)__this_03;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
      local_res8 = false;
      System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                (&local_128,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13C1150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
      local_178.fields._dictionary = local_128.fields._dictionary;
      local_178.fields._version = local_128.fields._version;
      local_178.fields._index = local_128.fields._index;
      local_178.fields._current.fields.key = local_128.fields._current.fields.key;
      local_178.fields._current.fields.value = local_128.fields._current.fields.value;
      local_178.fields._getEnumeratorRetType = local_128.fields._getEnumeratorRetType;
      local_178.fields._36_4_ = local_128.fields._36_4_;
      local_1b8 = 0;
      local_1b0 = &local_178;
      do {
        do {
          do {
            do {
              bVar9 = System_Collections_Generic_Dictionary_Enumerator_uint__object___MoveNext
                                (&local_178,
                                 (MethodInfo_15642D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext
                                );
              pIVar8 = local_178.fields._current.fields.value;
              if (!bVar9) {
                System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_178,
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
                return local_res8;
              }
              if (__this_06 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                ((System_Collections_Generic_HashSet_object__o *)__this_06,
                                 local_178.fields._current.fields.value,
                                 (MethodInfo_1759E40 *)
                                 MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
            } while (bVar9);
            if (pIVar8 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar13 = pIVar8[1].monitor;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          } while (bVar9);
          if (pUVar13 == (UnityEngine_Object_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar9 = UnityEngine_GameObject__get_activeInHierarchy
                            ((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
        } while (!bVar9);
        local_1a0 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                              ((UnityEngine_GameObject_o *)pUVar13,
                               (MethodInfo_6F5810 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
        if (local_1a0 == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        for (uVar19 = 0; uVar18 = (uint)local_1a0->max_length, __this_06 = local_198,
            (int)uVar19 < (int)uVar18; uVar19 = uVar19 + 1) {
          if (uVar18 <= uVar19) {
            ThrowIndexOutOfRangeException();
          }
          if (__this_03 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_01 = (UnityEngine_MeshFilter_o *)local_1a0->m_Items[(int)uVar19];
          bVar9 = System_Collections_Generic_HashSet_object___Contains
                            (__this_03,(Il2CppObject *)__this_01,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_MeshFilter_Contains);
          if (!bVar9) {
            if (__this_01 == (UnityEngine_MeshFilter_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar13 = (UnityEngine_Object_o *)
                      UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar9) {
              pUVar13 = (UnityEngine_Object_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_01,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar9 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar9) {
                if (pUVar13 == (UnityEngine_Object_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar14 = UnityEngine_Renderer__get_bounds
                                    ((UnityEngine_Bounds_o *)&local_128,(UnityEngine_Renderer_o *)pUVar13,
                                     (MethodInfo *)0x0);
                if (camera == (Cameras_BaseCamera_o *)0x0) {
                  ThrowNullReferenceException();
                }
                fVar22 = screenRadius;
                if (screenRadius == INFINITY) {
                  iVar17 = iVar11;
                  if ((float)iVar11 < (float)iVar10) {
                    iVar17 = iVar10;
                  }
                  fVar22 = (float)iVar17;
                }
                local_148.fields.m_Center.fields.x = (pUVar14->fields).m_Center.fields.x;
                local_148.fields.m_Center.fields.y = (pUVar14->fields).m_Center.fields.y;
                local_148.fields._8_8_ = *(undefined8 *)&(pUVar14->fields).m_Center.fields.z;
                local_148.fields.m_Extents.fields.y = (pUVar14->fields).m_Extents.fields.y;
                local_148.fields.m_Extents.fields.z = (pUVar14->fields).m_Extents.fields.z;
                bVar9 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                                  (&local_148,(camera->fields).Camera,(UnityEngine_Vector2_o)mouseScreen,
                                   fVar22,(MethodInfo *)0x0);
                if (!bVar9) goto label_1821f7824;
              }
              __this_04 = UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
              if (__this_04 == (UnityEngine_Mesh_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar15 = UnityEngine_Mesh__get_vertices(__this_04,(MethodInfo *)0x0);
              __this_05 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (pUVar15 == (UnityEngine_Vector3_array *)0x0) {
                ThrowNullReferenceException();
              }
              for (uVar18 = 0; uVar2 = (uint)pUVar15->max_length,
                  __this_03 = (System_Collections_Generic_HashSet_object__o *)local_1a8,
                  (int)uVar18 < (int)uVar2; uVar18 = uVar18 + 1) {
                if (uVar2 <= uVar18) {
                  ThrowIndexOutOfRangeException();
                }
                if (__this_05 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_188.x = pUVar15->m_Items[(int)uVar18].fields.x;
                local_188.y = pUVar15->m_Items[(int)uVar18].fields.y;
                local_188.z = pUVar15->m_Items[(int)uVar18].fields.z;
                pUVar16 = UnityEngine_Transform__TransformPoint
                                    (&local_100,__this_05,(UnityEngine_Vector3_o *)&local_188,
                                     (MethodInfo *)0x0);
                if (camera == (Cameras_BaseCamera_o *)0x0) {
                  ThrowNullReferenceException();
                }
                __this_02 = (camera->fields).Camera;
                if (__this_02 == (UnityEngine_Camera_o *)0x0) {
                  ThrowNullReferenceException();
                }
                uVar3._0_4_ = (pUVar16->fields).x;
                uVar3._4_4_ = (pUVar16->fields).y;
                fVar5 = (pUVar16->fields).z;
                local_1c8._0_8_ = uVar3;
                local_1c8.z = fVar5;
                pUVar16 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                    (local_f0,__this_02,(UnityEngine_Vector3_o *)&local_1c8,(MethodInfo *)0x0)
                ;
                fVar22 = (pUVar16->fields).z;
                if (((((0.0 < fVar22) && (fVar21 = (pUVar16->fields).x, 0.0 <= fVar21)) &&
                     (fVar20 = (pUVar16->fields).y, 0.0 <= fVar20)) &&
                    ((fVar21 <= (float)iVar10 && (fVar20 <= (float)iVar11)))) &&
                   ((fVar20 = fVar20 - fVar1, fVar21 = fVar21 - fVar4,
                    fVar21 = fVar21 * fVar21 + fVar20 * fVar20, fVar21 + 36.0 < fVar23 ||
                    (((fVar21 <= fVar23 + 36.0 && (ABS(fVar21 - fVar23) <= 36.0)) && (fVar22 < fVar24)))))) {
                  (vertex->fields).x = (float)uVar3;
                  (vertex->fields).y = uVar3._4_4_;
                  (vertex->fields).z = fVar5;
                  local_res8 = true;
                  fVar23 = fVar21;
                  fVar24 = fVar22;
                }
              }
            }
          }
label_1821f7824:
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$ScreenBoundsIntersectsMouse
// il2cpp: bool MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse (UnityEngine_Bounds_o bounds, UnityEngine_Camera_o* cam, UnityEngine_Vector2_o mouseScreen, float screenRadius, const MethodInfo* method);
// 0x1821f68e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f69ad: movaps xmm2, xmm12
// asm:   0x1821f69bc: movaps xmm1, xmm14

bool MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
               (UnityEngine_Bounds_o *bounds,UnityEngine_Camera_o *cam,UnityEngine_Vector2_o mouseScreen,
               float screenRadius,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  UnityEngine_Vector3_o *pUVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_e4;
  UnityEngine_Vector3_o local_d8;
  UnityEngine_Vector3_o local_c8 [14];
  
  fVar1 = (bounds->fields).m_Extents.fields.z;
  bVar13 = false;
  fVar2 = (bounds->fields).m_Center.fields.z;
  uVar15 = 0;
  fVar20 = -3.4028235e+38;
  fVar19 = -3.4028235e+38;
  fVar22 = 3.4028235e+38;
  fVar21 = 3.4028235e+38;
  fVar3 = (bounds->fields).m_Center.fields.x;
  fVar4 = (bounds->fields).m_Extents.fields.x;
  fVar5 = (bounds->fields).m_Center.fields.z;
  fVar6 = (bounds->fields).m_Center.fields.y;
  fVar7 = (bounds->fields).m_Extents.fields.x;
  fVar8 = (bounds->fields).m_Extents.fields.y;
  fVar9 = (bounds->fields).m_Extents.fields.z;
  fVar10 = (bounds->fields).m_Extents.fields.y;
  fVar11 = (bounds->fields).m_Center.fields.x;
  fVar12 = (bounds->fields).m_Center.fields.y;
  do {
    fVar18 = fVar7 + fVar11;
    if ((uVar15 & 1) == 0) {
      fVar18 = fVar3 - fVar4;
    }
    fVar17 = fVar8 + fVar12;
    if ((uVar15 & 2) == 0) {
      fVar17 = fVar6 - fVar10;
    }
    fVar16 = fVar1 + fVar2;
    if ((uVar15 & 4) == 0) {
      fVar16 = fVar5 - fVar9;
    }
    if (cam == (UnityEngine_Camera_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_d8.fields.x = fVar18;
    local_d8.fields.y = fVar17;
    local_d8.fields.z = fVar16;
    pUVar14 = UnityEngine_Camera__WorldToScreenPoint_2ebe670(local_c8,cam,&local_d8,(MethodInfo *)0x0);
    fVar18 = (pUVar14->fields).x;
    fVar17 = (pUVar14->fields).y;
    if (0.0 < (pUVar14->fields).z) {
      bVar13 = true;
    }
    if (fVar18 < fVar22) {
      fVar22 = fVar18;
    }
    if (fVar17 < fVar21) {
      fVar21 = fVar17;
    }
    if (fVar20 < fVar18) {
      fVar20 = fVar18;
    }
    if (fVar19 < fVar17) {
      fVar19 = fVar17;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 8);
  if ((((!bVar13) || (mouseScreen.fields.x < fVar22 - screenRadius)) ||
      (fVar20 + screenRadius < mouseScreen.fields.x)) ||
     (fStack_e4 = mouseScreen.fields.y, fStack_e4 < fVar21 - screenRadius)) {
    bVar13 = false;
  }
  else {
    bVar13 = fStack_e4 <= fVar19 + screenRadius;
  }
  return bVar13;
}


// MapEditor.PositionGizmo$$GetSelectionMeshFilters
// il2cpp: System_Collections_Generic_HashSet_MeshFilter__o* MapEditor_PositionGizmo__GetSelectionMeshFilters (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x1821f5bb0
// eh: try 0x1821f5cd0..0x1821f5dd0 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f5d7f: mov rdx, qword ptr [rip + 0x1e95742]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1821f5d86: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f5d8b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f5d90: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821f5d95: test rcx, rcx
// asm:   0x1821f5d98: jne 0x1821f5dd0
// asm:   0x1821f5d9a: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1821f5dd0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_HashSet_MeshFilter__o *
MapEditor_PositionGizmo__GetSelectionMeshFilters(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  uint uVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_MeshFilter__o *__this_01;
  System_Collections_Generic_List_MapObject__o *__this_02;
  System_Object_array *pSVar4;
  uint uVar5;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184347038 == '\0') {
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
    Il2CppMethodInitialized_184347038 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_MeshFilter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_ctor);
  __this_00 = (__this->fields)._gameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    __this_02 = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                          (__this_00,(MethodInfo *)0x0);
    if (__this_02 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_48,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
          pIVar2 = local_48.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
            return __this_01;
          }
          if (local_48.fields._current == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          x = local_48.fields._current[1].monitor;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (bVar3);
        if (pIVar2[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                           (pIVar2[1].monitor,
                            (MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
        uVar5 = 0;
        if (pSVar4 == (System_Object_array *)0x0) break;
        for (; uVar1 = (uint)pSVar4->max_length, (int)uVar5 < (int)uVar1; uVar5 = uVar5 + 1) {
          if (uVar1 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          if (__this_01 == (System_Collections_Generic_HashSet_MeshFilter__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_01,pSVar4->m_Items[(int)uVar5],
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_Add);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, UnityEngine_Transform_o** owner, UnityEngine_Vector3_o* localVertex, const MethodInfo* method);
// 0x1821f6bd0
// eh: try 0x1821f6dea..0x1821f71af -> pad 0x1833192b0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f70cb: movss xmm6, dword ptr [rsp + 0x34]
// asm:   0x1821f70d1: movss xmm7, dword ptr [rsp + 0x38]
// asm:   0x1821f70d7: mov r14d, dword ptr [rsp + 0x3c]
// asm:   0x1821f70dc: mov r15d, dword ptr [rsp + 0x40]
// asm:   0x1821f70e1: jmp 0x1821f6e00
// asm:   0x1821f70f7: mov rdx, qword ptr [rip + 0x1e9688a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose
// asm:   0x1821f70fe: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821f7103: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f7108: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821f710d: test rcx, rcx
// asm:   0x1821f7110: jne 0x1821f71af
// asm:   0x1821f7116: movzx r12d, byte ptr [rsp + 0x30]
// asm:   0x1821f71af: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833192b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833192b5: push rbp
// asm:   0x1833192b6: sub rsp, 0x30
// asm:   0x1833192ba: mov rbp, rdx
// asm:   0x1833192bd: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x1833192c4: mov rcx, qword ptr [rax]
// asm:   0x1833192c7: mov qword ptr [rbp + 0x60], rcx
// asm:   0x1833192cb: movabs rax, 0
// asm:   0x1833192d5: add rsp, 0x30
// asm:   0x1833192d9: pop rbp
// asm:   0x1833192da: ret 

bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
               UnityEngine_Transform_o **owner,UnityEngine_Vector3_o *localVertex,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Vector2_Fields mouseScreen;
  Il2CppObject *__this_01;
  bool bVar8;
  int32_t iVar9;
  int32_t iVar10;
  UnityEngine_Vector2_Fields *pUVar11;
  System_Collections_Generic_HashSet_MeshFilter__o *__this_02;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Bounds_o *pUVar13;
  UnityEngine_Mesh_o *__this_03;
  UnityEngine_Vector3_array *pUVar14;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_o *pUVar15;
  int32_t iVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_Fields local_188;
  undefined1 local_178 [16];
  UnityEngine_MeshFilter_o *local_168;
  System_Collections_Generic_HashSet_Enumerator_T__o local_160;
  UnityEngine_Vector3_Fields local_148 [2];
  UnityEngine_Bounds_o local_128;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_o local_f8;
  UnityEngine_Bounds_o local_e8 [8];
  
  if (Il2CppMethodInitialized_184347039 == '\0') {
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
    Il2CppMethodInitialized_184347039 = '\x01';
  }
  local_160.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_160.fields._index = 0;
  local_160.fields._version = 0;
  local_160.fields._current = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar5 = (pUVar7->zeroVector).fields.z;
  fVar1 = (pUVar7->zeroVector).fields.y;
  (vertex->fields).x = (pUVar7->zeroVector).fields.x;
  (vertex->fields).y = fVar1;
  (vertex->fields).z = fVar5;
  *owner = (UnityEngine_Transform_o *)0x0;
  Il2CppCodeGenWriteBarrier(owner,(void *)0x0);
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar5 = (pUVar7->zeroVector).fields.z;
  fVar1 = (pUVar7->zeroVector).fields.y;
  (localVertex->fields).x = (pUVar7->zeroVector).fields.x;
  (localVertex->fields).y = fVar1;
  (localVertex->fields).z = fVar5;
  pUVar11 = (UnityEngine_Vector2_Fields *)
            UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_188,(MethodInfo *)0x0);
  fVar5 = pUVar11->x;
  fVar1 = pUVar11->y;
  mouseScreen = *pUVar11;
  iVar9 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar10 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this_02 = MapEditor_PositionGizmo__GetSelectionMeshFilters(__this,(MethodInfo *)0x0);
  if (__this_02 == (System_Collections_Generic_HashSet_MeshFilter__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar21 = 3.4028235e+38;
  fVar22 = 3.4028235e+38;
  bVar18 = false;
  System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_178,
             (System_Collections_Generic_HashSet_Vector2Int__o *)__this_02,
             (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MeshFilter_GetEnumerator);
  local_160.fields._set = (System_Collections_Generic_HashSet_T__o *)local_178._0_8_;
  local_160.fields._index = local_178._8_4_;
  local_160.fields._version = local_178._12_4_;
  local_160.fields._current = (Il2CppObject *)local_168;
  local_178._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_178._8_8_ = &local_160;
label_1821f6e00:
  do {
    bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (&local_160,
                       (MethodInfo_15381F0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_MoveNext);
    __this_01 = local_160.fields._current;
    if (!bVar8) {
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_160,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MeshFilter_Dispose);
      return bVar18;
    }
    if ((UnityEngine_MeshFilter_o *)local_160.fields._current == (UnityEngine_MeshFilter_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar12 = (UnityEngine_Object_o *)
              UnityEngine_MeshFilter__get_sharedMesh
                        ((UnityEngine_MeshFilter_o *)local_160.fields._current,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  } while (bVar8);
  pUVar12 = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this_01,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) goto code_r0x0001821f6e95;
  goto label_1821f6f12;
code_r0x0001821f6e95:
  if (pUVar12 == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar13 = UnityEngine_Renderer__get_bounds(local_e8,(UnityEngine_Renderer_o *)pUVar12,(MethodInfo *)0x0);
  if (camera == (Cameras_BaseCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar16 = iVar10;
  if ((float)iVar10 < (float)iVar9) {
    iVar16 = iVar9;
  }
  local_128.fields.m_Center.fields.x = (pUVar13->fields).m_Center.fields.x;
  local_128.fields.m_Center.fields.y = (pUVar13->fields).m_Center.fields.y;
  local_128.fields._8_8_ = *(undefined8 *)&(pUVar13->fields).m_Center.fields.z;
  local_128.fields.m_Extents.fields.y = (pUVar13->fields).m_Extents.fields.y;
  local_128.fields.m_Extents.fields.z = (pUVar13->fields).m_Extents.fields.z;
  bVar8 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                    (&local_128,(camera->fields).Camera,(UnityEngine_Vector2_o)mouseScreen,(float)iVar16,
                     (MethodInfo *)0x0);
  if (bVar8) {
label_1821f6f12:
    __this_03 = UnityEngine_MeshFilter__get_sharedMesh
                          ((UnityEngine_MeshFilter_o *)__this_01,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Mesh_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar14 = UnityEngine_Mesh__get_vertices(__this_03,(MethodInfo *)0x0);
    __this_04 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (uVar17 = 0; uVar2 = (uint)pUVar14->max_length, (int)uVar17 < (int)uVar2; uVar17 = uVar17 + 1) {
      if (uVar2 <= uVar17) {
        ThrowIndexOutOfRangeException();
      }
      if (__this_04 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_148[0].x = pUVar14->m_Items[(int)uVar17].fields.x;
      local_148[0].y = pUVar14->m_Items[(int)uVar17].fields.y;
      local_148[0].z = pUVar14->m_Items[(int)uVar17].fields.z;
      pUVar15 = UnityEngine_Transform__TransformPoint
                          (&local_108,__this_04,(UnityEngine_Vector3_o *)local_148,(MethodInfo *)0x0);
      if (camera == (Cameras_BaseCamera_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (camera->fields).Camera;
      if (__this_00 == (UnityEngine_Camera_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar4._0_4_ = (pUVar15->fields).x;
      uVar4._4_4_ = (pUVar15->fields).y;
      fVar6 = (pUVar15->fields).z;
      local_188._0_8_ = uVar4;
      local_188.z = fVar6;
      pUVar15 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                          (&local_f8,__this_00,(UnityEngine_Vector3_o *)&local_188,(MethodInfo *)0x0);
      fVar3 = (pUVar15->fields).z;
      if (((((0.0 < fVar3) && (fVar19 = (pUVar15->fields).x, 0.0 <= fVar19)) &&
           (fVar20 = (pUVar15->fields).y, 0.0 <= fVar20)) &&
          ((fVar19 <= (float)iVar9 && (fVar20 <= (float)iVar10)))) &&
         ((fVar20 = fVar20 - fVar1, fVar19 = fVar19 - fVar5, fVar19 = fVar20 * fVar20 + fVar19 * fVar19,
          fVar19 + 36.0 < fVar21 || ((ABS(fVar19 - fVar21) <= 36.0 && (fVar3 < fVar22)))))) {
        (vertex->fields).x = (float)uVar4;
        (vertex->fields).y = uVar4._4_4_;
        (vertex->fields).z = fVar6;
        *owner = __this_04;
        Il2CppCodeGenWriteBarrier(owner,__this_04);
        if ((uint)pUVar14->max_length <= uVar17) {
          ThrowIndexOutOfRangeException();
        }
        fVar21 = pUVar14->m_Items[(int)uVar17].fields.z;
        fVar22 = pUVar14->m_Items[(int)uVar17].fields.y;
        (localVertex->fields).x = pUVar14->m_Items[(int)uVar17].fields.x;
        (localVertex->fields).y = fVar22;
        (localVertex->fields).z = fVar21;
        bVar18 = true;
        fVar21 = fVar19;
        fVar22 = fVar3;
      }
    }
  }
  goto label_1821f6e00;
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x1821f71c0

bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection_21f71c0
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *local_res10 [3];
  UnityEngine_Vector3_Fields local_18 [2];
  
  local_18[0].x = 0.0;
  local_18[0].y = 0.0;
  local_18[0].z = 0.0;
  local_res10[0] = (UnityEngine_Transform_o *)0x0;
  bVar1 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                    (__this,camera,vertex,local_res10,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.PositionGizmo$$MoveSelectedObjects
// il2cpp: void MapEditor_PositionGizmo__MoveSelectedObjects (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x1821f5e40
// eh: try 0x1821f6021..0x1821f6131 -> pad 0x183315ba0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f60f1: mov rdx, qword ptr [rip + 0x1e95130]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1821f60f8: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1821f60fd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f6102: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1821f6107: test rcx, rcx
// asm:   0x1821f610a: jne 0x1821f6131
// asm:   0x1821f6131: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315ba5: push rbp
// asm:   0x183315ba6: sub rsp, 0x20
// asm:   0x183315baa: mov rbp, rdx
// asm:   0x183315bad: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315bb1: mov rcx, qword ptr [rax]
// asm:   0x183315bb4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183315bb8: movabs rax, 0
// asm:   0x183315bc2: add rsp, 0x20
// asm:   0x183315bc6: pop rbp
// asm:   0x183315bc7: ret 

void MapEditor_PositionGizmo__MoveSelectedObjects
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o *frameDelta,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar3;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_o local_78;
  UnityEngine_Vector3_o local_68;
  undefined1 local_58 [16];
  Map_MapObject_o *local_48;
  System_Collections_Generic_HashSet_Enumerator_T__o local_40;
  
  if (Il2CppMethodInitialized_18434703a == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_MapEditor_PositionGizmo_c_MoveSelectedObjects_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_PositionGizmo_c);
    Il2CppMethodInitialized_18434703a = '\x01';
  }
  local_40.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    source = (pGVar1->fields).SelectedObjects;
    if ((TypeInfo_MapEditor_PositionGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_PositionGizmo_c);
    }
    __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9__48_0;
    if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
      if ((TypeInfo_MapEditor_PositionGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_PositionGizmo_c);
      }
      pIVar2 = (Il2CppObject *)TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9;
      __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                (__this_02,pIVar2,(intptr_t)MethodInfo_MapEditor_PositionGizmo_c_MoveSelectedObjects_b__48_0,
                 (MethodInfo_AF4D50 *)0x0);
      TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9__48_0 =
           (System_Func_MapObject__int__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_PositionGizmo_c->static_fields->__9__48_0,__this_02);
    }
    collection = System_Linq_Enumerable__Select_Vector3__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_176c3b0
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,__this_00,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_40.fields._set = (System_Collections_Generic_HashSet_T__o *)local_58._0_8_;
      local_40.fields._index = local_58._8_4_;
      local_40.fields._version = local_58._12_4_;
      local_40.fields._current = (Il2CppObject *)local_48;
      local_58._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_58._8_8_ = &local_40;
label_1821f6021:
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_40,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
      pIVar2 = local_40.fields._current;
      if (!bVar3) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
        return;
      }
      pGVar1 = (__this->fields)._gameManager;
      if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pGVar1->fields).HierarchyTreeViewEnabled != false) goto code_r0x0001821f6052;
      goto label_1821f6064;
    }
  }
  ThrowNullReferenceException();
code_r0x0001821f6052:
  bVar3 = MapEditor_BaseGizmo__HasSelectedAncestor
                    ((Map_MapObject_o *)local_40.fields._current,__this_03,(MethodInfo *)0x0);
  if (!bVar3) {
label_1821f6064:
    if ((Map_MapObject_o *)pIVar2 == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = ((Map_MapObject_Fields *)((longlong)pIVar2 + 0x10))->GameObject;
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_04 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = UnityEngine_Transform__get_position(&local_68,__this_04,(MethodInfo *)0x0);
    local_78.fields.x = (frameDelta->fields).x + (pUVar4->fields).x;
    local_78.fields.y = (pUVar4->fields).y + (frameDelta->fields).y;
    local_78.fields.z = (pUVar4->fields).z + (frameDelta->fields).z;
    UnityEngine_Transform__set_position(__this_04,&local_78,(MethodInfo *)0x0);
  }
  goto label_1821f6021;
}


// MapEditor.PositionGizmo$$ResetCenter
// il2cpp: void MapEditor_PositionGizmo__ResetCenter (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x1821f63b0
// eh: try 0x1821f64e2..0x1821f66e5 -> pad 0x183326990 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f6607: mov rdx, qword ptr [rip + 0x1e94c1a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1821f660e: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f6613: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f6618: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f661d: test rcx, rcx
// asm:   0x1821f6620: jne 0x1821f66e5
// asm:   0x1821f6626: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x1821f662e: movss xmm7, dword ptr [rsp + 0x28]
// asm:   0x1821f6634: movss xmm6, dword ptr [rsp + 0x24]
// asm:   0x1821f663a: movss xmm8, dword ptr [rsp + 0x20]
// asm:   0x1821f66e5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183326990: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183326995: push rbp
// asm:   0x183326996: sub rsp, 0x20
// asm:   0x18332699a: mov rbp, rdx
// asm:   0x18332699d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x1833269a1: mov rcx, qword ptr [rax]
// asm:   0x1833269a4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833269a8: movabs rax, 0
// asm:   0x1833269b2: add rsp, 0x20
// asm:   0x1833269b6: pop rbp
// asm:   0x1833269b7: ret 

void MapEditor_PositionGizmo__ResetCenter(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_c8;
  undefined1 local_b8 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o local_a8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_90;
  UnityEngine_Quaternion_Fields local_68;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_18434703b == '\0') {
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
    Il2CppMethodInitialized_18434703b = '\x01';
  }
  local_a8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  local_c8.x = 0.0;
  local_c8.y = 0.0;
  local_c8.z = 0.0;
  pUVar6 = (__this->fields)._transform;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_b8._0_4_ = (pUVar1->identityQuaternion).fields.x;
    local_b8._4_4_ = (pUVar1->identityQuaternion).fields.y;
    local_b8._8_8_ = *(undefined8 *)&(pUVar1->identityQuaternion).fields.z;
    UnityEngine_Transform__set_rotation(pUVar6,(UnityEngine_Quaternion_o *)local_b8,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._gameManager;
    if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                (&local_90,__this_00,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_a8.fields._set = local_90.fields._set;
      local_a8.fields._index = local_90.fields._index;
      local_a8.fields._version = local_90.fields._version;
      local_a8.fields._current = local_90.fields._current;
      local_b8._0_4_ = 0.0;
      local_b8._4_4_ = 0.0;
      fVar10 = local_c8.y;
      fVar11 = local_c8.z;
      fVar12 = local_c8.x;
      local_b8._8_8_ = &local_a8;
      while( true ) {
        bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_a8,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
        pIVar4 = local_a8.fields._current;
        if (!bVar5) break;
        if (local_a8.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_a8.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar6 = UnityEngine_GameObject__get_transform(local_a8.fields._current[1].monitor,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = UnityEngine_Transform__get_position(local_58,pUVar6,(MethodInfo *)0x0);
        fVar12 = (pUVar7->fields).x + fVar12;
        fVar10 = fVar10 + (pUVar7->fields).y;
        local_c8.y = fVar10;
        local_c8.x = fVar12;
        fVar11 = fVar11 + (pUVar7->fields).z;
        pGVar2 = (__this->fields)._gameManager;
        local_c8.z = fVar11;
        if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pGVar2->fields).CurrentGizmoMode == 1) {
          if (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (__this->fields)._transform;
          __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_Transform__get_rotation
                             ((UnityEngine_Quaternion_o *)&local_90,__this_01,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_68.x = (pUVar8->fields).x;
          local_68.y = (pUVar8->fields).y;
          local_68.z = (pUVar8->fields).z;
          local_68.w = (pUVar8->fields).w;
          UnityEngine_Transform__set_rotation(pUVar6,(UnityEngine_Quaternion_o *)&local_68,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_a8,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
      pGVar2 = (__this->fields)._gameManager;
      if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pSVar3 = (pGVar2->fields).SelectedObjects,
         pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
        fVar9 = (float)(pSVar3->fields)._count;
        pUVar6 = (__this->fields)._transform;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          local_c8.y = fVar10 / fVar9;
          local_c8.x = fVar12 / fVar9;
          local_c8.z = fVar11 / fVar9;
          UnityEngine_Transform__set_position(pUVar6,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$ResetColors
// il2cpp: void MapEditor_PositionGizmo__ResetColors (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x1821f66f0

void MapEditor_PositionGizmo__ResetColors(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434703c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434703c = '\x01';
  }
  local_18.r = (__this->fields).LineXColor.fields.r;
  local_18.g = (__this->fields).LineXColor.fields.g;
  local_18.b = (__this->fields).LineXColor.fields.b;
  local_18.a = (__this->fields).LineXColor.fields.a;
  MapEditor_PositionGizmo__SetLineColor
            (__this,(__this->fields)._lineX,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  local_18.r = (__this->fields).LineYColor.fields.r;
  local_18.g = (__this->fields).LineYColor.fields.g;
  local_18.b = (__this->fields).LineYColor.fields.b;
  local_18.a = (__this->fields).LineYColor.fields.a;
  MapEditor_PositionGizmo__SetLineColor
            (__this,(__this->fields)._lineY,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  local_18.r = (__this->fields).LineZColor.fields.r;
  local_18.g = (__this->fields).LineZColor.fields.g;
  local_18.b = (__this->fields).LineZColor.fields.b;
  local_18.a = (__this->fields).LineZColor.fields.a;
  MapEditor_PositionGizmo__SetLineColor
            (__this,(__this->fields)._lineZ,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._planeXY;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    local_18.r = (__this->fields).LineZColor.fields.r;
    local_18.g = (__this->fields).LineZColor.fields.g;
    local_18.a = 0.4;
    local_18.b = (__this->fields).LineZColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor
              (__this,(__this->fields)._planeXY,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._planeYZ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    local_18.r = (__this->fields).LineXColor.fields.r;
    local_18.g = (__this->fields).LineXColor.fields.g;
    local_18.a = 0.4;
    local_18.b = (__this->fields).LineXColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor
              (__this,(__this->fields)._planeYZ,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._planeXZ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    local_18.r = (__this->fields).LineYColor.fields.r;
    local_18.g = (__this->fields).LineYColor.fields.g;
    local_18.a = 0.4;
    local_18.b = (__this->fields).LineYColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor
              (__this,(__this->fields)._planeXZ,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  }
  return;
}


// MapEditor.PositionGizmo$$SetLineColor
// il2cpp: void MapEditor_PositionGizmo__SetLineColor (MapEditor_PositionGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1821f6ae0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f6b3e: nop 

void MapEditor_PositionGizmo__SetLineColor
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  System_Object_array *pSVar1;
  UnityEngine_Material_o *pUVar2;
  uint uVar3;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434703d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_18434703d = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)line,
                        (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer
                       );
    if (pSVar1 != (System_Object_array *)0x0) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar1->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pSVar1->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar3];
        if (__this_00 == (UnityEngine_Renderer_o *)0x0) break;
        pUVar2 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Material_o *)0x0) break;
        local_18.r = (color->fields).r;
        local_18.g = (color->fields).g;
        local_18.b = (color->fields).b;
        local_18.a = (color->fields).a;
        UnityEngine_Material__set_color(pUVar2,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Material_o *)0x0) break;
        UnityEngine_Material__set_renderQueue(pUVar2,0x1267,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.PositionGizmo$$.ctor
// il2cpp: void MapEditor_PositionGizmo___ctor (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x1821f9100

void MapEditor_PositionGizmo___ctor(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  (__this->fields).SelectedColor.fields.r = 1.0;
  (__this->fields).LineXColor.fields.b = 0.0;
  (__this->fields).LineZColor.fields.g = 0.0;
  (__this->fields).SelectedColor.fields.g = 1.0;
  (__this->fields).SelectedColor.fields.b = 1.0;
  (__this->fields).SelectedColor.fields.a = 1.0;
  (__this->fields).LineXColor.fields.r = 1.0;
  (__this->fields).LineXColor.fields.g = 0.0;
  (__this->fields).LineXColor.fields.a = 1.0;
  (__this->fields).LineYColor.fields.r = 1.0;
  (__this->fields).LineYColor.fields.g = 0.92156863;
  (__this->fields).LineYColor.fields.b = 0.015686275;
  *(undefined8 *)&(__this->fields).LineYColor.fields.a = 0x3f800000;
  (__this->fields).LineZColor.fields.b = 1.0;
  (__this->fields).LineZColor.fields.a = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


