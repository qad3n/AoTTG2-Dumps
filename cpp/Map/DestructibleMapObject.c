// Type: Map.DestructibleMapObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/DestructibleMapObject.cs
// Prior real C# source: none
// --------------------------------

// Map.DestructibleMapObject$$.ctor
// il2cpp: void Map_DestructibleMapObject___ctor (Map_DestructibleMapObject_o* __this, Map_MapObject_o* mapObject, UnityEngine_Bounds_o bounds, float size, System_Collections_Generic_List_MeshFilter__o* filters, System_Collections_Generic_List_BatchSlice__o* slices, bool hideOnly, const MethodInfo* method);
// 0x5977d40

void Map_DestructibleMapObject___ctor
               (Map_DestructibleMapObject_o *__this,Map_MapObject_o *mapObject,UnityEngine_Bounds_o bounds,
               float size,System_Collections_Generic_List_MeshFilter__o *filters,
               System_Collections_Generic_List_BatchSlice__o *slices,bool hideOnly,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Bounds_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_MeshFilter_array *pUVar4;
  Map_BatchSlice_array *pMVar5;
  
  if (Il2CppMethodInitialized_075459d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BatchSlice_ToArray)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MeshFilter_ToArray)
    ;
    Il2CppMethodInitialized_075459d1 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._hideOnly = hideOnly;
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (mapObject->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    (__this->fields).Id = (pMVar1->fields).Id;
    __this_00 = (mapObject->fields).GameObject;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      (__this->fields).Root = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Root);
      pUVar2 = &(__this->fields).Bounds;
      (pUVar2->fields).m_Extents.fields.y = bounds.fields.m_Extents.fields.y;
      (pUVar2->fields).m_Extents.fields.z = bounds.fields.m_Extents.fields.z;
      pUVar2 = &(__this->fields).Bounds;
      (pUVar2->fields).m_Center.fields.x = bounds.fields.m_Center.fields.x;
      (pUVar2->fields).m_Center.fields.y = bounds.fields.m_Center.fields.y;
      *(undefined8 *)&(__this->fields).Bounds.fields.m_Center.fields.z = bounds.fields._8_8_;
      (__this->fields).Size = size;
      if (filters != (System_Collections_Generic_List_MeshFilter__o *)0x0) {
        pUVar4 = (UnityEngine_MeshFilter_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)filters,
                            (MethodInfo_395F5A0 *)
                            MethodInfo_System_Collections_Generic_List_MeshFilter_ToArray);
        (__this->fields).Filters = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Filters);
        (__this->fields).Colliders = (mapObject->fields).colliderCache;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Colliders);
        if (slices != (System_Collections_Generic_List_BatchSlice__o *)0x0) {
          pMVar5 = System_Collections_Generic_List_BatchSlice___ToArray
                             (slices,(MethodInfo_51D7BE0 *)
                                     MethodInfo_System_Collections_Generic_List_BatchSlice_ToArray);
          (__this->fields)._slices = pMVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._slices);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$Create
// il2cpp: Map_DestructibleMapObject_o* Map_DestructibleMapObject__Create (Map_MapObject_o* mapObject, System_Collections_Generic_Dictionary_Renderer__BatchSlice__o* batchSlices, float maxSize, const MethodInfo* method);
// 0x5977e70
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59787ba: mov rax, qword ptr [rsp + 0xb0]
// asm:   0x59787c2: mov qword ptr [rsp + 0x100], rax
// asm:   0x59787ca: movaps xmm0, xmmword ptr [rsp + 0xa0]
// asm:   0x59787d2: movaps xmmword ptr [rsp + 0xf0], xmm0
// asm:   0x59787da: movzx ebx, byte ptr [rbx + 0x2b]
// asm:   0x59787de: mov rdi, qword ptr [r13]
// asm:   0x59787e2: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x59787e7: mov rbp, rax
// asm:   0x59787ea: mov rax, qword ptr [rsp + 0x100]
// asm:   0x59787f2: mov qword ptr [rsp + 0x10], rax
// asm:   0x59787f7: movaps xmm0, xmmword ptr [rsp + 0xf0]
// asm:   0x59787ff: movups xmmword ptr [rsp], xmm0
// asm:   0x5978803: mov rdi, rbp
// asm:   0x5978806: mov rsi, r15
// asm:   0x5978809: movss xmm0, dword ptr [rsp + 0x60]
// asm:   0x597880f: mov rdx, qword ptr [rsp + 0x90]
// asm:   0x5978817: mov rcx, qword ptr [rsp + 0x88]
// asm:   0x597881f: mov r8d, ebx
// asm:   0x5978822: call 0x5977d40  ; Map_DestructibleMapObject___ctor()
// asm:   0x5978827: jmp 0x597801c

Map_DestructibleMapObject_o *
Map_DestructibleMapObject__Create
          (Map_MapObject_o *mapObject,
          System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *batchSlices,float maxSize,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Map_MapScriptSceneObject_o *script;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Collider_array *colliders;
  System_Collections_Generic_List_MapScriptComponent__o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_MeshFilter_o *pUVar5;
  UnityEngine_Bounds_o bounds;
  UnityEngine_Bounds_o bounds_00;
  UnityEngine_Matrix4x4_o matrix;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Light_o *x;
  System_Object_array *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  Map_MapObject_o *pMVar12;
  UnityEngine_Mesh_o *__this_01;
  Map_DestructibleMapObject_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar13;
  Map_DestructibleMapObject_c *method_01;
  MethodInfo *in_R9;
  uint uVar14;
  long lVar15;
  float fVar16;
  float size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Renderer_o *local_128;
  System_Collections_Generic_List_BatchSlice__o *local_120;
  System_Collections_Generic_List_MeshFilter__o *local_118;
  float local_10c;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  Map_BatchSlice_o local_c8;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  UnityEngine_Bounds_o local_a0;
  UnityEngine_Bounds_o local_88;
  UnityEngine_Matrix4x4_Fields local_70;
  
  local_10c = maxSize;
  if (Il2CppMethodInitialized_075459d2 == '\0') {
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
    Il2CppMethodInitialized_075459d2 = '\x01';
  }
  local_128 = (UnityEngine_Renderer_o *)0x0;
  local_c8.fields.Mesh = (UnityEngine_Mesh_o *)0x0;
  local_c8.fields.Start = 0;
  local_c8.fields.Count = 0;
  local_e8 = 0;
  fStack_e0 = 0.0;
  fStack_dc = 0.0;
  local_d8._0_4_ = 0.0;
  local_d8._4_4_ = 0.0;
  if (mapObject == (Map_MapObject_o *)0x0) goto label_0597882c;
  script = (Map_MapScriptSceneObject_o *)(mapObject->fields).ScriptObject;
  if (script != (Map_MapScriptSceneObject_o *)0x0) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if ((((bVar1 <= (script->klass->_2).typeHierarchyDepth) &&
         ((script->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) && ((mapObject->fields).RuntimeCreated == false))
       && (((script->fields).Active != false && ((script->fields).Visible != false)))) {
      pSVar3 = (script->fields).CollideMode;
      if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
      }
      pMVar13 = (MethodInfo *)TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
      bVar6 = System_String__op_Inequality(pSVar3,(System_String_o *)pMVar13,(MethodInfo *)0x0);
      if (bVar6) {
        return (Map_DestructibleMapObject_o *)0x0;
      }
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
      }
      bVar6 = Map_DestructibleMapObject__HasOnlyDecorativeComponents(script,pMVar13);
      if (bVar6) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0597882c:
          ThrowNullReferenceException();
        }
        bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this,(Il2CppObject *)mapObject,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey
                          );
        if (!bVar6) {
          pSVar3 = (script->fields).Asset;
          pMVar13 = (MethodInfo *)(script->fields).Name;
          method_00 = extraout_RDX;
          if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
            method_00 = extraout_RDX_00;
          }
          bVar6 = Map_DestructibleMapObject__IsAllowedAsset(pSVar3,(System_String_o *)pMVar13,method_00);
          if (bVar6) {
            colliders = (mapObject->fields).colliderCache;
            if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
            }
            bVar6 = Map_DestructibleMapObject__HasSolidCollider(colliders,pMVar13);
            if (bVar6) {
              pSVar4 = (script->fields).Components;
              if (pSVar4 != (System_Collections_Generic_List_MapScriptComponent__o *)0x0) {
                iVar2 = (pSVar4->fields)._size;
                if ((iVar2 < 1) && ((script->fields).Networked != false)) {
                  return (Map_DestructibleMapObject_o *)0x0;
                }
                __this_00 = (mapObject->fields).GameObject;
                if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar9 = (UnityEngine_Object_o *)
                           UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                                     (__this_00,true,
                                      (MethodInfo_353B9A0 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Terrain);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar6) {
                    return (Map_DestructibleMapObject_o *)0x0;
                  }
                  pUVar9 = (UnityEngine_Object_o *)
                           UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                                     (__this_00,true,
                                      (MethodInfo_353B9A0 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Animator);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar6) {
                    return (Map_DestructibleMapObject_o *)0x0;
                  }
                  if (iVar2 < 1) {
                    pUVar9 = (UnityEngine_Object_o *)
                             UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                                       (__this_00,true,
                                        (MethodInfo_353B9A0 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Rigidbody);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if (bVar6) {
                      return (Map_DestructibleMapObject_o *)0x0;
                    }
                  }
                  pUVar9 = (UnityEngine_Object_o *)
                           UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                                     (__this_00,true,
                                      (MethodInfo_353B9A0 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer
                                     );
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar6) {
                    return (Map_DestructibleMapObject_o *)0x0;
                  }
                  x = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                                (__this_00,true,
                                 (MethodInfo_353B9A0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Light);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar6) {
                    return (Map_DestructibleMapObject_o *)0x0;
                  }
                  local_118 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeshFilter);
                  System_Collections_Generic_List_object____ctor
                            ((System_Collections_Generic_List_object__o *)local_118,
                             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MeshFilter_ctor)
                  ;
                  local_120 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BatchSlice);
                  System_Collections_Generic_List_BatchSlice____ctor
                            (local_120,
                             (MethodInfo_51D4D70 *)MethodInfo_System_Collections_Generic_List_BatchSlice_ctor)
                  ;
                  local_108 = 0;
                  fStack_100 = 0.0;
                  fStack_fc = 0.0;
                  fStack_f8 = 0.0;
                  fStack_f4 = 0.0;
                  pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                      (__this_00,
                                       (MethodInfo_353C030 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
                  if (pSVar10 != (System_Object_array *)0x0) {
                    uVar8 = (uint)pSVar10->max_length;
                    if (batchSlices == (System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *)0x0) {
                      if ((int)uVar8 < 1) {
                        return (Map_DestructibleMapObject_o *)0x0;
                      }
                      lVar15 = 0;
                      while ((uint)lVar15 < uVar8) {
                        pUVar5 = (UnityEngine_MeshFilter_o *)pSVar10->m_Items[lVar15];
                        if (pUVar5 == (UnityEngine_MeshFilter_o *)0x0) goto label_0597882c;
                        pUVar9 = (UnityEngine_Object_o *)
                                 UnityEngine_MeshFilter__get_sharedMesh(pUVar5,(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar6 = UnityEngine_Object__op_Equality
                                          (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((!bVar6) &&
                           (bVar6 = UnityEngine_Component__TryGetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar5,(Il2CppObject **)&local_128,
                                               (MethodInfo_34B1690 *)
                                               MethodInfo_UnityEngine_Component_TryGetComponent_MeshRenderer),
                           bVar6)) {
                          pMVar13 = (MethodInfo *)0x0;
                          pUVar11 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                          }
                          pMVar12 = Map_MapLoader__FindObjectFromTransform(pUVar11,pMVar13);
                          if (pMVar12 == mapObject) goto label_0597882c;
                        }
                        uVar8 = (uint)pSVar10->max_length;
                        lVar15 = lVar15 + 1;
                        if ((int)uVar8 <= (int)lVar15) {
                          return (Map_DestructibleMapObject_o *)0x0;
                        }
                      }
label_05978831:
                      ThrowIndexOutOfRangeException();
                    }
                    uVar14 = 0;
                    if ((int)uVar8 < 1) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = false;
                      do {
                        if (uVar8 <= uVar14) goto label_05978831;
                        pUVar5 = (UnityEngine_MeshFilter_o *)pSVar10->m_Items[(int)uVar14];
                        if (pUVar5 == (UnityEngine_MeshFilter_o *)0x0) goto label_0597882c;
                        pUVar9 = (UnityEngine_Object_o *)
                                 UnityEngine_MeshFilter__get_sharedMesh(pUVar5,(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar7 = UnityEngine_Object__op_Equality
                                          (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if ((!bVar7) &&
                           (bVar7 = UnityEngine_Component__TryGetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar5,(Il2CppObject **)&local_128,
                                               (MethodInfo_34B1690 *)
                                               MethodInfo_UnityEngine_Component_TryGetComponent_MeshRenderer),
                           bVar7)) {
                          pMVar13 = (MethodInfo *)0x0;
                          pUVar11 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                          }
                          pMVar12 = Map_MapLoader__FindObjectFromTransform(pUVar11,pMVar13);
                          if (pMVar12 == mapObject) {
                            bVar7 = System_Collections_Generic_Dictionary_object__BatchSlice___TryGetValue
                                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                               batchSlices,(Il2CppObject *)local_128,&local_c8,
                                               (MethodInfo_4A73560 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_TryGetValue
                                              );
                            if (bVar7) {
                              if (local_120 == (System_Collections_Generic_List_BatchSlice__o *)0x0)
                              goto label_0597882c;
                              il2cpp_runtime_helper_02fd3f90(local_120,local_c8.fields.Mesh,local_c8.fields._8_8_,
                                           MethodInfo_System_Collections_Generic_List_BatchSlice_Add);
                            }
                            else {
                              if (local_128 == (UnityEngine_Renderer_o *)0x0) goto label_0597882c;
                              bVar7 = UnityEngine_Renderer__get_enabled(local_128,(MethodInfo *)0x0);
                              if (!bVar7) goto label_05978494;
                            }
                            __this_01 = UnityEngine_MeshFilter__get_sharedMesh(pUVar5,(MethodInfo *)0x0);
                            if (__this_01 == (UnityEngine_Mesh_o *)0x0) goto label_0597882c;
                            UnityEngine_Mesh__get_bounds(&local_88,__this_01,(MethodInfo *)0x0);
                            pUVar11 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                            if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0597882c;
                            UnityEngine_Transform__get_localToWorldMatrix
                                      ((UnityEngine_Matrix4x4_o *)&local_70,pUVar11,(MethodInfo *)0x0);
                            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                            }
                            bounds.fields.m_Center.fields.z = local_88.fields.m_Center.fields.z;
                            bounds.fields.m_Center.fields.x = local_88.fields.m_Center.fields.x;
                            bounds.fields.m_Center.fields.y = local_88.fields.m_Center.fields.y;
                            bounds.fields.m_Extents.fields.x = local_88.fields.m_Extents.fields.x;
                            bounds.fields.m_Extents.fields.y = local_88.fields.m_Extents.fields.y;
                            bounds.fields.m_Extents.fields.z = local_88.fields.m_Extents.fields.z;
                            matrix.fields.m20 = local_70.m20;
                            matrix.fields.m30 = local_70.m30;
                            matrix.fields.m00 = local_70.m00;
                            matrix.fields.m10 = local_70.m10;
                            matrix.fields.m01 = local_70.m01;
                            matrix.fields.m11 = local_70.m11;
                            matrix.fields.m21 = local_70.m21;
                            matrix.fields.m31 = local_70.m31;
                            matrix.fields.m02 = local_70.m02;
                            matrix.fields.m12 = local_70.m12;
                            matrix.fields.m22 = local_70.m22;
                            matrix.fields.m32 = local_70.m32;
                            matrix.fields.m03 = local_70.m03;
                            matrix.fields.m13 = local_70.m13;
                            matrix.fields.m23 = local_70.m23;
                            matrix.fields.m33 = local_70.m33;
                            Utility_Util__TransformBounds(&local_a0,bounds,matrix,(MethodInfo *)0x0);
                            local_d8._0_4_ = local_a0.fields.m_Extents.fields.y;
                            local_d8._4_4_ = local_a0.fields.m_Extents.fields.z;
                            local_e8 = CONCAT44(local_a0.fields.m_Center.fields.y,
                                                local_a0.fields.m_Center.fields.x);
                            fStack_e0 = local_a0.fields.m_Center.fields.z;
                            fStack_dc = local_a0.fields.m_Extents.fields.x;
                            if (local_118 == (System_Collections_Generic_List_MeshFilter__o *)0x0)
                            goto label_0597882c;
                            il2cpp_runtime_helper_02fd3ff0(local_118,pUVar5,
                                         MethodInfo_System_Collections_Generic_List_MeshFilter_Add);
                            if (bVar6) {
                              il2cpp_runtime_helper_0599acf0(&local_108);
                            }
                            else {
                              fStack_f8 = (float)local_d8;
                              fStack_f4 = SUB84(local_d8,4);
                              local_108 = local_e8;
                              fStack_100 = fStack_e0;
                              fStack_fc = fStack_dc;
                            }
                            bVar6 = true;
                          }
                        }
label_05978494:
                        uVar14 = uVar14 + 1;
                        uVar8 = (uint)pSVar10->max_length;
                      } while ((int)uVar14 < (int)uVar8);
                    }
                    if (!bVar6) {
                      return (Map_DestructibleMapObject_o *)0x0;
                    }
                    size_00.fields.x = fStack_fc + fStack_fc;
                    size_00.fields.y = fStack_f8 + fStack_f8;
                    fVar16 = fStack_f4 + fStack_f4;
                    method_01 = TypeInfo_Map_DestructibleMapObject;
                    if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
                    }
                    size_00.fields.z = fVar16;
                    bVar6 = Map_DestructibleMapObject__IsAllowedShape(size_00,(MethodInfo *)method_01);
                    if (!bVar6) {
                      return (Map_DestructibleMapObject_o *)0x0;
                    }
                    fVar16 = fStack_f8 + fStack_f8;
                    if (fStack_f8 + fStack_f8 <= fStack_f4 + fStack_f4) {
                      fVar16 = fStack_f4 + fStack_f4;
                    }
                    size = fStack_fc + fStack_fc;
                    if (fStack_fc + fStack_fc <= fVar16) {
                      size = fVar16;
                    }
                    if (local_10c < size) {
                      return (Map_DestructibleMapObject_o *)0x0;
                    }
                    local_a8 = CONCAT44(fStack_f4,fStack_f8);
                    fStack_b0 = fStack_100;
                    fStack_ac = fStack_fc;
                    local_b8 = local_108;
                    bVar6 = (script->fields).Networked;
                    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
                    bounds_00.fields.m_Center.fields.z = fStack_b0;
                    bounds_00.fields.m_Center.fields.x = (float)(undefined4)local_b8;
                    bounds_00.fields.m_Center.fields.y = (float)local_b8._4_4_;
                    bounds_00.fields.m_Extents.fields.x = fStack_ac;
                    bounds_00.fields.m_Extents.fields.y = (float)(undefined4)local_a8;
                    bounds_00.fields.m_Extents.fields.z = (float)local_a8._4_4_;
                    Map_DestructibleMapObject___ctor
                              (__this_02,mapObject,bounds_00,size,local_118,local_120,bVar6,in_R9);
                    return __this_02;
                  }
                }
              }
              goto label_0597882c;
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
// 0x5978f80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5978ffe: jmp 0x59790a5

void Map_DestructibleMapObject__Destroy(Map_DestructibleMapObject_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Transform_o *pUVar2;
  Map_BatchSlice_array *pMVar3;
  UnityEngine_Mesh_o *pUVar4;
  undefined8 uVar5;
  bool bVar6;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_02;
  ulong uVar9;
  int32_t *piVar10;
  Map_BatchSlice_o slice;
  
  if (Il2CppMethodInitialized_075459d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075459d3 = '\x01';
  }
  pUVar2 = (__this->fields).Root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    if ((__this->fields)._hideOnly == false) {
      pUVar2 = (__this->fields).Root;
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_059790a5;
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      pMVar3 = (__this->fields)._slices;
      pMVar8 = extraout_RDX_00;
    }
    else {
      Map_DestructibleMapObject__Hide(__this,pMVar8);
      pMVar3 = (__this->fields)._slices;
      pMVar8 = extraout_RDX;
    }
    if (pMVar3 == (Map_BatchSlice_array *)0x0) {
label_059790a5:
      ThrowNullReferenceException();
    }
    if (0 < (int)pMVar3->max_length) {
      uVar7 = pMVar3->max_length & 0xffffffff;
      piVar10 = &pMVar3->m_Items[0].fields.Start;
      uVar9 = 0;
      do {
        if (uVar7 <= uVar9) {
          ThrowIndexOutOfRangeException();
        }
        pUVar4 = ((Map_BatchSlice_Fields *)(piVar10 + -2))->Mesh;
        uVar5 = *(undefined8 *)piVar10;
        if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
          pMVar8 = extraout_RDX_02;
        }
        slice.fields._8_8_ = uVar5;
        slice.fields.Mesh = pUVar4;
        Map_DestructibleMapObject__HideSlice(slice,pMVar8);
        uVar9 = uVar9 + 1;
        uVar1 = (uint)pMVar3->max_length;
        uVar7 = (ulong)uVar1;
        piVar10 = piVar10 + 4;
        pMVar8 = extraout_RDX_01;
      } while ((long)uVar9 < (long)(int)uVar1);
    }
  }
  return;
}


// Map.DestructibleMapObject$$Hide
// il2cpp: void Map_DestructibleMapObject__Hide (Map_DestructibleMapObject_o* __this, const MethodInfo* method);
// 0x59790b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597911d: nop dword ptr [rax]
// asm:   0x597917d: nop dword ptr [rax]
// asm:   0x59791cd: nop dword ptr [rax]

void Map_DestructibleMapObject__Hide(Map_DestructibleMapObject_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_075459d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rigidbody);
    Il2CppMethodInitialized_075459d4 = '\x01';
  }
  pUVar1 = (__this->fields).Root;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar3->max_length;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) goto label_05979202;
          if ((UnityEngine_Renderer_o *)pSVar3->m_Items[(int)uVar4] == (UnityEngine_Renderer_o *)0x0)
          goto label_059791fd;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar3->m_Items[(int)uVar4],false,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar2 = (uint)pSVar3->max_length;
        } while ((int)uVar4 < (int)uVar2);
      }
      pUVar1 = (__this->fields).Root;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_34B11B0 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (uint)pSVar3->max_length;
          if (0 < (int)uVar2) {
            uVar4 = 0;
            do {
              if (uVar2 <= uVar4) goto label_05979202;
              if ((UnityEngine_Collider_o *)pSVar3->m_Items[(int)uVar4] == (UnityEngine_Collider_o *)0x0)
              goto label_059791fd;
              UnityEngine_Collider__set_enabled
                        ((UnityEngine_Collider_o *)pSVar3->m_Items[(int)uVar4],false,(MethodInfo *)0x0);
              uVar4 = uVar4 + 1;
              uVar2 = (uint)pSVar3->max_length;
            } while ((int)uVar4 < (int)uVar2);
          }
          pUVar1 = (__this->fields).Root;
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_34B11B0 *)
                                MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rigidbody);
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (uint)pSVar3->max_length;
              if (0 < (int)uVar2) {
                uVar4 = 0;
                do {
                  if (uVar2 <= uVar4) {
label_05979202:
                    ThrowIndexOutOfRangeException();
                  }
                  if ((UnityEngine_Rigidbody_o *)pSVar3->m_Items[(int)uVar4] == (UnityEngine_Rigidbody_o *)0x0
                     ) goto label_059791fd;
                  UnityEngine_Rigidbody__set_isKinematic
                            ((UnityEngine_Rigidbody_o *)pSVar3->m_Items[(int)uVar4],true,(MethodInfo *)0x0);
                  uVar4 = uVar4 + 1;
                  uVar2 = (uint)pSVar3->max_length;
                } while ((int)uVar4 < (int)uVar2);
              }
              return;
            }
          }
        }
      }
    }
  }
label_059791fd:
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$Contains
// il2cpp: bool Map_DestructibleMapObject__Contains (Map_DestructibleMapObject_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x5979390

bool Map_DestructibleMapObject__Contains
               (Map_DestructibleMapObject_o *__this,UnityEngine_Transform_o *transform,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075459d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075459d5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)transform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (transform == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = UnityEngine_Transform__IsChildOf(transform,(__this->fields).Root,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// Map.DestructibleMapObject$$HideSlice
// il2cpp: void Map_DestructibleMapObject__HideSlice (Map_BatchSlice_o slice, const MethodInfo* method);
// 0x5979210
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59792dd: test r15, r15
// asm:   0x59792e0: je 0x5979387

void Map_DestructibleMapObject__HideSlice(Map_BatchSlice_o slice,MethodInfo *method)

{
  uint32_t uVar1;
  Map_DestructibleMapObject_StaticFields *pMVar2;
  bool bVar3;
  System_Int32_array *pSVar4;
  uint32_t length;
  UnityEngine_Object_o *x;
  
  x = (UnityEngine_Object_o *)slice.fields.Mesh;
  if (Il2CppMethodInitialized_075459d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Mesh_SetIndexBufferData_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075459d6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar3) || (length = slice.fields.Count, (int)length < 1)) {
    return;
  }
  if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
  }
  pSVar4 = TypeInfo_Map_DestructibleMapObject->static_fields->_degenerateIndices;
  if (pSVar4 != (System_Int32_array *)0x0) {
    if ((int)pSVar4->max_length < (int)length) {
      pSVar4 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,length);
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
      }
      pMVar2 = TypeInfo_Map_DestructibleMapObject->static_fields;
      pMVar2->_degenerateIndices = pSVar4;
      Il2CppCodeGenWriteBarrier(&pMVar2->_degenerateIndices);
      uVar1 = (TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Mesh__SetIndexBufferData_int_
                ((UnityEngine_Mesh_o *)x,
                 *(System_Int32_array **)
                  ((long)((Il2CppClass *)TypeInfo_Map_DestructibleMapObject)->static_fields + 0x18),0,
                 slice.fields.Start,length,9,
                 (MethodInfo_358C030 *)MethodInfo_UnityEngine_Mesh_SetIndexBufferData_int);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$IsAllowedAsset
// il2cpp: bool Map_DestructibleMapObject__IsAllowedAsset (System_String_o* asset, System_String_o* name, const MethodInfo* method);
// 0x5978a10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5978aec: nop dword ptr [rax]
// asm:   0x5978b28: jmp 0x5978b32
// asm:   0x5978c9d: jmp 0x5978bb8

bool Map_DestructibleMapObject__IsAllowedAsset
               (System_String_o *asset,System_String_o *name,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  System_String_o *pSVar5;
  System_Char_array *pSVar6;
  System_String_array *pSVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_075459d7 == '\0') {
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
    Il2CppMethodInitialized_075459d7 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(asset,(MethodInfo *)0x0);
  if ((bVar2) || (bVar2 = System_String__op_Equality(asset,"None",(MethodInfo *)0x0), bVar2)) {
    return false;
  }
  if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
  }
  pSVar7 = TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedAssetPrefixes;
  if (pSVar7 != (System_String_array *)0x0) {
    iVar8 = (int)pSVar7->max_length;
    if (asset == (System_String_o *)0x0) {
      if (0 < iVar8) goto label_05978cc1;
    }
    else if (0 < iVar8) {
      uVar4 = pSVar7->max_length & 0xffffffff;
      uVar9 = 0;
      do {
        if (uVar4 <= uVar9) goto label_05978cbc;
        bVar2 = System_String__StartsWith_53002b0(asset,pSVar7->m_Items[uVar9],5,(MethodInfo *)0x0);
        if (bVar2) {
          return false;
        }
        uVar9 = uVar9 + 1;
        uVar3 = (uint)pSVar7->max_length;
        uVar4 = (ulong)uVar3;
      } while ((long)uVar9 < (long)(int)uVar3);
    }
    pSVar5 = System_String__Concat_5301f10(asset,"/",name,(MethodInfo *)0x0);
    pSVar6 = (System_Char_array *)SZArrayNew(TypeInfo_char_array,4);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
              ((System_Array_o *)pSVar6,
               FieldRva_PrivateImplementationDetails_E0F413881BCD21EC94E61EDD65B3D46651F8ADE885120BFB3127C2DC4C02078A
               ,(MethodInfo *)0x0);
    if ((pSVar5 != (System_String_o *)0x0) &&
       (pSVar7 = System_String__Split_5304f50(pSVar5,pSVar6,(MethodInfo *)0x0),
       pSVar7 != (System_String_array *)0x0)) {
      uVar3 = (uint)pSVar7->max_length;
      if ((int)uVar3 < 1) {
        return true;
      }
      uVar10 = 0;
      do {
        if (uVar3 <= uVar10) {
label_05978cbc:
          ThrowIndexOutOfRangeException();
        }
        pSVar5 = pSVar7->m_Items[(int)uVar10];
        pSVar6 = (System_Char_array *)SZArrayNew(TypeInfo_char_array,10);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                  ((System_Array_o *)pSVar6,
                   FieldRva_PrivateImplementationDetails_76B351CF70EE5EC7F1B83F392A5ECF88567129B80AC8399061D9BA3F1DB3DDD1
                   ,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_o *)0x0) break;
        pSVar5 = System_String__TrimEnd_53071d0(pSVar5,pSVar6,(MethodInfo *)0x0);
        if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
        }
        pSVar1 = TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedNames;
        if (pSVar1 == (System_String_array *)0x0) break;
        iVar8 = (int)pSVar1->max_length;
        uVar4 = pSVar1->max_length & 0xffffffff;
        if (pSVar5 == (System_String_o *)0x0) {
          if (0 < iVar8) {
            if (uVar4 == 0) goto label_05978cbc;
            break;
          }
        }
        else if (0 < iVar8) {
          uVar9 = 0;
          do {
            if (uVar4 <= uVar9) goto label_05978cbc;
            bVar2 = System_String__Equals_52ffb20(pSVar5,pSVar1->m_Items[uVar9],5,(MethodInfo *)0x0);
            if (bVar2) {
              return false;
            }
            uVar9 = uVar9 + 1;
            uVar3 = (uint)pSVar1->max_length;
            uVar4 = (ulong)uVar3;
          } while ((long)uVar9 < (long)(int)uVar3);
        }
        uVar10 = uVar10 + 1;
        uVar3 = (uint)pSVar7->max_length;
        if ((int)uVar3 <= (int)uVar10) {
          return true;
        }
      } while( true );
    }
  }
label_05978cc1:
  ThrowNullReferenceException();
}


// Map.DestructibleMapObject$$HasOnlyDecorativeComponents
// il2cpp: bool Map_DestructibleMapObject__HasOnlyDecorativeComponents (Map_MapScriptSceneObject_o* script, const MethodInfo* method);
// 0x5978840
// eh: try 0x5978913..0x597899d -> pad 0x59789aa (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59789c2..0x59789c7 -> pad 0x59789e8 cleanup
// eh: try 0x59789eb..0x59789f5 -> pad 0x59789fd catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59789a2: jmp 0x59789aa
// asm:   0x59789a4: jmp 0x59789aa
// asm:   0x59789a6: jmp 0x59789aa
// asm:   0x59789a8: jmp 0x59789aa
// asm:   0x59789aa: mov rbx, rax
// asm:   0x59789ad: cmp edx, 1
// asm:   0x59789b0: jne 0x59789eb
// asm:   0x59789b2: mov rdi, rbx
// asm:   0x59789b5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59789ba: mov rbx, qword ptr [rax]
// asm:   0x59789bd: mov qword ptr [rsp + 0x18], rbx
// asm:   0x59789c2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59789c7: lea rax, [rip + 0x1915a22]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x59789ce: mov rsi, qword ptr [rax]
// asm:   0x59789d1: mov rdi, rsp
// asm:   0x59789d4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59789d9: xor ebp, ebp
// asm:   0x59789db: test rbx, rbx
// asm:   0x59789de: je 0x597897e
// asm:   0x59789e0: mov rdi, rbx
// asm:   0x59789e3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59789e8: mov rbx, rax
// asm:   0x59789eb: lea rdi, [rsp + 0x18]
// asm:   0x59789f0: call 0x2fd4040  ; il2cpp_runtime_helper_02fd4040()
// asm:   0x59789f5: mov rdi, rbx
// asm:   0x59789f8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59789fd: mov rdi, rax
// asm:   0x5978a00: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_DestructibleMapObject__HasOnlyDecorativeComponents
               (Map_MapScriptSceneObject_o *script,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptComponent__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075459d8 == '\0') {
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
    Il2CppMethodInitialized_075459d8 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((script == (Map_MapScriptSceneObject_o *)0x0) ||
     (__this = (script->fields).Components,
     __this == (System_Collections_Generic_List_MapScriptComponent__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator
            );
  local_40 = 0;
  local_38 = (undefined1 *)&local_58;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    pIVar1 = local_58.fields._current;
    if (!bVar2) {
      iVar3 = 5;
      goto label_0597896c;
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
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  } while (bVar2);
  iVar3 = 4;
label_0597896c:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
  return iVar3 != 4;
}


// Map.DestructibleMapObject$$HasSolidCollider
// il2cpp: bool Map_DestructibleMapObject__HasSolidCollider (UnityEngine_Collider_array* colliders, const MethodInfo* method);
// 0x5978cd0

bool Map_DestructibleMapObject__HasSolidCollider(UnityEngine_Collider_array *colliders,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_075459d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075459d9 = '\x01';
  }
  if (colliders == (UnityEngine_Collider_array *)0x0) {
label_05978d95:
    ThrowNullReferenceException();
  }
  if (0 < (int)colliders->max_length) {
    uVar3 = colliders->max_length & 0xffffffff;
    uVar4 = 0;
    do {
      if (uVar3 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)colliders->m_Items[uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_05978d95;
        bVar2 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((bVar2) &&
           (bVar2 = UnityEngine_Collider__get_isTrigger((UnityEngine_Collider_o *)x,(MethodInfo *)0x0), !bVar2
           )) {
          return true;
        }
      }
      uVar4 = uVar4 + 1;
      uVar1 = (uint)colliders->max_length;
      uVar3 = (ulong)uVar1;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  return false;
}


// Map.DestructibleMapObject$$IsAllowedShape
// il2cpp: bool Map_DestructibleMapObject__IsAllowedShape (UnityEngine_Vector3_o size, const MethodInfo* method);
// 0x5978f00

bool Map_DestructibleMapObject__IsAllowedShape(UnityEngine_Vector3_o size,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = size.fields.z;
  fVar1 = size.fields.x;
  fVar2 = size.fields.y;
  if (((((~(uint)fVar1 & 0x7f800000) != 0) && ((~(uint)fVar2 & 0x7f800000) != 0)) &&
      ((~(uint)fVar3 & 0x7f800000) != 0)) && (0.0001 <= fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    if (fVar3 <= fVar1) {
      fVar1 = fVar3;
    }
    return fVar1 < 8.0 || fVar1 * 0.15 < fVar2;
  }
  return false;
}


// Map.DestructibleMapObject$$.cctor
// il2cpp: void Map_DestructibleMapObject___cctor (const MethodInfo* method);
// 0x5979410

void Map_DestructibleMapObject___cctor(MethodInfo *method)

{
  Map_DestructibleMapObject_StaticFields *pMVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_HashSet_string__o *__this;
  System_Int32_array *pSVar3;
  
  if (Il2CppMethodInitialized_075459da == '\0') {
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
    Il2CppMethodInitialized_075459da = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (pSVar2 == (System_String_array *)0x0) {
label_05979834:
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Terrain/";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "Background/";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "FX/";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3] = "Interact/";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "Geometry/NavMesh";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
            TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedAssetPrefixes = pSVar2;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Map_DestructibleMapObject->static_fields->ProtectedAssetPrefixes);
            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
            if (pSVar2 == (System_String_array *)0x0) goto label_05979834;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "Ground";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
              if ((pSVar2->max_length & 0xfffffffe) != 0) {
                pSVar2->m_Items[1] = "Terrain";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                if (2 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[2] = "Landscape";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
                  if ((pSVar2->max_length & 0xfffffffc) != 0) {
                    pSVar2->m_Items[3] = "Floor";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
                    if (4 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[4] = "Road";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
                      if (5 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[5] = "Bridge";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5);
                        pMVar1 = TypeInfo_Map_DestructibleMapObject->static_fields;
                        pMVar1->ProtectedNames = pSVar2;
                        Il2CppCodeGenWriteBarrier(&pMVar1->ProtectedNames);
                        __this = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string)
                        ;
                        System_Collections_Generic_HashSet_object____ctor
                                  ((System_Collections_Generic_HashSet_object__o *)__this,
                                   (MethodInfo_4FB2EA0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_ctor);
                        if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
                          System_Collections_Generic_HashSet_object___Add
                                    ((System_Collections_Generic_HashSet_object__o *)__this,
                                     (Il2CppObject *)"Bell",
                                     (MethodInfo_4FB4450 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Add);
                          System_Collections_Generic_HashSet_object___Add
                                    ((System_Collections_Generic_HashSet_object__o *)__this,
                                     (Il2CppObject *)"MovePingPong",
                                     (MethodInfo_4FB4450 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Add);
                          System_Collections_Generic_HashSet_object___Add
                                    ((System_Collections_Generic_HashSet_object__o *)__this,
                                     (Il2CppObject *)"SignalRotator",
                                     (MethodInfo_4FB4450 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Add);
                          System_Collections_Generic_HashSet_object___Add
                                    ((System_Collections_Generic_HashSet_object__o *)__this,
                                     (Il2CppObject *)"SignalMover",
                                     (MethodInfo_4FB4450 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Add);
                          System_Collections_Generic_HashSet_object___Add
                                    ((System_Collections_Generic_HashSet_object__o *)__this,
                                     (Il2CppObject *)"SignalArcMover",
                                     (MethodInfo_4FB4450 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Add);
                          System_Collections_Generic_HashSet_object___Add
                                    ((System_Collections_Generic_HashSet_object__o *)__this,
                                     (Il2CppObject *)"EyeTracker",
                                     (MethodInfo_4FB4450 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Add);
                          pMVar1 = TypeInfo_Map_DestructibleMapObject->static_fields;
                          pMVar1->DecorativeComponents = __this;
                          Il2CppCodeGenWriteBarrier(&pMVar1->DecorativeComponents);
                          pSVar3 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,0);
                          pMVar1 = TypeInfo_Map_DestructibleMapObject->static_fields;
                          pMVar1->_degenerateIndices = pSVar3;
                          Il2CppCodeGenWriteBarrier(&pMVar1->_degenerateIndices);
                          return;
                        }
                        goto label_05979834;
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


