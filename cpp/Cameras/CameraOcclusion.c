// Type: Cameras.CameraOcclusion
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Cameras/CameraOcclusion.cs
// Prior real C# source: none
// --------------------------------

// Cameras.CameraOcclusion.FallbackRenderer$$.ctor
// il2cpp: void Cameras_CameraOcclusion_FallbackRenderer___ctor (Cameras_CameraOcclusion_FallbackRenderer_o* __this, UnityEngine_Renderer_o* renderer, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x1822ef290

void Cameras_CameraOcclusion_FallbackRenderer___ctor
               (Cameras_CameraOcclusion_FallbackRenderer_o *__this,UnityEngine_Renderer_o *renderer,
               UnityEngine_Bounds_o *bounds,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Renderer = renderer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Renderer,renderer);
  fVar3 = (bounds->fields).m_Center.fields.y;
  uVar2 = *(undefined8 *)&(bounds->fields).m_Center.fields.z;
  fVar4 = (bounds->fields).m_Extents.fields.y;
  fVar5 = (bounds->fields).m_Extents.fields.z;
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Center.fields.x = (bounds->fields).m_Center.fields.x;
  (pUVar1->fields).m_Center.fields.y = fVar3;
  *(undefined8 *)&(__this->fields).Bounds.fields.m_Center.fields.z = uVar2;
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Extents.fields.y = fVar4;
  (pUVar1->fields).m_Extents.fields.z = fVar5;
  return;
}


// Cameras.CameraOcclusion.FallbackGrid$$.ctor
// il2cpp: void Cameras_CameraOcclusion_FallbackGrid___ctor (Cameras_CameraOcclusion_FallbackGrid_o* __this, float cellSize, const MethodInfo* method);
// 0x1822ef200

void Cameras_CameraOcclusion_FallbackGrid___ctor
               (Cameras_CameraOcclusion_FallbackGrid_o *__this,float cellSize,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Vector3Int__List_CameraOcclusion_FallbackRenderer___o *__this_00;
  
  if (Il2CppMethodInitialized_18434768a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
              );
    Il2CppMethodInitialized_18434768a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
                        );
  System_Collections_Generic_Dictionary_Vector3Int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_14CF520 *)
             MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
            );
  (__this->fields).Cells = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Cells,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).CellSize = cellSize;
  return;
}


// Cameras.CameraOcclusion.FallbackGrid$$GetCell
// il2cpp: UnityEngine_Vector3Int_o Cameras_CameraOcclusion_FallbackGrid__GetCell (Cameras_CameraOcclusion_FallbackGrid_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x1822ef0d0

UnityEngine_Vector3Int_o *
Cameras_CameraOcclusion_FallbackGrid__GetCell
          (UnityEngine_Vector3Int_o *__return_storage_ptr__,Cameras_CameraOcclusion_FallbackGrid_o *__this,
          UnityEngine_Vector3_o *position,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  
  fVar1 = (__this->fields).CellSize;
  fVar2 = (position->fields).x;
  fVar3 = (position->fields).y;
  fVar4 = (position->fields).z;
  if (Il2CppMethodInitialized_18433df26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  cVar5 = Il2CppMethodInitialized_18433df26;
  dVar6 = il2cpp_runtime_helper_1804f4690((double)(fVar2 / fVar1),(MethodInfo *)__this);
  if (cVar5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    cVar5 = '\x01';
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    cVar5 = Il2CppMethodInitialized_18433df26;
  }
  dVar7 = il2cpp_runtime_helper_1804f4690((double)(fVar3 / fVar1),(MethodInfo *)__this);
  if (cVar5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  (__return_storage_ptr__->fields).m_X = (int)dVar6;
  (__return_storage_ptr__->fields).m_Y = (int)dVar7;
  dVar6 = il2cpp_runtime_helper_1804f4690((double)(fVar4 / fVar1),(MethodInfo *)__this);
  (__return_storage_ptr__->fields).m_Z = (int)dVar6;
  return __return_storage_ptr__;
}


// Cameras.CameraOcclusion.MaterialOverride$$.ctor
// il2cpp: void Cameras_CameraOcclusion_MaterialOverride___ctor (Cameras_CameraOcclusion_MaterialOverride_o* __this, UnityEngine_Material_array* originals, const MethodInfo* method);
// 0x1822f84f0

void Cameras_CameraOcclusion_MaterialOverride___ctor
               (Cameras_CameraOcclusion_MaterialOverride_o *__this,UnityEngine_Material_array *originals,
               MethodInfo *method)

{
  UnityEngine_Material_array *value;
  
  if (Il2CppMethodInitialized_18434768b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    Il2CppMethodInitialized_18434768b = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Originals = originals;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Originals,originals);
  if (originals != (UnityEngine_Material_array *)0x0) {
    value = (UnityEngine_Material_array *)
            SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)originals->max_length);
    (__this->fields).Replacements = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Replacements,value);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion.MaterialOverride$$Matches
// il2cpp: bool Cameras_CameraOcclusion_MaterialOverride__Matches (Cameras_CameraOcclusion_MaterialOverride_o* __this, System_Collections_Generic_List_Material__o* materials, const MethodInfo* method);
// 0x1822f83d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f844f: nop 
// asm:   0x1822f84b3: jmp 0x1822f8450

bool Cameras_CameraOcclusion_MaterialOverride__Matches
               (Cameras_CameraOcclusion_MaterialOverride_o *__this,
               System_Collections_Generic_List_Material__o *materials,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  bool bVar1;
  UnityEngine_Material_array *pUVar2;
  UnityEngine_Material_o *y;
  uint index;
  
  if (Il2CppMethodInitialized_18434768c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434768c = '\x01';
  }
  pUVar2 = (__this->fields).Originals;
  if ((pUVar2 != (UnityEngine_Material_array *)0x0) &&
     (materials != (System_Collections_Generic_List_Material__o *)0x0)) {
    if ((int)pUVar2->max_length != (materials->fields)._size) {
      return false;
    }
    pUVar2 = (__this->fields).Originals;
    index = 0;
    do {
      if ((int)pUVar2->max_length <= (int)index) {
        return true;
      }
      pUVar2 = (__this->fields).Originals;
      if (pUVar2 == (UnityEngine_Material_array *)0x0) break;
      if ((uint)pUVar2->max_length <= index) {
        ThrowIndexOutOfRangeException();
      }
      x = pUVar2->m_Items[(int)index];
      y = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                    ((System_Collections_Generic_List_object__o *)materials,index,
                     (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Material_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      pUVar2 = (__this->fields).Originals;
      index = index + 1;
    } while (pUVar2 != (UnityEngine_Material_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$RegisterObject
// il2cpp: void Cameras_CameraOcclusion__RegisterObject (UnityEngine_GameObject_o* gameObject, UnityEngine_Collider_array* colliders, bool isStatic, const MethodInfo* method);
// 0x1822ed110
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ed2bf: nop 
// asm:   0x1822ed36f: mov r8, qword ptr [rip + 0x1e12222]  ; TypeInfo_UnityEngine_SkinnedMeshRenderer
// asm:   0x1822ed376: mov rdx, qword ptr [rip + 0x1dd7c2b]  ; TypeInfo_UnityEngine_MeshRenderer

void Cameras_CameraOcclusion__RegisterObject
               (UnityEngine_GameObject_o *gameObject,UnityEngine_Collider_array *colliders,bool isStatic,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *renderer;
  UnityEngine_Renderer_c *pUVar2;
  bool bVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *value;
  Il2CppClass *pIVar4;
  uint uVar5;
  Il2CppClass *pIVar6;
  
  if (Il2CppMethodInitialized_184347679 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_184347679 = '\x01';
  }
  if ((gameObject != (UnityEngine_GameObject_o *)0x0) &&
     (value = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                        (gameObject,true,
                         (MethodInfo_6F5750 *)
                         MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0),
     colliders != (UnityEngine_Collider_array *)0x0)) {
    for (uVar5 = 0; (int)uVar5 < (int)colliders->max_length; uVar5 = uVar5 + 1) {
      if ((uint)colliders->max_length <= uVar5) goto label_1822ed3a1;
      x = (UnityEngine_Object_o *)colliders->m_Items[(int)uVar5];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1822ed3a7;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this,(Il2CppObject *)x,&value->obj,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_set_Item);
        if (isStatic) {
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          __this_00 = (System_Collections_Generic_HashSet_object__o *)
                      TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822ed3a7;
          System_Collections_Generic_HashSet_object___Add
                    (__this_00,(Il2CppObject *)x,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Add);
        }
      }
    }
    if (isStatic) {
      if (value == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) goto label_1822ed3a7;
      pIVar4 = (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer;
      pIVar6 = (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer;
      for (uVar5 = 0; (int)uVar5 < (int)value->max_length; uVar5 = uVar5 + 1) {
        if ((uint)value->max_length <= uVar5) {
label_1822ed3a1:
          ThrowIndexOutOfRangeException();
        }
        renderer = (&value->m_Items[0].klass)[(int)uVar5];
        if (renderer != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) {
          pUVar2 = (renderer->_1).image;
          bVar1 = (pIVar4->_2).typeHierarchyDepth;
          if (((bVar1 <= (pUVar2->_2).typeHierarchyDepth) &&
              ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == pIVar4)) ||
             ((bVar1 = (pIVar6->_2).typeHierarchyDepth, bVar1 <= (pUVar2->_2).typeHierarchyDepth &&
              ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == pIVar6)))) {
            if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
            }
            bVar3 = Cameras_CameraOcclusion__HasMatchingMeshCollider
                              ((UnityEngine_Renderer_o *)renderer,colliders,(MethodInfo *)0x0);
            pIVar4 = (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer;
            pIVar6 = (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer;
            if (!bVar3) {
              if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
              }
              Cameras_CameraOcclusion__RegisterFallbackRenderer
                        ((UnityEngine_Renderer_o *)renderer,(MethodInfo *)0x0);
              pIVar4 = (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer;
              pIVar6 = (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer;
            }
          }
        }
      }
    }
    return;
  }
label_1822ed3a7:
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$HasMatchingMeshCollider
// il2cpp: bool Cameras_CameraOcclusion__HasMatchingMeshCollider (UnityEngine_Renderer_o* renderer, UnityEngine_Collider_array* colliders, const MethodInfo* method);
// 0x1822ec7b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822eca0e: mov rdx, qword ptr [rip + 0x1dd7bf3]  ; TypeInfo_UnityEngine_MeshCollider

bool Cameras_CameraOcclusion__HasMatchingMeshCollider
               (UnityEngine_Renderer_o *renderer,UnityEngine_Collider_array *colliders,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_Collider_o *__this;
  bool bVar3;
  uint uVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  Il2CppClass *pIVar7;
  uint uVar8;
  UnityEngine_MeshFilter_o *local_res8;
  
  if (Il2CppMethodInitialized_18434767a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434767a = '\x01';
  }
  local_res8 = (UnityEngine_MeshFilter_o *)0x0;
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
    if (((bVar1 <= (renderer->klass->_2).typeHierarchyDepth) &&
        ((renderer->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) &&
       (bVar3 = UnityEngine_Component__TryGetComponent_object_
                          ((UnityEngine_Component_o *)renderer,(Il2CppObject **)&local_res8,
                           (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter),
       bVar3)) {
      if (local_res8 == (UnityEngine_MeshFilter_o *)0x0) {
label_1822eca46:
        ThrowNullReferenceException();
      }
      pUVar5 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(local_res8,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (colliders == (UnityEngine_Collider_array *)0x0) goto label_1822eca46;
        pIVar7 = (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider;
        for (uVar8 = 0; (int)uVar8 < (int)colliders->max_length; uVar8 = uVar8 + 1) {
          if ((uint)colliders->max_length <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          __this = colliders->m_Items[(int)uVar8];
          if (__this != (UnityEngine_Collider_o *)0x0) {
            bVar1 = (pIVar7->_2).typeHierarchyDepth;
            if (((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
                ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == pIVar7)) &&
               (bVar3 = UnityEngine_Collider__get_enabled(__this,(MethodInfo *)0x0),
               pIVar7 = (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider, bVar3)) {
              pUVar5 = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar6 = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)renderer,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Equality(pUVar5,pUVar6,(MethodInfo *)0x0);
              pIVar7 = (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider;
              if (bVar3) {
                pUVar5 = (UnityEngine_Object_o *)
                         UnityEngine_MeshCollider__get_sharedMesh
                                   ((UnityEngine_MeshCollider_o *)__this,(MethodInfo *)0x0);
                if (local_res8 == (UnityEngine_MeshFilter_o *)0x0) goto label_1822eca46;
                pUVar6 = (UnityEngine_Object_o *)
                         UnityEngine_MeshFilter__get_sharedMesh(local_res8,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar3 = UnityEngine_Object__op_Equality(pUVar5,pUVar6,(MethodInfo *)0x0);
                pIVar7 = (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider;
                if (bVar3) {
                  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                  }
                  uVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields->MapMask;
                  __this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1822eca46;
                  uVar4 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
                  pIVar7 = (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider;
                  if ((uVar2 >> (uVar4 & 0x1f) & 1) != 0) {
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// Cameras.CameraOcclusion$$RegisterCombinedRenderer
// il2cpp: void Cameras_CameraOcclusion__RegisterCombinedRenderer (UnityEngine_Renderer_o* original, UnityEngine_Renderer_o* combined, const MethodInfo* method);
// 0x1822eca50

void Cameras_CameraOcclusion__RegisterCombinedRenderer
               (UnityEngine_Renderer_o *original,UnityEngine_Renderer_o *combined,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_18434767b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_set_Item);
    Il2CppMethodInitialized_18434767b = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)original,(Il2CppObject *)combined,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$SetCapsule
// il2cpp: void Cameras_CameraOcclusion__SetCapsule (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float radius, UnityEngine_Vector3_o groundOrigin, const MethodInfo* method);
// 0x1822eda40

void Cameras_CameraOcclusion__SetCapsule
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,
               float radius,UnityEngine_Vector3_o *groundOrigin,MethodInfo *method)

{
  float fVar1;
  Cameras_CameraOcclusion_StaticFields *pCVar2;
  float fVar3;
  float fVar4;
  System_Action_T1__T2__o *pSVar5;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434767c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_ScriptableRenderContext_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_18434767c = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  TypeInfo_Cameras_CameraOcclusion->static_fields->_camera = camera;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->_camera,camera);
  fVar3 = (start->fields).y;
  pCVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  fVar1 = (start->fields).z;
  (pCVar2->_start).fields.x = (start->fields).x;
  (pCVar2->_start).fields.y = fVar3;
  fVar3 = (end->fields).x;
  fVar4 = (end->fields).y;
  (pCVar2->_start).fields.z = fVar1;
  pCVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  fVar1 = (end->fields).z;
  (pCVar2->_end).fields.x = fVar3;
  (pCVar2->_end).fields.y = fVar4;
  (pCVar2->_end).fields.z = fVar1;
  TypeInfo_Cameras_CameraOcclusion->static_fields->_radius = radius;
  local_28[0].x = (groundOrigin->fields).x;
  local_28[0].y = (groundOrigin->fields).y;
  local_28[0].z = (groundOrigin->fields).z;
  Cameras_CameraOcclusion__UpdateGroundPlane((UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  if (TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed == false) {
    pSVar5 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
    System_Action_ScriptableRenderContext__object____ctor
              (pSVar5,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering,
               (MethodInfo_1467F20 *)0x0);
    UnityEngine_Rendering_RenderPipelineManager__add_beginCameraRendering
              ((System_Action_ScriptableRenderContext__Camera__o *)pSVar5,(MethodInfo *)0x0);
    pSVar5 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
    System_Action_ScriptableRenderContext__object____ctor
              (pSVar5,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering,
               (MethodInfo_1467F20 *)0x0);
    UnityEngine_Rendering_RenderPipelineManager__add_endCameraRendering
              ((System_Action_ScriptableRenderContext__Camera__o *)pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed = true;
  }
  return;
}


// Cameras.CameraOcclusion$$UpdateGroundPlane
// il2cpp: void Cameras_CameraOcclusion__UpdateGroundPlane (UnityEngine_Vector3_o groundOrigin, const MethodInfo* method);
// 0x1822edc20
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822eddcc: nop dword ptr [rax]
// asm:   0x1822edf0a: movss xmm15, dword ptr [rip + 0x106ad4d]
// asm:   0x1822edf13: movss xmm14, dword ptr [rip + 0x106ace8]
// asm:   0x1822edf1c: nop dword ptr [rax]
// asm:   0x1822ee186: mov r8, qword ptr [rip + 0x1decf43]  ; TypeInfo_Cameras_CameraOcclusion
// asm:   0x1822ee18d: jmp 0x1822edf20

void Cameras_CameraOcclusion__UpdateGroundPlane(UnityEngine_Vector3_o *groundOrigin,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_RaycastHit_o *pUVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  UnityEngine_Vector4_StaticFields *pUVar7;
  Cameras_CameraOcclusion_StaticFields *pCVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_RaycastHit_array *pUVar10;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  UnityEngine_RaycastHit_Fields *pUVar14;
  bool bVar15;
  int32_t iVar16;
  UnityEngine_Collider_o *item;
  UnityEngine_Vector3_o *pUVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Vector3_o local_118;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Touch_Fields local_f8 [3];
  
  if (Il2CppMethodInitialized_18434767d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Resize_RaycastHit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Collider_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_18434767d = '\x01';
  }
  local_f8[0].m_RawPosition.fields.y = 0.0;
  local_f8[0].m_PositionDelta.fields.x = 0.0;
  local_f8[0].m_PositionDelta.fields.y = 0.0;
  local_f8[0].m_TimeDelta = 0.0;
  local_f8[0].m_TapCount = 0;
  local_f8[0].m_Phase = 0;
  local_f8[0].m_Type = 0;
  local_f8[0].m_FingerId = 0;
  local_f8[0].m_Position.fields.x = 0.0;
  local_f8[0].m_Position.fields.y = 0.0;
  local_f8[0].m_RawPosition.fields.x = 0.0;
  if (Il2CppMethodInitialized_1843476c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector4);
    Il2CppMethodInitialized_1843476c0 = '\x01';
  }
  pUVar7 = TypeInfo_UnityEngine_Vector4->static_fields;
  fVar24 = (pUVar7->zeroVector).fields.x;
  fVar23 = (pUVar7->zeroVector).fields.y;
  fVar19 = (pUVar7->zeroVector).fields.z;
  fVar21 = (pUVar7->zeroVector).fields.w;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pCVar8 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  (pCVar8->_groundPlane).fields.x = fVar24;
  (pCVar8->_groundPlane).fields.y = fVar23;
  (pCVar8->_groundPlane).fields.z = fVar19;
  (pCVar8->_groundPlane).fields.w = fVar21;
  fVar24 = TypeInfo_Cameras_CameraOcclusion->static_fields->_radius * 0.1;
  if (fVar24 <= 0.1) {
    fVar24 = 0.1;
  }
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar18 = 0;
  fVar23 = (pUVar9->upVector).fields.x;
  fVar19 = (pUVar9->upVector).fields.y;
  fVar21 = (pUVar9->upVector).fields.z;
  fVar22 = (groundOrigin->fields).x;
  fVar20 = (groundOrigin->fields).y;
  fVar3 = (groundOrigin->fields).z;
  fVar4 = TypeInfo_Cameras_CameraOcclusion->static_fields->_radius;
  while( true ) {
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar5._0_4_ = (pUVar9->downVector).fields.x;
    uVar5._4_4_ = (pUVar9->downVector).fields.y;
    fVar6 = (pUVar9->downVector).fields.z;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pUVar10 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
    iVar16 = TypeInfo_Cameras_CameraOcclusion->static_fields->GroundMask;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_128.y = fVar24 * fVar19 + fVar20;
    local_128.x = fVar24 * fVar23 + fVar22;
    local_138._0_8_ = uVar5;
    local_138.z = fVar6;
    local_128.z = fVar24 * fVar21 + fVar3;
    iVar16 = UnityEngine_Physics__RaycastNonAlloc_2fe4c30
                       ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_138,pUVar10,
                        fVar24 + fVar4,iVar16,1,(MethodInfo *)0x0);
    pUVar10 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
    if (pUVar10 == (UnityEngine_RaycastHit_array *)0x0) break;
    if (iVar16 < (int)pUVar10->max_length) {
      fVar23 = INFINITY;
      if (iVar16 < 1) {
        return;
      }
      goto label_1822edf20;
    }
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pUVar10 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
    if (pUVar10 == (UnityEngine_RaycastHit_array *)0x0) break;
    System_Array__Resize_BindingRestrictions_TestBuilder_AndNode_
              ((System_Dynamic_BindingRestrictions_TestBuilder_AndNode_array **)
               &TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits,(int)pUVar10->max_length * 2,
               (MethodInfo_5EA230 *)MethodInfo_System_Array_Resize_RaycastHit);
  }
label_1822ee1e7:
  ThrowNullReferenceException();
label_1822edf20:
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar10 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
  if (pUVar10 == (UnityEngine_RaycastHit_array *)0x0) goto label_1822ee1e7;
  if ((uint)pUVar10->max_length <= uVar18) {
    ThrowIndexOutOfRangeException();
  }
  pUVar2 = pUVar10->m_Items + (int)uVar18;
  local_f8[0].m_FingerId = (int32_t)(pUVar2->fields).m_Point.fields.x;
  local_f8[0].m_Position.fields.x = (pUVar2->fields).m_Point.fields.y;
  local_f8[0]._8_8_ = *(undefined8 *)&(pUVar2->fields).m_Point.fields.z;
  pUVar14 = &pUVar10->m_Items[(int)uVar18].fields;
  local_f8[0].m_RawPosition.fields.y = (pUVar14->m_Normal).fields.y;
  local_f8[0].m_PositionDelta.fields.x = (pUVar14->m_Normal).fields.z;
  uVar11 = pUVar14->m_FaceID;
  pUVar14 = &pUVar10->m_Items[(int)uVar18].fields;
  uVar12 = pUVar14->m_Distance;
  uVar13 = (pUVar14->m_UV).fields.x;
  local_f8[0]._36_8_ = *(undefined8 *)&(pUVar14->m_UV).fields.y;
  __this = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders;
  local_f8[0].m_PositionDelta.fields.y = (float)uVar11;
  local_f8[0].m_TimeDelta = (float)uVar12;
  local_f8[0].m_TapCount = uVar13;
  item = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)local_f8,(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822ee1e7;
  bVar15 = System_Collections_Generic_HashSet_object___Contains
                     (__this,(Il2CppObject *)item,
                      (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Contains);
  if (((bVar15) &&
      (pUVar17 = UnityEngine_RaycastHit__get_normal
                           ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_RaycastHit_o *)local_f8,
                            (MethodInfo *)0x0), pfVar1 = &(pUVar17->fields).y, 0.5 < *pfVar1 || *pfVar1 == 0.5
      )) && (fVar19 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_f8,(MethodInfo *)0x0),
            fVar19 < fVar23)) {
    fVar23 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_f8,(MethodInfo *)0x0);
    pUVar17 = UnityEngine_RaycastHit__get_normal
                        ((UnityEngine_Vector3_o *)&local_138,(UnityEngine_RaycastHit_o *)local_f8,
                         (MethodInfo *)0x0);
    fVar19 = (pUVar17->fields).x;
    fVar21 = (pUVar17->fields).y;
    fVar22 = (pUVar17->fields).z;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pCVar8 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    fVar20 = (pCVar8->_end).fields.x;
    fVar3 = (pCVar8->_end).fields.y;
    fVar4 = (pCVar8->_end).fields.z;
    pUVar17 = UnityEngine_RaycastHit__get_point
                        (&local_118,(UnityEngine_RaycastHit_o *)local_f8,(MethodInfo *)0x0);
    if (0.0 <= (fVar3 - (pUVar17->fields).y) * fVar21 + (fVar20 - (pUVar17->fields).x) * fVar19 +
               (fVar4 - (pUVar17->fields).z) * fVar22) {
      pUVar17 = UnityEngine_RaycastHit__get_point
                          (&local_108,(UnityEngine_RaycastHit_o *)local_f8,(MethodInfo *)0x0);
      fVar20 = -(fVar21 * (pUVar17->fields).y + fVar19 * (pUVar17->fields).x + fVar22 * (pUVar17->fields).z) -
               fVar24;
    }
    else {
      if (Il2CppMethodInitialized_1843476c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector4);
        Il2CppMethodInitialized_1843476c0 = '\x01';
      }
      pUVar7 = TypeInfo_UnityEngine_Vector4->static_fields;
      fVar19 = (pUVar7->zeroVector).fields.x;
      fVar21 = (pUVar7->zeroVector).fields.y;
      fVar22 = (pUVar7->zeroVector).fields.z;
      fVar20 = (pUVar7->zeroVector).fields.w;
    }
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pCVar8 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    (pCVar8->_groundPlane).fields.x = fVar19;
    (pCVar8->_groundPlane).fields.y = fVar21;
    (pCVar8->_groundPlane).fields.z = fVar22;
    (pCVar8->_groundPlane).fields.w = fVar20;
  }
  uVar18 = uVar18 + 1;
  if (iVar16 <= (int)uVar18) {
    return;
  }
  goto label_1822edf20;
}


// Cameras.CameraOcclusion$$Clear
// il2cpp: void Cameras_CameraOcclusion__Clear (const MethodInfo* method);
// 0x1822eb640

void Cameras_CameraOcclusion__Clear(MethodInfo *method)

{
  System_Action_T1__T2__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434767e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_ScriptableRenderContext_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_18434767e = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  if (TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed != false) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__RestoreMaterials((MethodInfo *)0x0);
    TypeInfo_Cameras_CameraOcclusion->static_fields->_camera = (UnityEngine_Camera_o *)0x0;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->_camera,(void *)0x0);
    TypeInfo_Cameras_CameraOcclusion->static_fields->_radius = 0.0;
    pSVar1 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
    System_Action_ScriptableRenderContext__object____ctor
              (pSVar1,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering,
               (MethodInfo_1467F20 *)0x0);
    UnityEngine_Rendering_RenderPipelineManager__remove_beginCameraRendering
              ((System_Action_ScriptableRenderContext__Camera__o *)pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
    System_Action_ScriptableRenderContext__object____ctor
              (pSVar1,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering,
               (MethodInfo_1467F20 *)0x0);
    UnityEngine_Rendering_RenderPipelineManager__remove_endCameraRendering
              ((System_Action_ScriptableRenderContext__Camera__o *)pSVar1,(MethodInfo *)0x0);
    TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed = false;
  }
  return;
}


// Cameras.CameraOcclusion$$Reset
// il2cpp: void Cameras_CameraOcclusion__Reset (const MethodInfo* method);
// 0x1822ed3b0
// eh: try 0x1822ed530..0x1822ed591 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ed5a2: mov rdx, qword ptr [rip + 0x1dc7137]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x1822ed5a9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822ed5ae: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ed5b3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822ed5b8: test rcx, rcx
// asm:   0x1822ed5bb: jne 0x1822ed7c1
// asm:   0x1822ed7c1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Cameras_CameraOcclusion__Reset(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_Material__Material__o *pSVar3;
  System_Collections_Generic_Dictionary_Renderer__CameraOcclusion_MaterialOverride__o *__this;
  System_Collections_Generic_Dictionary_Collider__Renderer____o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar4;
  System_Collections_Generic_Dictionary_Renderer__Renderer__o *__this_01;
  System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *pSVar5;
  System_Collections_Generic_List_Material__o *pSVar6;
  UnityEngine_Collider_array *pUVar7;
  UnityEngine_RaycastHit_array *pUVar8;
  UnityEngine_Object_o *x;
  bool bVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_18434767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_Clear
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
              );
    Il2CppMethodInitialized_18434767f = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Clear((MethodInfo *)0x0);
  pSVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies;
  if (pSVar3 != (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_02,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                );
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_28,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                          );
        x = local_18;
        if (!bVar9) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(x,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                );
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      pSVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies;
      if (pSVar3 != (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                   (MethodInfo_13BF1C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Clear);
        __this = TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides;
        if (__this != (System_Collections_Generic_Dictionary_Renderer__CameraOcclusion_MaterialOverride__o *)
                      0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_Clear
                    );
          __this_00 = TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers;
          if (__this_00 != (System_Collections_Generic_Dictionary_Collider__Renderer____o *)0x0) {
            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13BF1C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_Clear);
            pSVar4 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                     TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders;
            if (pSVar4 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
              System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                        (pSVar4,(MethodInfo_17592A0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Collider_Clear);
              __this_01 = TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers;
              if (__this_01 != (System_Collections_Generic_Dictionary_Renderer__Renderer__o *)0x0) {
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                           (MethodInfo_13BF1C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_Clear);
                pSVar5 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
                if (pSVar5 != (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0) {
                  piVar1 = &(pSVar5->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  iVar2 = (pSVar5->fields)._size;
                  (pSVar5->fields)._size = 0;
                  if (0 < iVar2) {
                    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
                  }
                  pSVar4 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                           TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates;
                  if (pSVar4 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                              (pSVar4,(MethodInfo_17592A0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Renderer_Clear);
                    pSVar6 = TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials;
                    if (pSVar6 != (System_Collections_Generic_List_Material__o *)0x0) {
                      piVar1 = &(pSVar6->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      iVar2 = (pSVar6->fields)._size;
                      (pSVar6->fields)._size = 0;
                      if (0 < iVar2) {
                        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar2,
                                            (MethodInfo *)0x0);
                      }
                      pSVar4 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                               TypeInfo_Cameras_CameraOcclusion->static_fields->UpdatedMaterials;
                      if (pSVar4 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                                  (pSVar4,(MethodInfo_17592A0 *)
                                          MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
                        pUVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
                        if (pUVar7 != (UnityEngine_Collider_array *)0x0) {
                          System_Array__Clear((System_Array_o *)
                                              TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders,0,
                                              (int32_t)pUVar7->max_length,(MethodInfo *)0x0);
                          pUVar8 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
                          if (pUVar8 != (UnityEngine_RaycastHit_array *)0x0) {
                            System_Array__Clear((System_Array_o *)
                                                TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits,0
                                                ,(int32_t)pUVar8->max_length,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$BeginCameraRendering
// il2cpp: void Cameras_CameraOcclusion__BeginCameraRendering (UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x1822eb2d0
// eh: try 0x1822eb5b0..0x1822eb5eb -> pad 0x183317f30 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822eb5ad: nop dword ptr [rax]
// asm:   0x1822eb5fc: mov rdx, qword ptr [rip + 0x1da819d]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_Dispose
// asm:   0x1822eb603: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822eb608: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822eb60d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822eb612: test rcx, rcx
// asm:   0x1822eb615: jne 0x1822eb625
// asm:   0x1822eb625: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 

void Cameras_CameraOcclusion__BeginCameraRendering
               (UnityEngine_Rendering_ScriptableRenderContext_o context,UnityEngine_Camera_o *camera,
               MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this;
  Cameras_CameraOcclusion_StaticFields *pCVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  Il2CppObject *renderer;
  bool bVar3;
  undefined1 local_48 [16];
  UnityEngine_Renderer_o *local_38;
  System_Collections_Generic_HashSet_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184347680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347680 = '\x01';
  }
  local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields->_camera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)camera,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pUVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields->_camera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      if (0.0 < TypeInfo_Cameras_CameraOcclusion->static_fields->_radius) {
        if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        }
        Cameras_CameraOcclusion__FindCandidates((MethodInfo *)0x0);
        __this = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                 TypeInfo_Cameras_CameraOcclusion->static_fields->UpdatedMaterials;
        if (__this != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
          System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                    (__this,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Clear
                    );
          pCVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields;
          local_48._0_8_ = *(undefined8 *)&(pCVar2->_start).fields;
          local_48._12_4_ = 0;
          local_48._8_4_ = (pCVar2->_start).fields.z;
          UnityEngine_Shader__SetGlobalColor
                    (pCVar2->StartId,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
          pCVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields;
          local_48._0_8_ = *(undefined8 *)&(pCVar2->_end).fields;
          local_48._12_4_ = 0;
          local_48._8_4_ = (pCVar2->_end).fields.z;
          UnityEngine_Shader__SetGlobalColor(pCVar2->EndId,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
          UnityEngine_Shader__SetGlobalFloat
                    (TypeInfo_Cameras_CameraOcclusion->static_fields->RadiusId,
                     TypeInfo_Cameras_CameraOcclusion->static_fields->_radius,(MethodInfo *)0x0);
          pCVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields;
          local_48._0_8_ = *(undefined8 *)&(pCVar2->_groundPlane).fields;
          local_48._8_4_ = (pCVar2->_groundPlane).fields.z;
          local_48._12_4_ = (pCVar2->_groundPlane).fields.w;
          UnityEngine_Shader__SetGlobalColor
                    (pCVar2->GroundPlaneId,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
          __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                      TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates;
          if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
            System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_00,
                       (MethodInfo_175C200 *)
                       MethodInfo_System_Collections_Generic_HashSet_Renderer_GetEnumerator);
            local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)local_48._0_8_;
            local_28.fields._index = local_48._8_4_;
            local_28.fields._version = local_48._12_4_;
            local_28.fields._current = (Il2CppObject *)local_38;
            local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            local_48._8_8_ = &local_28;
            while (bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                     (&local_28,
                                      (MethodInfo_15381F0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_MoveNext
                                     ), renderer = local_28.fields._current, bVar3) {
              if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
              }
              Cameras_CameraOcclusion__ApplyMaterials((UnityEngine_Renderer_o *)renderer,(MethodInfo *)0x0);
            }
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_Dispose);
            return;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Cameras.CameraOcclusion$$EndCameraRendering
// il2cpp: void Cameras_CameraOcclusion__EndCameraRendering (UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x1822eb790

void Cameras_CameraOcclusion__EndCameraRendering
               (UnityEngine_Rendering_ScriptableRenderContext_o context,UnityEngine_Camera_o *camera,
               MethodInfo *method)

{
  UnityEngine_Camera_o *y;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347681 = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  y = TypeInfo_Cameras_CameraOcclusion->static_fields->_camera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)camera,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__RestoreMaterials((MethodInfo *)0x0);
  }
  return;
}


// Cameras.CameraOcclusion$$FindCandidates
// il2cpp: void Cameras_CameraOcclusion__FindCandidates (const MethodInfo* method);
// 0x1822eb840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ebaac: nop dword ptr [rax]

void Cameras_CameraOcclusion__FindCandidates(MethodInfo *method)

{
  float radius;
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this;
  Cameras_CameraOcclusion_StaticFields *pCVar6;
  UnityEngine_Collider_array *pUVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *original;
  Il2CppObject *pIVar8;
  bool bVar9;
  int32_t iVar10;
  uint uVar11;
  uint uVar12;
  Il2CppObject *local_res10;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184347682 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Resize_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184347682 = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  __this = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
           TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates;
  if (__this != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
              (__this,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_Clear);
    while( true ) {
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      pCVar6 = TypeInfo_Cameras_CameraOcclusion->static_fields;
      uVar2._0_4_ = (pCVar6->_start).fields.x;
      uVar2._4_4_ = (pCVar6->_start).fields.y;
      fVar4 = (pCVar6->_start).fields.z;
      uVar3._0_4_ = (pCVar6->_end).fields.x;
      uVar3._4_4_ = (pCVar6->_end).fields.y;
      fVar5 = (pCVar6->_end).fields.z;
      radius = pCVar6->_radius;
      pUVar7 = pCVar6->_colliders;
      iVar10 = pCVar6->MapMask;
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_68._0_8_ = uVar3;
      local_68.z = fVar5;
      local_58[0]._0_8_ = uVar2;
      local_58[0].z = fVar4;
      iVar10 = UnityEngine_Physics__OverlapCapsuleNonAlloc
                         ((UnityEngine_Vector3_o *)local_58,(UnityEngine_Vector3_o *)&local_68,radius,pUVar7,
                          iVar10,2,(MethodInfo *)0x0);
      pUVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
      if (pUVar7 == (UnityEngine_Collider_array *)0x0) break;
      if (iVar10 < (int)pUVar7->max_length) {
        uVar12 = 0;
        if (0 < iVar10) goto label_1822eba34;
        goto label_1822ebb4b;
      }
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      pUVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
      if (pUVar7 == (UnityEngine_Collider_array *)0x0) break;
      System_Array__Resize_BindingRestrictions_TestBuilder_AndNode_
                ((System_Dynamic_BindingRestrictions_TestBuilder_AndNode_array **)
                 &TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders,(int)pUVar7->max_length * 2,
                 (MethodInfo_5EA230 *)MethodInfo_System_Array_Resize_Collider);
    }
  }
label_1822ebba8:
  ThrowNullReferenceException();
label_1822eba34:
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
  if (pUVar7 == (UnityEngine_Collider_array *)0x0) goto label_1822ebba8;
  if ((uint)pUVar7->max_length <= uVar12) {
label_1822ebbae:
    ThrowIndexOutOfRangeException();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1822ebba8;
  bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)pUVar7->m_Items[(int)uVar12],&local_res10,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_TryGetValue);
  pIVar8 = local_res10;
  if (bVar9) {
    uVar11 = 0;
    if (local_res10 == (Il2CppObject *)0x0) goto label_1822ebba8;
    for (; uVar1 = *(uint *)&pIVar8[1].monitor, (int)uVar11 < (int)uVar1; uVar11 = uVar11 + 1) {
      if (uVar1 <= uVar11) goto label_1822ebbae;
      original = (&pIVar8[2].klass)[(int)uVar11];
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      Cameras_CameraOcclusion__AddCandidate((UnityEngine_Renderer_o *)original,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
  if (pUVar7 == (UnityEngine_Collider_array *)0x0) goto label_1822ebba8;
  if ((uint)pUVar7->max_length <= uVar12) goto label_1822ebbae;
  pUVar7->m_Items[(int)uVar12] = (UnityEngine_Collider_o *)0x0;
  Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar12,(void *)0x0);
  uVar12 = uVar12 + 1;
  if (iVar10 <= (int)uVar12) {
label_1822ebb4b:
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__FindFallbackCandidates((MethodInfo *)0x0);
    return;
  }
  goto label_1822eba34;
}


// Cameras.CameraOcclusion$$FindFallbackCandidates
// il2cpp: void Cameras_CameraOcclusion__FindFallbackCandidates (const MethodInfo* method);
// 0x1822ebbc0
// eh: try 0x1822ebeb3..0x1822ec4a5 -> pad 0x183340140 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ebec9: mov ebx, 0x88
// asm:   0x1822ebece: nop 
// asm:   0x1822ec10b: mov r15d, dword ptr [rsp + 0x54]
// asm:   0x1822ec120: mov r14d, dword ptr [rsp + 0x5c]
// asm:   0x1822ec1df: nop 
// asm:   0x1822ec39a: mov rdx, qword ptr [rip + 0x1db4867]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_Dispose
// asm:   0x1822ec3a1: mov rcx, qword ptr [rsp + 0xb8]
// asm:   0x1822ec3a9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ec3ae: mov rcx, qword ptr [rsp + 0xb0]
// asm:   0x1822ec3b6: test rcx, rcx
// asm:   0x1822ec3b9: jne 0x1822ec48b
// asm:   0x1822ec3bf: movss xmm11, dword ptr [rsp + 0x60]
// asm:   0x1822ec3c6: movsd xmm9, qword ptr [rsp + 0x38]
// asm:   0x1822ec3cd: movups xmm10, xmmword ptr [rsp + 0x28]
// asm:   0x1822ec3d3: mov r13, qword ptr [rsp + 0x40]
// asm:   0x1822ec3d8: mov r12d, dword ptr [rsp + 0x24]
// asm:   0x1822ec3dd: mov r15d, dword ptr [rsp + 0x20]
// asm:   0x1822ec3e2: mov r14d, dword ptr [rsp + 0x238]
// asm:   0x1822ec3ea: movss xmm12, dword ptr [rip + 0x106c811]
// asm:   0x1822ec3f3: mov eax, dword ptr [rsp + 0x228]
// asm:   0x1822ec3fa: inc r14d
// asm:   0x1822ec3fd: jmp 0x1822ec125
// asm:   0x1822ec425: mov rdx, qword ptr [rip + 0x1db453c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_Dispose
// asm:   0x1822ec42c: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x1822ec431: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ec436: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1822ec43b: test rcx, rcx
// asm:   0x1822ec43e: jne 0x1822ec4a5
// asm:   0x1822ec48b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822ec4a5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183340110: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340115: push rbp
// asm:   0x183340116: sub rsp, 0x20
// asm:   0x18334011a: mov rbp, rdx
// asm:   0x18334011d: mov rax, qword ptr [rbp + 0x140]
// asm:   0x183340124: mov rcx, qword ptr [rax]
// asm:   0x183340127: mov qword ptr [rbp + 0xb0], rcx
// asm:   0x18334012e: movabs rax, 0
// asm:   0x183340138: add rsp, 0x20
// asm:   0x18334013c: pop rbp
// asm:   0x18334013d: ret 
// asm:   0x183340140: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340145: push rbp
// asm:   0x183340146: sub rsp, 0x20
// asm:   0x18334014a: mov rbp, rdx
// asm:   0x18334014d: mov rax, qword ptr [rbp + 0x148]
// asm:   0x183340154: mov rcx, qword ptr [rax]
// asm:   0x183340157: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18334015b: movabs rax, 0
// asm:   0x183340165: add rsp, 0x20
// asm:   0x183340169: pop rbp
// asm:   0x18334016a: ret 

void Cameras_CameraOcclusion__FindFallbackCandidates(MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  int iVar3;
  Cameras_CameraOcclusion_StaticFields *pCVar4;
  System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *__this;
  System_Collections_Generic_Dictionary_Vector3Int__List_CameraOcclusion_FallbackRenderer___o *pSVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  Il2CppClass *pIVar7;
  undefined8 uVar8;
  Il2CppObject *pIVar9;
  Cameras_CameraOcclusion_FallbackGrid_o *__this_00;
  Il2CppObject *pIVar10;
  bool bVar11;
  int32_t iVar12;
  longlong lVar13;
  UnityEngine_Vector3Int_o *pUVar14;
  UnityEngine_GameObject_o *__this_01;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res18 [2];
  int local_res20;
  float fStack_1e4;
  float fStack_1e0;
  float local_1dc;
  undefined8 local_1d8;
  float local_1d0;
  int local_1c8;
  int32_t local_1c4;
  int32_t local_1c0;
  int32_t local_1bc;
  float local_1b8;
  System_Collections_Generic_List_T__o *local_1b0;
  undefined8 local_1a8;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_1a0;
  UnityEngine_Vector3_o local_198;
  UnityEngine_Vector3_o local_188;
  UnityEngine_Vector3Int_o local_178;
  undefined1 local_168 [16];
  Cameras_CameraOcclusion_FallbackGrid_o *local_158;
  undefined1 local_150 [8];
  uint64_t uStack_148;
  Cameras_CameraOcclusion_FallbackGrid_o *local_140;
  System_Collections_Generic_List_Enumerator_object__o local_138;
  void *local_120;
  Il2CppClass *pIStack_118;
  void *local_110;
  UnityEngine_Vector3_Fields local_108;
  System_Collections_Generic_List_Enumerator_T__o local_f8 [2];
  UnityEngine_Vector3Int_o local_c8;
  UnityEngine_Vector3Int_o local_b8 [10];
  
  if (Il2CppMethodInitialized_184347683 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_TryGetVal
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_get_Count
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347683 = '\x01';
  }
  local_150 = (undefined1  [8])0x0;
  uStack_148 = 0;
  local_140 = (Cameras_CameraOcclusion_FallbackGrid_o *)0x0;
  local_1b0 = (System_Collections_Generic_List_T__o *)0x0;
  local_138.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_138.fields._index = 0;
  local_138.fields._version = 0;
  local_138.fields._current = (Il2CppObject *)0x0;
  local_120 = (void *)0x0;
  pIStack_118 = (Il2CppClass *)0x0;
  local_110 = (void *)0x0;
  local_res18[0] = 0.0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pCVar4 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  fVar20 = (pCVar4->_end).fields.x - (pCVar4->_start).fields.x;
  fVar21 = (pCVar4->_end).fields.y - (pCVar4->_start).fields.y;
  fVar22 = (pCVar4->_end).fields.z - (pCVar4->_start).fields.z;
  local_1d8 = (Cameras_CameraOcclusion_FallbackGrid_o *)CONCAT44(fVar21,fVar20);
  local_1d0 = fVar22;
  fVar17 = (float)il2cpp_runtime_helper_180546a40(&local_1d8,0);
  pSVar2 = *(System_Collections_Generic_List_T__o **)
            &(TypeInfo_Cameras_CameraOcclusion->static_fields->_start).fields;
  fVar19 = (TypeInfo_Cameras_CameraOcclusion->static_fields->_start).fields.z;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar18 = (float)il2cpp_runtime_helper_180546a40(&local_1d8,0);
  if (fVar18 <= 1e-05) {
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar20 = (pUVar6->zeroVector).fields.x;
    fVar21 = (pUVar6->zeroVector).fields.y;
    fVar22 = (pUVar6->zeroVector).fields.z;
  }
  else {
    fVar20 = fVar20 / fVar18;
    fVar21 = fVar21 / fVar18;
    fVar22 = fVar22 / fVar18;
  }
  fStack_1e4 = fVar20;
  fStack_1e0 = fVar21;
  local_1dc = fVar22;
  local_1dc = (float)il2cpp_runtime_helper_180546a40(&fStack_1e4,0);
  if (1e-05 < local_1dc) {
    fStack_1e4 = fVar20 / local_1dc;
    fStack_1e0 = fVar21 / local_1dc;
    local_1dc = fVar22 / local_1dc;
  }
  else {
    fStack_1e4 = 0.0;
    fStack_1e0 = 0.0;
    local_1dc = 0.0;
  }
  __this = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
  if (__this == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0) {
    ThrowNullReferenceException();
  }
  local_1b8 = fVar17;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_168,
             (System_Collections_Generic_List_T__o *)__this,
             (MethodInfo_91F180 *)
             MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_GetEnumerator);
  local_150 = (undefined1  [8])local_168._0_8_;
  uStack_148 = local_168._8_8_;
  local_140 = local_158;
  local_1a8 = 0;
  local_1a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_150;
  pIVar9 = (Il2CppObject *)CONCAT44(local_1dc,fStack_1e0);
  uVar8._4_4_ = (int32_t)fStack_1e4;
  uVar8._0_4_ = (int32_t)fVar19;
  do {
    do {
      bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         ((System_Collections_Generic_List_Enumerator_object__o *)local_150,
                          (MethodInfo_153A2A0 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_MoveNext
                         );
      __this_00 = local_140;
      if (!bVar11) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (local_1a0,
                   MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_Dispose)
        ;
        return;
      }
      local_1d8 = local_140;
      if (local_140 == (Cameras_CameraOcclusion_FallbackGrid_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = (local_140->fields).Cells;
      if (pSVar5 == (System_Collections_Generic_Dictionary_Vector3Int__List_CameraOcclusion_FallbackRenderer___o
                     *)0x0) {
        ThrowNullReferenceException();
      }
      iVar12 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                          (MethodInfo_13CDEB0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_get_Count
                         );
    } while (iVar12 == 0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar20 = (pUVar6->oneVector).fields.x;
    fVar21 = (pUVar6->oneVector).fields.y;
    fVar22 = (pUVar6->oneVector).fields.z;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pCVar4 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    fVar19 = (__this_00->fields).CellSize * 0.5 + pCVar4->_radius;
    fVar20 = fVar20 * fVar19;
    fVar21 = fVar21 * fVar19;
    fVar22 = fVar22 * fVar19;
    fVar19 = (pCVar4->_end).fields.x;
    fVar18 = (pCVar4->_end).fields.y;
    fVar1 = (pCVar4->_end).fields.z;
    local_198.fields.y = (pCVar4->_start).fields.y;
    local_198.fields.z = (pCVar4->_start).fields.z;
    lVar13 = 0x94;
    if ((pCVar4->_start).fields.x <= fVar19 && fVar19 != (pCVar4->_start).fields.x) {
      lVar13 = 0x88;
    }
    if (fVar18 <= local_198.fields.y) {
      local_198.fields.y = fVar18;
    }
    if (fVar1 <= local_198.fields.z) {
      local_198.fields.z = fVar1;
    }
    local_198.fields.x = *(float *)((longlong)&pCVar4->StartId + lVar13) - fVar20;
    local_198.fields.y = local_198.fields.y - fVar21;
    local_198.fields.z = local_198.fields.z - fVar22;
    pUVar14 = Cameras_CameraOcclusion_FallbackGrid__GetCell(&local_c8,__this_00,&local_198,(MethodInfo *)0x0);
    iVar12 = (pUVar14->fields).m_X;
    local_1c4 = (pUVar14->fields).m_Y;
    local_1bc = (pUVar14->fields).m_Z;
    pCVar4 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    fVar19 = (pCVar4->_end).fields.y;
    fVar18 = (pCVar4->_end).fields.z;
    local_188.fields.y = (pCVar4->_start).fields.y;
    local_188.fields.z = (pCVar4->_start).fields.z;
    lVar13 = 0x94;
    fVar1 = (pCVar4->_start).fields.x;
    if ((pCVar4->_end).fields.x <= fVar1 && fVar1 != (pCVar4->_end).fields.x) {
      lVar13 = 0x88;
    }
    if (local_188.fields.y <= fVar19) {
      local_188.fields.y = fVar19;
    }
    if (local_188.fields.z <= fVar18) {
      local_188.fields.z = fVar18;
    }
    local_188.fields.x = fVar20 + *(float *)((longlong)&pCVar4->StartId + lVar13);
    local_188.fields.y = fVar21 + local_188.fields.y;
    local_188.fields.z = fVar22 + local_188.fields.z;
    pUVar14 = Cameras_CameraOcclusion_FallbackGrid__GetCell(local_b8,__this_00,&local_188,(MethodInfo *)0x0);
    local_1c8 = (pUVar14->fields).m_X;
    local_1c0 = (pUVar14->fields).m_Y;
    iVar3 = (pUVar14->fields).m_Z;
    for (; iVar16 = local_1c4, iVar12 <= local_1c8; iVar12 = iVar12 + 1) {
      for (; iVar15 = local_1bc, iVar16 <= local_1c0; iVar16 = iVar16 + 1) {
        for (; local_res20 = iVar15, iVar15 <= iVar3; iVar15 = iVar15 + 1) {
          pSVar5 = (__this_00->fields).Cells;
          if (pSVar5 == (System_Collections_Generic_Dictionary_Vector3Int__List_CameraOcclusion_FallbackRenderer___o
                         *)0x0) {
            ThrowNullReferenceException();
          }
          local_178.fields.m_X = iVar12;
          local_178.fields.m_Y = iVar16;
          local_178.fields.m_Z = iVar15;
          bVar11 = System_Collections_Generic_Dictionary_Vector3Int__object___TryGetValue
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,&local_178,
                              (Il2CppObject **)&local_1b0,
                              (MethodInfo_14CA5D0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_TryGetVal
                             );
          if (bVar11) {
            if (local_1b0 == (System_Collections_Generic_List_T__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      (local_f8,local_1b0,
                       (MethodInfo_91F180 *)
                       MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_GetEnumerator
                      );
            local_138.fields._list = local_f8[0].fields._list;
            local_138.fields._index = local_f8[0].fields._index;
            local_138.fields._version = local_f8[0].fields._version;
            local_138.fields._current = local_f8[0].fields._current;
            local_168._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_168._8_8_ = &local_138;
            while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (&local_138,
                                       (MethodInfo_153A2A0 *)
                                       MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_MoveNext
                                      ), pIVar10 = local_138.fields._current, bVar11) {
              if (local_138.fields._current == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar7 = local_138.fields._current[1].klass;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar11 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if (!bVar11) {
                if (pIVar10[1].klass == (Il2CppClass *)0x0) {
                  ThrowNullReferenceException();
                }
                __this_01 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar10[1].klass,(MethodInfo *)0x0);
                if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar11 = UnityEngine_GameObject__get_activeInHierarchy(__this_01,(MethodInfo *)0x0);
                if (bVar11) {
                  local_120 = pIVar10[1].monitor;
                  pIStack_118 = pIVar10[2].klass;
                  local_110 = pIVar10[2].monitor;
                  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                  }
                  fVar20 = TypeInfo_Cameras_CameraOcclusion->static_fields->_radius;
                  UnityEngine_Bounds__Expand
                            ((UnityEngine_Bounds_o *)&local_120,fVar20 + fVar20,(MethodInfo *)0x0);
                  pCVar4 = TypeInfo_Cameras_CameraOcclusion->static_fields;
                  local_108.x = (pCVar4->_start).fields.x;
                  local_108.y = (pCVar4->_start).fields.y;
                  local_108.z = (pCVar4->_start).fields.z;
                  bVar11 = UnityEngine_Bounds__Internal_Contains
                                     ((UnityEngine_Bounds_o *)&local_120,(UnityEngine_Vector3_o *)&local_108,
                                      (MethodInfo *)0x0);
                  if ((bVar11) ||
                     ((local_f8[0].fields._list = pSVar2, local_f8[0].fields._8_8_ = uVar8,
                      local_f8[0].fields._current = pIVar9,
                      bVar11 = UnityEngine_Bounds__IntersectRayAABB
                                         ((UnityEngine_Ray_o *)local_f8,(UnityEngine_Bounds_o *)&local_120,
                                          local_res18,(MethodInfo *)0x0), bVar11 && (local_res18[0] <= fVar17)
                      ))) {
                    pIVar7 = pIVar10[1].klass;
                    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                    }
                    Cameras_CameraOcclusion__AddCandidate((UnityEngine_Renderer_o *)pIVar7,(MethodInfo *)0x0);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_138,
                       MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_Dispose
                      );
          }
        }
      }
    }
  } while( true );
}


// Cameras.CameraOcclusion$$RegisterFallbackRenderer
// il2cpp: void Cameras_CameraOcclusion__RegisterFallbackRenderer (UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x1822ecae0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ecc78: nop dword ptr [rax + rax]
// asm:   0x1822ecc8b: movss xmm8, dword ptr [rip + 0x106c0bc]
// asm:   0x1822ecc94: nop dword ptr [rax]
// asm:   0x1822ecc98: nop dword ptr [rax + rax]

void Cameras_CameraOcclusion__RegisterFallbackRenderer(UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *pSVar5;
  Cameras_CameraOcclusion_FallbackGrid_array *pCVar6;
  Cameras_CameraOcclusion_FallbackRenderer_array *pCVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  UnityEngine_Bounds_o *pUVar16;
  Cameras_CameraOcclusion_FallbackGrid_o *item;
  System_Collections_Generic_Dictionary_Vector3Int__List_CameraOcclusion_FallbackRenderer___o *__this;
  Il2CppObject *pIVar17;
  System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *pSVar18;
  Cameras_CameraOcclusion_FallbackRenderer_o *item_00;
  MethodInfo *pMVar19;
  char cVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *local_res8;
  UnityEngine_Vector3Int_Fields local_e8 [2];
  UnityEngine_Bounds_o local_c8 [6];
  
  if (Il2CppMethodInitialized_184347684 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_Add
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_TryGetVal
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion_FallbackGrid);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion_FallbackRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer);
    Il2CppMethodInitialized_184347684 = '\x01';
  }
  local_res8 = (System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *)0x0;
  if (renderer == (UnityEngine_Renderer_o *)0x0) {
label_1822ed104:
    ThrowNullReferenceException();
  }
  pUVar16 = UnityEngine_Renderer__get_bounds(local_c8,renderer,(MethodInfo *)0x0);
  fVar22 = (pUVar16->fields).m_Extents.fields.y;
  fVar23 = (pUVar16->fields).m_Extents.fields.z;
  fVar13 = (pUVar16->fields).m_Extents.fields.y;
  fVar14 = (pUVar16->fields).m_Extents.fields.z;
  fVar2 = (pUVar16->fields).m_Extents.fields.x;
  fVar22 = fVar22 + fVar22;
  fVar11 = (pUVar16->fields).m_Center.fields.x;
  fVar12 = (pUVar16->fields).m_Center.fields.y;
  local_e8[0].m_X = (int32_t)(pUVar16->fields).m_Center.fields.x;
  local_e8[0].m_Y = (int32_t)(pUVar16->fields).m_Center.fields.y;
  fVar3 = (pUVar16->fields).m_Center.fields.z;
  fVar23 = fVar23 + fVar23;
  if (fVar22 <= fVar23) {
    fVar22 = fVar23;
  }
  fVar23 = fVar2 + fVar2;
  if (fVar2 + fVar2 <= fVar22) {
    fVar23 = fVar22;
  }
  uVar21 = 0;
  fVar22 = 128.0;
  if (128.0 < fVar23) {
    do {
      fVar22 = fVar22 + fVar22;
      uVar21 = uVar21 + 1;
    } while (fVar22 < fVar23);
  }
  while( true ) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pSVar5 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
    if (pSVar5 == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0) goto label_1822ed104;
    if ((int)uVar21 < (pSVar5->fields)._size) break;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pSVar5 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
    if (pSVar5 == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0) goto label_1822ed104;
    fVar22 = (float)il2cpp_runtime_helper_1804f6b50(0x40000000);
    item = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion_FallbackGrid);
    if (Il2CppMethodInitialized_18434768a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
                );
      Il2CppMethodInitialized_18434768a = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
                       );
    System_Collections_Generic_Dictionary_Vector3Int__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_14CF520 *)
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
              );
    (item->fields).Cells = __this;
    Il2CppCodeGenWriteBarrier(&(item->fields).Cells,__this);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
    (item->fields).CellSize = fVar22 * 128.0;
    pMVar19 = MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar6 = (pSVar5->fields)._items;
    if (pCVar6 == (Cameras_CameraOcclusion_FallbackGrid_array *)0x0) goto label_1822ed104;
    uVar4 = (pSVar5->fields)._size;
    if (uVar4 < (uint)pCVar6->max_length) {
      (pSVar5->fields)._size = uVar4 + 1;
      if ((uint)pCVar6->max_length <= uVar4) goto label_1822ed10a;
      pCVar6->m_Items[(int)uVar4] = item;
      Il2CppCodeGenWriteBarrier(pCVar6->m_Items + (int)uVar4,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar19->klass->rgctx_data[0xe].method);
    }
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pSVar5 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
  if (pSVar5 == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0) goto label_1822ed104;
  pMVar19 = (MethodInfo *)(ulonglong)uVar21;
  pIVar17 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar5,uVar21,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_get_Item);
  if (pIVar17 == (Il2CppObject *)0x0) goto label_1822ed104;
  fVar22 = *(float *)&pIVar17[1].klass;
  fVar23 = (float)local_e8[0].m_Y / fVar22;
  if (Il2CppMethodInitialized_18433df26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  cVar20 = Il2CppMethodInitialized_18433df26;
  dVar8 = il2cpp_runtime_helper_1804f4690((double)(fVar11 / fVar22),pMVar19);
  if (cVar20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    cVar20 = '\x01';
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    cVar20 = Il2CppMethodInitialized_18433df26;
  }
  dVar9 = il2cpp_runtime_helper_1804f4690((double)fVar23,pMVar19);
  if (cVar20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar10 = il2cpp_runtime_helper_1804f4690((double)(fVar3 / fVar22),pMVar19);
  if (pIVar17[1].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_1822ed104;
  local_e8[0].m_Y = (int)dVar9;
  local_e8[0].m_X = (int)dVar8;
  local_e8[0].m_Z = (int)dVar10;
  bVar15 = System_Collections_Generic_Dictionary_Vector3Int__object___TryGetValue
                     (pIVar17[1].monitor,(UnityEngine_Vector3Int_o *)local_e8,(Il2CppObject **)&local_res8,
                      (MethodInfo_14CA5D0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_TryGetVal
                     );
  if (!bVar15) {
    pSVar18 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar18,
               (MethodInfo_92A240 *)
               MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_ctor);
    local_res8 = pSVar18;
    if (pIVar17[1].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
    goto label_1822ed104;
    local_e8[0].m_Z = (int)dVar10;
    System_Collections_Generic_Dictionary_Vector3Int__object___Add
              (pIVar17[1].monitor,(UnityEngine_Vector3Int_o *)local_e8,(Il2CppObject *)pSVar18,
               (MethodInfo_14BA090 *)
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_Add
              );
  }
  pSVar18 = local_res8;
  item_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion_FallbackRenderer);
  local_e8[0].m_Z = (int32_t)fVar3;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item_00,(MethodInfo *)0x0);
  (item_00->fields).Renderer = renderer;
  Il2CppCodeGenWriteBarrier(&(item_00->fields).Renderer,renderer);
  (item_00->fields).Bounds.fields.m_Center.fields.x = fVar11;
  (item_00->fields).Bounds.fields.m_Center.fields.y = fVar12;
  (item_00->fields).Bounds.fields.m_Center.fields.z = (float)local_e8[0].m_Z;
  (item_00->fields).Bounds.fields.m_Extents.fields.x = fVar2;
  pUVar16 = &(item_00->fields).Bounds;
  (pUVar16->fields).m_Extents.fields.y = fVar13;
  pMVar19 = MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_Add;
  (pUVar16->fields).m_Extents.fields.z = fVar14;
  if (pSVar18 == (System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *)0x0)
  goto label_1822ed104;
  piVar1 = &(pSVar18->fields)._version;
  *piVar1 = *piVar1 + 1;
  pCVar7 = (pSVar18->fields)._items;
  if (pCVar7 == (Cameras_CameraOcclusion_FallbackRenderer_array *)0x0) goto label_1822ed104;
  uVar21 = (pSVar18->fields)._size;
  if (uVar21 < (uint)pCVar7->max_length) {
    (pSVar18->fields)._size = uVar21 + 1;
    if ((uint)pCVar7->max_length <= uVar21) {
label_1822ed10a:
      ThrowIndexOutOfRangeException();
    }
    pCVar7->m_Items[(int)uVar21] = item_00;
    Il2CppCodeGenWriteBarrier(pCVar7->m_Items + (int)uVar21,item_00);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar18,(Il2CppObject *)item_00,
               (MethodInfo_93DD50 *)pMVar19->klass->rgctx_data[0xe].method);
  }
  return;
}


// Cameras.CameraOcclusion$$AddCandidate
// il2cpp: void Cameras_CameraOcclusion__AddCandidate (UnityEngine_Renderer_o* original, const MethodInfo* method);
// 0x1822eac00

void Cameras_CameraOcclusion__AddCandidate(UnityEngine_Renderer_o *original,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_c *pUVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Object_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_184347685 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_184347685 = '\x01';
  }
  local_res8[0] = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)original,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_1822eade4:
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)original,(Il2CppObject **)local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_TryGetValue);
    if (bVar3) {
      original = (UnityEngine_Renderer_o *)local_res8[0];
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)original,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((UnityEngine_Object_o *)original == (UnityEngine_Object_o *)0x0) goto label_1822eade4;
      bVar3 = UnityEngine_Renderer__get_enabled(original,(MethodInfo *)0x0);
      if (bVar3) {
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)original,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_1822eade4;
        bVar3 = UnityEngine_GameObject__get_activeInHierarchy(__this_01,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar2 = ((UnityEngine_Object_o *)original)->klass;
          bVar1 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
          if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) {
            bVar1 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
            if ((pUVar2->_2).typeHierarchyDepth < bVar1) {
              return;
            }
            if ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer) {
              return;
            }
          }
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          __this_00 = (System_Collections_Generic_HashSet_object__o *)
                      TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822eade4;
          System_Collections_Generic_HashSet_object___Add
                    (__this_00,(Il2CppObject *)original,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_Add);
        }
      }
    }
  }
  return;
}


// Cameras.CameraOcclusion$$ApplyMaterials
// il2cpp: void Cameras_CameraOcclusion__ApplyMaterials (UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x1822eadf0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822eaff7: jmp 0x1822eaf84
// asm:   0x1822eb0ef: nop 
// asm:   0x1822eb1e6: jmp 0x1822eb2af

void Cameras_CameraOcclusion__ApplyMaterials(UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_Material__o *pSVar3;
  UnityEngine_Material_o *pUVar4;
  System_Collections_Generic_List_Renderer__o *__this;
  UnityEngine_Renderer_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  UnityEngine_Material_o *pUVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  Cameras_CameraOcclusion_MaterialOverride_o *pCVar9;
  UnityEngine_Material_array *pUVar10;
  Il2CppObject *pIVar11;
  uint uVar12;
  byte bVar13;
  Cameras_CameraOcclusion_MaterialOverride_o *local_res8;
  
  if (Il2CppMethodInitialized_184347686 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion_MaterialOverride);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347686 = '\x01';
  }
  local_res8 = (Cameras_CameraOcclusion_MaterialOverride_o *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__GetSharedMaterials
              (renderer,TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials,(MethodInfo *)0x0);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar2,(Il2CppObject *)renderer,(Il2CppObject **)&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_TryGetValue
                        );
      pCVar9 = local_res8;
      if (bVar7) {
        if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        }
        if (pCVar9 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) goto label_1822eb2af;
        pSVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials;
        if (Il2CppMethodInitialized_18434768c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_Material_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_Material_get_Item);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_18434768c = '\x01';
        }
        pUVar10 = (pCVar9->fields).Originals;
        if ((pUVar10 == (UnityEngine_Material_array *)0x0) ||
           (pSVar3 == (System_Collections_Generic_List_Material__o *)0x0)) goto label_1822eb2af;
        if ((int)pUVar10->max_length == (pSVar3->fields)._size) {
          pUVar10 = (pCVar9->fields).Originals;
          uVar12 = 0;
          do {
            if ((int)pUVar10->max_length <= (int)uVar12) goto label_1822eb0d7;
            pUVar10 = (pCVar9->fields).Originals;
            if (pUVar10 == (UnityEngine_Material_array *)0x0) break;
            if ((uint)pUVar10->max_length <= uVar12) goto label_1822eb2c5;
            pUVar4 = pUVar10->m_Items[(int)uVar12];
            pUVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,uVar12,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_Material_get_Item);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)pUVar8,(MethodInfo *)0x0
                              );
            if (bVar7) goto label_1822eaff9;
            pUVar10 = (pCVar9->fields).Originals;
            uVar12 = uVar12 + 1;
          } while (pUVar10 != (UnityEngine_Material_array *)0x0);
          goto label_1822eb2af;
        }
      }
label_1822eaff9:
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      pSVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials;
      if (pSVar3 != (System_Collections_Generic_List_Material__o *)0x0) {
        value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                          ((System_Collections_Generic_List_T__o *)pSVar3,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_Material_ToArray);
        pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion_MaterialOverride);
        if (Il2CppMethodInitialized_18434768b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
          Il2CppMethodInitialized_18434768b = '\x01';
        }
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pCVar9,(MethodInfo *)0x0);
        (pCVar9->fields).Originals = (UnityEngine_Material_array *)value;
        Il2CppCodeGenWriteBarrier(&(pCVar9->fields).Originals,value);
        if (value != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                      *)0x0) {
          pUVar10 = (UnityEngine_Material_array *)
                    SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)value->max_length);
          (pCVar9->fields).Replacements = pUVar10;
          Il2CppCodeGenWriteBarrier(&(pCVar9->fields).Replacements,pUVar10);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides;
          local_res8 = pCVar9;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)renderer,(Il2CppObject *)pCVar9,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_set_Item
                      );
label_1822eb0d7:
            bVar13 = 0;
            uVar12 = 0;
            if (local_res8 != (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) {
              while (pUVar10 = (local_res8->fields).Originals, pUVar10 != (UnityEngine_Material_array *)0x0) {
                if ((int)pUVar10->max_length <= (int)uVar12) {
                  if (bVar13 != 0) {
                    if (local_res8 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) break;
                    UnityEngine_Renderer__set_sharedMaterials
                              (renderer,(local_res8->fields).Replacements,(MethodInfo *)0x0);
                    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                    }
                    pMVar6 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
                    __this = TypeInfo_Cameras_CameraOcclusion->static_fields->AppliedRenderers;
                    if (__this == (System_Collections_Generic_List_Renderer__o *)0x0) break;
                    piVar1 = &(__this->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar5 = (__this->fields)._items;
                    if (pUVar5 == (UnityEngine_Renderer_array *)0x0) break;
                    uVar12 = (__this->fields)._size;
                    if (uVar12 < (uint)pUVar5->max_length) {
                      (__this->fields)._size = uVar12 + 1;
                      if ((uint)pUVar5->max_length <= uVar12) {
label_1822eb2c5:
                        ThrowIndexOutOfRangeException();
                      }
                      pUVar5->m_Items[(int)uVar12] = renderer;
                      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar12,renderer);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)renderer,
                                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
                    }
                  }
                  return;
                }
                if ((local_res8 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) ||
                   (pUVar10 = (local_res8->fields).Originals, pUVar10 == (UnityEngine_Material_array *)0x0))
                break;
                if ((uint)pUVar10->max_length <= uVar12) goto label_1822eb2c5;
                pUVar4 = pUVar10->m_Items[(int)uVar12];
                if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                }
                pUVar8 = Cameras_CameraOcclusion__GetReplacement(pUVar4,(MethodInfo *)0x0);
                if ((local_res8 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) ||
                   (pUVar10 = (local_res8->fields).Replacements, pUVar10 == (UnityEngine_Material_array *)0x0)
                   ) break;
                if ((pUVar8 != (UnityEngine_Material_o *)0x0) &&
                   (pIVar11 = il2cpp_vm_Object_IsInst
                                        ((Il2CppObject *)pUVar8,(((pUVar10->obj).klass)->_1).element_class),
                   pIVar11 == (Il2CppObject *)0x0)) {
                  pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
                }
                if ((uint)pUVar10->max_length <= uVar12) goto label_1822eb2c5;
                pUVar10->m_Items[(int)uVar12] = pUVar8;
                Il2CppCodeGenWriteBarrier(pUVar10->m_Items + (int)uVar12,pUVar8);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)pUVar4,
                                   (MethodInfo *)0x0);
                bVar13 = bVar13 | bVar7;
                uVar12 = uVar12 + 1;
                if (local_res8 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) break;
              }
            }
          }
        }
      }
    }
  }
label_1822eb2af:
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$GetReplacement
// il2cpp: UnityEngine_Material_o* Cameras_CameraOcclusion__GetReplacement (UnityEngine_Material_o* original, const MethodInfo* method);
// 0x1822ec4c0

UnityEngine_Material_o *
Cameras_CameraOcclusion__GetReplacement(UnityEngine_Material_o *original,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *key;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Material_o *local_res8;
  System_String_o *local_res18;
  
  if (Il2CppMethodInitialized_184347687 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347687 = '\x01';
  }
  local_res18 = (System_String_o *)0x0;
  local_res8 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)original,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return original;
  }
  if (original != (UnityEngine_Material_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(original,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return original;
    }
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Cameras_CameraOcclusion->static_fields->ShaderReplacements;
    pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(original,(MethodInfo *)0x0);
    if ((pUVar3 != (UnityEngine_Object_o *)0x0) &&
       (key = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0),
       pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)key,(Il2CppObject **)&local_res18,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      if (!bVar2) {
        return original;
      }
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar1,(Il2CppObject *)original,(Il2CppObject **)&local_res8,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
        if (!bVar2) {
          pUVar3 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(local_res18,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            return original;
          }
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor_2ee55e0(__this_00,original,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_1822ec7a5;
          UnityEngine_Material__set_shader(__this_00,(UnityEngine_Shader_o *)pUVar3,(MethodInfo *)0x0);
          local_res8 = __this_00;
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1822ec7a5;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)original,(Il2CppObject *)local_res8,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
        }
        if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        }
        __this = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Cameras_CameraOcclusion->static_fields->UpdatedMaterials;
        if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___Add
                            (__this,(Il2CppObject *)original,
                             (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add)
          ;
          if (bVar2) {
            if (local_res8 == (UnityEngine_Material_o *)0x0) goto label_1822ec7a5;
            UnityEngine_Material__CopyPropertiesFromMaterial(local_res8,original,(MethodInfo *)0x0);
          }
          return local_res8;
        }
      }
    }
  }
label_1822ec7a5:
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$RestoreMaterials
// il2cpp: void Cameras_CameraOcclusion__RestoreMaterials (const MethodInfo* method);
// 0x1822ed7d0
// eh: try 0x1822ed8d0..0x1822eda3a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ed98d: mov rdx, qword ptr [rip + 0x1da60ac]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x1822ed994: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822ed999: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ed99e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822ed9a3: test rcx, rcx
// asm:   0x1822ed9a6: jne 0x1822eda3a
// asm:   0x1822eda3a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Cameras_CameraOcclusion__RestoreMaterials(MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_Renderer__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  bool bVar3;
  Il2CppObject *pIVar4;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184347688 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347688 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pSVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields->AppliedRenderers;
  if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_18;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this,(Il2CppObject *)x,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_get_Item
                           );
        if (pIVar4 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Renderer__set_sharedMaterials
                  ((UnityEngine_Renderer_o *)x,(UnityEngine_Material_array *)pIVar4[1].klass,(MethodInfo *)0x0
                  );
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pSVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields->AppliedRenderers;
    if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      UnityEngine_Shader__SetGlobalFloat
                (TypeInfo_Cameras_CameraOcclusion->static_fields->RadiusId,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$.cctor
// il2cpp: void Cameras_CameraOcclusion___cctor (const MethodInfo* method);
// 0x1822ee200

void Cameras_CameraOcclusion___cctor(MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_LayerMask_o UVar2;
  System_Int32_array *pSVar3;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_Dictionary_Collider__Renderer____o *__this_00;
  System_Collections_Generic_HashSet_Collider__o *__this_01;
  System_Collections_Generic_Dictionary_Renderer__Renderer__o *__this_02;
  System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *__this_03;
  System_Collections_Generic_HashSet_Renderer__o *__this_04;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_05;
  System_Collections_Generic_Dictionary_Renderer__CameraOcclusion_MaterialOverride__o *__this_06;
  System_Collections_Generic_List_Renderer__o *__this_07;
  System_Collections_Generic_List_Material__o *__this_08;
  System_Collections_Generic_HashSet_Material__o *__this_09;
  UnityEngine_Collider_array *value;
  UnityEngine_RaycastHit_array *value_00;
  
  if (Il2CppMethodInitialized_184347689 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Collider_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Renderer_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RaycastHit_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Universal Render Pipeline/Simple Lit");
    il2cpp_codegen_initialize_runtime_metadata(&"_CameraOcclusionEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"_CameraOcclusionStart");
    il2cpp_codegen_initialize_runtime_metadata(&"_CameraOcclusionGroundPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"Universal Render Pipeline/Lit");
    il2cpp_codegen_initialize_runtime_metadata(&"_CameraOcclusionRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/Camera Occlusion/Lit");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/Camera Occlusion/Simple Lit");
    Il2CppMethodInitialized_184347689 = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_CameraOcclusionStart",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->StartId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_CameraOcclusionEnd",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->EndId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_CameraOcclusionRadius",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->RadiusId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_CameraOcclusionGroundPlane",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->GroundPlaneId = iVar1;
  pSVar3 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,7);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (pSVar3 != (System_Int32_array *)0x0) {
    if ((((((int)pSVar3->max_length == 0) ||
          (pSVar3->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
          (uint)pSVar3->max_length < 2)) ||
         (pSVar3->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
         (uint)pSVar3->max_length < 3)) ||
        ((pSVar3->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
         (uint)pSVar3->max_length < 4 ||
         (pSVar3->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans,
         (uint)pSVar3->max_length < 5)))) ||
       ((pSVar3->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans,
        (uint)pSVar3->max_length < 6 ||
        (pSVar3->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
        (uint)pSVar3->max_length < 7)))) {
label_1822eea24:
      ThrowIndexOutOfRangeException();
    }
    pSVar3->m_Items[6] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects;
    UVar2 = Utility_PhysicsLayer__GetMask(pSVar3,(MethodInfo *)0x0);
    UVar2 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar2.fields.m_Mask,(MethodInfo *)0x0);
    TypeInfo_Cameras_CameraOcclusion->static_fields->MapMask = (int32_t)UVar2.fields.m_Mask;
    pSVar3 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
    if (pSVar3 != (System_Int32_array *)0x0) {
      if ((((int)pSVar3->max_length == 0) ||
          (pSVar3->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
          (uint)pSVar3->max_length < 2)) ||
         ((pSVar3->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
          (uint)pSVar3->max_length < 3 ||
          (pSVar3->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
          (uint)pSVar3->max_length < 4)))) goto label_1822eea24;
      pSVar3->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans;
      UVar2 = Utility_PhysicsLayer__GetMask(pSVar3,(MethodInfo *)0x0);
      UVar2 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar2.fields.m_Mask,(MethodInfo *)0x0);
      TypeInfo_Cameras_CameraOcclusion->static_fields->GroundMask = (int32_t)UVar2.fields.m_Mask;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   (Il2CppObject *)"Universal Render Pipeline/Lit",(Il2CppObject *)"AoTTG/Camera Occlusion/Lit",
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   (Il2CppObject *)"Universal Render Pipeline/Simple Lit",(Il2CppObject *)"AoTTG/Camera Occlusion/Simple Lit",
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
        TypeInfo_Cameras_CameraOcclusion->static_fields->ShaderReplacements = __this;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->ShaderReplacements,__this)
        ;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array);
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (MethodInfo_1454140 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers = __this_00;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers,__this_00);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Collider);
        System_Collections_Generic_HashSet_object____ctor
                  ((System_Collections_Generic_HashSet_object__o *)__this_01,
                   (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders = __this_01;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders,__this_01)
        ;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Renderer_Renderer
                              );
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                   (MethodInfo_1454140 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers = __this_02;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers,__this_02);
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
                   (MethodInfo_92A240 *)
                   MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids = __this_03;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids,__this_03);
        __this_04 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Renderer);
        System_Collections_Generic_HashSet_object____ctor
                  ((System_Collections_Generic_HashSet_object__o *)__this_04,
                   (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates = __this_04;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates,__this_04);
        __this_05 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material
                              );
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                   (MethodInfo_1454140 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies = __this_05;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies,__this_05);
        __this_06 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride
                              );
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                   (MethodInfo_1454140 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_ctor
                  );
        TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides = __this_06;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides,__this_06);
        __this_07 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_07,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->AppliedRenderers = __this_07;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Cameras_CameraOcclusion->static_fields->AppliedRenderers,__this_07);
        __this_08 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_08,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials = __this_08;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials,__this_08)
        ;
        __this_09 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Material);
        System_Collections_Generic_HashSet_object____ctor
                  ((System_Collections_Generic_HashSet_object__o *)__this_09,
                   (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
        TypeInfo_Cameras_CameraOcclusion->static_fields->UpdatedMaterials = __this_09;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Cameras_CameraOcclusion->static_fields->UpdatedMaterials,__this_09);
        value = (UnityEngine_Collider_array *)SZArrayNew(TypeInfo_UnityEngine_Collider_array,0x80);
        TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders = value;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders,value);
        value_00 = (UnityEngine_RaycastHit_array *)SZArrayNew(TypeInfo_UnityEngine_RaycastHit_array,0x10);
        TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits = value_00;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits,value_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


