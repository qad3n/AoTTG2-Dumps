// Type: Map.DestructibleMapObject
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/DestructibleMapObject.cs
// Prior real C# source: none
// --------------------------------

// Map.DestructibleMapObject$$.ctor
// il2cpp: void Map_DestructibleMapObject___ctor (Map_DestructibleMapObject_o* __this, Map_MapObject_o* mapObject, UnityEngine_Bounds_o bounds, float size, System_Collections_Generic_List_MeshFilter__o* filters, System_Collections_Generic_List_BatchSlice__o* slices, bool hideOnly, const MethodInfo* method);
// 0x181e8a880

void Map_DestructibleMapObject___ctor
               (Map_DestructibleMapObject_o *__this,Map_MapObject_o *mapObject,UnityEngine_Bounds_o *bounds,
               float size,System_Collections_Generic_List_MeshFilter__o *filters,
               System_Collections_Generic_List_BatchSlice__o *slices,bool hideOnly,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Collider_array *value;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Transform_o *value_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value_01;
  Map_BatchSlice_array *value_02;
  
  if (Il2CppMethodInitialized_18434503d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BatchSlice_ToArray)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MeshFilter_ToArray)
    ;
    Il2CppMethodInitialized_18434503d = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._hideOnly = hideOnly;
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (mapObject->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    (__this->fields).Id = (pMVar2->fields).Id;
    __this_00 = (mapObject->fields).GameObject;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      value_00 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      (__this->fields).Root = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Root,value_00);
      fVar4 = (bounds->fields).m_Center.fields.x;
      fVar5 = (bounds->fields).m_Center.fields.y;
      uVar3 = *(undefined8 *)&(bounds->fields).m_Center.fields.z;
      fVar6 = (bounds->fields).m_Extents.fields.y;
      fVar7 = (bounds->fields).m_Extents.fields.z;
      (__this->fields).Size = size;
      pUVar1 = &(__this->fields).Bounds;
      (pUVar1->fields).m_Center.fields.x = fVar4;
      (pUVar1->fields).m_Center.fields.y = fVar5;
      *(undefined8 *)&(__this->fields).Bounds.fields.m_Center.fields.z = uVar3;
      pUVar1 = &(__this->fields).Bounds;
      (pUVar1->fields).m_Extents.fields.y = fVar6;
      (pUVar1->fields).m_Extents.fields.z = fVar7;
      if (filters != (System_Collections_Generic_List_MeshFilter__o *)0x0) {
        value_01 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                             ((System_Collections_Generic_List_T__o *)filters,
                              (MethodInfo_929FE0 *)
                              MethodInfo_System_Collections_Generic_List_MeshFilter_ToArray);
        (__this->fields).Filters = (UnityEngine_MeshFilter_array *)value_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Filters,value_01);
        value = (mapObject->fields).colliderCache;
        (__this->fields).Colliders = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Colliders,value);
        if (slices != (System_Collections_Generic_List_BatchSlice__o *)0x0) {
          value_02 = (Map_BatchSlice_array *)
                     System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                               ((System_Collections_Generic_List_T__o *)slices,
                                (MethodInfo_929FE0 *)
                                MethodInfo_System_Collections_Generic_List_BatchSlice_ToArray);
          (__this->fields)._slices = value_02;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._slices,value_02);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$Create
// il2cpp: Map_DestructibleMapObject_o* Map_DestructibleMapObject__Create (Map_MapObject_o* mapObject, System_Collections_Generic_Dictionary_Renderer__BatchSlice__o* batchSlices, float maxSize, const MethodInfo* method);
// 0x181e88d90

Map_DestructibleMapObject_o *
Map_DestructibleMapObject__Create
          (Map_MapObject_o *mapObject,
          System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *batchSlices,float maxSize,
          MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  Map_MapScriptSceneObject_o *script;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *__this;
  System_String_o *name;
  UnityEngine_Collider_array *pUVar5;
  System_Collections_Generic_List_MapScriptComponent__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_MeshFilter_o *__this_00;
  Map_MapScriptBaseObject_o *pMVar8;
  float *pfVar9;
  System_Collections_Generic_Dictionary_BindingId__DataBindingManager_BindingData__o *pSVar10;
  System_Collections_Generic_List_DataBindingManager_BindingData__o *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  bool bVar23;
  UnityEngine_Object_o *pUVar24;
  UnityEngine_Light_o *x;
  System_Collections_Generic_List_MeshFilter__o *__this_01;
  System_Collections_Generic_List_BatchSlice__o *__this_02;
  System_Object_array *pSVar25;
  UnityEngine_Transform_o *pUVar26;
  Map_MapObject_o *pMVar27;
  UnityEngine_Mesh_o *__this_03;
  UnityEngine_Bounds_o *pUVar28;
  UnityEngine_Matrix4x4_o *pUVar29;
  Map_DestructibleMapObject_o *__this_04;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  Map_BatchSlice_array *value_00;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  UnityEngine_Renderer_o *local_168 [2];
  System_Collections_Generic_Dictionary_BindingId__DataBindingManager_BindingData__o *local_158;
  System_Collections_Generic_List_DataBindingManager_BindingData__o *pSStack_150;
  undefined8 local_148;
  UnityEngine_Bounds_o local_138;
  Map_MapScriptSceneObject_o *local_120;
  UnityEngine_UIElements_DataBindingManager_BindingDataCollection_o local_118;
  UnityEngine_Matrix4x4_Fields local_108;
  UnityEngine_Bounds_o local_c8 [6];
  
  if (Il2CppMethodInitialized_18434503e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshRenderer)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Animator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Light);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Terrain);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MeshFilter_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BatchSlice_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BatchSlice_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MeshFilter_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BatchSlice);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434503e = '\x01';
  }
  local_168[0] = (UnityEngine_Renderer_o *)0x0;
  local_118.fields.m_BindingPerId =
       (System_Collections_Generic_Dictionary_BindingId__DataBindingManager_BindingData__o *)0x0;
  local_118.fields.m_Bindings = (System_Collections_Generic_List_DataBindingManager_BindingData__o *)0x0;
  if (mapObject != (Map_MapObject_o *)0x0) {
    script = (Map_MapScriptSceneObject_o *)(mapObject->fields).ScriptObject;
    if (script == (Map_MapScriptSceneObject_o *)0x0) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    bVar2 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if ((script->klass->_2).typeHierarchyDepth < bVar2) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    if ((script->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    if ((mapObject->fields).RuntimeCreated != false) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    if ((script->fields).Active == false) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    if ((script->fields).Visible == false) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    pSVar4 = (script->fields).CollideMode;
    local_120 = script;
    if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    }
    bVar22 = System_String__op_Inequality
                       (pSVar4,TypeInfo_Map_MapObjectCollideMode->static_fields->Physical,(MethodInfo *)0x0);
    if (bVar22) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
    }
    bVar22 = Map_DestructibleMapObject__HasOnlyDecorativeComponents(script,(MethodInfo *)0x0);
    if (!bVar22) {
      return (Map_DestructibleMapObject_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
    if (__this != (System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *)0x0) {
      bVar22 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                          (Il2CppObject *)mapObject,
                          (MethodInfo_1455450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey
                         );
      if (bVar22) {
        return (Map_DestructibleMapObject_o *)0x0;
      }
      pSVar4 = (script->fields).Asset;
      name = (script->fields).Name;
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
      }
      bVar22 = Map_DestructibleMapObject__IsAllowedAsset(pSVar4,name,(MethodInfo *)0x0);
      if (!bVar22) {
        return (Map_DestructibleMapObject_o *)0x0;
      }
      pUVar5 = (mapObject->fields).colliderCache;
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
      }
      if (Il2CppMethodInitialized_184345045 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184345045 = '\x01';
      }
      if (pUVar5 != (UnityEngine_Collider_array *)0x0) {
        uVar30 = 0;
        do {
          if ((int)pUVar5->max_length <= (int)uVar30) {
            return (Map_DestructibleMapObject_o *)0x0;
          }
          if ((uint)pUVar5->max_length <= uVar30) goto label_181e897f5;
          pUVar24 = (UnityEngine_Object_o *)pUVar5->m_Items[(int)uVar30];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar22 = UnityEngine_Object__op_Inequality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar22) {
            if (pUVar24 == (UnityEngine_Object_o *)0x0) break;
            bVar22 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)pUVar24,(MethodInfo *)0x0);
            if ((bVar22) &&
               (bVar22 = UnityEngine_Collider__get_isTrigger
                                   ((UnityEngine_Collider_o *)pUVar24,(MethodInfo *)0x0), !bVar22)) {
              pSVar6 = (script->fields).Components;
              if (pSVar6 == (System_Collections_Generic_List_MapScriptComponent__o *)0x0) break;
              iVar3 = (pSVar6->fields)._size;
              if (((script->fields).Networked != false) && (iVar3 < 1)) {
                return (Map_DestructibleMapObject_o *)0x0;
              }
              pUVar7 = (mapObject->fields).GameObject;
              if (pUVar7 == (UnityEngine_GameObject_o *)0x0) break;
              pUVar24 = (UnityEngine_Object_o *)
                        UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                                  (pUVar7,true,
                                   (MethodInfo_6F5110 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Terrain);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar22 = UnityEngine_Object__op_Inequality
                                 (pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar22) {
                return (Map_DestructibleMapObject_o *)0x0;
              }
              pUVar24 = (UnityEngine_Object_o *)
                        UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                                  (pUVar7,true,
                                   (MethodInfo_6F5110 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Animator);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar22 = UnityEngine_Object__op_Inequality
                                 (pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar22) {
                return (Map_DestructibleMapObject_o *)0x0;
              }
              if (iVar3 < 1) {
                pUVar24 = (UnityEngine_Object_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                                    (pUVar7,true,
                                     (MethodInfo_6F5110 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Rigidbody);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar22 = UnityEngine_Object__op_Inequality
                                   (pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar22) {
                  return (Map_DestructibleMapObject_o *)0x0;
                }
              }
              pUVar24 = (UnityEngine_Object_o *)
                        UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                                  (pUVar7,true,
                                   (MethodInfo_6F5110 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer
                                  );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar22 = UnityEngine_Object__op_Inequality
                                 (pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar22) {
                return (Map_DestructibleMapObject_o *)0x0;
              }
              x = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                            (pUVar7,true,
                             (MethodInfo_6F5110 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Light);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar22 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar22) {
                return (Map_DestructibleMapObject_o *)0x0;
              }
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeshFilter);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                         (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MeshFilter_ctor);
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BatchSlice);
              System_Collections_Generic_List_BatchSlice____ctor
                        ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                         (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BatchSlice_ctor);
              local_138.fields.m_Extents.fields.y = 0.0;
              local_138.fields.m_Extents.fields.z = 0.0;
              local_138.fields.m_Center.fields.x = 0.0;
              local_138.fields.m_Center.fields.y = 0.0;
              local_138.fields.m_Center.fields.z = 0.0;
              local_138.fields.m_Extents.fields.x = 0.0;
              pSVar25 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                                  (pUVar7,(MethodInfo_6F5810 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter
                                  );
              if (pSVar25 == (System_Object_array *)0x0) break;
              bVar22 = false;
              uVar30 = 0;
              fVar34 = 0.0;
              fVar35 = 0.0;
              fVar36 = 0.0;
              fVar37 = 0.0;
              goto label_181e89330;
            }
          }
          uVar30 = uVar30 + 1;
        } while( true );
      }
    }
  }
label_181e897ef:
  ThrowNullReferenceException();
label_181e89330:
  if ((int)uVar30 < (int)pSVar25->max_length) {
    if ((uint)pSVar25->max_length <= uVar30) {
label_181e897f5:
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (UnityEngine_MeshFilter_o *)pSVar25->m_Items[(int)uVar30];
    if (__this_00 == (UnityEngine_MeshFilter_o *)0x0) goto label_181e897ef;
    pUVar24 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar23 = UnityEngine_Object__op_Equality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar23) ||
       (bVar23 = UnityEngine_Component__TryGetComponent_object_
                           ((UnityEngine_Component_o *)__this_00,(Il2CppObject **)local_168,
                            (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_MeshRenderer
                           ), !bVar23)) {
label_181e8941b:
      uVar30 = uVar30 + 1;
    }
    else {
      pUVar26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar27 = Map_MapLoader__FindObjectFromTransform(pUVar26,(MethodInfo *)0x0);
      if (pMVar27 != mapObject) goto label_181e8941b;
      if (batchSlices == (System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *)0x0)
      goto label_181e897ef;
      bVar23 = System_Collections_Generic_Dictionary_object__DataBindingManager_BindingDataCollection___TryGetValue
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)batchSlices,
                          (Il2CppObject *)local_168[0],&local_118,
                          (MethodInfo_14507E0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_TryGetValue);
      if (bVar23) {
        if (__this_02 == (System_Collections_Generic_List_BatchSlice__o *)0x0) goto label_181e897ef;
        local_158 = local_118.fields.m_BindingPerId;
        pSStack_150 = local_118.fields.m_Bindings;
        il2cpp_runtime_helper_180039eb0(__this_02);
      }
      else {
        if (local_168[0] == (UnityEngine_Renderer_o *)0x0) goto label_181e897ef;
        bVar23 = UnityEngine_Renderer__get_enabled(local_168[0],(MethodInfo *)0x0);
        if (!bVar23) goto label_181e8941b;
      }
      __this_03 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_Mesh_o *)0x0) goto label_181e897ef;
      pUVar28 = UnityEngine_Mesh__get_bounds((UnityEngine_Bounds_o *)&local_158,__this_03,(MethodInfo *)0x0);
      pSVar10 = *(System_Collections_Generic_Dictionary_BindingId__DataBindingManager_BindingData__o **)
                 &(pUVar28->fields).m_Center.fields;
      pSVar11 = *(System_Collections_Generic_List_DataBindingManager_BindingData__o **)
                 &(pUVar28->fields).m_Center.fields.z;
      uVar21._0_4_ = (pUVar28->fields).m_Extents.fields.y;
      uVar21._4_4_ = (pUVar28->fields).m_Extents.fields.z;
      pUVar26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar26 == (UnityEngine_Transform_o *)0x0) goto label_181e897ef;
      pUVar29 = UnityEngine_Transform__get_localToWorldMatrix
                          ((UnityEngine_Matrix4x4_o *)&local_108,pUVar26,(MethodInfo *)0x0);
      uVar12._0_4_ = (pUVar29->fields).m00;
      uVar12._4_4_ = (pUVar29->fields).m10;
      uVar13._0_4_ = (pUVar29->fields).m20;
      uVar13._4_4_ = (pUVar29->fields).m30;
      uVar14._0_4_ = (pUVar29->fields).m01;
      uVar14._4_4_ = (pUVar29->fields).m11;
      uVar15._0_4_ = (pUVar29->fields).m21;
      uVar15._4_4_ = (pUVar29->fields).m31;
      uVar16._0_4_ = (pUVar29->fields).m02;
      uVar16._4_4_ = (pUVar29->fields).m12;
      uVar17._0_4_ = (pUVar29->fields).m22;
      uVar17._4_4_ = (pUVar29->fields).m32;
      uVar18._0_4_ = (pUVar29->fields).m03;
      uVar18._4_4_ = (pUVar29->fields).m13;
      uVar19._0_4_ = (pUVar29->fields).m23;
      uVar19._4_4_ = (pUVar29->fields).m33;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      local_158 = pSVar10;
      pSStack_150 = pSVar11;
      local_148 = uVar21;
      local_108._0_8_ = uVar12;
      local_108._8_8_ = uVar13;
      local_108._16_8_ = uVar14;
      local_108._24_8_ = uVar15;
      local_108._32_8_ = uVar16;
      local_108._40_8_ = uVar17;
      local_108._48_8_ = uVar18;
      local_108._56_8_ = uVar19;
      pUVar28 = Utility_Util__TransformBounds
                          (local_c8,(UnityEngine_Bounds_o *)&local_158,(UnityEngine_Matrix4x4_o *)&local_108,
                           (MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_List_MeshFilter__o *)0x0) goto label_181e897ef;
      fVar34 = (pUVar28->fields).m_Center.fields.x;
      fVar35 = (pUVar28->fields).m_Center.fields.y;
      pSVar10 = *(System_Collections_Generic_Dictionary_BindingId__DataBindingManager_BindingData__o **)
                 &(pUVar28->fields).m_Center.fields;
      uVar20._0_4_ = (pUVar28->fields).m_Center.fields.x;
      uVar20._4_4_ = (pUVar28->fields).m_Center.fields.y;
      pfVar9 = &(pUVar28->fields).m_Center.fields.z;
      fVar36 = *pfVar9;
      fVar37 = (pUVar28->fields).m_Extents.fields.x;
      pSVar11 = *(System_Collections_Generic_List_DataBindingManager_BindingData__o **)pfVar9;
      uVar21 = *(undefined8 *)pfVar9;
      uVar1._0_4_ = (pUVar28->fields).m_Extents.fields.y;
      uVar1._4_4_ = (pUVar28->fields).m_Extents.fields.z;
      il2cpp_runtime_helper_180012890(__this_01);
      if (bVar22) {
        local_158 = pSVar10;
        pSStack_150 = pSVar11;
        local_148 = uVar1;
        UnityEngine_Bounds__Encapsulate_1e7c200
                  (&local_138,(UnityEngine_Bounds_o *)&local_158,(MethodInfo *)0x0);
        uVar30 = uVar30 + 1;
        bVar22 = true;
        fVar34 = local_138.fields.m_Center.fields.x;
        fVar35 = local_138.fields.m_Center.fields.y;
        fVar36 = local_138.fields.m_Center.fields.z;
        fVar37 = local_138.fields.m_Extents.fields.x;
      }
      else {
        uVar30 = uVar30 + 1;
        bVar22 = true;
        local_138.fields.m_Center.fields._0_8_ = uVar20;
        local_138.fields._8_8_ = uVar21;
        local_138.fields.m_Extents.fields._4_8_ = uVar1;
      }
    }
    goto label_181e89330;
  }
  if (bVar22) {
    fVar33 = fVar37 + fVar37;
    if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
    }
    if ((uint)ABS(fVar33) < 0x7f800000) {
      fVar31 = local_138.fields.m_Extents.fields.y;
      fVar38 = fVar31 + fVar31;
      if ((uint)ABS(fVar38) < 0x7f800000) {
        fVar32 = local_138.fields.m_Extents.fields.z + local_138.fields.m_Extents.fields.z;
        if (((uint)ABS(fVar32) < 0x7f800000) &&
           (0.0001 <= fVar38 * fVar38 + fVar33 * fVar33 + fVar32 * fVar32)) {
          if (fVar32 <= fVar33) {
            fVar33 = fVar32;
          }
          if ((fVar33 < 8.0) || (fVar33 * 0.15 < fVar38)) {
            fVar33 = fVar31 + fVar31;
            if (fVar31 + fVar31 <= local_138.fields.m_Extents.fields.z + local_138.fields.m_Extents.fields.z)
            {
              fVar33 = local_138.fields.m_Extents.fields.z + local_138.fields.m_Extents.fields.z;
            }
            fVar31 = fVar37 + fVar37;
            if (fVar37 + fVar37 <= fVar33) {
              fVar31 = fVar33;
            }
            if (fVar31 <= maxSize) {
              bVar22 = (local_120->fields).Networked;
              __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
              if (Il2CppMethodInitialized_18434503d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_BatchSlice_ToArray);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_MeshFilter_ToArray);
                Il2CppMethodInitialized_18434503d = '\x01';
              }
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_04,
                         (MethodInfo *)0x0);
              uVar21 = local_138.fields.m_Extents.fields._4_8_;
              (__this_04->fields)._hideOnly = bVar22;
              pMVar8 = (mapObject->fields).ScriptObject;
              if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
                (__this_04->fields).Id = (pMVar8->fields).Id;
                pUVar7 = (mapObject->fields).GameObject;
                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar26 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                  (__this_04->fields).Root = pUVar26;
                  Il2CppCodeGenWriteBarrier(&(__this_04->fields).Root,pUVar26);
                  uVar12 = local_138.fields.m_Extents.fields._4_8_;
                  (__this_04->fields).Size = fVar31;
                  (__this_04->fields).Bounds.fields.m_Center.fields.x = fVar34;
                  (__this_04->fields).Bounds.fields.m_Center.fields.y = fVar35;
                  (__this_04->fields).Bounds.fields.m_Center.fields.z = fVar36;
                  (__this_04->fields).Bounds.fields.m_Extents.fields.x = fVar37;
                  pUVar28 = &(__this_04->fields).Bounds;
                  local_138.fields.m_Extents.fields.y = (float)uVar21;
                  local_138.fields.m_Extents.fields.z = SUB84(uVar21,4);
                  (pUVar28->fields).m_Extents.fields.y = local_138.fields.m_Extents.fields.y;
                  (pUVar28->fields).m_Extents.fields.z = local_138.fields.m_Extents.fields.z;
                  local_138.fields.m_Extents.fields._4_8_ = uVar12;
                  if (__this_01 != (System_Collections_Generic_List_MeshFilter__o *)0x0) {
                    value = System_Collections_Generic_List_object___ToArray
                                      ((System_Collections_Generic_List_T__o *)__this_01,
                                       (MethodInfo_929FE0 *)
                                       MethodInfo_System_Collections_Generic_List_MeshFilter_ToArray);
                    (__this_04->fields).Filters = (UnityEngine_MeshFilter_array *)value;
                    Il2CppCodeGenWriteBarrier(&(__this_04->fields).Filters,value);
                    pUVar5 = (mapObject->fields).colliderCache;
                    (__this_04->fields).Colliders = pUVar5;
                    Il2CppCodeGenWriteBarrier(&(__this_04->fields).Colliders,pUVar5);
                    if (__this_02 != (System_Collections_Generic_List_BatchSlice__o *)0x0) {
                      value_00 = (Map_BatchSlice_array *)
                                 System_Collections_Generic_List_BatchSlice___ToArray
                                           ((System_Collections_Generic_List_T__o *)__this_02,
                                            (MethodInfo_929FE0 *)
                                            MethodInfo_System_Collections_Generic_List_BatchSlice_ToArray);
                      (__this_04->fields)._slices = value_00;
                      Il2CppCodeGenWriteBarrier(&(__this_04->fields)._slices,value_00);
                      return __this_04;
                    }
                  }
                }
              }
              goto label_181e897ef;
            }
          }
        }
      }
    }
  }
  return (Map_DestructibleMapObject_o *)0x0;
}


// Map.DestructibleMapObject$$Destroy
// il2cpp: void Map_DestructibleMapObject__Destroy (Map_DestructibleMapObject_o* __this, const MethodInfo* method);
// 0x181e89800
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e89b1e: nop 
// asm:   0x181e89b9b: mov r14, qword ptr [rsp + 0x70]
// asm:   0x181e89ba0: mov rdi, qword ptr [rsp + 0x68]
// asm:   0x181e89ba5: mov rbp, qword ptr [rsp + 0x60]
// asm:   0x181e89baa: movaps xmm6, xmmword ptr [rsp + 0x40]

void Map_DestructibleMapObject__Destroy(Map_DestructibleMapObject_o *__this,MethodInfo *method)

{
  Map_BatchSlice_o MVar1;
  UnityEngine_Transform_o *pUVar2;
  Map_BatchSlice_array *pMVar3;
  bool bVar4;
  UnityEngine_GameObject_o *__this_00;
  System_Int32_array *pSVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  uint32_t length;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_18434503f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434503f = '\x01';
  }
  pUVar2 = (__this->fields).Root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((__this->fields)._hideOnly == false) {
      pUVar2 = (__this->fields).Root;
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_181e89bc0;
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
    else {
      if (Il2CppMethodInitialized_184345040 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rigidbody);
        Il2CppMethodInitialized_184345040 = '\x01';
      }
      pUVar2 = (__this->fields).Root;
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__665370
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_665370 *)
                              MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer),
         pSVar6 == (System_Object_array *)0x0)) goto label_181e89bc0;
      for (uVar7 = 0; (int)uVar7 < (int)pSVar6->max_length; uVar7 = uVar7 + 1) {
        if ((uint)pSVar6->max_length <= uVar7) goto label_181e89bba;
        if ((UnityEngine_Renderer_o *)pSVar6->m_Items[(int)uVar7] == (UnityEngine_Renderer_o *)0x0)
        goto label_181e89bc0;
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)pSVar6->m_Items[(int)uVar7],false,(MethodInfo *)0x0);
      }
      pUVar2 = (__this->fields).Root;
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__665370
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_665370 *)
                              MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider),
         pSVar6 == (System_Object_array *)0x0)) goto label_181e89bc0;
      for (uVar7 = 0; (int)uVar7 < (int)pSVar6->max_length; uVar7 = uVar7 + 1) {
        if ((uint)pSVar6->max_length <= uVar7) goto label_181e89bba;
        if ((UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar7] == (UnityEngine_Collider_o *)0x0)
        goto label_181e89bc0;
        UnityEngine_Collider__set_enabled
                  ((UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar7],false,(MethodInfo *)0x0);
      }
      pUVar2 = (__this->fields).Root;
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__665370
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_665370 *)
                              MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rigidbody),
         pSVar6 == (System_Object_array *)0x0)) goto label_181e89bc0;
      for (uVar7 = 0; (int)uVar7 < (int)pSVar6->max_length; uVar7 = uVar7 + 1) {
        if ((uint)pSVar6->max_length <= uVar7) goto label_181e89bba;
        if ((UnityEngine_Rigidbody_o *)pSVar6->m_Items[(int)uVar7] == (UnityEngine_Rigidbody_o *)0x0)
        goto label_181e89bc0;
        UnityEngine_Rigidbody__set_isKinematic
                  ((UnityEngine_Rigidbody_o *)pSVar6->m_Items[(int)uVar7],true,(MethodInfo *)0x0);
      }
    }
    pMVar3 = (__this->fields)._slices;
    if (pMVar3 == (Map_BatchSlice_array *)0x0) {
label_181e89bc0:
      ThrowNullReferenceException();
    }
    for (uVar7 = 0; (int)uVar7 < (int)pMVar3->max_length; uVar7 = uVar7 + 1) {
      if ((uint)pMVar3->max_length <= uVar7) {
label_181e89bba:
        ThrowIndexOutOfRangeException();
      }
      MVar1.fields = pMVar3->m_Items[(int)uVar7].fields;
      x = (UnityEngine_Object_o *)MVar1.fields.Mesh;
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
      }
      if (Il2CppMethodInitialized_184345042 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Mesh_SetIndexBufferData_int);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184345042 = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar4) && (length = MVar1.fields.Count, 0 < (int)length)) {
        if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
        }
        pSVar5 = TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_181e89bc0;
        if ((int)pSVar5->max_length < (int)length) {
          pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,length);
          if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
          }
          TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices = pSVar5;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices,pSVar5);
        }
        if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
        }
        if (x == (UnityEngine_Object_o *)0x0) goto label_181e89bc0;
        UnityEngine_Mesh__SetIndexBufferData_int_
                  ((UnityEngine_Mesh_o *)x,
                   TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices,0,MVar1.fields.Start,
                   length,9,(MethodInfo_731620 *)MethodInfo_UnityEngine_Mesh_SetIndexBufferData_int);
      }
    }
  }
  return;
}


// Map.DestructibleMapObject$$Hide
// il2cpp: void Map_DestructibleMapObject__Hide (Map_DestructibleMapObject_o* __this, const MethodInfo* method);
// 0x181e89fd0

void Map_DestructibleMapObject__Hide(Map_DestructibleMapObject_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184345040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rigidbody);
    Il2CppMethodInitialized_184345040 = '\x01';
  }
  pUVar1 = (__this->fields).Root;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer
                       );
    if (pSVar2 != (System_Object_array *)0x0) {
      for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pSVar2->max_length <= uVar3) goto label_181e8a117;
        if ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0)
        goto label_181e8a11d;
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3],false,(MethodInfo *)0x0);
      }
      pUVar1 = (__this->fields).Root;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__665370
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_665370 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
        if (pSVar2 != (System_Object_array *)0x0) {
          for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
            if ((uint)pSVar2->max_length <= uVar3) goto label_181e8a117;
            if ((UnityEngine_Collider_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Collider_o *)0x0)
            goto label_181e8a11d;
            UnityEngine_Collider__set_enabled
                      ((UnityEngine_Collider_o *)pSVar2->m_Items[(int)uVar3],false,(MethodInfo *)0x0);
          }
          pUVar1 = (__this->fields).Root;
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__665370
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_665370 *)
                                MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rigidbody);
            if (pSVar2 != (System_Object_array *)0x0) {
              uVar3 = 0;
              do {
                if ((int)pSVar2->max_length <= (int)uVar3) {
                  return;
                }
                if ((uint)pSVar2->max_length <= uVar3) {
label_181e8a117:
                  ThrowIndexOutOfRangeException();
                }
                if ((UnityEngine_Rigidbody_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Rigidbody_o *)0x0)
                break;
                UnityEngine_Rigidbody__set_isKinematic
                          ((UnityEngine_Rigidbody_o *)pSVar2->m_Items[(int)uVar3],true,(MethodInfo *)0x0);
                uVar3 = uVar3 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
label_181e8a11d:
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$Contains
// il2cpp: bool Map_DestructibleMapObject__Contains (Map_DestructibleMapObject_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x181e88d00

bool Map_DestructibleMapObject__Contains
               (Map_DestructibleMapObject_o *__this,UnityEngine_Transform_o *transform,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345041 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)transform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (transform != (UnityEngine_Transform_o *)0x0) {
    bVar1 = UnityEngine_Transform__IsChildOf(transform,(__this->fields).Root,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$HideSlice
// il2cpp: void Map_DestructibleMapObject__HideSlice (Map_BatchSlice_o slice, const MethodInfo* method);
// 0x181e89e50

void Map_DestructibleMapObject__HideSlice(Map_BatchSlice_o *slice,MethodInfo *method)

{
  uint32_t length;
  UnityEngine_Mesh_o *__this;
  bool bVar1;
  System_Int32_array *pSVar2;
  
  if (Il2CppMethodInitialized_184345042 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Mesh_SetIndexBufferData_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345042 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)(slice->fields).Mesh,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((!bVar1) && (0 < (slice->fields).Count)) {
    if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
    }
    pSVar2 = TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices;
    if (pSVar2 != (System_Int32_array *)0x0) {
      length = (slice->fields).Count;
      if ((int)pSVar2->max_length < (int)length) {
        pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,length);
        if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
        }
        TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices = pSVar2;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices,pSVar2);
      }
      __this = (slice->fields).Mesh;
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
      }
      if (__this != (UnityEngine_Mesh_o *)0x0) {
        UnityEngine_Mesh__SetIndexBufferData_int_
                  (__this,TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices,0,
                   (slice->fields).Start,(slice->fields).Count,9,
                   (MethodInfo_731620 *)MethodInfo_UnityEngine_Mesh_SetIndexBufferData_int);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Map.DestructibleMapObject$$IsAllowedAsset
// il2cpp: bool Map_DestructibleMapObject__IsAllowedAsset (System_String_o* asset, System_String_o* name, const MethodInfo* method);
// 0x181e8a130
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8a209: nop dword ptr [rax]
// asm:   0x181e8a33d: nop dword ptr [rax]

bool Map_DestructibleMapObject__IsAllowedAsset
               (System_String_o *asset,System_String_o *name,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Char_array *pSVar5;
  System_String_array *pSVar6;
  uint uVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_184345043 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_76B351CF70EE5EC7F1B83F392A5ECF88567129B80AC8399061D9BA3F1DB3DDD1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_E0F413881BCD21EC94E61EDD65B3D46651F8ADE885120BFB3127C2DC4C02078A
              );
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184345043 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(asset,(MethodInfo *)0x0);
  if ((bVar3) || (bVar3 = System_String__op_Equality(asset,"None",(MethodInfo *)0x0), bVar3)) {
    return false;
  }
  if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
  }
  pSVar6 = TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedAssetPrefixes;
  if (pSVar6 != (System_String_array *)0x0) {
    for (uVar7 = 0; (int)uVar7 < (int)pSVar6->max_length; uVar7 = uVar7 + 1) {
      if ((uint)pSVar6->max_length <= uVar7) goto label_181e8a396;
      if (asset == (System_String_o *)0x0) goto label_181e8a39c;
      bVar3 = System_String__StartsWith_19722c0(asset,pSVar6->m_Items[(int)uVar7],5,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    pSVar4 = System_String__Concat_1969b70(asset,"/",name,(MethodInfo *)0x0);
    pSVar5 = (System_Char_array *)SZArrayNew(TypeInfo_char_array,4);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
              ((System_Array_o *)pSVar5,
               FieldRva_PrivateImplementationDetails_E0F413881BCD21EC94E61EDD65B3D46651F8ADE885120BFB3127C2DC4C02078A
               ,(MethodInfo *)0x0);
    if ((pSVar4 != (System_String_o *)0x0) &&
       (pSVar6 = System_String__Split_1972010(pSVar4,pSVar5,(MethodInfo *)0x0),
       pSVar6 != (System_String_array *)0x0)) {
      uVar7 = 0;
      do {
        if ((int)pSVar6->max_length <= (int)uVar7) {
          return true;
        }
        if ((uint)pSVar6->max_length <= uVar7) {
label_181e8a396:
          ThrowIndexOutOfRangeException();
        }
        pSVar4 = pSVar6->m_Items[(int)uVar7];
        pSVar5 = (System_Char_array *)SZArrayNew(TypeInfo_char_array,10);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                  ((System_Array_o *)pSVar5,
                   FieldRva_PrivateImplementationDetails_76B351CF70EE5EC7F1B83F392A5ECF88567129B80AC8399061D9BA3F1DB3DDD1
                   ,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) break;
        pSVar4 = System_String__TrimEnd_1973450(pSVar4,pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
        }
        pSVar2 = TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedNames;
        uVar8 = 0;
        if (pSVar2 == (System_String_array *)0x0) break;
        for (; uVar1 = (uint)pSVar2->max_length, (int)uVar8 < (int)uVar1; uVar8 = uVar8 + 1) {
          if (uVar1 <= uVar8) goto label_181e8a396;
          if (pSVar4 == (System_String_o *)0x0) goto label_181e8a39c;
          bVar3 = System_String__Equals_196c240(pSVar4,pSVar2->m_Items[(int)uVar8],5,(MethodInfo *)0x0);
          if (bVar3) {
            return false;
          }
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
  }
label_181e8a39c:
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$HasOnlyDecorativeComponents
// il2cpp: bool Map_DestructibleMapObject__HasOnlyDecorativeComponents (Map_MapScriptSceneObject_o* script, const MethodInfo* method);
// 0x181e89bd0
// eh: try 0x181e89ca0..0x181e89d6d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e89d33: mov rdx, qword ptr [rip + 0x2201cce]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x181e89d3a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e89d3f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e89d44: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e89d49: test rcx, rcx
// asm:   0x181e89d4c: jne 0x181e89d6d
// asm:   0x181e89d6d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Map_DestructibleMapObject__HasOnlyDecorativeComponents
               (Map_MapScriptSceneObject_o *script,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptComponent__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184345044 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
    Il2CppMethodInitialized_184345044 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((script == (Map_MapScriptSceneObject_o *)0x0) ||
     (__this = (script->fields).Components,
     __this == (System_Collections_Generic_List_MapScriptComponent__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_T__o *)__this,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator)
  ;
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    pIVar1 = local_28.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
      return true;
    }
    if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_Map_DestructibleMapObject->static_fields->DecorativeComponents;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)pIVar1[1].klass,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  } while (bVar2);
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
  return false;
}


// Map.DestructibleMapObject$$HasSolidCollider
// il2cpp: bool Map_DestructibleMapObject__HasSolidCollider (UnityEngine_Collider_array* colliders, const MethodInfo* method);
// 0x181e89d80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e89dbc: nop dword ptr [rax]

bool Map_DestructibleMapObject__HasSolidCollider(UnityEngine_Collider_array *colliders,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345045 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345045 = '\x01';
  }
  if (colliders != (UnityEngine_Collider_array *)0x0) {
    uVar2 = 0;
    do {
      if ((int)colliders->max_length <= (int)uVar2) {
        return false;
      }
      if ((uint)colliders->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)colliders->m_Items[(int)uVar2];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) break;
        bVar1 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = UnityEngine_Collider__get_isTrigger((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
          if (!bVar1) {
            return true;
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$IsAllowedShape
// il2cpp: bool Map_DestructibleMapObject__IsAllowedShape (UnityEngine_Vector3_o size, const MethodInfo* method);
// 0x181e8a3b0

bool Map_DestructibleMapObject__IsAllowedShape(UnityEngine_Vector3_o *size,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  if ((((0x7f7fffff < (uint)ABS((size->fields).x)) || (0x7f7fffff < (uint)ABS((size->fields).y))) ||
      (0x7f7fffff < (uint)ABS((size->fields).z))) ||
     (fVar1 = (size->fields).x, fVar2 = (size->fields).y, fVar3 = (size->fields).z,
     fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 < 0.0001)) {
    return false;
  }
  fVar1 = (size->fields).z;
  pfVar4 = &(size->fields).z;
  if ((size->fields).x <= fVar1 && fVar1 != (size->fields).x) {
    pfVar4 = (float *)size;
  }
  if (*pfVar4 < 8.0) {
    return true;
  }
  return *pfVar4 * 0.15 < (size->fields).y;
}


// Map.DestructibleMapObject$$.cctor
// il2cpp: void Map_DestructibleMapObject___cctor (const MethodInfo* method);
// 0x181e8a450

void Map_DestructibleMapObject___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_HashSet_string__o *__this;
  System_Int32_array *value;
  
  if (Il2CppMethodInitialized_184345046 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Road");
    il2cpp_codegen_initialize_runtime_metadata(&"MovePingPong");
    il2cpp_codegen_initialize_runtime_metadata(&"FX/");
    il2cpp_codegen_initialize_runtime_metadata(&"SignalArcMover");
    il2cpp_codegen_initialize_runtime_metadata(&"SignalMover");
    il2cpp_codegen_initialize_runtime_metadata(&"Bridge");
    il2cpp_codegen_initialize_runtime_metadata(&"Ground");
    il2cpp_codegen_initialize_runtime_metadata(&"Terrain/");
    il2cpp_codegen_initialize_runtime_metadata(&"Floor");
    il2cpp_codegen_initialize_runtime_metadata(&"Landscape");
    il2cpp_codegen_initialize_runtime_metadata(&"EyeTracker");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact/");
    il2cpp_codegen_initialize_runtime_metadata(&"Bell");
    il2cpp_codegen_initialize_runtime_metadata(&"Terrain");
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/NavMesh");
    il2cpp_codegen_initialize_runtime_metadata(&"Background/");
    il2cpp_codegen_initialize_runtime_metadata(&"SignalRotator");
    Il2CppMethodInitialized_184345046 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "Terrain/";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "Terrain/";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "Background/";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "Background/";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar1 = "FX/";
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "FX/";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
          pSVar1 = "Interact/";
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = "Interact/";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
            pSVar1 = "Geometry/NavMesh";
            if (4 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[4] = "Geometry/NavMesh";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
              TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedAssetPrefixes = pSVar2;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedAssetPrefixes,pSVar2);
              pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
              pSVar1 = "Ground";
              if (pSVar2 == (System_String_array *)0x0) goto label_181e8a86b;
              if ((int)pSVar2->max_length != 0) {
                pSVar2->m_Items[0] = "Ground";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                pSVar1 = "Terrain";
                if (1 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[1] = "Terrain";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                  pSVar1 = "Landscape";
                  if (2 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[2] = "Landscape";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                    pSVar1 = "Floor";
                    if (3 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[3] = "Floor";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                      pSVar1 = "Road";
                      if (4 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[4] = "Road";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
                        pSVar1 = "Bridge";
                        if (5 < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[5] = "Bridge";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                          TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedNames = pSVar2;
                          Il2CppCodeGenWriteBarrier
                                    (&TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedNames,pSVar2
                                    );
                          __this = il2cpp_codegen_object_new
                                             ((Il2CppClass *)
                                              TypeInfo_System_Collections_Generic_HashSet_string);
                          System_Collections_Generic_HashSet_object____ctor
                                    ((System_Collections_Generic_HashSet_object__o *)__this,
                                     (MethodInfo_176CE80 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_ctor);
                          if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
                            System_Collections_Generic_HashSet_object___Add
                                      ((System_Collections_Generic_HashSet_object__o *)__this,
                                       (Il2CppObject *)"Bell",
                                       (MethodInfo_1757CE0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Add);
                            System_Collections_Generic_HashSet_object___Add
                                      ((System_Collections_Generic_HashSet_object__o *)__this,
                                       (Il2CppObject *)"MovePingPong",
                                       (MethodInfo_1757CE0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Add);
                            System_Collections_Generic_HashSet_object___Add
                                      ((System_Collections_Generic_HashSet_object__o *)__this,
                                       (Il2CppObject *)"SignalRotator",
                                       (MethodInfo_1757CE0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Add);
                            System_Collections_Generic_HashSet_object___Add
                                      ((System_Collections_Generic_HashSet_object__o *)__this,
                                       (Il2CppObject *)"SignalMover",
                                       (MethodInfo_1757CE0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Add);
                            System_Collections_Generic_HashSet_object___Add
                                      ((System_Collections_Generic_HashSet_object__o *)__this,
                                       (Il2CppObject *)"SignalArcMover",
                                       (MethodInfo_1757CE0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Add);
                            System_Collections_Generic_HashSet_object___Add
                                      ((System_Collections_Generic_HashSet_object__o *)__this,
                                       (Il2CppObject *)"EyeTracker",
                                       (MethodInfo_1757CE0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Add);
                            TypeInfo_Map_DestructibleMapObject->static_fields->DecorativeComponents = __this;
                            Il2CppCodeGenWriteBarrier
                                      (&TypeInfo_Map_DestructibleMapObject->static_fields->
                                        DecorativeComponents,__this);
                            value = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
                            TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices = value;
                            Il2CppCodeGenWriteBarrier
                                      (&TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices,
                                       value);
                            return;
                          }
                          goto label_181e8a86b;
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
label_181e8a86b:
  ThrowNullReferenceException();
}


