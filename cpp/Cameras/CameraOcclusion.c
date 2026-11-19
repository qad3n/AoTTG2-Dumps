// Type: Cameras.CameraOcclusion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/CameraOcclusion.cs
// Prior real C# source: none
// --------------------------------

// Cameras.CameraOcclusion.FallbackRenderer$$.ctor
// il2cpp: void Cameras_CameraOcclusion_FallbackRenderer___ctor (Cameras_CameraOcclusion_FallbackRenderer_o* __this, UnityEngine_Renderer_o* renderer, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x5dceb10

void Cameras_CameraOcclusion_FallbackRenderer___ctor
               (Cameras_CameraOcclusion_FallbackRenderer_o *__this,UnityEngine_Renderer_o *renderer,
               UnityEngine_Bounds_o bounds,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Renderer = renderer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Renderer);
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Extents.fields.y = bounds.fields.m_Extents.fields.y;
  (pUVar1->fields).m_Extents.fields.z = bounds.fields.m_Extents.fields.z;
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Center.fields.x = bounds.fields.m_Center.fields.x;
  (pUVar1->fields).m_Center.fields.y = bounds.fields.m_Center.fields.y;
  *(undefined8 *)&(__this->fields).Bounds.fields.m_Center.fields.z = bounds.fields._8_8_;
  return;
}


// Cameras.CameraOcclusion.FallbackGrid$$.ctor
// il2cpp: void Cameras_CameraOcclusion_FallbackGrid___ctor (Cameras_CameraOcclusion_FallbackGrid_o* __this, float cellSize, const MethodInfo* method);
// 0x5dcea80

void Cameras_CameraOcclusion_FallbackGrid___ctor
               (Cameras_CameraOcclusion_FallbackGrid_o *__this,float cellSize,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Vector3Int__List_CameraOcclusion_FallbackRenderer___o *__this_00;
  
  if (Il2CppMethodInitialized_07548207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
              );
    Il2CppMethodInitialized_07548207 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
                        );
  System_Collections_Generic_Dictionary_Vector3Int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4B1FD20 *)
             MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
            );
  (__this->fields).Cells = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Cells);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).CellSize = cellSize;
  return;
}


// Cameras.CameraOcclusion.FallbackGrid$$GetCell
// il2cpp: UnityEngine_Vector3Int_o Cameras_CameraOcclusion_FallbackGrid__GetCell (Cameras_CameraOcclusion_FallbackGrid_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5dcea60

UnityEngine_Vector3Int_o
Cameras_CameraOcclusion_FallbackGrid__GetCell
          (Cameras_CameraOcclusion_FallbackGrid_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  float fVar1;
  undefined8 in_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  UnityEngine_Vector3Int_o UVar4;
  
  auVar2._0_8_ = position.fields._0_8_;
  auVar2._8_8_ = in_XMM0_Qb;
  fVar1 = (__this->fields).CellSize;
  auVar3._4_4_ = fVar1;
  auVar3._0_4_ = fVar1;
  auVar3._8_4_ = fVar1;
  auVar3._12_4_ = fVar1;
  auVar3 = divps(auVar2,auVar3);
  UVar4.fields = (UnityEngine_Vector3Int_Fields)il2cpp_runtime_helper_05de6ea0(auVar3._0_8_,position.fields.z / fVar1,0);
  return (UnityEngine_Vector3Int_o)UVar4.fields;
}


// Cameras.CameraOcclusion.MaterialOverride$$.ctor
// il2cpp: void Cameras_CameraOcclusion_MaterialOverride___ctor (Cameras_CameraOcclusion_MaterialOverride_o* __this, UnityEngine_Material_array* originals, const MethodInfo* method);
// 0x5dcec40

void Cameras_CameraOcclusion_MaterialOverride___ctor
               (Cameras_CameraOcclusion_MaterialOverride_o *__this,UnityEngine_Material_array *originals,
               MethodInfo *method)

{
  UnityEngine_Material_array *pUVar1;
  
  if (Il2CppMethodInitialized_07548208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    Il2CppMethodInitialized_07548208 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Originals = originals;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Originals);
  if (originals == (UnityEngine_Material_array *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = (UnityEngine_Material_array *)
           SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)originals->max_length);
  (__this->fields).Replacements = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Replacements);
  return;
}


// Cameras.CameraOcclusion.MaterialOverride$$Matches
// il2cpp: bool Cameras_CameraOcclusion_MaterialOverride__Matches (Cameras_CameraOcclusion_MaterialOverride_o* __this, System_Collections_Generic_List_Material__o* materials, const MethodInfo* method);
// 0x5dceb50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcebae: nop 

bool Cameras_CameraOcclusion_MaterialOverride__Matches
               (Cameras_CameraOcclusion_MaterialOverride_o *__this,
               System_Collections_Generic_List_Material__o *materials,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Material_o *x;
  bool bVar2;
  UnityEngine_Material_array *pUVar3;
  UnityEngine_Material_o *y;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07548209 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548209 = '\x01';
  }
  pUVar3 = (__this->fields).Originals;
  if ((pUVar3 != (UnityEngine_Material_array *)0x0) &&
     (materials != (System_Collections_Generic_List_Material__o *)0x0)) {
    if ((materials->fields)._size != (int)pUVar3->max_length) {
      return false;
    }
    uVar4 = 0;
    do {
      uVar1 = (uint)pUVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
label_05dcec1a:
        return (long)(int)uVar1 <= (long)uVar4;
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      x = pUVar3->m_Items[uVar4];
      y = System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)materials,(int32_t)uVar4,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Material_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if (bVar2) goto label_05dcec1a;
      uVar4 = uVar4 + 1;
      pUVar3 = (__this->fields).Originals;
    } while (pUVar3 != (UnityEngine_Material_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$RegisterObject
// il2cpp: void Cameras_CameraOcclusion__RegisterObject (UnityEngine_GameObject_o* gameObject, UnityEngine_Collider_array* colliders, bool isStatic, const MethodInfo* method);
// 0x5dcb8b0

void Cameras_CameraOcclusion__RegisterObject
               (UnityEngine_GameObject_o *gameObject,UnityEngine_Collider_array *colliders,bool isStatic,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  UnityEngine_Object_o *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  UnityEngine_Renderer_o *renderer;
  UnityEngine_Renderer_c *pUVar6;
  bool bVar7;
  System_Object_array *value;
  ulong uVar8;
  int iVar9;
  UnityEngine_MeshRenderer_c *extraout_RDX;
  UnityEngine_MeshRenderer_c *method_00;
  ulong uVar10;
  UnityEngine_Collider_array *method_01;
  
  if (Il2CppMethodInitialized_075481f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_075481f6 = '\x01';
  }
  if ((gameObject == (UnityEngine_GameObject_o *)0x0) ||
     (value = UnityEngine_GameObject__GetComponentsInChildren_object_
                        (gameObject,true,
                         (MethodInfo_353C0B0 *)
                         MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218),
     colliders == (UnityEngine_Collider_array *)0x0)) {
label_05dcbc0e:
    ThrowNullReferenceException();
  }
  iVar9 = (int)colliders->max_length;
  uVar8 = colliders->max_length & 0xffffffff;
  if (isStatic) {
    if (0 < iVar9) {
      uVar10 = 0;
      do {
        if (uVar8 <= uVar10) goto label_05dcbc09;
        pUVar4 = (UnityEngine_Object_o *)colliders->m_Items[uVar10];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar7) {
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dcbc0e;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar5,(Il2CppObject *)pUVar4,&value->obj,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_set_Item);
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          __this = (System_Collections_Generic_HashSet_object__o *)
                   TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders;
          if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05dcbc0e;
          System_Collections_Generic_HashSet_object___Add
                    (__this,(Il2CppObject *)pUVar4,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Add);
        }
        uVar10 = uVar10 + 1;
        uVar3 = (uint)colliders->max_length;
        uVar8 = (ulong)uVar3;
      } while ((long)uVar10 < (long)(int)uVar3);
    }
  }
  else {
    if (iVar9 < 1) {
      return;
    }
    uVar10 = 0;
    do {
      if (uVar8 <= uVar10) goto label_05dcbc09;
      pUVar4 = (UnityEngine_Object_o *)colliders->m_Items[uVar10];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        }
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dcbc0e;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar5,(Il2CppObject *)pUVar4,&value->obj,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_set_Item);
      }
      uVar10 = uVar10 + 1;
      uVar3 = (uint)colliders->max_length;
      uVar8 = (ulong)uVar3;
    } while ((long)uVar10 < (long)(int)uVar3);
  }
  if (isStatic) {
    if (value == (System_Object_array *)0x0) goto label_05dcbc0e;
    if (0 < (int)value->max_length) {
      uVar8 = value->max_length & 0xffffffff;
      uVar10 = 0;
      do {
        if (uVar8 <= uVar10) {
label_05dcbc09:
          ThrowIndexOutOfRangeException();
        }
        renderer = (UnityEngine_Renderer_o *)value->m_Items[uVar10];
        if (renderer != (UnityEngine_Renderer_o *)0x0) {
          pUVar6 = renderer->klass;
          bVar1 = (pUVar6->_2).typeHierarchyDepth;
          bVar2 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
          if (((bVar2 <= bVar1) &&
              (method_00 = TypeInfo_UnityEngine_MeshRenderer,
              (pUVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer
              )) || ((bVar2 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth,
                     bVar2 <= bVar1 &&
                     (method_00 = (UnityEngine_MeshRenderer_c *)TypeInfo_UnityEngine_SkinnedMeshRenderer,
                     (pUVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                     (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)))) {
            if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
              method_00 = extraout_RDX;
            }
            method_01 = colliders;
            bVar7 = Cameras_CameraOcclusion__HasMatchingMeshCollider
                              (renderer,colliders,(MethodInfo *)method_00);
            if (!bVar7) {
              if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
              }
              Cameras_CameraOcclusion__RegisterFallbackRenderer(renderer,(MethodInfo *)method_01);
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar3 = (uint)value->max_length;
        uVar8 = (ulong)uVar3;
      } while ((long)uVar10 < (long)(int)uVar3);
    }
  }
  return;
}


// Cameras.CameraOcclusion$$HasMatchingMeshCollider
// il2cpp: bool Cameras_CameraOcclusion__HasMatchingMeshCollider (UnityEngine_Renderer_o* renderer, UnityEngine_Collider_array* colliders, const MethodInfo* method);
// 0x5dcbc20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcbe9b: mov bl, 1
// asm:   0x5dcbe9d: jmp 0x5dcbd36

bool Cameras_CameraOcclusion__HasMatchingMeshCollider
               (UnityEngine_Renderer_o *renderer,UnityEngine_Collider_array *colliders,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_Collider_o *__this;
  bool bVar3;
  uint uVar4;
  UnityEngine_Object_o *pUVar5;
  ulong uVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar8;
  UnityEngine_MeshFilter_o *local_38;
  
  if (Il2CppMethodInitialized_075481f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481f7 = '\x01';
  }
  local_38 = (UnityEngine_MeshFilter_o *)0x0;
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
    if (((bVar1 <= (renderer->klass->_2).typeHierarchyDepth) &&
        ((renderer->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) &&
       (bVar3 = UnityEngine_Component__TryGetComponent_object_
                          ((UnityEngine_Component_o *)renderer,(Il2CppObject **)&local_38,
                           (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter),
       bVar3)) {
      if (local_38 != (UnityEngine_MeshFilter_o *)0x0) {
        pUVar5 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(local_38,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          return false;
        }
        if (colliders != (UnityEngine_Collider_array *)0x0) {
          if ((int)colliders->max_length < 1) {
            return false;
          }
          uVar6 = colliders->max_length & 0xffffffff;
          uVar8 = 0;
          do {
            if (uVar6 <= uVar8) {
              ThrowIndexOutOfRangeException();
            }
            __this = colliders->m_Items[uVar8];
            if (__this != (UnityEngine_Collider_o *)0x0) {
              bVar1 = (TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
              if (((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
                  ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                   (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider)) &&
                 (bVar3 = UnityEngine_Collider__get_enabled(__this,(MethodInfo *)0x0), bVar3)) {
                pUVar5 = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar7 = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)renderer,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar3 = UnityEngine_Object__op_Equality(pUVar5,pUVar7,(MethodInfo *)0x0);
                if (bVar3) {
                  pUVar5 = (UnityEngine_Object_o *)
                           UnityEngine_MeshCollider__get_sharedMesh
                                     ((UnityEngine_MeshCollider_o *)__this,(MethodInfo *)0x0);
                  if (local_38 == (UnityEngine_MeshFilter_o *)0x0) break;
                  pUVar7 = (UnityEngine_Object_o *)
                           UnityEngine_MeshFilter__get_sharedMesh(local_38,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar3 = UnityEngine_Object__op_Equality(pUVar5,pUVar7,(MethodInfo *)0x0);
                  if (bVar3) {
                    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                    }
                    uVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields->MapMask;
                    __this_00 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
                    uVar4 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
                    if ((uVar2 >> (uVar4 & 0x1f) & 1) != 0) {
                      return true;
                    }
                  }
                }
              }
            }
            uVar8 = uVar8 + 1;
            uVar2 = (uint)colliders->max_length;
            uVar6 = (ulong)uVar2;
            if ((long)(int)uVar2 <= (long)uVar8) {
              return false;
            }
          } while( true );
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Cameras.CameraOcclusion$$RegisterCombinedRenderer
// il2cpp: void Cameras_CameraOcclusion__RegisterCombinedRenderer (UnityEngine_Renderer_o* original, UnityEngine_Renderer_o* combined, const MethodInfo* method);
// 0x5dcc320

void Cameras_CameraOcclusion__RegisterCombinedRenderer
               (UnityEngine_Renderer_o *original,UnityEngine_Renderer_o *combined,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_075481f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_set_Item);
    Il2CppMethodInitialized_075481f8 = '\x01';
    uVar1 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion)->static_fields + 0x30);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)original,(Il2CppObject *)combined,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_set_Item
            );
  return;
}


// Cameras.CameraOcclusion$$SetCapsule
// il2cpp: void Cameras_CameraOcclusion__SetCapsule (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float radius, UnityEngine_Vector3_o groundOrigin, const MethodInfo* method);
// 0x5dcc3c0

void Cameras_CameraOcclusion__SetCapsule
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
               float radius,UnityEngine_Vector3_o groundOrigin,MethodInfo *method)

{
  Cameras_CameraOcclusion_StaticFields *pCVar1;
  Cameras_CameraOcclusion_c *pCVar2;
  System_Action_T1__T2__o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_ScriptableRenderContext_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_075481f9 = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pCVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  pCVar1->_camera = camera;
  method_00 = (MethodInfo *)&pCVar1->_camera;
  Il2CppCodeGenWriteBarrier((void **)method_00);
  pCVar2 = TypeInfo_Cameras_CameraOcclusion;
  pCVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  (pCVar1->_start).fields.x = start.fields.x;
  (pCVar1->_start).fields.y = start.fields.y;
  (pCVar1->_start).fields.z = start.fields.z;
  pCVar1 = pCVar2->static_fields;
  (pCVar1->_end).fields.x = end.fields.x;
  (pCVar1->_end).fields.y = end.fields.y;
  (pCVar1->_end).fields.z = end.fields.z;
  pCVar2->static_fields->_radius = radius;
  Cameras_CameraOcclusion__UpdateGroundPlane(groundOrigin,method_00);
  if (TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed == false) {
    pSVar3 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
    System_Action_ScriptableRenderContext__object____ctor
              (pSVar3,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering,
               (MethodInfo_4A8AA40 *)0x0);
    UnityEngine_Rendering_RenderPipelineManager__add_beginCameraRendering
              ((System_Action_ScriptableRenderContext__Camera__o *)pSVar3,(MethodInfo *)0x0);
    pSVar3 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
    System_Action_ScriptableRenderContext__object____ctor
              (pSVar3,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering,
               (MethodInfo_4A8AA40 *)0x0);
    UnityEngine_Rendering_RenderPipelineManager__add_endCameraRendering
              ((System_Action_ScriptableRenderContext__Camera__o *)pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed = true;
  }
  return;
}


// Cameras.CameraOcclusion$$UpdateGroundPlane
// il2cpp: void Cameras_CameraOcclusion__UpdateGroundPlane (UnityEngine_Vector3_o groundOrigin, const MethodInfo* method);
// 0x5dcc570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcca29: jmp 0x5dcca76

void Cameras_CameraOcclusion__UpdateGroundPlane(UnityEngine_Vector3_o groundOrigin,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  int32_t layerMask;
  uint32_t uVar14;
  UnityEngine_Vector4_StaticFields *pUVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  undefined8 uVar17;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uVar18;
  UnityEngine_Vector3_Fields direction;
  Cameras_CameraOcclusion_c *pCVar19;
  bool bVar20;
  uint uVar21;
  UnityEngine_Collider_o *item;
  UnityEngine_RaycastHit_array *pUVar22;
  long lVar23;
  Cameras_CameraOcclusion_StaticFields *pCVar24;
  ulong uVar25;
  float fVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  float local_bc;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  UnityEngine_RaycastHit_o local_68;
  
  if (Il2CppMethodInitialized_075481fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Resize_RaycastHit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Collider_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_075481fa = '\x01';
  }
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  if (Il2CppMethodInitialized_075482a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector4);
    Il2CppMethodInitialized_075482a7 = '\x01';
  }
  pUVar15 = TypeInfo_UnityEngine_Vector4->static_fields;
  uVar2 = (pUVar15->zeroVector).fields.x;
  uVar8 = (pUVar15->zeroVector).fields.y;
  uVar3 = (pUVar15->zeroVector).fields.z;
  uVar9 = (pUVar15->zeroVector).fields.w;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pCVar19 = TypeInfo_Cameras_CameraOcclusion;
  pCVar24 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  (pCVar24->_groundPlane).fields.x = (float)uVar2;
  (pCVar24->_groundPlane).fields.y = (float)uVar8;
  (pCVar24->_groundPlane).fields.z = (float)uVar3;
  (pCVar24->_groundPlane).fields.w = (float)uVar9;
  fVar7 = pCVar19->static_fields->_radius;
  fVar26 = fVar7 * 0.1;
  if (fVar26 <= 0.1) {
    fVar26 = 0.1;
  }
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
    fVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields->_radius;
  }
  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar4 = (pUVar16->upVector).fields.x;
  uVar10 = (pUVar16->upVector).fields.y;
  fVar13 = (pUVar16->upVector).fields.z;
  local_a8 = groundOrigin.fields.x;
  fStack_a4 = groundOrigin.fields.y;
  while( true ) {
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_075450a5 = '\x01';
    }
    direction = (TypeInfo_UnityEngine_Vector3->static_fields->downVector).fields;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pUVar22 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
    layerMask = TypeInfo_Cameras_CameraOcclusion->static_fields->GroundMask;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    UVar27.fields.y = fVar26 * (float)uVar10 + fStack_a4;
    UVar27.fields.x = fVar26 * (float)uVar4 + local_a8;
    UVar27.fields.z = fVar13 * fVar26 + groundOrigin.fields.z;
    uVar21 = UnityEngine_Physics__RaycastNonAlloc_69dc1f0
                       (UVar27,(UnityEngine_Vector3_o)direction,pUVar22,fVar7 + fVar26,layerMask,1,
                        (MethodInfo *)0x0);
    pCVar24 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    pUVar22 = pCVar24->_groundHits;
    if (pUVar22 == (UnityEngine_RaycastHit_array *)0x0) break;
    if ((int)uVar21 < (int)pUVar22->max_length) {
      if ((int)uVar21 < 1) {
        return;
      }
      local_bc = INFINITY;
      lVar23 = 0x20;
      uVar25 = 0;
      goto label_05dcc880;
    }
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      pCVar24 = TypeInfo_Cameras_CameraOcclusion->static_fields;
      pUVar22 = pCVar24->_groundHits;
      if (pUVar22 == (UnityEngine_RaycastHit_array *)0x0) break;
    }
    System_Array__Resize_RaycastHit_
              (&pCVar24->_groundHits,(int)pUVar22->max_length * 2,
               (MethodInfo_33AD5F0 *)MethodInfo_System_Array_Resize_RaycastHit);
  }
label_05dcc829:
  ThrowNullReferenceException();
label_05dcc880:
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar22 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
  if (pUVar22 == (UnityEngine_RaycastHit_array *)0x0) goto label_05dcc829;
  if ((uint)pUVar22->max_length <= uVar25) {
    ThrowIndexOutOfRangeException();
  }
  puVar1 = (undefined8 *)((long)pUVar22->m_Items + lVar23 + -0x20);
  local_68.fields.m_Point.fields._0_8_ = *puVar1;
  local_68.fields._8_8_ = puVar1[1];
  puVar1 = (undefined8 *)((long)pUVar22->m_Items + lVar23 + -0x10);
  local_68.fields.m_Normal.fields._4_8_ = *puVar1;
  uVar18 = puVar1[1];
  uVar17 = *(undefined8 *)((long)&pUVar22->m_Items[0].fields.m_Point.fields.x + lVar23);
  local_68.fields.m_Collider.fields.m_Data =
       (UnityEngine_EntityId_Fields)
       ((UnityEngine_EntityId_Fields *)((long)&pUVar22->m_Items[0].fields.m_Point.fields.z + lVar23))->m_Data;
  local_68.fields.m_UV.fields.x = (float)uVar17;
  local_68.fields.m_UV.fields.y = (float)((ulong)uVar17 >> 0x20);
  local_68.fields.m_FaceID = (uint32_t)uVar18;
  local_68.fields.m_Distance = (float)((ulong)uVar18 >> 0x20);
  __this = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders;
  item = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05dcc829;
  bVar20 = System_Collections_Generic_HashSet_object___Contains
                     (__this,(Il2CppObject *)item,
                      (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_Collider_Contains);
  if (((bVar20) &&
      (UVar27 = UnityEngine_RaycastHit__get_normal(&local_68,(MethodInfo *)0x0), 0.5 <= UVar27.fields.y)) &&
     (fVar7 = UnityEngine_RaycastHit__get_distance(&local_68,(MethodInfo *)0x0), fVar7 < local_bc)) {
    local_bc = UnityEngine_RaycastHit__get_distance(&local_68,(MethodInfo *)0x0);
    UVar27 = UnityEngine_RaycastHit__get_normal(&local_68,(MethodInfo *)0x0);
    fVar7 = UVar27.fields.z;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pCVar24 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    uVar5 = (pCVar24->_end).fields.x;
    uVar11 = (pCVar24->_end).fields.y;
    fVar13 = (pCVar24->_end).fields.z;
    UVar28 = UnityEngine_RaycastHit__get_point(&local_68,(MethodInfo *)0x0);
    local_a8 = UVar27.fields.x;
    fStack_a4 = UVar27.fields.y;
    if (0.0 <= (fVar13 - UVar28.fields.z) * fVar7 +
               ((float)uVar11 - UVar28.fields.y) * fStack_a4 + ((float)uVar5 - UVar28.fields.x) * local_a8) {
      UVar27 = UnityEngine_RaycastHit__get_point(&local_68,(MethodInfo *)0x0);
      fVar13 = -(UVar27.fields.z * fVar7 + UVar27.fields.y * fStack_a4 + UVar27.fields.x * local_a8) - fVar26;
      uVar14 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_075482a7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector4);
        Il2CppMethodInitialized_075482a7 = '\x01';
      }
      pUVar15 = TypeInfo_UnityEngine_Vector4->static_fields;
      uVar6 = (pUVar15->zeroVector).fields.x;
      uVar12 = (pUVar15->zeroVector).fields.y;
      fVar7 = (pUVar15->zeroVector).fields.z;
      fVar13 = (pUVar15->zeroVector).fields.w;
      uVar14 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
      local_a8 = (float)uVar6;
      fStack_a4 = (float)uVar12;
    }
    if (uVar14 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pCVar24 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    (pCVar24->_groundPlane).fields.x = local_a8;
    (pCVar24->_groundPlane).fields.y = fStack_a4;
    (pCVar24->_groundPlane).fields.z = fVar7;
    (pCVar24->_groundPlane).fields.w = fVar13;
  }
  uVar25 = uVar25 + 1;
  lVar23 = lVar23 + 0x2c;
  if (uVar21 == uVar25) {
    return;
  }
  goto label_05dcc880;
}


// Cameras.CameraOcclusion$$Clear
// il2cpp: void Cameras_CameraOcclusion__Clear (const MethodInfo* method);
// 0x5dccab0

void Cameras_CameraOcclusion__Clear(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Cameras_CameraOcclusion_StaticFields *pCVar3;
  System_Action_T1__T2__o *pSVar4;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075481fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_ScriptableRenderContext_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Cameras_CameraOcclusion_EndCameraRendering);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    Il2CppMethodInitialized_075481fb = '\x01';
    uVar2 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    cVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed;
    klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion)->static_fields + 0xb4);
    klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
  }
  if (cVar1 == '\0') {
    TypeInfo_Cameras_CameraOcclusion = (Cameras_CameraOcclusion_c *)klass;
    return;
  }
  TypeInfo_Cameras_CameraOcclusion = (Cameras_CameraOcclusion_c *)klass;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  Cameras_CameraOcclusion__RestoreMaterials((MethodInfo *)klass);
  pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  pCVar3->_camera = (UnityEngine_Camera_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pCVar3->_camera);
  TypeInfo_Cameras_CameraOcclusion->static_fields->_radius = 0.0;
  pSVar4 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
  System_Action_ScriptableRenderContext__object____ctor
            (pSVar4,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_BeginCameraRendering,
             (MethodInfo_4A8AA40 *)0x0);
  UnityEngine_Rendering_RenderPipelineManager__remove_beginCameraRendering
            ((System_Action_ScriptableRenderContext__Camera__o *)pSVar4,(MethodInfo *)0x0);
  pSVar4 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_ScriptableRenderContext_Camera);
  System_Action_ScriptableRenderContext__object____ctor
            (pSVar4,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Cameras_CameraOcclusion_EndCameraRendering,
             (MethodInfo_4A8AA40 *)0x0);
  UnityEngine_Rendering_RenderPipelineManager__remove_endCameraRendering
            ((System_Action_ScriptableRenderContext__Camera__o *)pSVar4,(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->_subscribed = false;
  return;
}


// Cameras.CameraOcclusion$$Reset
// il2cpp: void Cameras_CameraOcclusion__Reset (const MethodInfo* method);
// 0x5dcceb0
// eh: try 0x5dcd04d..0x5dcd095 -> pad 0x5dcd27d (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dcd299..0x5dcd29e -> pad 0x5dcd2c1 cleanup
// eh: try 0x5dcd2c4..0x5dcd2ce -> pad 0x5dcd2d6 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcd08e: jmp 0x5dcd040
// asm:   0x5dcd27b: jmp 0x5dcd281
// asm:   0x5dcd27d: jmp 0x5dcd281
// asm:   0x5dcd27f: jmp 0x5dcd281
// asm:   0x5dcd281: mov rbx, rax
// asm:   0x5dcd284: cmp edx, 1
// asm:   0x5dcd287: jne 0x5dcd2c4
// asm:   0x5dcd289: mov rdi, rbx
// asm:   0x5dcd28c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dcd291: mov rbx, qword ptr [rax]
// asm:   0x5dcd294: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5dcd299: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dcd29e: lea rax, [rip + 0x14c2913]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x5dcd2a5: mov rsi, qword ptr [rax]
// asm:   0x5dcd2a8: mov rdi, rsp
// asm:   0x5dcd2ab: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5dcd2b0: test rbx, rbx
// asm:   0x5dcd2b3: je 0x5dcd0a9
// asm:   0x5dcd2b9: mov rdi, rbx
// asm:   0x5dcd2bc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dcd2c1: mov rbx, rax
// asm:   0x5dcd2c4: lea rdi, [rsp + 0x18]
// asm:   0x5dcd2c9: call 0x2fde550  ; il2cpp_runtime_helper_02fde550()
// asm:   0x5dcd2ce: mov rdi, rbx
// asm:   0x5dcd2d1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dcd2d6: mov rdi, rax
// asm:   0x5dcd2d9: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_CameraOcclusion__Reset(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *pSVar4;
  System_Collections_Generic_List_Material__o *pSVar5;
  UnityEngine_Collider_array *array;
  UnityEngine_RaycastHit_array *array_00;
  UnityEngine_Object_o *x;
  bool bVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  Cameras_CameraOcclusion_StaticFields *pCVar7;
  Cameras_CameraOcclusion_c *method_00;
  undefined1 local_58 [8];
  undefined1 *puStack_50;
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (Il2CppMethodInitialized_075481fc == '\0') {
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
    Il2CppMethodInitialized_075481fc = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  local_48 = (UnityEngine_Object_o *)0x0;
  method_00 = TypeInfo_Cameras_CameraOcclusion;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Clear((MethodInfo *)method_00);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (pSVar3,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_00,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                );
      local_48 = local_30;
      local_58 = (undefined1  [8])local_40._0_8_;
      puStack_50 = (undefined1 *)local_40._8_8_;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = local_58;
      while( true ) {
        bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_58,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                          );
        x = local_48;
        if (!bVar6) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_58,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                );
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Clear
                  (pSVar3,(MethodInfo_4AAD690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Clear);
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides;
        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Clear
                    (pSVar3,(MethodInfo_4AAD690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_Clear
                    );
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers;
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar3,(MethodInfo_4AAD690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_Clear);
            __this = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_Cameras_CameraOcclusion->static_fields->StaticColliders;
            if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
              System_Collections_Generic_HashSet_object___Clear
                        (__this,(MethodInfo_4FB36D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Collider_Clear);
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers;
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Clear
                          (pSVar3,(MethodInfo_4AAD690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_Clear);
                pCVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields;
                pSVar4 = pCVar7->FallbackGrids;
                if (pSVar4 != (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0) {
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  iVar2 = (pSVar4->fields)._size;
                  (pSVar4->fields)._size = 0;
                  if (0 < iVar2) {
                    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
                    pCVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields;
                  }
                  if ((System_Collections_Generic_HashSet_object__o *)pCVar7->Candidates !=
                      (System_Collections_Generic_HashSet_object__o *)0x0) {
                    System_Collections_Generic_HashSet_object___Clear
                              ((System_Collections_Generic_HashSet_object__o *)pCVar7->Candidates,
                               (MethodInfo_4FB36D0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Renderer_Clear);
                    pCVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields;
                    pSVar5 = pCVar7->SharedMaterials;
                    if (pSVar5 != (System_Collections_Generic_List_Material__o *)0x0) {
                      piVar1 = &(pSVar5->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      iVar2 = (pSVar5->fields)._size;
                      (pSVar5->fields)._size = 0;
                      if (0 < iVar2) {
                        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,
                                            (MethodInfo *)0x0);
                        pCVar7 = TypeInfo_Cameras_CameraOcclusion->static_fields;
                      }
                      if ((System_Collections_Generic_HashSet_object__o *)pCVar7->UpdatedMaterials !=
                          (System_Collections_Generic_HashSet_object__o *)0x0) {
                        System_Collections_Generic_HashSet_object___Clear
                                  ((System_Collections_Generic_HashSet_object__o *)pCVar7->UpdatedMaterials,
                                   (MethodInfo_4FB36D0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
                        array = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
                        if (array != (UnityEngine_Collider_array *)0x0) {
                          System_Array__Clear((System_Array_o *)array,0,(int32_t)array->max_length,
                                              (MethodInfo *)0x0);
                          array_00 = TypeInfo_Cameras_CameraOcclusion->static_fields->_groundHits;
                          if (array_00 != (UnityEngine_RaycastHit_array *)0x0) {
                            System_Array__Clear((System_Array_o *)array_00,0,(int32_t)array_00->max_length,
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
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$BeginCameraRendering
// il2cpp: void Cameras_CameraOcclusion__BeginCameraRendering (UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x5dcd2e0
// eh: try 0x5dcd550..0x5dcd57e -> pad 0x5dcd5a5 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dcd5bd..0x5dcd5c2 -> pad 0x5dcd5e1 cleanup
// eh: try 0x5dcd5e4..0x5dcd5ee -> pad 0x5dcd5f6 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcd420: jmp 0x5dcd592
// asm:   0x5dcd5a3: jmp 0x5dcd5a5
// asm:   0x5dcd5a5: mov rbx, rax
// asm:   0x5dcd5a8: cmp edx, 1
// asm:   0x5dcd5ab: jne 0x5dcd5e4
// asm:   0x5dcd5ad: mov rdi, rbx
// asm:   0x5dcd5b0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dcd5b5: mov rbx, qword ptr [rax]
// asm:   0x5dcd5b8: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5dcd5bd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dcd5c2: lea rax, [rip + 0x14c12ef]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_Dispose
// asm:   0x5dcd5c9: mov rsi, qword ptr [rax]
// asm:   0x5dcd5cc: mov rdi, rsp
// asm:   0x5dcd5cf: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5dcd5d4: test rbx, rbx
// asm:   0x5dcd5d7: je 0x5dcd592
// asm:   0x5dcd5d9: mov rdi, rbx
// asm:   0x5dcd5dc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dcd5e1: mov rbx, rax
// asm:   0x5dcd5e4: lea rdi, [rsp + 0x18]
// asm:   0x5dcd5e9: call 0x2fde580  ; il2cpp_runtime_helper_02fde580()
// asm:   0x5dcd5ee: mov rdi, rbx
// asm:   0x5dcd5f1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dcd5f6: mov rdi, rax
// asm:   0x5dcd5f9: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_CameraOcclusion__BeginCameraRendering
               (UnityEngine_Rendering_ScriptableRenderContext_o context,UnityEngine_Camera_o *camera,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Camera_o *pUVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Il2CppObject *renderer;
  bool bVar4;
  MethodInfo *method_00;
  Il2CppClass *klass;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_075481fd == '\0') {
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
    Il2CppMethodInitialized_075481fd = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields->_camera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)camera,(UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pUVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields->_camera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        fVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields->_radius;
        klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
      }
      else {
        fVar1 = TypeInfo_Cameras_CameraOcclusion->static_fields->_radius;
        klass = (Il2CppClass *)TypeInfo_Cameras_CameraOcclusion;
      }
      TypeInfo_Cameras_CameraOcclusion = (Cameras_CameraOcclusion_c *)klass;
      if (0.0 < fVar1) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
        }
        Cameras_CameraOcclusion__FindCandidates((MethodInfo *)klass);
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Cameras_CameraOcclusion->static_fields->UpdatedMaterials;
        if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Clear
                    (pSVar3,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Clear
                    );
          value.fields.w = 0.0;
          value.fields._0_12_ = (TypeInfo_Cameras_CameraOcclusion->static_fields->_start).fields;
          UnityEngine_Shader__SetGlobalVector
                    (TypeInfo_Cameras_CameraOcclusion->static_fields->StartId,value,(MethodInfo *)0x0);
          value_00.fields.w = 0.0;
          value_00.fields._0_12_ = (TypeInfo_Cameras_CameraOcclusion->static_fields->_end).fields;
          UnityEngine_Shader__SetGlobalVector
                    (TypeInfo_Cameras_CameraOcclusion->static_fields->EndId,value_00,(MethodInfo *)0x0);
          UnityEngine_Shader__SetGlobalFloat
                    (TypeInfo_Cameras_CameraOcclusion->static_fields->RadiusId,
                     TypeInfo_Cameras_CameraOcclusion->static_fields->_radius,(MethodInfo *)0x0);
          UnityEngine_Shader__SetGlobalVector
                    (TypeInfo_Cameras_CameraOcclusion->static_fields->GroundPlaneId,
                     (UnityEngine_Vector4_o)
                     (TypeInfo_Cameras_CameraOcclusion->static_fields->_groundPlane).fields,(MethodInfo *)0x0)
          ;
          pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                   TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates;
          if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___GetEnumerator
                      (&local_48,pSVar3,
                       (MethodInfo_4FB3DA0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Renderer_GetEnumerator);
            local_30 = 0;
            local_28 = (undefined1 *)&local_48;
            while (method_00 = MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_MoveNext,
                  bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                    (&local_48,
                                     (MethodInfo_4C456D0 *)
                                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_Renderer_MoveNext
                                    ), renderer = local_48.fields._current, bVar4) {
              if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
              }
              Cameras_CameraOcclusion__ApplyMaterials((UnityEngine_Renderer_o *)renderer,method_00);
            }
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&local_48,
                       (MethodInfo_4C456C0 *)
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
// 0x5dcdce0

void Cameras_CameraOcclusion__EndCameraRendering
               (UnityEngine_Rendering_ScriptableRenderContext_o context,UnityEngine_Camera_o *camera,
               MethodInfo *method)

{
  UnityEngine_Camera_o *y;
  bool bVar1;
  Cameras_CameraOcclusion_c *method_00;
  
  if (Il2CppMethodInitialized_075481fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481fe = '\x01';
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
      method_00 = TypeInfo_Cameras_CameraOcclusion;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      Cameras_CameraOcclusion__RestoreMaterials((MethodInfo *)method_00);
      return;
    }
    Cameras_CameraOcclusion__RestoreMaterials((MethodInfo *)TypeInfo_Cameras_CameraOcclusion);
    return;
  }
  return;
}


// Cameras.CameraOcclusion$$FindCandidates
// il2cpp: void Cameras_CameraOcclusion__FindCandidates (const MethodInfo* method);
// 0x5dcd600
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcd7cc: nop dword ptr [rax]
// asm:   0x5dcd8d4: mov rdi, qword ptr [r14]

void Cameras_CameraOcclusion__FindCandidates(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float radius;
  undefined8 uVar3;
  undefined8 uVar4;
  int32_t layerMask;
  uint uVar5;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *original;
  Il2CppObject *pIVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  Cameras_CameraOcclusion_StaticFields *pCVar10;
  UnityEngine_Collider_array *pUVar11;
  ulong uVar12;
  MethodInfo *method_00;
  Cameras_CameraOcclusion_c *method_01;
  ulong uVar13;
  UnityEngine_Vector3_o point0;
  UnityEngine_Vector3_o point1;
  Il2CppObject *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_075481ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Resize_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_075481ff = '\x01';
  }
  local_60 = (Il2CppObject *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Clear
              (__this,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_Clear);
    while( true ) {
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      pCVar10 = TypeInfo_Cameras_CameraOcclusion->static_fields;
      uVar3._0_4_ = (pCVar10->_start).fields.x;
      uVar3._4_4_ = (pCVar10->_start).fields.y;
      fVar1 = (pCVar10->_start).fields.z;
      uVar4._0_4_ = (pCVar10->_end).fields.x;
      uVar4._4_4_ = (pCVar10->_end).fields.y;
      fVar2 = (pCVar10->_end).fields.z;
      radius = pCVar10->_radius;
      pUVar11 = pCVar10->_colliders;
      layerMask = pCVar10->MapMask;
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        uStack_40 = 0;
        uStack_50 = 0;
        local_58 = uVar4;
        local_48 = uVar3;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        uVar3._0_4_ = (undefined4)local_48;
        uVar3._4_4_ = local_48._4_4_;
        uVar4._0_4_ = (undefined4)local_58;
        uVar4._4_4_ = local_58._4_4_;
      }
      point0.fields.y = (float)uVar3._4_4_;
      point0.fields.x = (float)(undefined4)uVar3;
      point0.fields.z = fVar1;
      point1.fields.y = (float)uVar4._4_4_;
      point1.fields.x = (float)(undefined4)uVar4;
      point1.fields.z = fVar2;
      uVar8 = UnityEngine_Physics__OverlapCapsuleNonAlloc
                        (point0,point1,radius,pUVar11,layerMask,2,(MethodInfo *)0x0);
      pCVar10 = TypeInfo_Cameras_CameraOcclusion->static_fields;
      pUVar11 = pCVar10->_colliders;
      if (pUVar11 == (UnityEngine_Collider_array *)0x0) break;
      if ((int)uVar8 < (int)pUVar11->max_length) {
        if ((int)uVar8 < 1) goto label_05dcd8d7;
        uVar12 = 0;
        goto label_05dcd7d0;
      }
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        pCVar10 = TypeInfo_Cameras_CameraOcclusion->static_fields;
        pUVar11 = pCVar10->_colliders;
        if (pUVar11 == (UnityEngine_Collider_array *)0x0) break;
      }
      System_Array__Resize_object_
                ((System_Object_array **)&pCVar10->_colliders,(int)pUVar11->max_length * 2,
                 (MethodInfo_33AD3D0 *)MethodInfo_System_Array_Resize_Collider);
    }
  }
label_05dcd7ba:
  ThrowNullReferenceException();
label_05dcd7d0:
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar11 = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
  if (pUVar11 == (UnityEngine_Collider_array *)0x0) goto label_05dcd7ba;
  if ((uint)pUVar11->max_length <= uVar12) {
label_05dcd8f9:
    ThrowIndexOutOfRangeException();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Cameras_CameraOcclusion->static_fields->ColliderRenderers;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dcd7ba;
  method_00 = (MethodInfo *)pUVar11->m_Items[uVar12];
  bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)method_00,&local_60,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_TryGetValue);
  pIVar6 = local_60;
  if (bVar7) {
    if (local_60 == (Il2CppObject *)0x0) goto label_05dcd7ba;
    if (0 < (int)local_60[1].monitor) {
      uVar9 = (ulong)local_60[1].monitor & 0xffffffff;
      uVar13 = 0;
      do {
        if (uVar9 <= uVar13) goto label_05dcd8f9;
        original = (&pIVar6[2].klass)[uVar13];
        if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        }
        Cameras_CameraOcclusion__AddCandidate((UnityEngine_Renderer_o *)original,method_00);
        uVar13 = uVar13 + 1;
        uVar5 = *(uint *)&pIVar6[1].monitor;
        uVar9 = (ulong)uVar5;
      } while ((long)uVar13 < (long)(int)uVar5);
    }
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pUVar11 = TypeInfo_Cameras_CameraOcclusion->static_fields->_colliders;
  if (pUVar11 == (UnityEngine_Collider_array *)0x0) goto label_05dcd7ba;
  if ((uint)pUVar11->max_length <= uVar12) goto label_05dcd8f9;
  pUVar11->m_Items[uVar12] = (UnityEngine_Collider_o *)0x0;
  Il2CppCodeGenWriteBarrier(pUVar11->m_Items + uVar12);
  uVar12 = uVar12 + 1;
  if (uVar12 == uVar8) {
label_05dcd8d7:
    method_01 = TypeInfo_Cameras_CameraOcclusion;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__FindFallbackCandidates((MethodInfo *)method_01);
    return;
  }
  goto label_05dcd7d0;
}


// Cameras.CameraOcclusion$$FindFallbackCandidates
// il2cpp: void Cameras_CameraOcclusion__FindFallbackCandidates (const MethodInfo* method);
// 0x5dcdf80
// eh: try 0x5dce36a..0x5dce9c0 -> pad 0x5dce9e8 (+28 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dce9cb..0x5dce9d8 -> pad 0x5dcea54 catch (...) [compiler noexcept guard]
// eh: try 0x5dcea12..0x5dcea17 -> pad 0x5dcea3c cleanup
// eh: try 0x5dcea3f..0x5dcea4c -> pad 0x5dcea54 catch (...) [compiler noexcept guard]
// asm: 82 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dce199: mov qword ptr [rsp + 0x48], 0
// asm:   0x5dce1a2: cmp byte ptr [rip + 0x1770580], 0
// asm:   0x5dce1a9: je 0x5dce977
// asm:   0x5dce20a: jmp 0x5dce24f
// asm:   0x5dce2b9: jmp 0x5dce2f1
// asm:   0x5dce556: mov rax, qword ptr [rsp + 0x38]
// asm:   0x5dce55b: nop dword ptr [rax + rax]
// asm:   0x5dce566: jmp 0x5dce360
// asm:   0x5dce572: nop word ptr cs:[rax + rax]
// asm:   0x5dce59f: jmp 0x5dce360
// asm:   0x5dce852: jmp 0x5dce6d0
// asm:   0x5dce8a9: test ebp, ebp
// asm:   0x5dce8ab: je 0x5dce600
// asm:   0x5dce8b1: jmp 0x5dce928
// asm:   0x5dce8d1: jmp 0x5dce8e9
// asm:   0x5dce8d3: jmp 0x5dce8e9
// asm:   0x5dce8d5: jmp 0x5dce8e9
// asm:   0x5dce8d7: jmp 0x5dce8e9
// asm:   0x5dce8d9: jmp 0x5dce8e9
// asm:   0x5dce8db: jmp 0x5dce8e9
// asm:   0x5dce8dd: jmp 0x5dce8e9
// asm:   0x5dce8df: jmp 0x5dce8e9
// asm:   0x5dce8e1: jmp 0x5dce8e9
// asm:   0x5dce8e3: jmp 0x5dce8e9
// asm:   0x5dce8e5: jmp 0x5dce8e9
// asm:   0x5dce8e7: jmp 0x5dce8e9
// asm:   0x5dce8e9: mov rbx, rdx
// asm:   0x5dce8ec: mov rbp, rax
// asm:   0x5dce8ef: cmp ebx, 1
// asm:   0x5dce8f2: jne 0x5dce9cb
// asm:   0x5dce8f8: mov rdi, rbp
// asm:   0x5dce8fb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dce900: mov rbx, qword ptr [rax]
// asm:   0x5dce903: mov qword ptr [rsp + 0x98], rbx
// asm:   0x5dce90b: xor ebp, ebp
// asm:   0x5dce90d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dce912: jmp 0x5dce877
// asm:   0x5dce923: jmp 0x5dce360
// asm:   0x5dce9ae: mov rdi, rbx
// asm:   0x5dce9b1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dce9c5: mov rbx, rdx
// asm:   0x5dce9c8: mov rbp, rax
// asm:   0x5dce9cb: lea rdi, [rsp + 0x98]
// asm:   0x5dce9d3: call 0x2fde5b0  ; il2cpp_runtime_helper_02fde5b0()
// asm:   0x5dce9d8: jmp 0x5dce9fa
// asm:   0x5dce9da: jmp 0x5dce9f4
// asm:   0x5dce9dc: jmp 0x5dce9f4
// asm:   0x5dce9de: jmp 0x5dce9f4
// asm:   0x5dce9e0: jmp 0x5dce9f4
// asm:   0x5dce9e2: jmp 0x5dce9f4
// asm:   0x5dce9e4: jmp 0x5dce9f4
// asm:   0x5dce9e6: jmp 0x5dce9f4
// asm:   0x5dce9e8: jmp 0x5dce9f4
// asm:   0x5dce9ea: jmp 0x5dce9f4
// asm:   0x5dce9ec: jmp 0x5dce9f4
// asm:   0x5dce9ee: jmp 0x5dce9f4
// asm:   0x5dce9f0: jmp 0x5dce9f4
// asm:   0x5dce9f2: jmp 0x5dce9f4
// asm:   0x5dce9f4: mov rbx, rdx
// asm:   0x5dce9f7: mov rbp, rax
// asm:   0x5dce9fa: cmp ebx, 1
// asm:   0x5dce9fd: jne 0x5dcea3f
// asm:   0x5dce9ff: mov rdi, rbp
// asm:   0x5dcea02: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dcea07: mov rbx, qword ptr [rax]
// asm:   0x5dcea0a: mov qword ptr [rsp + 0x110], rbx
// asm:   0x5dcea12: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dcea17: lea rax, [rip + 0x14c064a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_Dispose
// asm:   0x5dcea1e: mov rsi, qword ptr [rax]
// asm:   0x5dcea21: lea rdi, [rsp + 0x70]
// asm:   0x5dcea26: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5dcea2b: test rbx, rbx
// asm:   0x5dcea2e: je 0x5dce93c
// asm:   0x5dcea34: mov rdi, rbx
// asm:   0x5dcea37: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dcea3c: mov rbp, rax
// asm:   0x5dcea3f: lea rdi, [rsp + 0x110]
// asm:   0x5dcea47: call 0x2fde5e0  ; il2cpp_runtime_helper_02fde5e0()
// asm:   0x5dcea4c: mov rdi, rbp
// asm:   0x5dcea4f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dcea54: mov rdi, rax
// asm:   0x5dcea57: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_CameraOcclusion__FindFallbackCandidates(MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  Il2CppType *__this;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint32_t uVar11;
  Cameras_CameraOcclusion_StaticFields *pCVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *__this_00;
  Il2CppClass *pIVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  Il2CppObject *pIVar20;
  bool bVar21;
  int32_t iVar22;
  int iVar23;
  ulong uVar24;
  UnityEngine_GameObject_o *__this_01;
  ulong uVar25;
  uint uVar26;
  MethodInfo *method_00;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  UnityEngine_Vector3Int_o key;
  float local_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_140;
  uint local_138;
  float local_134;
  undefined1 local_130 [20];
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  System_Collections_Generic_List_Enumerator_object__o local_108;
  ulong local_f0;
  System_Collections_Generic_List_object__o *local_e8;
  undefined1 local_e0 [16];
  Il2CppObject *local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [40];
  Il2CppType *pIStack_90;
  Il2CppObject *local_88;
  _union_14 local_78;
  Il2CppObject *local_70;
  undefined8 local_68;
  System_Collections_Generic_List_Enumerator_object__o *local_60;
  Il2CppMethodPointer local_58;
  float local_50;
  System_Collections_Generic_List_T__o *local_48;
  char *pcStack_40;
  
  if (Il2CppMethodInitialized_07548200 == '\0') {
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
    Il2CppMethodInitialized_07548200 = '\x01';
  }
  local_108.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.fields._index = 0;
  local_108.fields._version = 0;
  local_108.fields._current = (Il2CppObject *)0x0;
  local_e8 = (System_Collections_Generic_List_object__o *)0x0;
  local_b8._32_8_ = (Il2CppClass *)0x0;
  pIStack_90 = (Il2CppType *)0x0;
  local_88 = (Il2CppObject *)0x0;
  local_b8._0_8_ = (Il2CppMethodPointer)0x0;
  local_b8._8_8_ = (Il2CppClass *)0x0;
  local_b8._16_8_ = (InvokerMethod)0x0;
  local_16c = 0.0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  auVar33 = _local_118;
  pCVar12 = TypeInfo_Cameras_CameraOcclusion->static_fields;
  pUVar1 = &pCVar12->_start;
  uVar18 = (pUVar1->fields).x;
  uVar19 = (pUVar1->fields).y;
  local_118._4_4_ = uVar19;
  local_118._0_4_ = uVar18;
  local_158 = (pCVar12->_end).fields.x;
  fStack_154 = (pCVar12->_end).fields.y;
  fStack_150 = 0.0;
  fStack_14c = 0.0;
  fVar28 = (pCVar12->_end).fields.z - (pCVar12->_start).fields.z;
  fVar31 = (pUVar1->fields).x;
  fVar29 = (pCVar12->_start).fields.y;
  fVar7 = 0.0;
  fVar5 = 0.0;
  if (g_data_0753e729 == '\0') {
    fStack_150 = 0.0;
    fStack_14c = 0.0;
    _fStack_110 = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
    fVar31 = (float)local_118._0_4_;
    fVar29 = (float)local_118._4_4_;
    fVar7 = fStack_110;
    fVar5 = fStack_10c;
    auVar33 = _local_118;
  }
  _local_118 = auVar33;
  local_158 = local_158 - fVar31;
  fStack_154 = fStack_154 - fVar29;
  fStack_150 = fStack_150 - fVar7;
  fStack_14c = fStack_14c - fVar5;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar31 = fVar28 * fVar28 + fStack_154 * fStack_154 + local_158 * local_158;
  local_118._0_4_ = fVar31;
  if (fVar31 < 0.0) {
    fVar31 = sqrtf(fVar31);
  }
  else {
    fVar31 = SQRT(fVar31);
  }
  local_48 = *(System_Collections_Generic_List_T__o **)
              &(TypeInfo_Cameras_CameraOcclusion->static_fields->_start).fields;
  pcStack_40 = (char *)0x0;
  local_134 = (TypeInfo_Cameras_CameraOcclusion->static_fields->_start).fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (g_data_0753e729 == '\0') {
    local_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
    uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    uVar11 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar11 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar30 = 0;
  if ((float)local_118._0_4_ < 0.0) {
    fVar29 = sqrtf((float)local_118._0_4_);
    uVar30 = extraout_XMM0_Db;
  }
  else {
    fVar29 = SQRT((float)local_118._0_4_);
  }
  if (1e-05 < fVar29) {
    fVar28 = fVar28 / fVar29;
    auVar17._4_4_ = fStack_154;
    auVar17._0_4_ = local_158;
    auVar17._8_4_ = fStack_150;
    auVar17._12_4_ = fStack_14c;
    auVar33._4_4_ = fVar29;
    auVar33._0_4_ = fVar29;
    auVar33._8_4_ = uVar30;
    auVar33._12_4_ = uVar30;
    auVar33 = divps(auVar17,auVar33);
    local_130._0_8_ = auVar33._0_8_;
    local_168 = auVar33._0_4_;
    fStack_164 = auVar33._4_4_;
  }
  else {
    pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar28 = (pUVar13->zeroVector).fields.z;
    uVar3 = (pUVar13->zeroVector).fields.x;
    uVar9 = (pUVar13->zeroVector).fields.y;
    local_168 = (float)uVar3;
    fStack_164 = (float)uVar9;
  }
  fStack_15c = 0.0;
  fStack_160 = 0.0;
  if (g_data_0753e729 == '\0') {
    fStack_15c = 0.0;
    fStack_160 = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar29 = fVar28 * fVar28 + fStack_164 * fStack_164 + local_168 * local_168;
  local_158 = 0.0;
  if (fVar29 < 0.0) {
    fVar29 = sqrtf(fVar29);
  }
  else {
    fVar29 = SQRT(fVar29);
  }
  _local_118 = ZEXT816(0);
  if (1e-05 < fVar29) {
    local_158 = fVar28 / fVar29;
    auVar16._4_4_ = fStack_164;
    auVar16._0_4_ = local_168;
    auVar16._8_4_ = fStack_160;
    auVar16._12_4_ = fStack_15c;
    auVar15._4_4_ = fVar29;
    auVar15._0_4_ = fVar29;
    auVar15._8_4_ = fVar29;
    auVar15._12_4_ = fVar29;
    _local_118 = divps(auVar16,auVar15);
  }
  __this_00 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
  if (__this_00 == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_130,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_GetEnumerator);
  local_108.fields._current = (Il2CppObject *)CONCAT44(fStack_11c,local_130._16_4_);
  local_108.fields._list = (System_Collections_Generic_List_T__o *)local_130._0_8_;
  local_68._0_2_ = 0;
  local_68._2_1_ = 0;
  local_68._3_1_ = 0;
  local_68._4_4_ = 0;
  local_60 = &local_108;
  __this = (Il2CppType *)(local_b8 + 0x20);
  do {
    while( true ) {
      while( true ) {
        do {
          do {
            bVar21 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_108,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_MoveNext
                               );
            pIVar20 = local_108.fields._current;
            if (!bVar21) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (&local_108,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackGrid_Dispose
                        );
              return;
            }
            if (local_108.fields._current == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            if (local_108.fields._current[1].monitor ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              ThrowNullReferenceException();
            }
            iVar22 = System_Collections_Generic_Dictionary_Vector3Int__object___get_Count
                               (local_108.fields._current[1].monitor,
                                (MethodInfo_4B20520 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_get_Count
                               );
          } while (iVar22 == 0);
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar4 = (pUVar13->oneVector).fields.x;
          uVar10 = (pUVar13->oneVector).fields.y;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          fVar28 = (pUVar13->oneVector).fields.z;
          local_168 = (float)uVar4;
          fStack_164 = (float)uVar10;
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          pCVar12 = TypeInfo_Cameras_CameraOcclusion->static_fields;
          fVar29 = *(float *)&pIVar20[1].klass;
          fVar7 = fVar29 * 0.5 + pCVar12->_radius;
          fVar32 = local_168 * fVar7;
          local_168 = fStack_164 * fVar7;
          fVar28 = fVar28 * fVar7;
          fVar5 = (pCVar12->_start).fields.x;
          fVar7 = (pCVar12->_start).fields.z;
          uVar6 = (pCVar12->_end).fields.x;
          if ((float)uVar6 <= fVar5) {
            fVar5 = (float)uVar6;
          }
          fVar2 = (pCVar12->_end).fields.z;
          if (fVar2 <= fVar7) {
            fVar7 = fVar2;
          }
          local_c8 = CONCAT44(fStack_164,fVar32);
          uStack_c0 = fStack_160;
          uStack_bc = fStack_15c;
          fStack_160 = fStack_164;
          fStack_15c = fStack_164;
          auVar33 = il2cpp_runtime_helper_05de6ea0((fVar5 - fVar32) / fVar29,(fVar7 - fVar28) / fVar29,0);
          uVar25 = auVar33._0_8_;
          uVar24 = auVar33._8_8_ & 0xffffffff;
          pCVar12 = TypeInfo_Cameras_CameraOcclusion->static_fields;
          fVar7 = (pCVar12->_start).fields.x;
          fVar29 = (pCVar12->_start).fields.z;
          uVar8 = (pCVar12->_end).fields.x;
          if (fVar7 <= (float)uVar8) {
            fVar7 = (float)uVar8;
          }
          fVar5 = (pCVar12->_end).fields.z;
          if (fVar29 <= fVar5) {
            fVar29 = fVar5;
          }
          auVar34 = il2cpp_runtime_helper_05de6ea0(((float)local_c8 + fVar7) / *(float *)&pIVar20[1].klass,
                                 (fVar28 + fVar29) / *(float *)&pIVar20[1].klass,0);
          local_168 = auVar34._8_4_;
          iVar23 = auVar34._0_4_;
        } while (iVar23 < auVar33._0_4_);
        local_f0 = uVar25 >> 0x20;
        iVar27 = auVar34._4_4_;
        local_140 = auVar34._0_8_;
        if (auVar33._4_4_ <= iVar27) break;
        do {
          uVar26 = (int)uVar25 + 1;
          uVar25 = (ulong)uVar26;
        } while ((int)uVar26 <= iVar23);
      }
      if ((int)auVar33._8_4_ <= (int)local_168) break;
      do {
        uVar24 = local_f0;
        do {
          uVar26 = (int)uVar24 + 1;
          uVar24 = (ulong)uVar26;
        } while ((int)uVar26 <= iVar27);
        uVar26 = (int)uVar25 + 1;
        uVar25 = (ulong)uVar26;
      } while ((int)uVar26 <= iVar23);
    }
    local_70 = pIVar20;
    local_138 = auVar33._8_4_;
    do {
      local_78.genericMethod = (void *)(uVar25 & 0xffffffff);
      uVar25 = local_f0 & 0xffffffff;
      do {
        local_c8 = uVar25 << 0x20 | (ulong)local_78.genericMethod;
        do {
          local_168 = auVar34._8_4_;
          local_140 = auVar34._0_8_;
          if (local_70[1].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            ThrowNullReferenceException();
          }
          key.fields.m_Z = (int)uVar24;
          key.fields.m_X = (int32_t)(float)local_c8;
          key.fields.m_Y = local_c8._4_4_;
          bVar21 = System_Collections_Generic_Dictionary_Vector3Int__object___TryGetValue
                             (local_70[1].monitor,key,(Il2CppObject **)&local_e8,
                              (MethodInfo_4B22900 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_TryGetVal
                             );
          if (bVar21) {
            if (local_e8 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_e0,local_e8,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_GetEnumerator
                      );
            local_88 = local_d0;
            local_b8._32_8_ = local_e0._0_8_;
            pIStack_90 = (Il2CppType *)local_e0._8_8_;
            local_e0._0_8_ = (Il2CppClass *)0x0;
            local_e0._8_8_ = __this;
label_05dce6d0:
            bVar21 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)__this,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_MoveNext
                               );
            pIVar20 = local_88;
            if (bVar21) {
              if (local_88 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar14 = local_88[1].klass;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar21 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if (!bVar21) {
                if (pIVar20[1].klass == (Il2CppClass *)0x0) {
                  ThrowNullReferenceException();
                }
                __this_01 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar20[1].klass,(MethodInfo *)0x0);
                if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar21 = UnityEngine_GameObject__get_activeInHierarchy(__this_01,(MethodInfo *)0x0);
                if (bVar21) {
                  local_b8._16_8_ = pIVar20[2].monitor;
                  local_b8._0_8_ = pIVar20[1].monitor;
                  local_b8._8_8_ = pIVar20[2].klass;
                  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                  }
                  fVar28 = TypeInfo_Cameras_CameraOcclusion->static_fields->_radius;
                  UnityEngine_Bounds__Expand
                            ((UnityEngine_Bounds_o *)local_b8,fVar28 + fVar28,(MethodInfo *)0x0);
                  local_58 = *(Il2CppMethodPointer *)
                              &(TypeInfo_Cameras_CameraOcclusion->static_fields->_start).fields;
                  local_50 = (TypeInfo_Cameras_CameraOcclusion->static_fields->_start).fields.z;
                  method_00 = (MethodInfo *)&local_58;
                  bVar21 = UnityEngine_Bounds__Internal_Contains
                                     ((UnityEngine_Bounds_o *)local_b8,(UnityEngine_Vector3_o *)method_00,
                                      (MethodInfo *)0x0);
                  if (!bVar21) {
                    local_130._0_8_ = local_48;
                    local_130._8_4_ = local_134;
                    local_130._12_4_ = local_118._0_4_;
                    local_130._16_4_ = local_118._4_4_;
                    fStack_11c = local_158;
                    method_00 = (MethodInfo *)local_b8;
                    bVar21 = UnityEngine_Bounds__IntersectRayAABB
                                       ((UnityEngine_Ray_o *)local_130,(UnityEngine_Bounds_o *)method_00,
                                        &local_16c,(MethodInfo *)0x0);
                    if ((!bVar21) || (fVar31 < local_16c)) goto label_05dce6d0;
                  }
                  pIVar14 = pIVar20[1].klass;
                  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                  }
                  Cameras_CameraOcclusion__AddCandidate((UnityEngine_Renderer_o *)pIVar14,method_00);
                }
              }
              goto label_05dce6d0;
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)__this,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_CameraOcclusion_FallbackRenderer_Dispose
                      );
          }
          auVar34._8_4_ = local_168;
          auVar34._0_8_ = local_140;
          uVar26 = (int)uVar24 + 1;
          uVar24 = (ulong)uVar26;
        } while ((int)uVar26 <= (int)local_168);
        uVar26 = (int)uVar25 + 1;
        uVar25 = (ulong)uVar26;
        uVar24 = (ulong)local_138;
      } while ((int)uVar26 <= iVar27);
      uVar26 = (int)local_78.genericMethod + 1;
      uVar25 = (ulong)uVar26;
      bVar21 = (int)uVar26 <= (int)local_140;
    } while (bVar21);
  } while( true );
}


// Cameras.CameraOcclusion$$RegisterFallbackRenderer
// il2cpp: void Cameras_CameraOcclusion__RegisterFallbackRenderer (UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5dcbeb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcc005: jmp 0x5dcc154
// asm:   0x5dcc03a: jmp 0x5dcc154

void Cameras_CameraOcclusion__RegisterFallbackRenderer(UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Bounds_o *pUVar2;
  uint32_t uVar3;
  uint uVar4;
  Cameras_CameraOcclusion_FallbackGrid_array *pCVar5;
  Cameras_CameraOcclusion_FallbackRenderer_array *pCVar6;
  float fVar7;
  undefined1 auVar8 [16];
  MethodInfo *pMVar9;
  bool bVar10;
  Cameras_CameraOcclusion_FallbackGrid_o *__this;
  System_Collections_Generic_Dictionary_Vector3Int__List_CameraOcclusion_FallbackRenderer___o *__this_00;
  Il2CppObject *pIVar11;
  System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *pSVar12;
  Cameras_CameraOcclusion_FallbackRenderer_o *__this_01;
  System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *__this_02;
  int32_t index;
  undefined1 auVar13 [16];
  float fVar14;
  UnityEngine_Vector3Int_o key;
  System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *local_78;
  UnityEngine_Renderer_o *local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  UnityEngine_Bounds_o local_48;
  
  if (Il2CppMethodInitialized_07548201 == '\0') {
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
    Il2CppMethodInitialized_07548201 = '\x01';
  }
  local_78 = (System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *)0x0;
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    index = 0;
    local_70 = renderer;
    UnityEngine_Renderer__get_bounds(&local_48,renderer,(MethodInfo *)0x0);
    fVar14 = local_48.fields.m_Extents.fields.y + local_48.fields.m_Extents.fields.y;
    if (local_48.fields.m_Extents.fields.y + local_48.fields.m_Extents.fields.y <=
        local_48.fields.m_Extents.fields.z + local_48.fields.m_Extents.fields.z) {
      fVar14 = local_48.fields.m_Extents.fields.z + local_48.fields.m_Extents.fields.z;
    }
    fVar7 = local_48.fields.m_Extents.fields.x + local_48.fields.m_Extents.fields.x;
    if (local_48.fields.m_Extents.fields.x + local_48.fields.m_Extents.fields.x <= fVar14) {
      fVar7 = fVar14;
    }
    if (128.0 < fVar7) {
      index = 0;
      fVar14 = 128.0;
      do {
        fVar14 = fVar14 + fVar14;
        index = index + 1;
      } while (fVar14 < fVar7);
    }
    uStack_60 = 0;
    uVar3 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
    local_58 = local_48.fields.m_Center.fields.z;
    fStack_54 = local_48.fields.m_Extents.fields.x;
    fStack_50 = local_48.fields.m_Extents.fields.y;
    fStack_4c = local_48.fields.m_Extents.fields.z;
    local_68 = (undefined1  [8])local_48.fields.m_Center.fields._0_8_;
    while( true ) {
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      __this_02 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
      if (__this_02 == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0)
      goto label_05dcc310;
      uVar3 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
      if (index < (__this_02->fields)._size) break;
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
        __this_02 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
        if (__this_02 == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0)
        goto label_05dcc310;
      }
      fVar14 = ldexpf(1.0,(__this_02->fields)._size);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion_FallbackGrid);
      if (Il2CppMethodInitialized_07548207 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
                  );
        Il2CppMethodInitialized_07548207 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer
                            );
      System_Collections_Generic_Dictionary_Vector3Int__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_4B1FD20 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_ctor
                );
      (__this->fields).Cells = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Cells);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      (__this->fields).CellSize = fVar14 * 128.0;
      pMVar9 = MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_Add;
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pCVar5 = (__this_02->fields)._items;
      if (pCVar5 == (Cameras_CameraOcclusion_FallbackGrid_array *)0x0) goto label_05dcc310;
      uVar4 = (__this_02->fields)._size;
      if (uVar4 < (uint)pCVar5->max_length) {
        (__this_02->fields)._size = uVar4 + 1;
        pCVar5->m_Items[(int)uVar4] = __this;
        Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar4);
        uVar3 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this,
                   (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
        uVar3 = (TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor;
      }
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      __this_02 = TypeInfo_Cameras_CameraOcclusion->static_fields->FallbackGrids;
      if (__this_02 == (System_Collections_Generic_List_CameraOcclusion_FallbackGrid__o *)0x0)
      goto label_05dcc310;
    }
    pIVar11 = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_02,index,
                         (MethodInfo_395CF20 *)
                         MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_get_Item);
    if (pIVar11 != (Il2CppObject *)0x0) {
      fVar14 = *(float *)&pIVar11[1].klass;
      auVar8._8_8_ = uStack_60;
      auVar8._0_8_ = local_68;
      auVar13._4_4_ = fVar14;
      auVar13._0_4_ = fVar14;
      auVar13._8_4_ = fVar14;
      auVar13._12_4_ = fVar14;
      auVar13 = divps(auVar8,auVar13);
      key.fields = (UnityEngine_Vector3Int_Fields)il2cpp_runtime_helper_05de6ea0(auVar13._0_8_,local_58 / fVar14,0);
      if (pIVar11[1].monitor != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        bVar10 = System_Collections_Generic_Dictionary_Vector3Int__object___TryGetValue
                           (pIVar11[1].monitor,key,(Il2CppObject **)&local_78,
                            (MethodInfo_4B22900 *)
                            MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_TryGetVal
                           );
        if (!bVar10) {
          pSVar12 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)pSVar12,
                     (MethodInfo_395C910 *)
                     MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_ctor);
          local_78 = pSVar12;
          if (pIVar11[1].monitor == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
          goto label_05dcc310;
          System_Collections_Generic_Dictionary_Vector3Int__object___Add
                    (pIVar11[1].monitor,key,(Il2CppObject *)pSVar12,
                     (MethodInfo_4B20950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_List_CameraOcclusion_FallbackRenderer_Add
                    );
        }
        pSVar12 = local_78;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion_FallbackRenderer);
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields).Renderer = local_70;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Renderer);
        pUVar2 = &(__this_01->fields).Bounds;
        (pUVar2->fields).m_Center.fields.x = (float)local_68._0_4_;
        (pUVar2->fields).m_Center.fields.y = (float)local_68._4_4_;
        *(ulong *)&(__this_01->fields).Bounds.fields.m_Center.fields.z = CONCAT44(fStack_54,local_58);
        pUVar2 = &(__this_01->fields).Bounds;
        (pUVar2->fields).m_Extents.fields.y = fStack_50;
        pMVar9 = MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackRenderer_Add;
        (pUVar2->fields).m_Extents.fields.z = fStack_4c;
        if (pSVar12 != (System_Collections_Generic_List_CameraOcclusion_FallbackRenderer__o *)0x0) {
          piVar1 = &(pSVar12->fields)._version;
          *piVar1 = *piVar1 + 1;
          pCVar6 = (pSVar12->fields)._items;
          if (pCVar6 != (Cameras_CameraOcclusion_FallbackRenderer_array *)0x0) {
            uVar4 = (pSVar12->fields)._size;
            if (uVar4 < (uint)pCVar6->max_length) {
              (pSVar12->fields)._size = uVar4 + 1;
              pCVar6->m_Items[(int)uVar4] = __this_01;
              Il2CppCodeGenWriteBarrier(pCVar6->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)__this_01,
                         (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
            }
            return;
          }
        }
      }
    }
  }
label_05dcc310:
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$AddCandidate
// il2cpp: void Cameras_CameraOcclusion__AddCandidate (UnityEngine_Renderer_o* original, const MethodInfo* method);
// 0x5dcdd90

void Cameras_CameraOcclusion__AddCandidate(UnityEngine_Renderer_o *original,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_c *pUVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Object_o *local_20;
  
  if (Il2CppMethodInitialized_07548202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_07548202 = '\x01';
  }
  local_20 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)original,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Cameras_CameraOcclusion->static_fields->CombinedRenderers;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05dcdf6f:
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)original,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_TryGetValue);
    if (bVar4) {
      original = (UnityEngine_Renderer_o *)local_20;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)original,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((UnityEngine_Object_o *)original == (UnityEngine_Object_o *)0x0) goto label_05dcdf6f;
      bVar4 = UnityEngine_Renderer__get_enabled(original,(MethodInfo *)0x0);
      if (bVar4) {
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)original,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05dcdf6f;
        bVar4 = UnityEngine_GameObject__get_activeInHierarchy(__this_01,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar3 = ((UnityEngine_Object_o *)original)->klass;
          bVar1 = (pUVar3->_2).typeHierarchyDepth;
          bVar2 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer
             )) {
            bVar2 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
            if (bVar1 < bVar2) {
              return;
            }
            if ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer) {
              return;
            }
          }
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          __this_00 = (System_Collections_Generic_HashSet_object__o *)
                      TypeInfo_Cameras_CameraOcclusion->static_fields->Candidates;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05dcdf6f;
          System_Collections_Generic_HashSet_object___Add
                    (__this_00,(Il2CppObject *)original,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_Add);
        }
      }
    }
  }
  return;
}


// Cameras.CameraOcclusion$$ApplyMaterials
// il2cpp: void Cameras_CameraOcclusion__ApplyMaterials (UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5dcd900

void Cameras_CameraOcclusion__ApplyMaterials(UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_Material__o *__this;
  UnityEngine_Material_o *original;
  System_Collections_Generic_List_Renderer__o *__this_00;
  UnityEngine_Renderer_array *pUVar4;
  UnityEngine_Renderer_o *item;
  bool bVar5;
  UnityEngine_Material_array *pUVar6;
  Cameras_CameraOcclusion_MaterialOverride_o *pCVar7;
  UnityEngine_Material_o *x;
  Il2CppObject *pIVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar9;
  MethodInfo *pMVar10;
  byte bVar11;
  ulong uVar12;
  Cameras_CameraOcclusion_MaterialOverride_o *local_40;
  UnityEngine_Renderer_o *local_38;
  
  if (Il2CppMethodInitialized_07548203 == '\0') {
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
    Il2CppMethodInitialized_07548203 = '\x01';
  }
  local_40 = (Cameras_CameraOcclusion_MaterialOverride_o *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  if (renderer == (UnityEngine_Renderer_o *)0x0) goto label_05dcdcbd;
  UnityEngine_Renderer__GetSharedMaterials
            (renderer,TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials,(MethodInfo *)0x0);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dcdcbd;
  bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar3,(Il2CppObject *)renderer,(Il2CppObject **)&local_40,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_TryGetValue
                    );
  pCVar7 = local_40;
  if (bVar5) {
    pMVar10 = extraout_RDX;
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      pMVar10 = extraout_RDX_00;
    }
    if (pCVar7 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) goto label_05dcdcbd;
    bVar5 = Cameras_CameraOcclusion_MaterialOverride__Matches
                      (pCVar7,TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials,pMVar10);
    if (!bVar5) goto label_05dcda26;
  }
  else {
label_05dcda26:
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    __this = TypeInfo_Cameras_CameraOcclusion->static_fields->SharedMaterials;
    if (__this == (System_Collections_Generic_List_Material__o *)0x0) goto label_05dcdcbd;
    pUVar6 = (UnityEngine_Material_array *)
             System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this,
                        (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_Material_ToArray);
    pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion_MaterialOverride);
    if (Il2CppMethodInitialized_07548208 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
      Il2CppMethodInitialized_07548208 = '\x01';
    }
    System_Object___ctor((Il2CppObject *)pCVar7,(MethodInfo *)0x0);
    (pCVar7->fields).Originals = pUVar6;
    Il2CppCodeGenWriteBarrier(&(pCVar7->fields).Originals);
    if (pUVar6 == (UnityEngine_Material_array *)0x0) goto label_05dcdcbd;
    pUVar6 = (UnityEngine_Material_array *)
             SZArrayNew(TypeInfo_UnityEngine_Material_array,(uint32_t)pUVar6->max_length);
    (pCVar7->fields).Replacements = pUVar6;
    Il2CppCodeGenWriteBarrier(&(pCVar7->fields).Replacements);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Cameras_CameraOcclusion->static_fields->Overrides;
    local_40 = pCVar7;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dcdcbd;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar3,(Il2CppObject *)renderer,(Il2CppObject *)pCVar7,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_set_Item
              );
  }
  local_38 = renderer;
  if (local_40 != (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) {
    lVar9 = 0x20;
    uVar12 = 0;
    bVar11 = 0;
    while (item = local_38, pUVar6 = (local_40->fields).Originals, pUVar6 != (UnityEngine_Material_array *)0x0
          ) {
      uVar2 = (uint)pUVar6->max_length;
      pMVar10 = (MethodInfo *)(long)(int)uVar2;
      if ((long)pMVar10 <= (long)uVar12) {
        if (bVar11 != 0) {
          UnityEngine_Renderer__set_sharedMaterials
                    (local_38,(local_40->fields).Replacements,(MethodInfo *)0x0);
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          pMVar10 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
          __this_00 = TypeInfo_Cameras_CameraOcclusion->static_fields->AppliedRenderers;
          if (__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) break;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_00->fields)._items;
          if (pUVar4 == (UnityEngine_Renderer_array *)0x0) break;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
          }
        }
        return;
      }
      if (uVar2 <= uVar12) {
label_05dcdcc2:
        ThrowIndexOutOfRangeException();
      }
      original = pUVar6->m_Items[uVar12];
      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
      }
      x = Cameras_CameraOcclusion__GetReplacement(original,pMVar10);
      if ((local_40 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) ||
         (pUVar6 = (local_40->fields).Replacements, pUVar6 == (UnityEngine_Material_array *)0x0)) break;
      if (x != (UnityEngine_Material_o *)0x0) {
        pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)x,(((pUVar6->obj).klass)->_1).element_class);
        if (pIVar8 == (Il2CppObject *)0x0) {
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
      }
      if ((uint)pUVar6->max_length <= uVar12) goto label_05dcdcc2;
      pUVar6->m_Items[uVar12] = x;
      Il2CppCodeGenWriteBarrier((void **)((long)pUVar6->m_Items + lVar9 + -0x20));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)original,(MethodInfo *)0x0);
      bVar11 = bVar11 | bVar5;
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + 8;
      if (local_40 == (Cameras_CameraOcclusion_MaterialOverride_o *)0x0) break;
    }
  }
label_05dcdcbd:
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$GetReplacement
// il2cpp: UnityEngine_Material_o* Cameras_CameraOcclusion__GetReplacement (UnityEngine_Material_o* original, const MethodInfo* method);
// 0x5dcecc0

UnityEngine_Material_o *
Cameras_CameraOcclusion__GetReplacement(UnityEngine_Material_o *original,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *key;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Material_o *local_38;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_07548204 == '\0') {
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
    Il2CppMethodInitialized_07548204 = '\x01';
  }
  local_30 = (System_String_o *)0x0;
  local_38 = (UnityEngine_Material_o *)0x0;
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
                        (pSVar1,(Il2CppObject *)key,(Il2CppObject **)&local_30,
                         (MethodInfo_4AAF440 *)
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
                          (pSVar1,(Il2CppObject *)original,(Il2CppObject **)&local_38,
                           (MethodInfo_4AAF440 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
        if (!bVar2) {
          pUVar3 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(local_30,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            return original;
          }
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor_68dcfd0(__this_00,original,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_Material_o *)0x0) goto label_05dcef73;
          UnityEngine_Material__set_shader(__this_00,(UnityEngine_Shader_o *)pUVar3,(MethodInfo *)0x0);
          local_38 = __this_00;
          if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Cameras_CameraOcclusion->static_fields->MaterialCopies;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dcef73;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)original,(Il2CppObject *)local_38,
                     (MethodInfo_4AAD4E0 *)
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
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add)
          ;
          if (bVar2) {
            if (local_38 == (UnityEngine_Material_o *)0x0) goto label_05dcef73;
            UnityEngine_Material__CopyPropertiesFromMaterial(local_38,original,(MethodInfo *)0x0);
          }
          return local_38;
        }
      }
    }
  }
label_05dcef73:
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$RestoreMaterials
// il2cpp: void Cameras_CameraOcclusion__RestoreMaterials (const MethodInfo* method);
// 0x5dccc10
// eh: try 0x5dccd24..0x5dcce3d -> pad 0x5dcce52 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dcce6a..0x5dcce6f -> pad 0x5dcce92 cleanup
// eh: try 0x5dcce95..0x5dcce9f -> pad 0x5dccea7 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dcce42: jmp 0x5dcce52
// asm:   0x5dcce44: jmp 0x5dcce52
// asm:   0x5dcce46: jmp 0x5dcce52
// asm:   0x5dcce48: jmp 0x5dcce52
// asm:   0x5dcce4a: jmp 0x5dcce52
// asm:   0x5dcce4c: jmp 0x5dcce52
// asm:   0x5dcce4e: jmp 0x5dcce52
// asm:   0x5dcce50: jmp 0x5dcce52
// asm:   0x5dcce52: mov rbx, rax
// asm:   0x5dcce55: cmp edx, 1
// asm:   0x5dcce58: jne 0x5dcce95
// asm:   0x5dcce5a: mov rdi, rbx
// asm:   0x5dcce5d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dcce62: mov rbx, qword ptr [rax]
// asm:   0x5dcce65: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5dcce6a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dcce6f: lea rax, [rip + 0x14c1a5a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5dcce76: mov rsi, qword ptr [rax]
// asm:   0x5dcce79: mov rdi, rsp
// asm:   0x5dcce7c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5dcce81: test rbx, rbx
// asm:   0x5dcce84: je 0x5dccdc6
// asm:   0x5dcce8a: mov rdi, rbx
// asm:   0x5dcce8d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dcce92: mov rbx, rax
// asm:   0x5dcce95: lea rdi, [rsp + 0x20]
// asm:   0x5dcce9a: call 0x2fde610  ; il2cpp_runtime_helper_02fde610()
// asm:   0x5dcce9f: mov rdi, rbx
// asm:   0x5dccea2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dccea7: mov rdi, rax
// asm:   0x5dcceaa: call 0x2ab61e0  ; __clang_call_terminate()

void Cameras_CameraOcclusion__RestoreMaterials(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Renderer__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  bool bVar3;
  Il2CppObject *pIVar4;
  Cameras_CameraOcclusion_StaticFields *pCVar5;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  UnityEngine_Object_o *local_58;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07548205 == '\0') {
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
    Il2CppMethodInitialized_07548205 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  pSVar2 = TypeInfo_Cameras_CameraOcclusion->static_fields->AppliedRenderers;
  if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    puStack_60 = (undefined1 *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = local_68;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      x = local_58;
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
                            (MethodInfo_4AAD450 *)
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
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    pCVar5 = TypeInfo_Cameras_CameraOcclusion->static_fields;
    pSVar2 = pCVar5->AppliedRenderers;
    if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
        pCVar5 = TypeInfo_Cameras_CameraOcclusion->static_fields;
      }
      UnityEngine_Shader__SetGlobalFloat(pCVar5->RadiusId,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.CameraOcclusion$$.cctor
// il2cpp: void Cameras_CameraOcclusion___cctor (const MethodInfo* method);
// 0x5dcef80

void Cameras_CameraOcclusion___cctor(MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  Cameras_CameraOcclusion_StaticFields *pCVar3;
  int32_t iVar4;
  UnityEngine_LayerMask_o UVar5;
  System_Int32_array *pSVar6;
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
  UnityEngine_Collider_array *pUVar7;
  UnityEngine_RaycastHit_array *pUVar8;
  
  if (Il2CppMethodInitialized_07548206 == '\0') {
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
    Il2CppMethodInitialized_07548206 = '\x01';
  }
  iVar4 = UnityEngine_Shader__PropertyToID("_CameraOcclusionStart",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->StartId = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_CameraOcclusionEnd",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->EndId = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_CameraOcclusionRadius",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->RadiusId = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_CameraOcclusionGroundPlane",(MethodInfo *)0x0);
  TypeInfo_Cameras_CameraOcclusion->static_fields->GroundPlaneId = iVar4;
  pSVar6 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,7);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (pSVar6 == (System_Int32_array *)0x0) goto label_05dcf67b;
  uVar1 = (uint)pSVar6->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    pSVar6->m_Items[0] = pUVar2->MapObjectAll;
    if (((((uVar1 != 1) && (pSVar6->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) &&
         (pSVar6->m_Items[2] = pUVar2->MapObjectCharacters, uVar1 != 3)) &&
        ((pSVar6->m_Items[3] = pUVar2->MapObjectTitans, 4 < uVar1 &&
         (pSVar6->m_Items[4] = pUVar2->MapObjectHumans, uVar1 != 5)))) &&
       (pSVar6->m_Items[5] = pUVar2->MapObjectProjectiles, 6 < uVar1)) {
      pSVar6->m_Items[6] = pUVar2->MapObjectMapObjects;
      UVar5 = Utility_PhysicsLayer__GetMask(pSVar6,(MethodInfo *)0x0);
      iVar4 = UnityEngine_LayerMask__op_Implicit(UVar5,(MethodInfo *)0x0);
      TypeInfo_Cameras_CameraOcclusion->static_fields->MapMask = iVar4;
      pSVar6 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
      if (pSVar6 == (System_Int32_array *)0x0) {
label_05dcf67b:
        ThrowNullReferenceException();
      }
      uVar1 = (uint)pSVar6->max_length;
      if (uVar1 != 0) {
        pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
        pSVar6->m_Items[0] = pUVar2->MapObjectAll;
        if (((uVar1 != 1) && (pSVar6->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) &&
           (pSVar6->m_Items[2] = pUVar2->MapObjectCharacters, uVar1 != 3)) {
          pSVar6->m_Items[3] = pUVar2->MapObjectTitans;
          UVar5 = Utility_PhysicsLayer__GetMask(pSVar6,(MethodInfo *)0x0);
          iVar4 = UnityEngine_LayerMask__op_Implicit(UVar5,(MethodInfo *)0x0);
          TypeInfo_Cameras_CameraOcclusion->static_fields->GroundMask = iVar4;
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                     (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor
                    );
          if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                       (Il2CppObject *)"Universal Render Pipeline/Lit",(Il2CppObject *)"AoTTG/Camera Occlusion/Lit",
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                       (Il2CppObject *)"Universal Render Pipeline/Simple Lit",(Il2CppObject *)"AoTTG/Camera Occlusion/Simple Lit",
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->ShaderReplacements = __this;
            Il2CppCodeGenWriteBarrier(&pCVar3->ShaderReplacements);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Collider_Renderer_array_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->ColliderRenderers = __this_00;
            Il2CppCodeGenWriteBarrier(&pCVar3->ColliderRenderers);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Collider);
            System_Collections_Generic_HashSet_object____ctor
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,
                       (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->StaticColliders = __this_01;
            Il2CppCodeGenWriteBarrier(&pCVar3->StaticColliders);
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_Renderer_Renderer);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Renderer_Renderer_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->CombinedRenderers = __this_02;
            Il2CppCodeGenWriteBarrier(&pCVar3->CombinedRenderers);
            __this_03 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)__this_03,
                       (MethodInfo_395C910 *)
                       MethodInfo_System_Collections_Generic_List_CameraOcclusion_FallbackGrid_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->FallbackGrids = __this_03;
            Il2CppCodeGenWriteBarrier(&pCVar3->FallbackGrids);
            __this_04 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Renderer);
            System_Collections_Generic_HashSet_object____ctor
                      ((System_Collections_Generic_HashSet_object__o *)__this_04,
                       (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Renderer_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->Candidates = __this_04;
            Il2CppCodeGenWriteBarrier(&pCVar3->Candidates);
            __this_05 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->MaterialCopies = __this_05;
            Il2CppCodeGenWriteBarrier(&pCVar3->MaterialCopies);
            __this_06 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride
                                  );
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Renderer_CameraOcclusion_MaterialOverride_ctor
                      );
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->Overrides = __this_06;
            Il2CppCodeGenWriteBarrier(&pCVar3->Overrides);
            __this_07 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)__this_07,
                       (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->AppliedRenderers = __this_07;
            Il2CppCodeGenWriteBarrier(&pCVar3->AppliedRenderers);
            __this_08 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)__this_08,
                       (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->SharedMaterials = __this_08;
            Il2CppCodeGenWriteBarrier(&pCVar3->SharedMaterials);
            __this_09 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Material);
            System_Collections_Generic_HashSet_object____ctor
                      ((System_Collections_Generic_HashSet_object__o *)__this_09,
                       (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->UpdatedMaterials = __this_09;
            Il2CppCodeGenWriteBarrier(&pCVar3->UpdatedMaterials);
            pUVar7 = (UnityEngine_Collider_array *)SZArrayNew(TypeInfo_UnityEngine_Collider_array,0x80);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->_colliders = pUVar7;
            Il2CppCodeGenWriteBarrier(&pCVar3->_colliders);
            pUVar8 = (UnityEngine_RaycastHit_array *)SZArrayNew(TypeInfo_UnityEngine_RaycastHit_array,0x10);
            pCVar3 = TypeInfo_Cameras_CameraOcclusion->static_fields;
            pCVar3->_groundHits = pUVar8;
            Il2CppCodeGenWriteBarrier(&pCVar3->_groundHits);
            return;
          }
          goto label_05dcf67b;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


